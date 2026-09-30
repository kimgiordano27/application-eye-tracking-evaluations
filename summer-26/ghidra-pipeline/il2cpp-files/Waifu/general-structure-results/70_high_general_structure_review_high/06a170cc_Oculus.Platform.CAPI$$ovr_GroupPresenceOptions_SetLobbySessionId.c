/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresenceOptions_SetLobbySessionId
ENTRY_POINT: 06a170cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetLobbySessionId(void)

{
  ulong uVar1;
  byte in_w8;
  long unaff_x19;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    if ((*(int *)(*(long *)(unaff_x19 + 0x28) + 0x60) != 2 & in_w8) == 0) {
      return;
    }
    if (DAT_086ef168 == (code *)0x0) {
      DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
    (*DAT_086ef168)();
    lVar2 = *(long *)(unaff_x19 + 0x28);
    if (lVar2 != 0) {
      if (DAT_086ef168 == (code *)0x0) {
        DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
      (*DAT_086ef168)(lVar2,0);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar1 = FUN_07a0d2c4(uVar3,0,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      lVar2 = *(long *)(unaff_x19 + 0x30);
      if (lVar2 != 0) {
        if (DAT_086ef168 == (code *)0x0) {
          DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x06a171a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_086ef168)(lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


