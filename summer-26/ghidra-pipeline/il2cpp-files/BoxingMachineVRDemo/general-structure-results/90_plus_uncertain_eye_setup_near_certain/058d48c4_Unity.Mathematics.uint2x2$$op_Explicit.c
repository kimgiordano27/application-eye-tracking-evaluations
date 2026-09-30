/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$op_Explicit
ENTRY_POINT: 058d48c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void Unity_Mathematics_uint2x2__op_Explicit(uint param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  int extraout_w1;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  char cStack0000000000000000;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar2 = PTR_DAT_06767838;
  if ((DAT_06b80af8 & 1) == 0) {
    FUN_02d6084c(System_Xml_Schema_XmlSchemaElement_TypeInfo);
    FUN_02d6084c(System_Xml_Schema_XmlSchemaDocumentation_TypeInfo);
    FUN_02d6084c(OVRPlugin_<>c_TypeInfo);
    FUN_02d6084c(System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo);
    FUN_02d6084c(OVRPlugin_<>c__DisplayClass531_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_BodyJointLocation_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(System_Xml_XmlDictionary_TypeInfo);
    FUN_02d6084c(Unity_Collections_AllocatorManager_Managed_TypeInfo);
    DAT_06b80af8 = 1;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(lVar7 + 0xb8);
  if ((param_3 & 1) == 0) {
    lVar9 = *(long *)(lVar7 + 0x30);
    if (lVar9 == 0) goto LAB_058d4df4;
    if (*(uint *)(lVar9 + 0x18) <= param_1) goto LAB_058d4df8;
    lVar9 = lVar9 + (long)(int)param_1 * 0xb8;
    iVar6 = FUN_032dfff4(*(undefined8 *)(lVar7 + 0x38),param_2,*(undefined4 *)(lVar9 + 0x4c),
                         *(undefined4 *)(lVar9 + 0x48),*(undefined8 *)OVRPlugin_<>c_TypeInfo);
  }
  else {
    iVar6 = FUN_032dff5c(*(undefined8 *)(lVar7 + 0x40),param_2,*(undefined4 *)(lVar7 + 0x20),
                         *(undefined8 *)System_Xml_Schema_XmlSchemaDocumentation_TypeInfo);
  }
  if (iVar6 == -1) {
    return;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(lVar7 + 0xb8);
  if ((param_3 & 1) == 0) {
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
    FUN_032de19c(*(undefined8 *)(lVar7 + 0x38),lVar7 + 0x1c,iVar6,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaElement_TypeInfo);
    lVar7 = *(long *)puVar2;
    lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
    if (lVar9 == 0) goto LAB_058d4df4;
    if (param_1 < *(uint *)(lVar9 + 0x18)) {
      piVar10 = (int *)(lVar9 + (long)(int)param_1 * 0xb8 + 0x48);
      goto LAB_058d4a8c;
    }
  }
  else {
    FUN_032de19c(*(undefined8 *)(lVar7 + 0x40),lVar7 + 0x20,iVar6,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaElement_TypeInfo);
    lVar7 = *(long *)puVar2;
    lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
    if (lVar9 == 0) {
LAB_058d4df4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (param_1 < *(uint *)(lVar9 + 0x18)) {
      piVar10 = (int *)(lVar9 + (long)(int)param_1 * 0xb8 + 200);
LAB_058d4a8c:
      uVar14 = 0;
      lVar9 = 0xcc;
      *piVar10 = *piVar10 + -1;
      do {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar7 = *(long *)puVar2;
        }
        puVar4 = OVRPlugin_BodyJointLocation_TypeInfo;
        puVar3 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
        if ((long)*(int *)(*(long *)(lVar7 + 0xb8) + 0x18) <= (long)uVar14) {
          if ((param_3 & 1) != 0) {
            return;
          }
          iVar6 = 0;
          lVar9 = (long)(int)param_1;
          goto LAB_058d4b70;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar7 = *(long *)puVar2;
        }
        lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
        if (lVar11 == 0) goto LAB_058d4df4;
        if (*(uint *)(lVar11 + 0x18) <= uVar14) break;
        piVar10 = (int *)(lVar11 + lVar9);
        if ((param_3 & 1) == 0) {
          piVar10 = (int *)(lVar11 + lVar9) + -0x20;
        }
        if (iVar6 < *piVar10) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar7 = *(long *)puVar2;
          }
          lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
          if (lVar11 == 0) goto LAB_058d4df4;
          if (*(uint *)(lVar11 + 0x18) <= uVar14) break;
          piVar10 = (int *)(lVar11 + lVar9);
          if ((param_3 & 1) == 0) {
            piVar10 = (int *)(lVar11 + lVar9) + -0x20;
          }
          *piVar10 = *piVar10 + -1;
        }
        uVar14 = uVar14 + 1;
        lVar9 = lVar9 + 0xb8;
      } while( true );
    }
  }
  goto LAB_058d4df8;
LAB_058d4b70:
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar7 = *(long *)puVar2;
    lVar11 = *(long *)(lVar7 + 0xb8);
    iVar1 = *(int *)(lVar11 + 0x48);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar7 = *(long *)puVar2;
      lVar11 = *(long *)(lVar7 + 0xb8);
    }
  }
  else {
    lVar11 = *(long *)(lVar7 + 0xb8);
    iVar1 = *(int *)(lVar11 + 0x48);
  }
  if (iVar1 <= iVar6) {
    lVar12 = *(long *)(lVar11 + 0x30);
    if (lVar12 == 0) goto LAB_058d4df4;
    if (param_1 < *(uint *)(lVar12 + 0x18)) {
      plVar13 = *(long **)(lVar12 + lVar9 * 0xb8 + 0x50);
      if (plVar13 == (long *)0x0) goto LAB_058d4db8;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      lVar7 = *(long *)(lVar11 + 0x28);
      if (lVar7 == 0) goto LAB_058d4df4;
      if (param_1 < *(uint *)(lVar7 + 0x18)) {
        auVar15 = FUN_058c51d4(lVar7 + lVar9 * 4 + 0x20);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_03dc64dc(&stack0x00000038,auVar15._0_8_,auVar15._8_8_,
                     *(undefined8 *)System_Xml_XmlDictionary_TypeInfo);
        uVar5 = in_stack_00000038;
        lVar7 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar14 == 0) goto LAB_058d4d24;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_058d4d0c;
      }
    }
    goto LAB_058d4df8;
  }
  FUN_037a47e4(lVar11 + 0x48,iVar6,*(undefined8 *)puVar4);
  lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
  lVar11 = *(long *)(lVar7 + 0x28);
  if (lVar11 == 0) goto LAB_058d4df4;
  if (*(uint *)(lVar11 + 0x18) <= param_1) goto LAB_058d4df8;
  if (*(int *)(lVar11 + lVar9 * 4 + 0x20) == extraout_w1) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    lVar7 = FUN_037a47e4(lVar7 + 0x48,iVar6,*(undefined8 *)puVar4);
    if (lVar7 == param_2) {
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar7 = *(long *)puVar2;
      }
      FUN_037a56f8(*(long *)(lVar7 + 0xb8) + 0x48,iVar6,*(undefined8 *)puVar3);
      iVar6 = iVar6 + -1;
    }
  }
  lVar7 = *(long *)puVar2;
  iVar6 = iVar6 + 1;
  goto LAB_058d4b70;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar10 = piVar10 + 4;
    if (uVar14 == 0) break;
LAB_058d4d0c:
    if (*(long *)(piVar10 + -2) ==
        *(long *)System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo) {
      puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
      goto LAB_058d4d44;
    }
  }
LAB_058d4d24:
  puVar8 = (undefined8 *)
           FUN_02d9a5d4(plVar13,*(long *)
                                 System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo
                        ,3);
LAB_058d4d44:
  (*(code *)*puVar8)(plVar13);
  lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
  if (lVar7 == 0) goto LAB_058d4df4;
  if (param_1 < *(uint *)(lVar7 + 0x18)) {
    FUN_058c4458(lVar7 + lVar9 * 4 + 0x20);
    cStack0000000000000000 = (char)uVar5;
    if (cStack0000000000000000 != '\0') {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      Unity_Mathematics_uint2__op_Explicit(param_1,0);
    }
LAB_058d4db8:
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_058d3a78(param_1,3,param_2);
    return;
  }
LAB_058d4df8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


