/*
FUNCTION_NAME: FUN_05436594
ENTRY_POINT: 05436594
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_12;ray_or_cast_sink_hits_3;strong_file_logging_hits_2
*/


void FUN_05436594(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((DAT_066d0db1 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_TerrainUtils_TerrainUtility_<>c__DisplayClass2_1_TypeInfo);
    DAT_066d0db1 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_0543c6e4(param_1);
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 < 10) {
    if (iVar2 < 5) {
      if (iVar2 - 1U < 2) {
System_Xml_XmlReaderSettings__get_DtdProcessing:
        uVar7 = FUN_05436d14(param_1);
        local_60._0_8_ = 0;
        local_60._8_8_ = 0;
        FUN_04dd5eb8(local_60,uVar7,0);
      }
      else if (iVar2 == 3) {
        FUN_0543cb74(param_1,*(undefined4 *)(param_1 + 0x108));
        local_60._0_8_ = 0;
        local_60._8_8_ = 0;
        FUN_04dd5ee0(local_60,0);
      }
      else {
        if (iVar2 != 4) goto LAB_054367b8;
        FUN_0543cbec(param_1,*(undefined4 *)(param_1 + 0x108));
        local_60._0_8_ = 0;
        local_60._8_8_ = 0;
        FUN_04dd636c(local_60,0);
      }
    }
    else {
      if (iVar2 - 6U < 3) goto System_Xml_XmlReaderSettings__get_DtdProcessing;
      if (iVar2 != 5) goto LAB_054367b8;
      uVar6 = FUN_0543c8cc(param_1,*(undefined4 *)(param_1 + 0x108));
      uVar9 = uVar6 >> 0x3f;
      uVar8 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar8 = uVar6;
      }
      uVar6 = uVar8 >> 0x20;
System_Xml_XmlReaderSettings__get_CloseInput:
      uStack_48 = 0;
      local_50 = 0;
      FUN_04dd6958(&local_50,uVar8,uVar6,0,uVar9,4,0);
      local_60._8_8_ = uStack_48;
      local_60._0_8_ = local_50;
    }
  }
  else {
    if (0x87 < iVar2) {
      if (2 < iVar2 - 0x88U) {
        if (iVar2 == 0x8b) {
          uVar7 = FUN_0543cb24(param_1);
          local_60._0_8_ = 0;
          local_60._8_8_ = 0;
          FUN_04dd5ed8(local_60,uVar7,0);
          goto LAB_05436708;
        }
LAB_054367b8:
        auVar10 = System_Xml_XmlTextReaderImpl_NodeData__ClearName(param_1);
        if (*(long *)(lVar4 + 0x28) == local_38) {
          uVar7 = thunk_FUN_02ba3594(
                                    UnityEngine_XR_Interaction_Toolkit_UI_TrackedDevicePhysicsRaycaster_RaycastHitArraySegment_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(auVar10._0_8_,uVar7);
        }
        goto LAB_054367ec;
      }
      goto System_Xml_XmlReaderSettings__get_DtdProcessing;
    }
    if (1 < iVar2 - 10U) {
      if (iVar2 == 0x14) {
        uVar5 = FUN_0543c858(param_1,*(undefined4 *)(param_1 + 0x108));
        uVar9 = (ulong)(uVar5 >> 0x1f);
        uVar6 = 0;
        uVar1 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar1 = uVar5;
        }
        uVar8 = (ulong)uVar1;
        goto System_Xml_XmlReaderSettings__get_CloseInput;
      }
      if (iVar2 != 0x87) goto LAB_054367b8;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(param_1 + 0x108);
    if (*(int *)(*(long *)UnityEngine_TerrainUtils_TerrainUtility_<>c__DisplayClass2_1_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0542d7ac(&local_78,uVar7,uVar3,iVar2 == 0x87);
    local_60 = FUN_0542ddac(&local_78);
  }
LAB_05436708:
  auVar10 = local_60;
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
LAB_054367ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar10._0_8_,auVar10._8_8_);
}


