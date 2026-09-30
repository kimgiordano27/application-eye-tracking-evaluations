/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04db41a8
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOfImpl<OVRPlugin_SpaceQueryResult>(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 uVar6;
  long in_stack_000001b8;
  
  uVar6 = *(undefined8 *)(*(long *)(in_stack_000001b8 + 0x38) + 0x60);
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar6 = FUN_074f3c94(uVar6,0);
  uVar6 = FUN_087c1024(uVar6,0);
  uVar1 = FUN_074fe038(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar6;
    plVar2 = (long *)FUN_0862ccb8(uVar6,0);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f8c250) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04db43cc;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*(long *)PTR_DAT_08f8c250,0);
LAB_04db43cc:
      (*(code *)*puVar3)(plVar2);
      return;
    }
  }
  uVar1 = FUN_087c0fac();
  if (((uVar1 & 1) == 0) && (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


