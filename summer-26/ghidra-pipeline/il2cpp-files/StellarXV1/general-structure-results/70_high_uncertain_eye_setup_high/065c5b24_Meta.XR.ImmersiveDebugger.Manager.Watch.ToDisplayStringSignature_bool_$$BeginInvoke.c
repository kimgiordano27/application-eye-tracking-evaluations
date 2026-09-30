/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$BeginInvoke
ENTRY_POINT: 065c5b24
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__BeginInvoke
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  
  if (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0();
  }
  piVar4 = (int *)thunk_FUN_040b5044();
  puVar3 = PTR_DAT_092bb5b0;
  iVar2 = *piVar4;
  if (iVar2 - 9U < 0xfffffff6) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar8 = *unaff_x20;
    uStack0000000000000014 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uStack0000000000000008 = (undefined4)unaff_x20[1];
    uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
    uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar6 = thunk_FUN_040b4efc();
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    in_stack_00000028 = uStack0000000000000008;
    uStack0000000000000034 = uStack0000000000000014;
    uStack000000000000002c = uStack000000000000000c;
    in_stack_00000030 = uStack0000000000000010;
    in_stack_00000020 = uVar8;
    FUN_06630e98(uVar6,&stack0x00000020,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x58));
  }
  else {
    lVar5 = *(long *)PTR_DAT_092bb5b0;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *(long *)puVar3;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = iVar2 + 1;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar6 = *(undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_040b1acc();
    }
    uVar6 = FUN_0508a104(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x50));
  }
  return uVar6;
}


