/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$UpdateInstanceState
ENTRY_POINT: 06d88b38
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Inspector__UpdateInstanceState(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x21 + 0xba0);
  if ((*(byte *)(unaff_x19 + 0xa30) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e83ba0);
    FUN_03c8f898(PTR_DAT_08e68f00);
    *(undefined1 *)(unaff_x19 + 0xa30) = 1;
  }
  lVar2 = FUN_03c8f97c(*puVar7,2);
  puVar1 = PTR_DAT_08e68f00;
  if (param_1 != 0) {
    uVar3 = FUN_085875ac(param_1,0xb,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar6);
    }
    uVar4 = FUN_085decd4(uVar3,0,0);
    uVar5 = 0xb;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0xd;
    }
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined4 *)(lVar2 + 0x20) = uVar5;
        uVar3 = FUN_085875ac(param_1,0xc,0);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar6);
        }
        uVar4 = FUN_085decd4(uVar3,0,0);
        if (1 < *(uint *)(lVar2 + 0x18)) {
          uVar5 = 0xc;
          if ((uVar4 & 1) == 0) {
            uVar5 = 0xe;
          }
          *(undefined4 *)(lVar2 + 0x24) = uVar5;
          return lVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


