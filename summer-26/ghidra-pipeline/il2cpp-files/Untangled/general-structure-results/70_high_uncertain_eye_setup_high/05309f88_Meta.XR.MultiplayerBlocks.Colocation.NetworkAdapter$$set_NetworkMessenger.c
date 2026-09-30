/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.NetworkAdapter$$set_NetworkMessenger
ENTRY_POINT: 05309f88
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter__set_NetworkMessenger(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 *unaff_x22;
  
  thunk_FUN_02ef1808();
  FUN_04c0325c();
  puVar1 = PTR_DAT_06d3e7c8;
  if (unaff_x20 != 0) {
    FUN_0530a1b0();
    lVar3 = *(long *)(unaff_x19 + 0x40);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_04cf2650();
    if (lVar3 != 0) {
      FUN_0530a260(lVar3,uVar2);
      lVar3 = *(long *)(unaff_x19 + 0x40);
      uVar2 = thunk_FUN_02ef1808(*unaff_x22);
      FUN_04c0325c();
      if (lVar3 != 0) {
        FUN_0530a310(lVar3,uVar2);
        lVar3 = *(long *)(unaff_x19 + 0x48);
        uVar2 = thunk_FUN_02ef1808(*unaff_x22);
        FUN_04c0325c();
        if (lVar3 != 0) {
          FUN_0530a100(lVar3,uVar2);
          lVar3 = *(long *)(unaff_x19 + 0x48);
          uVar2 = thunk_FUN_02ef1808(*unaff_x22);
          FUN_04c0325c();
          if (lVar3 != 0) {
            FUN_0530a1b0(lVar3,uVar2);
            lVar3 = *(long *)(unaff_x19 + 0x48);
            uVar2 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
            FUN_04cf2650();
            if (lVar3 != 0) {
              FUN_0530a260(lVar3,uVar2);
              lVar3 = *(long *)(unaff_x19 + 0x48);
              uVar2 = thunk_FUN_02ef1808(*unaff_x22);
              FUN_04c0325c();
              if (lVar3 != 0) {
                FUN_0530a310(lVar3,uVar2);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


