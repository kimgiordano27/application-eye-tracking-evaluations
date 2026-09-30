/*
FUNCTION_NAME: System.Xml.XmlReaderSettings$$get_IgnoreWhitespace
ENTRY_POINT: 054365b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_12;ray_or_cast_sink_hits_3;strong_file_logging_hits_2
*/


void System_Xml_XmlReaderSettings__get_IgnoreWhitespace(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long lStack0000000000000048;
  
  lStack0000000000000048 = param_1;
  if ((*(byte *)(unaff_x20 + 0xdb1) & 1) == 0) {
    FUN_02b3c81c(UnityEngine_TerrainUtils_TerrainUtility_<>c__DisplayClass2_1_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xdb1) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_0543c6e4();
  iVar2 = *(int *)(unaff_x19 + 0x98);
  if (iVar2 < 10) {
    if (iVar2 < 5) {
      if (iVar2 - 1U < 2) {
System_Xml_XmlReaderSettings__get_DtdProcessing:
        uVar6 = FUN_05436d14();
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        FUN_04dd5eb8(&stack0x00000020,uVar6,0);
      }
      else if (iVar2 == 3) {
        FUN_0543cb74();
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        FUN_04dd5ee0(&stack0x00000020,0);
      }
      else {
        if (iVar2 != 4) goto LAB_054367b8;
        FUN_0543cbec();
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        FUN_04dd636c(&stack0x00000020,0);
      }
    }
    else {
      if (iVar2 - 6U < 3) goto System_Xml_XmlReaderSettings__get_DtdProcessing;
      if (iVar2 != 5) goto LAB_054367b8;
      uVar5 = FUN_0543c8cc();
      uVar8 = uVar5 >> 0x3f;
      uVar7 = -uVar5;
      if (-1 < (long)uVar5) {
        uVar7 = uVar5;
      }
      uVar5 = uVar7 >> 0x20;
System_Xml_XmlReaderSettings__get_CloseInput:
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_04dd6958(&stack0x00000030,uVar7,uVar5,0,uVar8,4,0);
      in_stack_00000028 = in_stack_00000038;
      in_stack_00000020 = in_stack_00000030;
    }
  }
  else {
    if (0x87 < iVar2) {
      if (2 < iVar2 - 0x88U) {
        if (iVar2 == 0x8b) {
          uVar6 = FUN_0543cb24();
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          FUN_04dd5ed8(&stack0x00000020,uVar6,0);
          goto LAB_05436708;
        }
LAB_054367b8:
        auVar9 = System_Xml_XmlTextReaderImpl_NodeData__ClearName();
        if (*(long *)(unaff_x21 + 0x28) == lStack0000000000000048) {
          uVar6 = thunk_FUN_02ba3594(
                                    UnityEngine_XR_Interaction_Toolkit_UI_TrackedDevicePhysicsRaycaster_RaycastHitArraySegment_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(auVar9._0_8_,uVar6);
        }
        goto LAB_054367ec;
      }
      goto System_Xml_XmlReaderSettings__get_DtdProcessing;
    }
    if (1 < iVar2 - 10U) {
      if (iVar2 == 0x14) {
        uVar4 = FUN_0543c858();
        uVar8 = (ulong)(uVar4 >> 0x1f);
        uVar5 = 0;
        uVar1 = -uVar4;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        uVar7 = (ulong)uVar1;
        goto System_Xml_XmlReaderSettings__get_CloseInput;
      }
      if (iVar2 != 0x87) goto LAB_054367b8;
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar3 = *(undefined4 *)(unaff_x19 + 0x108);
    if (*(int *)(*(long *)UnityEngine_TerrainUtils_TerrainUtility_<>c__DisplayClass2_1_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0542d7ac(&stack0x00000008,uVar6,uVar3,iVar2 == 0x87);
    _in_stack_00000020 = FUN_0542ddac(&stack0x00000008);
  }
LAB_05436708:
  auVar9 = _in_stack_00000020;
  if (*(long *)(unaff_x21 + 0x28) == lStack0000000000000048) {
    return;
  }
LAB_054367ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar9._0_8_,auVar9._8_8_);
}


