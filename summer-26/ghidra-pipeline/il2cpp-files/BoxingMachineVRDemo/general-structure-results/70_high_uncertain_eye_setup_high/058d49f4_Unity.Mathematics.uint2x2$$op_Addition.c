/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$op_Addition
ENTRY_POINT: 058d49f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint2x2__op_Addition(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  int extraout_w1;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  uint unaff_w20;
  int iVar11;
  ulong unaff_x21;
  long *plVar12;
  int unaff_w22;
  long *unaff_x23;
  ulong uVar13;
  undefined1 auVar14 [16];
  char cStack0000000000000000;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_032de19c(*(undefined8 *)(param_1 + 0x40),param_1 + 0x20,unaff_w22,
               *(undefined8 *)System_Xml_Schema_XmlSchemaElement_TypeInfo);
  lVar5 = *unaff_x23;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar7 == 0) goto LAB_058d4df4;
  if (unaff_w20 < *(uint *)(lVar7 + 0x18)) {
    piVar10 = (int *)(lVar7 + (long)(int)unaff_w20 * 0xb8 + 200);
    uVar13 = 0;
    lVar7 = 0xcc;
    *piVar10 = *piVar10 + -1;
    do {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *unaff_x23;
      }
      puVar3 = OVRPlugin_BodyJointLocation_TypeInfo;
      puVar2 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
      if ((long)*(int *)(*(long *)(lVar5 + 0xb8) + 0x18) <= (long)uVar13) {
        if ((unaff_x21 & 1) != 0) {
          return;
        }
        iVar11 = 0;
        lVar7 = (long)(int)unaff_w20;
        goto LAB_058d4b70;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *unaff_x23;
      }
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
      if (lVar8 == 0) goto LAB_058d4df4;
      if (*(uint *)(lVar8 + 0x18) <= uVar13) break;
      piVar10 = (int *)(lVar8 + lVar7);
      if ((unaff_x21 & 1) == 0) {
        piVar10 = (int *)(lVar8 + lVar7) + -0x20;
      }
      if (unaff_w22 < *piVar10) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *unaff_x23;
        }
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
        if (lVar8 == 0) goto LAB_058d4df4;
        if (*(uint *)(lVar8 + 0x18) <= uVar13) break;
        piVar10 = (int *)(lVar8 + lVar7);
        if ((unaff_x21 & 1) == 0) {
          piVar10 = (int *)(lVar8 + lVar7) + -0x20;
        }
        *piVar10 = *piVar10 + -1;
      }
      uVar13 = uVar13 + 1;
      lVar7 = lVar7 + 0xb8;
    } while( true );
  }
  goto LAB_058d4df8;
LAB_058d4b70:
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *unaff_x23;
    lVar8 = *(long *)(lVar5 + 0xb8);
    iVar1 = *(int *)(lVar8 + 0x48);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *unaff_x23;
      lVar8 = *(long *)(lVar5 + 0xb8);
    }
  }
  else {
    lVar8 = *(long *)(lVar5 + 0xb8);
    iVar1 = *(int *)(lVar8 + 0x48);
  }
  if (iVar1 <= iVar11) {
    lVar9 = *(long *)(lVar8 + 0x30);
    if (lVar9 == 0) goto LAB_058d4df4;
    if (unaff_w20 < *(uint *)(lVar9 + 0x18)) {
      plVar12 = *(long **)(lVar9 + lVar7 * 0xb8 + 0x50);
      if (plVar12 == (long *)0x0) goto LAB_058d4db8;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar8 = *(long *)(*unaff_x23 + 0xb8);
      }
      lVar5 = *(long *)(lVar8 + 0x28);
      if (lVar5 == 0) goto LAB_058d4df4;
      if (unaff_w20 < *(uint *)(lVar5 + 0x18)) {
        auVar14 = FUN_058c51d4(lVar5 + lVar7 * 4 + 0x20);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_03dc64dc(&stack0x00000038,auVar14._0_8_,auVar14._8_8_,
                     *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
        uVar4 = in_stack_00000038;
        lVar5 = *plVar12;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar13 == 0) goto LAB_058d4d24;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_058d4d0c;
      }
    }
    goto LAB_058d4df8;
  }
  FUN_037a47e4(lVar8 + 0x48,iVar11,*(undefined8 *)puVar3);
  lVar5 = *(long *)(*unaff_x23 + 0xb8);
  lVar8 = *(long *)(lVar5 + 0x28);
  if (lVar8 == 0) goto LAB_058d4df4;
  if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_058d4df8;
  if (*(int *)(lVar8 + lVar7 * 4 + 0x20) == extraout_w1) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)(*unaff_x23 + 0xb8);
    }
    lVar5 = FUN_037a47e4(lVar5 + 0x48,iVar11,*(undefined8 *)puVar3);
    if (lVar5 == unaff_x19) {
      lVar5 = *unaff_x23;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *unaff_x23;
      }
      FUN_037a56f8(*(long *)(lVar5 + 0xb8) + 0x48,iVar11,*(undefined8 *)puVar2);
      iVar11 = iVar11 + -1;
    }
  }
  lVar5 = *unaff_x23;
  iVar11 = iVar11 + 1;
  goto LAB_058d4b70;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar10 = piVar10 + 4;
    if (uVar13 == 0) break;
LAB_058d4d0c:
    if (*(long *)(piVar10 + -2) ==
        *(long *)System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo) {
      puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
      goto LAB_058d4d44;
    }
  }
LAB_058d4d24:
  puVar6 = (undefined8 *)
           FUN_02d9a5d4(plVar12,*(long *)
                                 System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo
                        ,3);
LAB_058d4d44:
  (*(code *)*puVar6)(plVar12);
  lVar5 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  if (lVar5 == 0) {
LAB_058d4df4:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (unaff_w20 < *(uint *)(lVar5 + 0x18)) {
    FUN_058c4458(lVar5 + lVar7 * 4 + 0x20);
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


