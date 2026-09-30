/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$op_Division
ENTRY_POINT: 058d4a94
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint2x2__op_Division(int *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int extraout_w1;
  long lVar6;
  int in_w9;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  uint unaff_w20;
  int iVar10;
  ulong unaff_x21;
  long *plVar11;
  int unaff_w22;
  long *unaff_x23;
  ulong unaff_x24;
  long lVar12;
  undefined1 auVar13 [16];
  char cStack0000000000000000;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  lVar12 = 0xcc;
  *param_1 = in_w9 + -1;
  do {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_2 = *unaff_x23;
    }
    puVar3 = OVRPlugin_BodyJointLocation_TypeInfo;
    puVar2 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
    if ((long)*(int *)(*(long *)(param_2 + 0xb8) + 0x18) <= (long)unaff_x24) {
      if ((unaff_x21 & 1) != 0) {
        return;
      }
      iVar10 = 0;
      lVar12 = (long)(int)unaff_w20;
      break;
    }
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_2 = *unaff_x23;
    }
    lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
    if (lVar6 == 0) goto LAB_058d4df4;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_058d4df8;
    piVar9 = (int *)(lVar6 + lVar12);
    if ((unaff_x21 & 1) == 0) {
      piVar9 = (int *)(lVar6 + lVar12) + -0x20;
    }
    if (unaff_w22 < *piVar9) {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_2 = *unaff_x23;
      }
      lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
      if (lVar6 == 0) goto LAB_058d4df4;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_058d4df8;
      piVar9 = (int *)(lVar6 + lVar12);
      if ((unaff_x21 & 1) == 0) {
        piVar9 = (int *)(lVar6 + lVar12) + -0x20;
      }
      *piVar9 = *piVar9 + -1;
    }
    unaff_x24 = unaff_x24 + 1;
    lVar12 = lVar12 + 0xb8;
  } while( true );
LAB_058d4b70:
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    param_2 = *unaff_x23;
    lVar6 = *(long *)(param_2 + 0xb8);
    iVar1 = *(int *)(lVar6 + 0x48);
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_2 = *unaff_x23;
      lVar6 = *(long *)(param_2 + 0xb8);
    }
  }
  else {
    lVar6 = *(long *)(param_2 + 0xb8);
    iVar1 = *(int *)(lVar6 + 0x48);
  }
  if (iVar1 <= iVar10) {
    lVar7 = *(long *)(lVar6 + 0x30);
    if (lVar7 == 0) goto LAB_058d4df4;
    if (unaff_w20 < *(uint *)(lVar7 + 0x18)) {
      plVar11 = *(long **)(lVar7 + lVar12 * 0xb8 + 0x50);
      if (plVar11 == (long *)0x0) goto LAB_058d4db8;
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)(*unaff_x23 + 0xb8);
      }
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 == 0) goto LAB_058d4df4;
      if (unaff_w20 < *(uint *)(lVar6 + 0x18)) {
        auVar13 = FUN_058c51d4(lVar6 + lVar12 * 4 + 0x20);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_03dc64dc(&stack0x00000038,auVar13._0_8_,auVar13._8_8_,
                     *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
        uVar4 = in_stack_00000038;
        lVar6 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_058d4d24;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_058d4d0c;
      }
    }
    goto LAB_058d4df8;
  }
  FUN_037a47e4(lVar6 + 0x48,iVar10,*(undefined8 *)puVar3);
  lVar6 = *(long *)(*unaff_x23 + 0xb8);
  lVar7 = *(long *)(lVar6 + 0x28);
  if (lVar7 == 0) goto LAB_058d4df4;
  if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_058d4df8;
  if (*(int *)(lVar7 + lVar12 * 4 + 0x20) == extraout_w1) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)(*unaff_x23 + 0xb8);
    }
    lVar6 = FUN_037a47e4(lVar6 + 0x48,iVar10,*(undefined8 *)puVar3);
    if (lVar6 == unaff_x19) {
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *unaff_x23;
      }
      FUN_037a56f8(*(long *)(lVar6 + 0xb8) + 0x48,iVar10,*(undefined8 *)puVar2);
      iVar10 = iVar10 + -1;
    }
  }
  param_2 = *unaff_x23;
  iVar10 = iVar10 + 1;
  goto LAB_058d4b70;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_058d4d0c:
    if (*(long *)(piVar9 + -2) ==
        *(long *)System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
      goto LAB_058d4d44;
    }
  }
LAB_058d4d24:
  puVar5 = (undefined8 *)
           FUN_02d9a5d4(plVar11,*(long *)
                                 System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo
                        ,3);
LAB_058d4d44:
  (*(code *)*puVar5)(plVar11);
  lVar6 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  if (lVar6 == 0) {
LAB_058d4df4:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (unaff_w20 < *(uint *)(lVar6 + 0x18)) {
    FUN_058c4458(lVar6 + lVar12 * 4 + 0x20);
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


