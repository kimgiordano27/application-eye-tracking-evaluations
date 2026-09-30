/*
FUNCTION_NAME: FUN_06189714
ENTRY_POINT: 06189714
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_10;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long FUN_06189714(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,long param_7,undefined8 param_8,byte *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  
  puVar1 = PTR_DAT_065c8c40;
  if ((DAT_06a83c4d & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8cd0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cae20);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb8f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb900);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb908);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb180);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065eef38);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum(MarketingTelemetryNewsfeedEvent_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(MarketingTelemetryPushNotificationEvent_<>c_TypeInfo);
    DAT_06a83c4d = 1;
  }
  puVar3 = MarketingTelemetryPushNotificationEvent_<>c_TypeInfo;
  puVar2 = MarketingTelemetryNewsfeedEvent_<>c_TypeInfo;
  local_a0 = 0;
  uStack_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
                    /* try { // try from 061897f4 to 062897f7 has its CatchHandler @ 06189984 */
                    /* try { // try from 061897f8 to 062897fb has its CatchHandler @ 06189980 */
                    /* try { // try from 061897fc to 062897ff has its CatchHandler @ 061898d0 */
                    /* try { // try from 06189800 to 06289803 has its CatchHandler @ 0618981c */
                    /* try { // try from 06189804 to 06289807 has its CatchHandler @ 06189820 */
                    /* try { // try from 06189808 to 0628980b has its CatchHandler @ 06189818 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 06189580 with catch @ 0618980c
                       try { // try from 0618980c to 0628983b has its CatchHandler @ 0618930c */
    thunk_FUN_02cd038c();
  }
                    /* catch() { ... } // from try @ 06189438 with catch @ 06189810 */
                    /* catch() { ... } // from try @ 061894dc with catch @ 06189814 */
                    /* catch() { ... } // from try @ 061895cc with catch @ 06189818
                       catch() { ... } // from try @ 061896f8 with catch @ 06189818
                       catch() { ... } // from try @ 06189808 with catch @ 06189818 */
                    /* catch() { ... } // from try @ 06189484 with catch @ 0618981c
                       catch() { ... } // from try @ 06189688 with catch @ 0618981c
                       catch() { ... } // from try @ 06189800 with catch @ 0618981c */
  uVar6 = FUN_05ef59b8(param_6,0,0);
                    /* catch() { ... } // from try @ 06189560 with catch @ 06189820
                       catch() { ... } // from try @ 06189804 with catch @ 06189820 */
  FUN_0615dcf4(uVar6 & 1,*(undefined8 *)puVar2,0);
                    /* try { // try from 0618983c to 0628983f has its CatchHandler @ 06189858 */
  FUN_0615dcf4(*(char *)(param_5 + 0x9d) == '\0',*(undefined8 *)puVar3,0);
  uVar7 = FUN_0618256c(param_5);
  lVar8 = FUN_06189c20(uVar7,param_6);
  puVar2 = PTR_DAT_065c8cd0;
                    /* catch() { ... } // from try @ 0618983c with catch @ 06189858 */
  if (lVar8 == 0) goto LAB_06189c1c;
  bVar5 = FUN_05ef60f4(lVar8,0);
  *param_9 = bVar5 & 1;
  uVar7 = FUN_06189d3c(param_5,param_7,param_8);
  lVar13 = *(long *)puVar2;
                    /* try { // try from 06189898 to 062898cf has its CatchHandler @ 06189a30 */
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar13);
  }
  uVar9 = FUN_05eae604(0);
  if ((uVar9 & 1) == 0) {
    if ((bVar5 & 1) != 0) {
                    /* catch() { ... } // from try @ 06189418 with catch @ 061898d0
                       catch() { ... } // from try @ 061897fc with catch @ 061898d0
                       try { // try from 061898d0 to 062898eb has its CatchHandler @ 0618930c */
      FUN_05ef60b0(lVar8,0,0);
    }
LAB_061898d4:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
                    /* try { // try from 061898ec to 062898ef has its CatchHandler @ 06189908 */
    uVar9 = FUN_05ef59b8(uVar7,0,0);
    uVar10 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar10 = FUN_061831bc(param_5);
    }
  }
  else {
    if ((bVar5 & 1) == 0) goto LAB_061898d4;
    uVar10 = FUN_061a8cdc(0);
  }
                    /* catch() { ... } // from try @ 061898ec with catch @ 06189908 */
  if (param_7 == 0) goto LAB_06189c1c;
  local_a0 = *(ulong *)(param_7 + 0x30);
  uStack_98 = *(undefined8 *)(param_7 + 0x38);
  if ((local_a0 & 0xff) == 0) {
                    /* catch() { ... } // from try @ 06189528 with catch @ 06189980
                       catch() { ... } // from try @ 061895ec with catch @ 06189980
                       catch() { ... } // from try @ 061897f8 with catch @ 06189980
                       try { // try from 06189980 to 0628999b has its CatchHandler @ 0618930c */
                    /* catch() { ... } // from try @ 061894bc with catch @ 06189984
                       catch() { ... } // from try @ 061897f4 with catch @ 06189984 */
    uStack_b8 = *(undefined8 *)(param_7 + 0x48);
    local_c0 = *(undefined8 *)(param_7 + 0x40);
    local_b0 = *(undefined4 *)(param_7 + 0x50);
    if ((char)local_c0 != '\0') {
                    /* try { // try from 0618999c to 0628999f has its CatchHandler @ 061899b4 */
      lVar13 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar8,0);
      if (lVar13 == 0) goto LAB_06189c1c;
                    /* catch() { ... } // from try @ 0618999c with catch @ 061899b4 */
      uVar14 = FUN_05f01910(lVar13,0);
      local_b0 = *(undefined4 *)(param_7 + 0x50);
      uStack_b8 = *(undefined8 *)(param_7 + 0x48);
      local_c0 = *(undefined8 *)(param_7 + 0x40);
      uVar11 = param_2;
      uVar16 = param_3;
      uVar15 = FUN_03c89968(&local_c0,*(undefined8 *)PTR_DAT_065cb900);
                    /* try { // try from 061899f4 to 06289a1b has its CatchHandler @ 06189a30 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
                    /* try { // try from 06189a1c to 06289a27 has its CatchHandler @ 0618930c */
      uVar12 = *(undefined8 *)PTR_DAT_065eef38;
      goto LAB_06189a7c;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar13 = FUN_034b0c18(lVar8,uVar10,*(undefined8 *)PTR_DAT_065cb180);
    uVar10 = 0;
  }
  else {
    uStack_b8 = *(undefined8 *)(param_7 + 0x48);
    local_c0 = *(undefined8 *)(param_7 + 0x40);
    local_b0 = *(undefined4 *)(param_7 + 0x50);
    cVar4 = (char)local_c0;
    uVar14 = FUN_03c91c54(&local_a0,*(undefined8 *)PTR_DAT_065cb908);
                    /* try { // try from 06189948 to 0628997f has its CatchHandler @ 06189a30 */
    uVar11 = param_2;
    uVar16 = param_3;
    if (cVar4 == '\0') {
                    /* try { // try from 06189a28 to 06289a2f has its CatchHandler @ 06189a30 */
                    /* catch() { ... } // from try @ 06189898 with catch @ 06189a30
                       catch() { ... } // from try @ 06189948 with catch @ 06189a30
                       catch() { ... } // from try @ 061899f4 with catch @ 06189a30
                       catch() { ... } // from try @ 06189a28 with catch @ 06189a30 */
      lVar13 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar8,0);
      if (lVar13 == 0) goto LAB_06189c1c;
      uVar15 = FUN_05f00104(lVar13,0);
    }
    else {
      local_b0 = *(undefined4 *)(param_7 + 0x50);
      uStack_b8 = *(undefined8 *)(param_7 + 0x48);
      local_c0 = *(undefined8 *)(param_7 + 0x40);
      uVar15 = FUN_03c89968(&local_c0,*(undefined8 *)PTR_DAT_065cb900);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar12 = *(undefined8 *)PTR_DAT_065eef38;
LAB_06189a7c:
    lVar13 = FUN_034b0fdc(uVar14,param_2,param_3,uVar15,uVar11,uVar16,param_4,lVar8,uVar10,uVar12);
    uVar10 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar9 = FUN_05eae604(0);
  if ((uVar9 & 1) == 0) {
    if ((bVar5 & 1) != 0) {
      FUN_05ef60b0(lVar8,1,0);
    }
LAB_06189b3c:
    if (lVar13 == 0) goto LAB_06189c1c;
  }
  else {
    if ((bVar5 & 1) == 0) goto LAB_06189b3c;
    if (lVar13 == 0) goto LAB_06189c1c;
    FUN_05ef60b0(lVar13,0,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar9 = FUN_05ef739c(uVar7,0,0);
    if ((uVar9 & 1) != 0) {
      lVar8 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar13,0);
      uVar11 = FUN_061831bc(param_5);
      if (lVar8 == 0) goto LAB_06189c1c;
      FUN_05f02644(lVar8,uVar11,uVar10,0);
    }
  }
  lVar8 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar13,0);
  if (lVar8 == 0) {
LAB_06189c1c:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar11 = FUN_05f01814(lVar8,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar1);
  }
  uVar9 = FUN_05ef59b8(uVar11,uVar7,0);
  if ((uVar9 & 1) != 0) {
    lVar8 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar13,0);
    if (lVar8 == 0) goto LAB_06189c1c;
    FUN_05f02644(lVar8,uVar7,uVar10,0);
  }
  if (*(long *)(param_7 + 0x10) != 0) {
    FUN_05efa208(lVar13,*(long *)(param_7 + 0x10),0);
  }
  return lVar13;
}


