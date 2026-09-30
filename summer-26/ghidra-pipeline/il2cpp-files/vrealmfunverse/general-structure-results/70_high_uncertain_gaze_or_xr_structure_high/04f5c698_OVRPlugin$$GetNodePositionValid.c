/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 04f5c698
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodePositionValid(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 in_w8;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined1 *)(unaff_x19 + 0xd8) = in_w8;
  iVar1 = *(int *)(param_1 + 0xe4);
  *(undefined4 *)(unaff_x19 + 0xdc) = 0x3f4ccccd;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5c5bc with catch @ 04f5c6b0
                        */
  *(undefined4 *)(unaff_x19 + 0xe4) = 3;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5c5b8 with catch @ 04f5c6b4
                        */
  if (iVar1 == 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5c5b4 with catch @ 04f5c6b8
                        */
    thunk_FUN_02b9ad44();
  }
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5c5b0 with catch @ 04f5c6bc
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5c518 with catch @ 04f5c6c0
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5c46c with catch @ 04f5c6c4
                        */
  if (DAT_066c9aa4 == '\0') {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5c408 with catch @ 04f5c6c8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5c4dc with catch @ 04f5c6cc
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5c5ac with catch @ 04f5c6d0
                        */
    FUN_02b3c81c(System_IOSelectorJob_var);
    DAT_066c9aa4 = '\x01';
  }
  lVar5 = *unaff_x20;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
                    /* try { // try from 04f5c6ec to 0505c6ef has its CatchHandler @ 04f5c6f8 */
    lVar5 = *unaff_x20;
  }
  cVar4 = DAT_066c9aa5;
  lVar7 = *(long *)(lVar5 + 0xb8);
                    /* catch() { ... } // from try @ 04f5c6ec with catch @ 04f5c6f8 */
                    /* try { // try from 04f5c6fc to 0505c703 has its CatchHandler @ 04f5c70c */
  uVar9 = *(undefined8 *)(lVar7 + 0x20);
  uVar6 = *(undefined8 *)(lVar7 + 0x18);
                    /* try { // try from 04f5c704 to 0505c70f has its CatchHandler @ 04f5c2d0 */
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar9;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar6;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f5c6fc with catch @ 04f5c70c
                        */
  if (cVar4 == '\0') {
    FUN_02b3c81c();
    lVar5 = *unaff_x20;
    DAT_066c9aa5 = '\x01';
  }
  puVar3 = System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_TypeInfo;
  puVar2 = System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>_TypeInfo;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *unaff_x20;
  }
  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
  uVar6 = *(undefined8 *)puVar2;
  uVar9 = puVar8[2];
  uVar11 = puVar8[1];
  uVar10 = *puVar8;
  *(undefined4 *)(unaff_x19 + 0x128) = 1;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar10;
  uVar6 = thunk_FUN_02b79644(uVar6);
  FUN_037a5cd0(uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar6;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x130,uVar6);
  FUN_03bf2c80();
  return;
}


