/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 07a32b44
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  ulong unaff_x29;
  
  while( true ) {
    uVar3 = thunk_FUN_040b4efc(param_1);
    FUN_061da510(uVar3,unaff_x21,*unaff_x26,0);
    if ((unaff_x19 == 0) || (uVar1 = FUN_05c275dc(), unaff_x24 == 0)) break;
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x29) {
LAB_07a32bac:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined4 *)(unaff_x24 + unaff_x28 * 4) = uVar1;
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar2 = *unaff_x23;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) break;
    unaff_x29 = unaff_x28 - 7;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)unaff_x29) {
      return;
    }
    unaff_x21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092f03f8);
    FUN_076bca34(unaff_x21,0);
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar2 = *unaff_x23;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x29) goto LAB_07a32bac;
    if (unaff_x21 == 0) break;
    param_1 = *unaff_x25;
    unaff_x24 = *unaff_x20;
    *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(lVar2 + (unaff_x28 + 1) * 4);
    unaff_x28 = unaff_x28 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


