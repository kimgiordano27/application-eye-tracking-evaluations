/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Vector4f>
ENTRY_POINT: 04da2a60
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOf<OVRPlugin_Vector4f>(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x21;
  long lVar7;
  undefined8 in_stack_00000018;
  
  lVar1 = FUN_0406aaec();
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
  lVar1 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar1 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_049fb624(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x48));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (in_stack_00000018._4_4_,0,plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_05d51e88();
      plVar2 = (long *)FUN_0862ccb8(uVar4,0);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f8c250) {
            puVar5 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04da2bbc;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar2,*(long *)PTR_DAT_08f8c250,0);
LAB_04da2bbc:
      (*(code *)*puVar5)(plVar2);
      return;
    }
  }
  FUN_04ca9304();
  return;
}


