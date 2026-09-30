/*
FUNCTION_NAME: FUN_07032d0c
ENTRY_POINT: 07032d0c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_7
*/


long FUN_07032d0c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 local_54 [4];
  ulong local_48;
  
  puVar2 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  local_48 = param_5;
  if ((DAT_07eebde3 & 1) == 0) {
    FUN_03642964(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_03642964(PTR_DAT_079f4df0);
    FUN_03642964(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_85_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_51_0_TypeInfo);
                    /* try { // try from 07032d90 to 07132dbf has its CatchHandler @ 07032f50 */
    FUN_03642964(Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo);
    FUN_03642964(PTR_DAT_079ff4c8);
    DAT_07eebde3 = 1;
  }
  lVar8 = *(long *)puVar2;
  local_54[0] = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
                    /* try { // try from 07032dc0 to 07132e6b has its CatchHandler @ 07032944 */
    lVar8 = *(long *)puVar2;
  }
  FUN_06eaa264(local_54,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x28),0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar8 = FUN_07043090(param_1,*(undefined8 *)OVRPlugin_OVRP_1_83_0_TypeInfo);
  puVar2 = PTR_DAT_079ff4c8;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  *(undefined8 *)(lVar8 + 0x20) = param_3;
  *(undefined8 *)(lVar8 + 0x28) = param_4;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  iVar5 = FUN_07036170(param_2,param_3,param_4);
  *(int *)(lVar8 + 0x10) = iVar5;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x94) == 0) {
      uVar6 = 0;
      *(undefined4 *)(lVar8 + 0x14) = 0;
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)puVar2);
      }
      uVar6 = FUN_0702b528();
                    /* try { // try from 07032e6c to 07132e6f has its CatchHandler @ 07032f5c */
                    /* try { // try from 07032e70 to 07132ed3 has its CatchHandler @ 07032944 */
      if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar7 = FUN_05e18bd4((int)param_4 - (uint)(iVar5 != -1),uVar6,0);
      uVar6 = *(undefined4 *)(param_2 + 0x98);
      *(undefined4 *)(lVar8 + 0x14) = uVar7;
      uVar6 = FUN_05e18bd4(uVar6,8,0);
    }
    iVar5 = *(int *)(param_2 + 0x88);
    *(undefined4 *)(lVar8 + 0x18) = uVar6;
    if (iVar5 == 0) {
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        lVar9 = thunk_FUN_036a1978();
      }
      iVar5 = FUN_070362b8(lVar9,param_3,param_4);
                    /* try { // try from 07032ed4 to 07132ed7 has its CatchHandler @ 07032f4c */
                    /* try { // try from 07032ed8 to 07132edf has its CatchHandler @ 07032944 */
      if (iVar5 != -1) {
                    /* try { // try from 07032ee0 to 07132ee3 has its CatchHandler @ 07032f58 */
                    /* try { // try from 07032ee4 to 07132ee7 has its CatchHandler @ 07032f54 */
        *(int *)(lVar8 + 0x10) = iVar5;
        *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + -1;
      }
    }
                    /* try { // try from 07032ee8 to 07132eeb has its CatchHandler @ 07032f44 */
    iVar5 = *(int *)(param_2 + 0x94);
                    /* try { // try from 07032eec to 07132eef has its CatchHandler @ 07032f50 */
                    /* try { // try from 07032ef0 to 07132f77 has its CatchHandler @ 07032944 */
    *(undefined1 *)(lVar8 + 0x31) = *(undefined1 *)(param_2 + 0xf6);
    uVar1 = *(undefined1 *)(param_2 + 0xb1);
    *(bool *)(lVar8 + 0x36) = iVar5 != 0;
    *(bool *)(lVar8 + 0x30) = iVar5 == 2;
    *(undefined1 *)(lVar8 + 0x32) = uVar1;
    uVar6 = FUN_071cb888(0);
    if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0
       ) {
      thunk_FUN_036a1978();
    }
                    /* catch() { ... } // from try @ 07032cb8 with catch @ 07032f38 */
                    /* catch() { ... } // from try @ 07032c54 with catch @ 07032f3c */
                    /* catch() { ... } // from try @ 07032c8c with catch @ 07032f40 */
    uVar10 = FUN_07002da4(uVar6,0);
                    /* catch() { ... } // from try @ 07032ee8 with catch @ 07032f44 */
    if ((uVar10 & 1) == 0) {
                    /* catch() { ... } // from try @ 07032b8c with catch @ 07032f58
                       catch() { ... } // from try @ 07032ee0 with catch @ 07032f58 */
      bVar3 = false;
    }
    else {
                    /* catch() { ... } // from try @ 07032b24 with catch @ 07032f48 */
                    /* catch() { ... } // from try @ 07032b20 with catch @ 07032f4c
                       catch() { ... } // from try @ 07032ed4 with catch @ 07032f4c */
      bVar3 = *(char *)(param_2 + 0xf8) != '\0';
                    /* catch() { ... } // from try @ 07032d90 with catch @ 07032f50
                       catch() { ... } // from try @ 07032eec with catch @ 07032f50 */
                    /* catch() { ... } // from try @ 07032c04 with catch @ 07032f54
                       catch() { ... } // from try @ 07032ee4 with catch @ 07032f54 */
    }
                    /* catch() { ... } // from try @ 07032c70 with catch @ 07032f5c
                       catch() { ... } // from try @ 07032d04 with catch @ 07032f5c
                       catch() { ... } // from try @ 07032e6c with catch @ 07032f5c */
    *(bool *)(lVar8 + 0x35) = bVar3;
    bVar4 = FUN_06f8a594(param_2,0);
    *(byte *)(lVar8 + 0x33) = bVar4 & 1;
                    /* try { // try from 07032f78 to 07132f7b has its CatchHandler @ 07032f84 */
    if ((param_5 & 0xff) == 0) {
      bVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 07032f78 with catch @ 07032f84 */
                    /* try { // try from 07032f88 to 07132f8f has its CatchHandler @ 07032f98 */
      uVar6 = FUN_0493c17c(&local_48,*(undefined8 *)OVRPlugin_OVRP_1_85_0_TypeInfo);
                    /* try { // try from 07032f90 to 07132f9b has its CatchHandler @ 07032944 */
                    /* catch() { ... } // from try @ 07032f88 with catch @ 07032f98 */
      bVar4 = FUN_06f8a5d4(param_2,uVar6,0);
    }
    *(byte *)(lVar8 + 0x34) = bVar4 & 1;
    FUN_06eaa270(local_54,0);
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


