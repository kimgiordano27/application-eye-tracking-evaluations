/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$Setup
ENTRY_POINT: 052d9154
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__Setup(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  lVar1 = FUN_066c9a48(param_1,0);
  if ((unaff_x20[0x13] != 0) && (uVar2 = FUN_066c67b0(unaff_x20[0x13],0), lVar1 != 0)) {
    FUN_066d5054(lVar1,uVar2,0);
    if (*unaff_x21 != 0) {
      lVar1 = FUN_066c9a48(*unaff_x21,0);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      if (lVar1 != 0) {
        puVar3 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
        FUN_066d4960(*puVar3,puVar3[1],puVar3[2],lVar1,0);
        if (*unaff_x21 != 0) {
          lVar1 = FUN_066c9a48(*unaff_x21,0);
          if (DAT_071bab7c == '\0') {
            FUN_02f07e70(PTR_DAT_06d02bd8);
            DAT_071bab7c = '\x01';
          }
          if (lVar1 != 0) {
            puVar3 = *(undefined4 **)(*(long *)PTR_DAT_06d02bd8 + 0xb8);
            FUN_066d4bec(*puVar3,puVar3[1],puVar3[2],puVar3[3],lVar1,0);
            if (*unaff_x21 != 0) {
              FUN_066c9a48(*unaff_x21,0);
              (**(code **)(*unaff_x20 + 0x248))();
              if (unaff_x19 != 0) {
                if (*(char *)(unaff_x19 + 0x3e) != '\0') {
                  (**(code **)(*unaff_x20 + 0x238))();
                  FUN_052d6d10();
                }
                FUN_052c9eec();
                    /* WARNING: Could not recover jumptable at 0x052d92c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*unaff_x20 + 0x658))();
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


