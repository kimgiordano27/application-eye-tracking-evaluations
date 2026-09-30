/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_UseMrcDebugCamera
ENTRY_POINT: 0280ef8c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_UseMrcDebugCamera(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_x9;
  long unaff_x19;
  short sVar9;
  undefined8 uVar10;
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  undefined *puVar8;
  
  sVar9 = *(short *)(in_x9 + param_1 * 2 + 0x20);
  if ((sVar9 == 0x27) || (sVar9 == 0x22)) {
    *(int *)(unaff_x19 + 0x8c) = (int)param_1 + 1;
    FUN_0280af80();
    FUN_0280b034();
  }
  else {
    uVar3 = FUN_0280f188(param_2,sVar9);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
      FUN_01876390();
      uVar6 = FUN_0271c480(0);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x80);
      iVar2 = *(int *)(unaff_x19 + 0x8c);
      FUN_018748a8(uVar10);
      uStack000000000000000c = FUN_019a7458(uVar10,(long)iVar2);
      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cc02b0);
      uVar10 = thunk_FUN_01a89a98(uVar10,(long)&stack0x00000008 + 4);
      puVar8 = PTR_DAT_03cfe218;
      goto OVRPlugin_Media__GetMrcInputVideoBufferType;
    }
    FUN_0280af80();
    FUN_0280f204();
    sVar9 = 0;
  }
  plVar4 = *(long **)(unaff_x19 + 200);
  if (plVar4 == (long *)0x0) {
LAB_0280f00c:
    FUN_0282f680((undefined8 *)(unaff_x19 + 0xb0),0);
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(undefined8 *)(unaff_x19 + 0xb0),*(undefined4 *)(unaff_x19 + 0xb8),
                       *(undefined4 *)(unaff_x19 + 0xbc),*(undefined8 *)(*plVar4 + 0x180));
    if (lVar5 == 0) goto LAB_0280f00c;
  }
  FUN_0280c5ec();
  lVar5 = *(long *)(unaff_x19 + 0x80);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x8c);
  if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (*(short *)(lVar5 + (long)(int)uVar1 * 2 + 0x20) == 0x3a) {
    *(uint *)(unaff_x19 + 0x8c) = uVar1 + 1;
    FUN_02804374();
    *(short *)(unaff_x19 + 0x20) = sVar9;
    *(undefined4 *)(unaff_x19 + 0xa8) = 0;
    *(undefined8 *)(unaff_x19 + 0xb0) = 0;
    *(undefined8 *)(unaff_x19 + 0xb8) = 0;
    return 1;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
  FUN_01876390();
  uVar6 = FUN_0271c480(0);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x80);
  iVar2 = *(int *)(unaff_x19 + 0x8c);
  FUN_018748a8(uVar10);
  uStack0000000000000008 = FUN_019a7458(uVar10,(long)iVar2);
  uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cc02b0);
  uVar10 = thunk_FUN_01a89a98(uVar10,&stack0x00000008);
  puVar8 = PTR_DAT_03cfe210;
OVRPlugin_Media__GetMrcInputVideoBufferType:
  uVar7 = thunk_FUN_01a6ca08(puVar8);
  FUN_0282f8b0(uVar7,uVar6,uVar10,0);
  uVar6 = FUN_02803d2c();
  uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfe220);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar6,uVar10);
}


