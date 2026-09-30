/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_27
ENTRY_POINT: 05174dec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_27(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  long *unaff_x24;
  uint uVar11;
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
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067829b0);
                    /* try { // try from 05174e08 to 05274e0b has its CatchHandler @ 05174ebc */
    FUN_02d6084c(PTR_DAT_06782740);
    FUN_02d6084c(PTR_DAT_06782ae0);
                    /* try { // try from 05174e24 to 05274e2b has its CatchHandler @ 05174ed4 */
    FUN_02d6084c(PTR_DAT_06782748);
    FUN_02d6084c(PTR_DAT_06782750);
                    /* try { // try from 05174e3c to 05274e3f has its CatchHandler @ 05174ecc */
    FUN_02d6084c(PTR_DAT_06782758);
                    /* try { // try from 05174e48 to 05274e53 has its CatchHandler @ 05174ec4 */
    FUN_02d6084c(PTR_DAT_0677bea8);
                    /* try { // try from 05174e54 to 05274e9b has its CatchHandler @ 05174c98 */
    FUN_02d6084c(PTR_DAT_06764050);
    FUN_02d6084c(PTR_DAT_06764020);
    FUN_02d6084c(PTR_DAT_06763f68);
    *(undefined1 *)(unaff_x20 + 0xfd1) = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar2 = PTR_DAT_0677bea8;
  pvVar6 = (void *)FUN_05173d30(param_2);
  if (param_3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_048953c0(param_3,*(undefined8 *)PTR_DAT_06782ae0);
  }
  lVar7 = FUN_02d60934(*(undefined8 *)puVar2,iVar5 << 1);
  puVar3 = PTR_DAT_06782750;
  puVar2 = PTR_DAT_06782748;
  if (0 < iVar5) {
    if (param_3 == 0) goto LAB_05175078;
    System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
              (&stack0x00000008,param_3,*(undefined8 *)PTR_DAT_06782740);
    uVar11 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar8 = FUN_04b3a824(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar9 = in_stack_00000040, (uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_05173d30(uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + (long)(int)(uVar11 - 1) * 8 + 0x20) = uVar9;
      uVar9 = FUN_05173d30(uVar4);
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar1 = (long)(int)uVar11;
      uVar11 = uVar11 + 2;
      *(undefined8 *)(lVar7 + lVar1 * 8 + 0x20) = uVar9;
    }
    FUN_04b3a944(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_06763f68;
  uVar9 = FUN_05060724((long)iVar5,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x24);
  }
  FUN_051750f4(pvVar6,lVar7,uVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  free(pvVar6);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        pvVar6 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        free(pvVar6);
        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_05175078:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


