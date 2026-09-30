/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager.Mask$$Dispose
ENTRY_POINT: 06d75ce8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  
  lVar2 = FUN_0713670c();
  lVar3 = 0;
  if (lVar2 != 0) {
    uVar4 = *unaff_x21;
    lVar3 = thunk_FUN_03cf5138(lVar2,uVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc(lVar2,uVar4);
    }
  }
  puVar1 = PTR_DAT_08e86d58;
  **(long **)(*(long *)PTR_DAT_08e86d58 + 0xb8) = lVar3;
  uVar4 = *(undefined8 *)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar5 = *unaff_x21;
    lVar3 = thunk_FUN_03cf5138(lVar2,uVar5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc(lVar2,uVar5);
    }
  }
  thunk_FUN_03d233cc(uVar4,lVar3);
  return;
}


