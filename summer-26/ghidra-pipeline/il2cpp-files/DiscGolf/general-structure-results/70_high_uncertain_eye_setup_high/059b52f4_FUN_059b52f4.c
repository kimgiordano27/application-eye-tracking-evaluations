/*
FUNCTION_NAME: FUN_059b52f4
ENTRY_POINT: 059b52f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_059b52f4(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 059b52f8 to 05ab5303 has its CatchHandler @ 059b4eb8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059b52f0 with catch @ 059b5300
                        */
                    /* try { // try from 059b5304 to 05ab53cb has its CatchHandler @ 059b5304
                       catch() { ... } // from try @ 059b5304 with catch @ 059b5304
                       catch() { ... } // from try @ 059b54a8 with catch @ 059b5304
                       catch() { ... } // from try @ 059b5554 with catch @ 059b5304
                       catch() { ... } // from try @ 059b55b0 with catch @ 059b5304 */
  if ((DAT_06dc14b6 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(PTR_DAT_069fc220);
    DAT_06dc14b6 = 1;
  }
  puVar3 = PTR_DAT_069ff488;
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar2 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_8_0_TypeInfo);
    FUN_0544bf54(uVar2,uVar6,0);
    goto LAB_059b5558;
  }
  if (*(char *)(param_2 + 0x30) == '\0') {
    lVar5 = *(long *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x30) = 1;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar1 = FUN_05c0cd54(lVar5,0,0);
    if ((uVar1 & 1) == 0) {
      if (lVar5 == 0) goto LAB_059b54d0;
      uVar1 = FUN_05c08d10(lVar5,0);
      if ((uVar1 & 1) == 0) {
LAB_059b5438:
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar1 = FUN_05c0cd54(uVar6,0,0);
        if ((uVar1 & 1) != 0) goto LAB_059b5528;
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
        FUN_05c09544(uVar6,uVar2,lVar5,0);
        goto LAB_059b5480;
      }
                    /* try { // try from 059b53cc to 05ab53f3 has its CatchHandler @ 059b5578 */
      uVar6 = FUN_05c0c424(lVar5,0);
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar4);
        lVar4 = *(long *)puVar3;
      }
      uVar1 = thunk_FUN_0536b75c(uVar6,**(undefined8 **)(lVar4 + 0xb8),0);
      if ((uVar1 & 1) != 0) {
        lVar4 = FUN_05c09b1c(lVar5,0);
        if (lVar4 == 0) goto LAB_059b54d0;
                    /* try { // try from 059b5430 to 05ab545b has its CatchHandler @ 059b5574 */
        uVar1 = FUN_0536bb1c(lVar4,*(undefined8 *)PTR_DAT_069fc220,4,0);
        if ((uVar1 & 1) != 0) goto LAB_059b5438;
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar1 = FUN_05c0cd54(uVar6,0,0);
      if ((uVar1 & 1) != 0) {
LAB_059b5528:
        thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
        uVar2 = thunk_FUN_02dd3144();
        puVar3 = OVRPlugin_OVRP_1_91_0_TypeInfo;
        goto LAB_059b5544;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x20);
LAB_059b5480:
      FUN_059b265c(param_2,uVar6);
    }
                    /* try { // try from 059b5490 to 05ab5493 has its CatchHandler @ 059b5568 */
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar5 = FUN_059b1d4c(param_2);
      if (lVar5 == 0) {
LAB_059b54d0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 059b54a4 to 05ab54a7 has its CatchHandler @ 059b5570 */
      FUN_059b5598(lVar5,*(undefined8 *)(param_1 + 0x38));
    }
                    /* try { // try from 059b54a8 to 05ab5547 has its CatchHandler @ 059b5304 */
    FUN_059b57f8(param_1,param_2,param_3,param_4);
    return;
  }
  thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
  uVar2 = thunk_FUN_02dd3144();
  puVar3 = OVRPlugin_OVRP_1_90_0_TypeInfo;
LAB_059b5544:
  uVar6 = thunk_FUN_02dfd288(puVar3);
                    /* try { // try from 059b5548 to 05ab554f has its CatchHandler @ 059b557c */
                    /* try { // try from 059b5550 to 05ab5553 has its CatchHandler @ 059b556c */
                    /* try { // try from 059b5554 to 05ab5597 has its CatchHandler @ 059b5304 */
  FUN_054e8008(uVar2,uVar6,0);
LAB_059b5558:
  uVar6 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_92_0_TypeInfo);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059b5490 with catch @ 059b5568
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059b5550 with catch @ 059b556c
                        */
  FUN_02d96724(uVar2,uVar6);
}


