/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$.ctor
ENTRY_POINT: 04024388
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>___ctor
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long in_x9;
  int *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  
  lVar1 = *(long *)(param_3 + 0x20);
  if (in_x9 == 0) {
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar1 = FUN_02fe9340(lVar1,1);
    *unaff_x21 = lVar1;
    thunk_FUN_03048534();
    lVar1 = *unaff_x21;
    if (lVar1 == 0) goto LAB_04024450;
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_04024454;
  }
  else {
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    FUN_03b11190();
    lVar1 = *unaff_x21;
    if (lVar1 == 0) {
LAB_04024450:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar1 + 0x18) <= *unaff_x19 - 1U) {
LAB_04024454:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar1 = lVar1 + (long)(int)(*unaff_x19 - 1U) * 8;
  }
  *(undefined8 *)(lVar1 + 0x20) = unaff_x20;
  thunk_FUN_03048534();
  *unaff_x19 = *unaff_x19 + 1;
  return;
}


