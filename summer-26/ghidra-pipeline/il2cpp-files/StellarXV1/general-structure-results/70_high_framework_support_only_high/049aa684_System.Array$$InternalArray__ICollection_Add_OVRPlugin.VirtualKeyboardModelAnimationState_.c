/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 049aa684
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_VirtualKeyboardModelAnimationState>
               (void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *plVar6;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_040b1b28();
  uVar1 = FUN_076fd3c4(0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_0671191c();
  }
  uVar3 = FUN_07592e54();
  if (*unaff_x20 == 0) {
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_0671191c();
    thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8));
    FUN_0759321c();
  }
  plVar6 = (long *)*unaff_x19;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar2 = *plVar6;
  uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092b6dd8) {
        puVar4 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_049aa814;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar1 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092b6dd8,0);
LAB_049aa814:
  (*(code *)*puVar4)(plVar6,uVar3,puVar4[1]);
  return;
}


