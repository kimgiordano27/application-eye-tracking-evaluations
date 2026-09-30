/*
FUNCTION_NAME: FUN_059b08ac
ENTRY_POINT: 059b08ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_059b08ac(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
                    /* try { // try from 059b08ac to 05ab08af has its CatchHandler @ 059b08e0 */
                    /* try { // try from 059b08b0 to 05ab08cf has its CatchHandler @ 059afcb8 */
  if ((DAT_06dc149a & 1) == 0) {
                    /* catch() { ... } // from try @ 059b04ac with catch @ 059b08cc */
                    /* try { // try from 059b08d0 to 05ab08d7 has its CatchHandler @ 059b093c */
    FUN_02d965b8(OVRPlugin_OVRP_1_104_0_TypeInfo);
                    /* try { // try from 059b08d8 to 05ab091f has its CatchHandler @ 059afcb8 */
                    /* catch() { ... } // from try @ 059b08ac with catch @ 059b08e0 */
    FUN_02d965b8(OVRPlugin_OVRP_1_105_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b08a8 with catch @ 059b08e4 */
                    /* catch() { ... } // from try @ 059b08a4 with catch @ 059b08e8 */
                    /* catch() { ... } // from try @ 059b07a0 with catch @ 059b08ec */
    FUN_02d965b8(OVRPlugin_OVRP_1_106_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b08a0 with catch @ 059b08f0 */
                    /* catch() { ... } // from try @ 059b0774 with catch @ 059b08f4 */
                    /* catch() { ... } // from try @ 059b0710 with catch @ 059b08f8 */
    FUN_02d965b8(OVRPlugin_OVRP_1_107_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b07c4 with catch @ 059b08fc */
    FUN_02d965b8(OVRPlugin_OVRP_1_108_0_TypeInfo);
    DAT_06dc149a = 1;
  }
  if (param_2 == 1) {
    FUN_059b0c00(param_1);
    plVar10 = *(long **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = 1;
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_1_105_0_TypeInfo) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_059b09e4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)OVRPlugin_OVRP_1_105_0_TypeInfo,0);
LAB_059b09e4:
      lVar6 = (*(code *)*puVar2)(plVar10,puVar2[1]);
      puVar1 = OVRPlugin_OVRP_1_108_0_TypeInfo;
      lVar7 = *(long *)OVRPlugin_OVRP_1_108_0_TypeInfo;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar7);
        lVar7 = *(long *)puVar1;
      }
      puVar2 = *(undefined8 **)(lVar7 + 0xb8);
      lVar3 = puVar2[1];
      if (lVar3 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar7);
          puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar4 = *puVar2;
        lVar3 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo);
        FUN_05c50774(lVar3,uVar4,*(undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar10 = lVar3;
        LeanTween__value(plVar10,lVar3);
      }
      if (lVar6 != 0) {
        plVar10 = (long *)(lVar6 + 0x20);
        *plVar10 = lVar3;
        goto LAB_059b0aec;
      }
    }
  }
  else {
    if (param_2 != 0) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar4 = thunk_FUN_02dd3144();
      uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a0e068);
      FUN_05453f78(uVar4,uVar5,0);
                    /* try { // try from 059b0b30 to 05ab0b33 has its CatchHandler @ 059b0b78 */
                    /* try { // try from 059b0b34 to 05ab0b37 has its CatchHandler @ 059b0b74 */
      uVar5 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_109_0_TypeInfo);
                    /* try { // try from 059b0b3c to 05ab0b63 has its CatchHandler @ 059b0b6c */
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar4,uVar5);
    }
                    /* try { // try from 059b0920 to 05ab0923 has its CatchHandler @ 059b092c */
    FUN_059b0c00(param_1);
    plVar10 = *(long **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_1_105_0_TypeInfo) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_059b0a9c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)OVRPlugin_OVRP_1_105_0_TypeInfo,0);
LAB_059b0a9c:
      lVar6 = (*(code *)*puVar2)(plVar10,puVar2[1]);
      lVar3 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo);
      FUN_05c50774(lVar3,param_1,*(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo,0);
      if (lVar6 != 0) {
        plVar10 = (long *)(lVar6 + 0x20);
        *plVar10 = lVar3;
LAB_059b0aec:
        LeanTween__value(plVar10,lVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


