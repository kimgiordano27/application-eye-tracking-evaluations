/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$BeginInvoke
ENTRY_POINT: 065c6244
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__BeginInvoke
          (long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x58) + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0();
  }
  plVar1 = (long *)thunk_FUN_040b5044();
  if (*plVar1 == 0) {
LAB_065c6318:
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
    }
    uVar6 = FUN_0768890c(uVar6,0);
    uVar3 = FUN_0768890c(*(long *)(unaff_x22 + 0x60) + 0x20,0);
    uVar4 = FUN_07691f40(uVar6,uVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000020 = *unaff_x20;
      uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28),&stack0x00000020);
      puVar5 = (undefined8 *)FUN_03b090bc(uVar6,*(undefined8 *)(unaff_x22 + 0x60));
      uVar4 = FUN_076d50e4(0,*puVar5,0);
      if ((uVar4 & 1) != 0) goto LAB_065c6318;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar6 = *unaff_x20;
    uStack0000000000000014 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uStack0000000000000008 = (undefined4)unaff_x20[1];
    uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
    uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar3 = thunk_FUN_040b4efc();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
    }
    uStack0000000000000028 = uStack0000000000000008;
    uStack0000000000000034 = uStack0000000000000014;
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000030 = uStack0000000000000010;
    in_stack_00000020 = uVar6;
    FUN_06630e98(uVar3,&stack0x00000020,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x58));
  }
  return uVar3;
}


