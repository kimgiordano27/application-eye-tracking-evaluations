/*
FUNCTION_NAME: OVRPlugin.OVRP_1_42_0$$.cctor
ENTRY_POINT: 01db5e88
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_42_0___cctor(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0x608));
  FUN_00fdc2e4(PTR_DAT_0235a5d8);
  *(undefined1 *)(unaff_x21 + 0xa13) = 1;
  if (unaff_x20 != 0) {
    *(undefined1 *)(unaff_x20 + 0x42) = 1;
    thunk_FUN_00ffe618();
    lVar2 = *(long *)(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x19 + 0x10) = 1;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = unaff_x20;
          thunk_FUN_0106e12c(plVar4);
        }
        else {
          FUN_017d3030();
        }
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x18) + 0x18) != 1) {
            return;
          }
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_01da75f8();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


