/*
FUNCTION_NAME: OVRManager$$get_hasVrFocus
ENTRY_POINT: 060b9a6c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_hasVrFocus(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x22 + 0x50);
  puVar5 = *(undefined8 **)(unaff_x20 + 0xd60);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060b9984 with catch @ 060b9a78
                        */
  if ((param_1 & 1) == 0) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060b98d8 with catch @ 060b9a7c
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060b98f4 with catch @ 060b9a80
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060b98ac with catch @ 060b9a84
                        */
    FUN_03642964(PTR_DAT_079f5050);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060b9848 with catch @ 060b9a88
                        */
    FUN_03642964(PTR_DAT_07a21610);
    FUN_03642964(PTR_DAT_07a23d60);
                    /* try { // try from 060b9aa4 to 061b9aa7 has its CatchHandler @ 060b9ab0 */
    FUN_03642964(PTR_DAT_07a21618);
                    /* catch() { ... } // from try @ 060b9aa4 with catch @ 060b9ab0 */
                    /* try { // try from 060b9ab4 to 061b9abb has its CatchHandler @ 060b9ac4 */
    FUN_03642964(PTR_DAT_07a23d68);
                    /* try { // try from 060b9abc to 061b9ac7 has its CatchHandler @ 060b96c8 */
    *(undefined1 *)(unaff_x21 + 0x98c) = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 060b9ab4 with catch @ 060b9ac4
                        */
  uVar2 = thunk_FUN_0367fe20(*puVar7);
  FUN_05d84434(uVar2,param_2,*puVar5,0);
  FUN_05ffd170(param_2,param_2 + 0x48,uVar2,0);
  if (*(long *)(param_2 + 200) != 0) {
    uVar2 = FUN_03c373e0(*(long *)(param_2 + 200),*(undefined8 *)PTR_DAT_07a21610);
    *(undefined8 *)(param_2 + 0x138) = uVar2;
    thunk_FUN_036b7ad0(param_2 + 0x138,uVar2);
    if (*(long *)(param_2 + 0x120) == 0) {
      lVar3 = FUN_071bd1a0(param_2,0);
      if (lVar3 == 0) goto LAB_060b9bb4;
      uVar2 = FUN_03d182e8(lVar3,*(undefined8 *)PTR_DAT_07a21618);
      FUN_060b9bb8(param_2,uVar2);
    }
    puVar1 = PTR_DAT_07a23d68;
    if (*(long *)(param_2 + 200) != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x130);
      uVar2 = FUN_071bd0d0(*(long *)(param_2 + 200),0);
      uVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
      FUN_060b9c88(uVar4,uVar6,uVar2);
      *(undefined8 *)(param_2 + 0x140) = uVar4;
      thunk_FUN_036b7ad0(param_2 + 0x140,uVar4);
      FUN_05ffd214(param_2,param_2 + 0x48,0);
      return;
    }
  }
LAB_060b9bb4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


