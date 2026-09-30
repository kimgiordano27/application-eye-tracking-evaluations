/*
FUNCTION_NAME: HapticsLib.HapticsSdk.Generated.DeviceHpsFlushRoute.Request$$.ctor
ENTRY_POINT: 093c6e34
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void HapticsLib_HapticsSdk_Generated_DeviceHpsFlushRoute_Request___ctor(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
                    /* try { // try from 093c6e34 to 094c6e4b has its CatchHandler @ 093c6eec */
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x550));
  FUN_04947ee4(PTR_DAT_0ac86490);
  FUN_04947ee4(PTR_DAT_0ac41528);
  FUN_04947ee4(PTR_DAT_0ac41568);
  *(undefined1 *)(unaff_x23 + 0x27a) = 1;
  puVar3 = PTR_DAT_0ac41550;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  uVar5 = *unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  FUN_075a38a4(unaff_x29 + -0x48,&uStack_80,0x80,uVar5);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x48);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x40);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x38);
  iVar1 = *(int *)(*unaff_x20 + 0xe4);
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar7;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
    uVar7 = *(undefined8 *)(unaff_x29 + -0x88);
  }
  *(undefined8 *)(unaff_x29 + -0x50) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar4;
  FUN_093aebd8(unaff_x29 + -0x60,unaff_x29 + -0x2c);
  uVar2 = *(uint *)(unaff_x29 + -0x2c);
  lVar6 = *(long *)puVar3;
  if ((uint)*(undefined8 *)(unaff_x29 + -0x88) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_092cc4ac(1,0);
  }
  if ((*(ushort *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  puVar3 = PTR_DAT_0ac41528;
  uVar4 = FUN_08dc8734(uVar4,0);
  uVar4 = FUN_08dc8728(uVar4,0);
  lVar6 = *(long *)(lVar6 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  *(uint *)(unaff_x29 + -0x68) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x78) = uVar5;
  thunk_FUN_049ee3d8(unaff_x29 + -0x78,uVar5);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
  uVar5 = *(undefined8 *)puVar3;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x78);
  FUN_0759a06c(unaff_x29 + -0x78,unaff_x29 + -0x28,uVar5);
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x68);
  FUN_093ca5a0();
  *(undefined1 *)(unaff_x19 + 0x39) = 7;
  *(uint *)(unaff_x19 + 0x58) = *(uint *)(unaff_x19 + 0x58) | 0x80000000;
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


