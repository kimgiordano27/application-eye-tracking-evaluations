/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.IDisposable.Dispose
ENTRY_POINT: 052da380
PROGRAM: Untangled-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_IDisposable_Dispose
          (void)

{
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  
  if (in_w8 == 0) {
    (**(code **)(*unaff_x19 + 600))();
  }
  else {
    if ((unaff_x19[0x26] == 0) || (lVar1 = *(long *)(unaff_x19[0x26] + 0x48), lVar1 == 0))
    goto LAB_052da4cc;
    FUN_066d48c0(lVar1,0);
  }
  if (unaff_x21 != 0) {
    FUN_066d4960();
    lVar1 = unaff_x19[0x67];
    uVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (lVar1 != 0) {
      FUN_066d5054(lVar1,uVar2,0);
      if (unaff_x19[0x67] != 0) {
        FUN_066d3f5c(unaff_x19[0x67],0);
        if (unaff_x19[0x67] != 0) {
          FUN_066d4bec(unaff_x19[0x67],0);
          if ((unaff_x19[0x68] != 0) && (FUN_066d48c0(unaff_x19[0x68],0), unaff_x20 != 0)) {
            auVar3 = FUN_066d6014();
            uVar4 = auVar3._8_8_;
            lVar1 = unaff_x19[0x67];
            uVar2 = FUN_066c67b0();
            if (lVar1 != 0) {
              FUN_066d5054(lVar1,uVar2,0);
              auVar3._8_8_ = uVar4;
              return auVar3;
            }
          }
        }
      }
    }
  }
LAB_052da4cc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


