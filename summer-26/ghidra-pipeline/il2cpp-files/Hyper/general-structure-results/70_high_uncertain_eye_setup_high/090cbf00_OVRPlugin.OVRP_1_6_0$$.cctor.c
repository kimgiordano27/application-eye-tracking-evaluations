/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$.cctor
ENTRY_POINT: 090cbf00
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_6_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  
  puVar2 = PTR_DAT_0ac79610;
  puVar1 = PTR_DAT_0ac0ee48;
  if ((DAT_0b330504 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac79618);
    FUN_04947ee4(PTR_DAT_0ac76fb8);
    FUN_04947ee4(PTR_DAT_0ac0ee48);
                    /* try { // try from 090cbf4c to 091cbf5b has its CatchHandler @ 090cbf5c */
    FUN_04947ee4(PTR_DAT_0ac79620);
                    /* catch() { ... } // from try @ 090cbea8 with catch @ 090cbf5c
                       catch() { ... } // from try @ 090cbf4c with catch @ 090cbf5c */
                    /* try { // try from 090cbf60 to 091cbf63 has its CatchHandler @ 090cbf6c */
    FUN_04947ee4(PTR_DAT_0ac79628);
                    /* try { // try from 090cbf64 to 091cbf6f has its CatchHandler @ 090cbce0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 090cbf60 with catch @ 090cbf6c
                        */
    FUN_04947ee4(PTR_DAT_0ac79610);
    DAT_0b330504 = 1;
  }
  lVar6 = FUN_04947fd0(*(undefined8 *)puVar1,0x1a);
  lVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_08dbf2f0(lVar7,0);
  puVar4 = PTR_DAT_0ac79628;
  puVar3 = PTR_DAT_0ac79620;
  puVar2 = PTR_DAT_0ac79618;
  puVar1 = PTR_DAT_0ac76fb8;
  if (lVar7 != 0) {
    uVar11 = 0;
    *(undefined4 *)(lVar7 + 0x10) = 0;
    while( true ) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar8 = *(long *)puVar1;
      }
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_0718aae0(uVar9,lVar7,*(undefined8 *)puVar4,0);
      uVar5 = FUN_05624d04(uVar10,uVar9,*(undefined8 *)puVar2);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      *(undefined4 *)(lVar6 + (long)(int)uVar11 * 4 + 0x20) = uVar5;
      uVar11 = *(int *)(lVar7 + 0x10) + 1;
      *(uint *)(lVar7 + 0x10) = uVar11;
      if (0x19 < (int)uVar11) {
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


