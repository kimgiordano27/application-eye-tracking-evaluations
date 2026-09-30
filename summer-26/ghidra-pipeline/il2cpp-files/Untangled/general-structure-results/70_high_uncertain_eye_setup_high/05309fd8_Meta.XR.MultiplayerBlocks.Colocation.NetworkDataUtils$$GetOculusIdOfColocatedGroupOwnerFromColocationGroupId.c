/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.NetworkDataUtils$$GetOculusIdOfColocatedGroupOwnerFromColocationGroupId
ENTRY_POINT: 05309fd8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_NetworkDataUtils__GetOculusIdOfColocatedGroupOwnerFromColocationGroupId
               (void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *unaff_x22;
  undefined8 *unaff_x27;
  
  FUN_04cf2650();
  if (unaff_x20 != 0) {
    FUN_0530a260();
    lVar2 = *(long *)(unaff_x19 + 0x40);
    uVar1 = thunk_FUN_02ef1808(*unaff_x22);
    FUN_04c0325c();
    if (lVar2 != 0) {
      FUN_0530a310(lVar2,uVar1);
      lVar2 = *(long *)(unaff_x19 + 0x48);
      uVar1 = thunk_FUN_02ef1808(*unaff_x22);
      FUN_04c0325c();
      if (lVar2 != 0) {
        FUN_0530a100(lVar2,uVar1);
        lVar2 = *(long *)(unaff_x19 + 0x48);
        uVar1 = thunk_FUN_02ef1808(*unaff_x22);
        FUN_04c0325c();
        if (lVar2 != 0) {
          FUN_0530a1b0(lVar2,uVar1);
          lVar2 = *(long *)(unaff_x19 + 0x48);
          uVar1 = thunk_FUN_02ef1808(*unaff_x27);
          FUN_04cf2650();
          if (lVar2 != 0) {
            FUN_0530a260(lVar2,uVar1);
            lVar2 = *(long *)(unaff_x19 + 0x48);
            uVar1 = thunk_FUN_02ef1808(*unaff_x22);
            FUN_04c0325c();
            if (lVar2 != 0) {
              FUN_0530a310(lVar2,uVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


