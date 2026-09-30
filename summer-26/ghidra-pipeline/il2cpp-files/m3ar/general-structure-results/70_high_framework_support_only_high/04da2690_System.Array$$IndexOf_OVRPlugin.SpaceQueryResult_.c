/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04da2690
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOf<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int in_w9;
  int *piVar6;
  undefined8 in_stack_00000018;
  
  if (in_w9 != 0) {
    plVar1 = (long *)FUN_049fb624(*(undefined8 *)(param_1 + 0x48));
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (in_stack_00000018._4_4_,0,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_05d50ed0();
      plVar1 = (long *)FUN_0862ccb8(uVar3,0);
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f8c250) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04da2764;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar1,*(long *)PTR_DAT_08f8c250,0);
LAB_04da2764:
      (*(code *)*puVar4)(plVar1);
      return;
    }
  }
  FUN_04ca9304();
  return;
}


