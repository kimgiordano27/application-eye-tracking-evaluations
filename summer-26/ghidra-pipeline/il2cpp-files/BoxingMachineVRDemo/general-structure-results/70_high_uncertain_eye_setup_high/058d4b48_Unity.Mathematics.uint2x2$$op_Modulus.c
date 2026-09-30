/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$op_Modulus
ENTRY_POINT: 058d4b48
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint2x2__op_Modulus(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int extraout_w1;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  uint unaff_w20;
  int iVar11;
  ulong unaff_x21;
  long *plVar12;
  int unaff_w22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined1 auVar13 [16];
  char cStack0000000000000000;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = unaff_x25 + 0xb8;
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_1 = *unaff_x23;
      }
      puVar3 = OVRPlugin_BodyJointLocation_TypeInfo;
      puVar2 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
      if ((long)*(int *)(*(long *)(param_1 + 0xb8) + 0x18) <= (long)unaff_x24) {
        if ((unaff_x21 & 1) != 0) {
          return;
        }
        iVar11 = 0;
        lVar6 = (long)(int)unaff_w20;
        goto LAB_058d4b70;
      }
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_1 = *unaff_x23;
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 0x30);
      if (lVar6 == 0) goto LAB_058d4df4;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_058d4df8;
      piVar10 = (int *)(lVar6 + unaff_x25);
      if ((unaff_x21 & 1) == 0) {
        piVar10 = (int *)(lVar6 + unaff_x25) + -0x20;
      }
    } while (*piVar10 <= unaff_w22);
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_1 = *unaff_x23;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 0x30);
    if (lVar6 == 0) goto LAB_058d4df4;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
    piVar10 = (int *)(lVar6 + unaff_x25);
    if ((unaff_x21 & 1) == 0) {
      piVar10 = (int *)(lVar6 + unaff_x25) + -0x20;
    }
    *piVar10 = *piVar10 + -1;
  }
  goto LAB_058d4df8;
LAB_058d4b70:
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    param_1 = *unaff_x23;
    lVar7 = *(long *)(param_1 + 0xb8);
    iVar1 = *(int *)(lVar7 + 0x48);
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_1 = *unaff_x23;
      lVar7 = *(long *)(param_1 + 0xb8);
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0xb8);
    iVar1 = *(int *)(lVar7 + 0x48);
  }
  if (iVar1 <= iVar11) {
    lVar8 = *(long *)(lVar7 + 0x30);
    if (lVar8 == 0) goto LAB_058d4df4;
    if (unaff_w20 < *(uint *)(lVar8 + 0x18)) {
      plVar12 = *(long **)(lVar8 + lVar6 * 0xb8 + 0x50);
      if (plVar12 == (long *)0x0) goto LAB_058d4db8;
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar7 = *(long *)(*unaff_x23 + 0xb8);
      }
      lVar7 = *(long *)(lVar7 + 0x28);
      if (lVar7 == 0) goto LAB_058d4df4;
      if (unaff_w20 < *(uint *)(lVar7 + 0x18)) {
        auVar13 = FUN_058c51d4(lVar7 + lVar6 * 4 + 0x20);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_03dc64dc(&stack0x00000038,auVar13._0_8_,auVar13._8_8_,
                     *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
        uVar4 = in_stack_00000038;
        lVar7 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_058d4d24;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_058d4d0c;
      }
    }
    goto LAB_058d4df8;
  }
  FUN_037a47e4(lVar7 + 0x48,iVar11,*(undefined8 *)puVar3);
  lVar7 = *(long *)(*unaff_x23 + 0xb8);
  lVar8 = *(long *)(lVar7 + 0x28);
  if (lVar8 == 0) goto LAB_058d4df4;
  if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_058d4df8;
  if (*(int *)(lVar8 + lVar6 * 4 + 0x20) == extraout_w1) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar7 = *(long *)(*unaff_x23 + 0xb8);
    }
    lVar7 = FUN_037a47e4(lVar7 + 0x48,iVar11,*(undefined8 *)puVar3);
    if (lVar7 == unaff_x19) {
      lVar7 = *unaff_x23;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar7 = *unaff_x23;
      }
      FUN_037a56f8(*(long *)(lVar7 + 0xb8) + 0x48,iVar11,*(undefined8 *)puVar2);
      iVar11 = iVar11 + -1;
    }
  }
  param_1 = *unaff_x23;
  iVar11 = iVar11 + 1;
  goto LAB_058d4b70;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_058d4d0c:
    if (*(long *)(piVar10 + -2) ==
        *(long *)System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
      goto LAB_058d4d44;
    }
  }
LAB_058d4d24:
  puVar5 = (undefined8 *)
           FUN_02d9a5d4(plVar12,*(long *)
                                 System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo
                        ,3);
LAB_058d4d44:
  (*(code *)*puVar5)(plVar12);
  lVar7 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  if (lVar7 == 0) {
LAB_058d4df4:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (unaff_w20 < *(uint *)(lVar7 + 0x18)) {
    FUN_058c4458(lVar7 + lVar6 * 4 + 0x20);
    cStack0000000000000000 = (char)uVar4;
    if (cStack0000000000000000 != '\0') {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      Unity_Mathematics_uint2__op_Explicit(unaff_w20,0);
    }
LAB_058d4db8:
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_058d3a78(unaff_w20,3);
    return;
  }
LAB_058d4df8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


