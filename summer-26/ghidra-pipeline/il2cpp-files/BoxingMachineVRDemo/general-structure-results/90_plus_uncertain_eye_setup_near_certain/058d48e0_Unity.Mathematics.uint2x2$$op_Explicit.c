/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$op_Explicit
ENTRY_POINT: 058d48e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void Unity_Mathematics_uint2x2__op_Explicit(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  int extraout_w1;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  uint unaff_w20;
  ulong unaff_x21;
  long *plVar12;
  long unaff_x22;
  long *unaff_x23;
  ulong uVar13;
  undefined1 auVar14 [16];
  char cStack0000000000000000;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(System_Xml_Schema_XmlSchemaElement_TypeInfo);
    FUN_02d6084c(System_Xml_Schema_XmlSchemaDocumentation_TypeInfo);
    FUN_02d6084c(OVRPlugin_<>c_TypeInfo);
    FUN_02d6084c(System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo);
    FUN_02d6084c(OVRPlugin_<>c__DisplayClass531_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_BodyJointLocation_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(System_Xml_XmlDictionary_TypeInfo);
    FUN_02d6084c(Unity_Collections_AllocatorManager_Managed_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xaf8) = 1;
  }
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *unaff_x23;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  if ((unaff_x21 & 1) == 0) {
    if (*(long *)(lVar6 + 0x30) == 0) goto LAB_058d4df4;
    if (*(uint *)(*(long *)(lVar6 + 0x30) + 0x18) <= unaff_w20) goto LAB_058d4df8;
    iVar5 = FUN_032dfff4(*(undefined8 *)(lVar6 + 0x38));
  }
  else {
    iVar5 = FUN_032dff5c(*(undefined8 *)(lVar6 + 0x40));
  }
  if (iVar5 == -1) {
    return;
  }
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *unaff_x23;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  if ((unaff_x21 & 1) == 0) {
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
    FUN_032de19c(*(undefined8 *)(lVar6 + 0x38),lVar6 + 0x1c,iVar5,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaElement_TypeInfo);
    lVar6 = *unaff_x23;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar8 == 0) goto LAB_058d4df4;
    if (unaff_w20 < *(uint *)(lVar8 + 0x18)) {
      piVar9 = (int *)(lVar8 + (long)(int)unaff_w20 * 0xb8 + 0x48);
      goto LAB_058d4a8c;
    }
  }
  else {
    FUN_032de19c(*(undefined8 *)(lVar6 + 0x40),lVar6 + 0x20,iVar5,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaElement_TypeInfo);
    lVar6 = *unaff_x23;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar8 == 0) {
LAB_058d4df4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (unaff_w20 < *(uint *)(lVar8 + 0x18)) {
      piVar9 = (int *)(lVar8 + (long)(int)unaff_w20 * 0xb8 + 200);
LAB_058d4a8c:
      uVar13 = 0;
      lVar8 = 0xcc;
      *piVar9 = *piVar9 + -1;
      do {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar6 = *unaff_x23;
        }
        puVar3 = OVRPlugin_BodyJointLocation_TypeInfo;
        puVar2 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
        if ((long)*(int *)(*(long *)(lVar6 + 0xb8) + 0x18) <= (long)uVar13) {
          if ((unaff_x21 & 1) != 0) {
            return;
          }
          iVar5 = 0;
          lVar8 = (long)(int)unaff_w20;
          goto LAB_058d4b70;
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar6 = *unaff_x23;
        }
        lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
        if (lVar10 == 0) goto LAB_058d4df4;
        if (*(uint *)(lVar10 + 0x18) <= uVar13) break;
        piVar9 = (int *)(lVar10 + lVar8);
        if ((unaff_x21 & 1) == 0) {
          piVar9 = (int *)(lVar10 + lVar8) + -0x20;
        }
        if (iVar5 < *piVar9) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar6 = *unaff_x23;
          }
          lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
          if (lVar10 == 0) goto LAB_058d4df4;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) break;
          piVar9 = (int *)(lVar10 + lVar8);
          if ((unaff_x21 & 1) == 0) {
            piVar9 = (int *)(lVar10 + lVar8) + -0x20;
          }
          *piVar9 = *piVar9 + -1;
        }
        uVar13 = uVar13 + 1;
        lVar8 = lVar8 + 0xb8;
      } while( true );
    }
  }
  goto LAB_058d4df8;
LAB_058d4b70:
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *unaff_x23;
    lVar10 = *(long *)(lVar6 + 0xb8);
    iVar1 = *(int *)(lVar10 + 0x48);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *unaff_x23;
      lVar10 = *(long *)(lVar6 + 0xb8);
    }
  }
  else {
    lVar10 = *(long *)(lVar6 + 0xb8);
    iVar1 = *(int *)(lVar10 + 0x48);
  }
  if (iVar1 <= iVar5) {
    lVar11 = *(long *)(lVar10 + 0x30);
    if (lVar11 == 0) goto LAB_058d4df4;
    if (unaff_w20 < *(uint *)(lVar11 + 0x18)) {
      plVar12 = *(long **)(lVar11 + lVar8 * 0xb8 + 0x50);
      if (plVar12 == (long *)0x0) goto LAB_058d4db8;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar10 = *(long *)(*unaff_x23 + 0xb8);
      }
      lVar6 = *(long *)(lVar10 + 0x28);
      if (lVar6 == 0) goto LAB_058d4df4;
      if (unaff_w20 < *(uint *)(lVar6 + 0x18)) {
        auVar14 = FUN_058c51d4(lVar6 + lVar8 * 4 + 0x20);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_03dc64dc(&stack0x00000038,auVar14._0_8_,auVar14._8_8_,
                     *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
        uVar4 = in_stack_00000038;
        lVar6 = *plVar12;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 == 0) goto LAB_058d4d24;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_058d4d0c;
      }
    }
    goto LAB_058d4df8;
  }
  FUN_037a47e4(lVar10 + 0x48,iVar5,*(undefined8 *)puVar3);
  lVar6 = *(long *)(*unaff_x23 + 0xb8);
  lVar10 = *(long *)(lVar6 + 0x28);
  if (lVar10 == 0) goto LAB_058d4df4;
  if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_058d4df8;
  if (*(int *)(lVar10 + lVar8 * 4 + 0x20) == extraout_w1) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)(*unaff_x23 + 0xb8);
    }
    lVar6 = FUN_037a47e4(lVar6 + 0x48,iVar5,*(undefined8 *)puVar3);
    if (lVar6 == unaff_x19) {
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *unaff_x23;
      }
      FUN_037a56f8(*(long *)(lVar6 + 0xb8) + 0x48,iVar5,*(undefined8 *)puVar2);
      iVar5 = iVar5 + -1;
    }
  }
  lVar6 = *unaff_x23;
  iVar5 = iVar5 + 1;
  goto LAB_058d4b70;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar9 = piVar9 + 4;
    if (uVar13 == 0) break;
LAB_058d4d0c:
    if (*(long *)(piVar9 + -2) ==
        *(long *)System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo) {
      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
      goto LAB_058d4d44;
    }
  }
LAB_058d4d24:
  puVar7 = (undefined8 *)
           FUN_02d9a5d4(plVar12,*(long *)
                                 System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo
                        ,3);
LAB_058d4d44:
  (*(code *)*puVar7)(plVar12);
  lVar6 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  if (lVar6 == 0) goto LAB_058d4df4;
  if (unaff_w20 < *(uint *)(lVar6 + 0x18)) {
    FUN_058c4458(lVar6 + lVar8 * 4 + 0x20);
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


