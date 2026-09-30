/*
FUNCTION_NAME: FUN_02f5e7fc
ENTRY_POINT: 02f5e7fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f5e9f0) */

void FUN_02f5e7fc(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char local_44 [4];
  
                    /* try { // try from 02f5e804 to 0305e807 has its CatchHandler @ 02f5e818 */
                    /* catch() { ... } // from try @ 02f5e804 with catch @ 02f5e818 */
                    /* try { // try from 02f5e820 to 0305e893 has its CatchHandler @ 02f5eb4c */
  if ((DAT_0412abf8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d245d0);
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    DAT_0412abf8 = 1;
  }
  uVar2 = FUN_026c4864(param_3,0);
  puVar1 = PTR_DAT_03d245d0;
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)PTR_DAT_03d245d0;
    if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 02f5e038 with catch @ 02f5e938
                       try { // try from 02f5e938 to 0305e95f has its CatchHandler @ 02f5dca8 */
      thunk_FUN_01a58e78();
                    /* catch() { ... } // from try @ 02f5e25c with catch @ 02f5e93c */
      lVar3 = *(long *)puVar1;
    }
                    /* catch() { ... } // from try @ 02f5dfdc with catch @ 02f5e940 */
    if (param_2 == 0) goto LAB_02f5e9ec;
  }
  else {
    if (param_2 == 0) {
LAB_02f5e9ec:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02f5e718 with catch @ 02f5e9ec
                       try { // try from 02f5e9ec to 0305ea03 has its CatchHandler @ 02f5dca8 */
      FUN_01ab6c3c();
    }
    if (*(char *)(param_2 + 0x28) != '\0') {
      lVar3 = FUN_026c5a0c(param_3,0);
      if (lVar3 == 0) goto LAB_02f5e9ec;
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar2 = 0;
        uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
                    /* catch() { ... } // from try @ 02f5e5e0 with catch @ 02f5e894
                       try { // try from 02f5e894 to 0305e8ab has its CatchHandler @ 02f5dca8 */
          if (uVar5 <= uVar2) goto LAB_02f5e9e8;
                    /* try { // try from 02f5e8ac to 0305e8af has its CatchHandler @ 02f5e8bc */
          FUN_02f5e7fc(param_1,param_2,*(undefined8 *)(lVar3 + 0x20 + uVar2 * 8),param_4 & 1);
          uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar2 = uVar2 + 1;
                    /* catch() { ... } // from try @ 02f5e8ac with catch @ 02f5e8bc */
        } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
    }
                    /* try { // try from 02f5e8c4 to 0305e937 has its CatchHandler @ 02f5eb4c */
    if (*(char *)(param_2 + 0x2a) == '\0') {
      lVar3 = FUN_026c5d40(param_3,*(undefined8 *)(param_2 + 0x20),0);
      goto LAB_02f5e960;
    }
    uVar2 = FUN_026c9e2c(*(undefined8 *)(param_2 + 0x20),0);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = FUN_026c4864(*(undefined8 *)(param_2 + 0x20),0), puVar1 = PTR_DAT_03d245d0,
       (uVar2 & 1) != 0)) {
      lVar3 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,1);
      if (lVar3 == 0) goto LAB_02f5e9ec;
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_02f5e9e8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      goto LAB_02f5e960;
    }
    lVar3 = *(long *)PTR_DAT_03d245d0;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
  }
                    /* catch() { ... } // from try @ 02f5e200 with catch @ 02f5e944 */
                    /* catch() { ... } // from try @ 02f5e71c with catch @ 02f5e948 */
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
LAB_02f5e960:
                    /* try { // try from 02f5e960 to 0305e963 has its CatchHandler @ 02f5e970 */
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  local_44[0] = '\0';
                    /* catch() { ... } // from try @ 02f5e960 with catch @ 02f5e970 */
  uVar4 = FUN_027e0bd8(uVar6,local_44,0);
                    /* try { // try from 02f5e978 to 0305e9eb has its CatchHandler @ 02f5eb4c */
  if (*(char *)(param_2 + 0x29) != '\0') {
    FUN_02f5eb54(uVar4,param_2,param_3,param_4 & 1,lVar3);
  }
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  return;
}


