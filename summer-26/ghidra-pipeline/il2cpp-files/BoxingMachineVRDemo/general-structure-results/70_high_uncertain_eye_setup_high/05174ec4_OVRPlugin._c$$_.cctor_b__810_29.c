/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_29
ENTRY_POINT: 05174ec4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_29(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  uint uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
                    /* catch() { ... } // from try @ 05174e48 with catch @ 05174ec4 */
  lVar5 = FUN_02d60934(*unaff_x23,unaff_w21 << 1);
  puVar3 = PTR_DAT_06782750;
  puVar2 = PTR_DAT_06782748;
  if (0 < unaff_w21) {
    if (unaff_x22 == 0) goto LAB_05175078;
    System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
              (&stack0x00000008);
    uVar9 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar6 = FUN_04b3a824(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar7 = in_stack_00000040, (uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_05173d30(uVar7);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar9 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar5 + (long)(int)(uVar9 - 1) * 8 + 0x20) = uVar7;
      uVar7 = FUN_05173d30(uVar4);
      if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar1 = (long)(int)uVar9;
      uVar9 = uVar9 + 2;
      *(undefined8 *)(lVar5 + lVar1 * 8 + 0x20) = uVar7;
    }
    FUN_04b3a944(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_06763f68;
  FUN_05060724((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x24);
  }
  FUN_051750f4();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  free(unaff_x20);
  if (lVar5 != 0) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar6 = 0;
      uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        __ptr = *(void **)(lVar5 + 0x20 + uVar6 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        free(__ptr);
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    return;
  }
LAB_05175078:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


