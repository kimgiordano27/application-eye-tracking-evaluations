/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$ConvertPose
ENTRY_POINT: 08a483d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__ConvertPose(long param_1)

{
  undefined4 *unaff_x19;
  undefined1 auVar1 [16];
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08a483cc with catch @ 08a483dc
                        */
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  auVar1 = FUN_08795a9c(0);
  if (auVar1._0_8_ != 0) {
    FUN_0433cdb4(2,*(undefined8 *)PTR_DAT_0ac46ed8,auVar1._0_8_,*(undefined8 *)PTR_DAT_0ac53590);
    *unaff_x19 = 0xfffffffe;
    FUN_08c7f6c8(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c(0,auVar1._8_8_,0);
}


