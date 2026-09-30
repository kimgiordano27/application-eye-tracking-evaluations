/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$Invoke
ENTRY_POINT: 065c5b10
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
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__Invoke(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar9;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 065c5b00 with catch @ 065c5b10
                        */
  plVar4 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(param_1 + 0x28));
  if (plVar4 != (long *)0x0) {
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    piVar5 = (int *)thunk_FUN_040b5044();
    puVar3 = PTR_DAT_092bb5b0;
    iVar2 = *piVar5;
    if (iVar2 - 9U < 0xfffffff6) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar9 = *unaff_x20;
      uStack0000000000000014 = *(undefined8 *)((long)unaff_x20 + 0x14);
      uStack0000000000000008 = (undefined4)unaff_x20[1];
      uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      uVar7 = thunk_FUN_040b4efc();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      in_stack_00000028 = uStack0000000000000008;
      uStack0000000000000034 = uStack0000000000000014;
      uStack000000000000002c = uStack000000000000000c;
      in_stack_00000030 = uStack0000000000000010;
      in_stack_00000020 = uVar9;
      FUN_06630e98(uVar7,&stack0x00000020,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x58));
    }
    else {
      lVar6 = *(long *)PTR_DAT_092bb5b0;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar6 = *(long *)puVar3;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_065c642c;
      uVar1 = iVar2 + 1;
      if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar8 = *(long *)(unaff_x19 + 0x20);
      uVar7 = *(undefined8 *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_040b1acc();
      }
      uVar7 = FUN_0508a104(uVar7,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x50));
    }
    return uVar7;
  }
LAB_065c642c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


