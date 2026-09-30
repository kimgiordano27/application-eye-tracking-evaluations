/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnDiscoveryFinished$$EndInvoke
ENTRY_POINT: 07714320
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_12;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnDiscoveryFinished__EndInvoke
          (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 in_d16;
  undefined8 in_register_00005208;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  _uStack0000000000000030 = in_d16;
  _uStack0000000000000038 = in_register_00005208;
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f30a10);
    FUN_04447ba8(PTR_DAT_09f1e5f0);
    FUN_04447ba8(PTR_DAT_09f30a18);
    FUN_04447ba8(PTR_DAT_09f30a20);
    FUN_04447ba8(PTR_DAT_09f30a28);
    FUN_04447ba8(PTR_DAT_09f30a30);
    FUN_04447ba8(PTR_DAT_09f30790);
    FUN_04447ba8(PTR_DAT_09f30a38);
    *(undefined1 *)(unaff_x21 + 0x11b) = 1;
  }
  _uStack0000000000000020 = 0;
  _uStack0000000000000028 = 0;
  uStack0000000000000020 = FUN_0775cd64(&stack0x00000050,&stack0x00000040,0);
  uStack0000000000000024 = param_3;
  uStack0000000000000028 = param_4;
  uStack000000000000002c = param_5;
  if (4 < unaff_w20) {
    lVar2 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_09f30a18;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x20));
    puVar1 = PTR_DAT_09f30790;
    uVar3 = FUN_094cc6fc(&stack0x00000050,*(undefined8 *)PTR_DAT_09f30790,0,0);
    if (*(uint *)(lVar2 + 0x18) < 2)
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke;
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x28),uVar3);
    if (*(uint *)(lVar2 + 0x18) < 3)
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_09f30a28;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x30));
    uVar3 = FUN_094cc6fc(&stack0x00000040,*(undefined8 *)puVar1,0,0);
    if (*(uint *)(lVar2 + 0x18) < 4)
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x38),uVar3);
    if (*(uint *)(lVar2 + 0x18) < 5)
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke;
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_09f30a38;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x40));
    uVar3 = FUN_094cc6fc(&stack0x00000020,*(undefined8 *)puVar1,0,0);
    if (*(uint *)(lVar2 + 0x18) < 6)
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke;
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x48),uVar3);
    if (*(uint *)(lVar2 + 0x18) < 7)
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke;
    *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)PTR_DAT_09f30a20;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x50));
    uVar3 = FUN_094cc6fc(&stack0x00000030,*(undefined8 *)puVar1,0,0);
    if (*(uint *)(lVar2 + 0x18) < 8)
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke;
    *(undefined8 *)(lVar2 + 0x58) = uVar3;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x58),uVar3);
    if (*(uint *)(lVar2 + 0x18) < 9)
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke;
    *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)PTR_DAT_09f30a30;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x60));
    in_stack_00000008 = *(undefined8 *)PTR_DAT_09f30a10;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = unaff_w19;
    uVar3 = FUN_07a742b0(&stack0x00000008,0);
    if (*(uint *)(lVar2 + 0x18) < 10)
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetLogPrinterDelegate__BeginInvoke;
    *(undefined8 *)(lVar2 + 0x68) = uVar3;
    thunk_FUN_044bb4b4();
    uVar3 = FUN_078b57fc(lVar2,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar3,0);
  }
  if (unaff_w19 == 4) {
    return 1;
  }
  if (unaff_w19 == 3) {
    uStack0000000000000034 = uStack0000000000000030;
    uStack000000000000003c = uStack0000000000000038;
    uVar5 = uStack0000000000000020;
    uVar6 = uStack0000000000000028;
  }
  else {
    if (unaff_w19 != 2) {
      uVar4 = FUN_0775d168(&stack0x00000030,&stack0x00000020,0);
      goto joined_r0x07714650;
    }
    uVar5 = uStack0000000000000024;
    uVar6 = uStack000000000000002c;
  }
  uVar4 = FUN_0775d310(uStack0000000000000034,uStack000000000000003c,uVar5,uVar6,0);
joined_r0x07714650:
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  return 0;
}


