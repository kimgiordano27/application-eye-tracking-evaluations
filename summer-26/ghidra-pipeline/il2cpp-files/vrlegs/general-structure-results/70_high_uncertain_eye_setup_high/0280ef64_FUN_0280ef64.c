/*
FUNCTION_NAME: FUN_0280ef64
ENTRY_POINT: 0280ef64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0280ef64(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  long lVar9;
  short sVar10;
  undefined8 uVar11;
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  undefined *puVar7;
  
  lVar8 = *(long *)(param_1 + 0x80);
  if (lVar8 == 0) goto LAB_0280f088;
  uVar1 = *(uint *)(param_1 + 0x8c);
  if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0280f08c;
  sVar10 = *(short *)(lVar8 + (long)(int)uVar1 * 2 + 0x20);
  if ((sVar10 == 0x27) || (sVar10 == 0x22)) {
    *(uint *)(param_1 + 0x8c) = uVar1 + 1;
    FUN_0280af80(param_1);
    FUN_0280b034(param_1,sVar10);
  }
  else {
    uVar3 = FUN_0280f188(param_1,sVar10);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
      FUN_01876390();
      uVar5 = FUN_0271c480(0);
      uVar11 = *(undefined8 *)(param_1 + 0x80);
      iVar2 = *(int *)(param_1 + 0x8c);
      FUN_018748a8(uVar11);
      local_24[0] = FUN_019a7458(uVar11,(long)iVar2);
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cc02b0);
      uVar11 = thunk_FUN_01a89a98(uVar11,local_24);
      puVar7 = PTR_DAT_03cfe218;
      goto OVRPlugin_Media__GetMrcInputVideoBufferType;
    }
    FUN_0280af80(param_1);
    FUN_0280f204(param_1);
    sVar10 = 0;
  }
  plVar4 = *(long **)(param_1 + 200);
  if (plVar4 == (long *)0x0) {
LAB_0280f00c:
    lVar8 = FUN_0282f680((undefined8 *)(param_1 + 0xb0),0);
  }
  else {
    lVar8 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8),
                       *(undefined4 *)(param_1 + 0xbc),*(undefined8 *)(*plVar4 + 0x180));
    if (lVar8 == 0) goto LAB_0280f00c;
  }
  FUN_0280c5ec(param_1);
  lVar9 = *(long *)(param_1 + 0x80);
  if (lVar9 != 0) {
    uVar1 = *(uint *)(param_1 + 0x8c);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      if (*(short *)(lVar9 + (long)(int)uVar1 * 2 + 0x20) == 0x3a) {
        *(uint *)(param_1 + 0x8c) = uVar1 + 1;
        FUN_02804374(param_1,4,lVar8,1);
        *(short *)(param_1 + 0x20) = sVar10;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        return 1;
      }
      thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
      FUN_01876390();
      uVar5 = FUN_0271c480(0);
      uVar11 = *(undefined8 *)(param_1 + 0x80);
      iVar2 = *(int *)(param_1 + 0x8c);
      FUN_018748a8(uVar11);
      local_28[0] = FUN_019a7458(uVar11,(long)iVar2);
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cc02b0);
      uVar11 = thunk_FUN_01a89a98(uVar11,local_28);
      puVar7 = PTR_DAT_03cfe210;
OVRPlugin_Media__GetMrcInputVideoBufferType:
      uVar6 = thunk_FUN_01a6ca08(puVar7);
      uVar5 = FUN_0282f8b0(uVar6,uVar5,uVar11,0);
      uVar5 = FUN_02803d2c(param_1,uVar5);
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cfe220);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar11);
    }
LAB_0280f08c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_0280f088:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


