/*
FUNCTION_NAME: PlayFab.MultiplayerModels.LinearRegionSelectionRuleExpansion$$.ctor
ENTRY_POINT: 017e95f0
PROGRAM: LethalApe-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void PlayFab_MultiplayerModels_LinearRegionSelectionRuleExpansion___ctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  lVar1 = thunk_FUN_00a05b84();
  if (lVar1 != 0) {
    if ((int)unaff_x19[3] != 0) {
      unaff_x19[4] = unaff_x20;
      thunk_FUN_00a502ec();
      lVar1 = thunk_FUN_00a05c70(*unaff_x22);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0();
      }
      FUN_013b5ae4(lVar1,4,*unaff_x23);
      *(undefined1 *)(lVar1 + 0x2c) = 1;
      lVar2 = thunk_FUN_00a05b84(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar2 == 0) goto PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor;
      if (1 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[5] = lVar1;
        thunk_FUN_00a502ec(unaff_x19 + 5,lVar1);
        *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
        thunk_FUN_00a502ec();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00a190f8();
  }
PlayFab_MultiplayerModels_ListMultiplayerServersRequest___ctor:
  uVar3 = thunk_FUN_00a1ec00();
                    /* WARNING: Subroutine does not return */
  FUN_00a190b8(uVar3,0);
}


