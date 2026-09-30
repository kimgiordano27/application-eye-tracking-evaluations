/*
FUNCTION_NAME: FUN_03120d28
ENTRY_POINT: 03120d28
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03120d28(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_34;
  
  if ((DAT_04531fab & 1) == 0) {
    FUN_01c5d288(Oculus_Platform_Models_UserReportID_TypeInfo);
    FUN_01c5d288(Unity_Services_Core_Scheduler_Internal_UtcTimeProvider_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_Utilities_TypeInfo);
    FUN_01c5d288(Unity_Services_Core_Device_UnityAnalyticsIdentifier_TypeInfo);
    FUN_01c5d288(PhotonPlayerHealth_TypeInfo);
    FUN_01c5d288(Photon_Realtime_PhotonPortDefinition_TypeInfo);
    FUN_01c5d288(PhotonRespawnManager_TypeInfo);
    FUN_01c5d288(VoxelBusters_CoreLibrary_UnityPackageDefinition_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_UIR_Utility_TypeInfo);
    FUN_01c5d288(UnityEngine_UI_Toggle_TypeInfo);
    FUN_01c5d288(System_Xml_TextUtf8RawTextWriter_TypeInfo);
    FUN_01c5d288(PhotonRoomState_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_UtilityUnitySettings_TypeInfo);
    DAT_04531fab = 1;
  }
  puVar2 = Unity_Services_Core_Device_UnityAnalyticsIdentifier_TypeInfo;
  puVar1 = System_Xml_TextUtf8RawTextWriter_TypeInfo;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  lVar10 = *(long *)(param_1 + 10);
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      local_50 = ZEXT816(0);
      goto System_Reflection_RuntimePropertyInfo__get_Module;
    }
    if (*(int *)(*(long *)System_Xml_TextUtf8RawTextWriter_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04532013 == '\0') {
      FUN_01c5d288(System_Xml_TextUtf8RawTextWriter_TypeInfo);
      DAT_04532013 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar6 = FUN_03113188(lVar4,*(undefined8 *)(param_1 + 8),0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(uVar6,uVar6);
    }
    lVar4 = FUN_0311f694(lVar10,uVar6,*(undefined8 *)(param_1 + 0xc));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    local_50 = FUN_0334498c(lVar4,0,0);
    uVar8 = FUN_03201e70(local_50,0);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_021cedf8(param_1 + 2,local_50,param_1,
                   *(undefined8 *)Unity_Services_Core_Scheduler_Internal_UtcTimeProvider_TypeInfo);
      return;
    }
  }
  FUN_03201ea0(local_50,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar4 = FUN_0312033c(lVar10,*(undefined8 *)(param_1 + 0xc));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  local_60 = FUN_025a49c4(lVar4,0,*(undefined8 *)PhotonRoomState_TypeInfo);
  uVar8 = FUN_0282d218(local_60,*(undefined8 *)PhotonRespawnManager_TypeInfo);
  if ((uVar8 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x14) = local_60;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_021cb5cc(param_1 + 2,local_60,param_1,
                 *(undefined8 *)Oculus_Platform_Models_UserReportID_TypeInfo);
    return;
  }
System_Reflection_RuntimePropertyInfo__get_Module:
  plVar3 = (long *)FUN_0282d24c(local_60,*(undefined8 *)
                                          Photon_Realtime_PhotonPortDefinition_TypeInfo);
  puVar1 = UnityEngine_UIElements_UIR_Utility_TypeInfo;
  if ((plVar3 == (long *)0x0) || (*plVar3 != *(long *)UnityEngine_UI_Toggle_TypeInfo)) {
    lVar10 = thunk_FUN_01c273e8(System_Diagnostics_TraceListenerCollection_TypeInfo);
    if (plVar3 == (long *)0x0) {
      thunk_FUN_01c273e8(TMPro_TMP_Glyph_TypeInfo);
      uVar6 = thunk_FUN_01c496e0();
      uVar11 = thunk_FUN_01c273e8(System_Linq_Expressions_Utils_TypeInfo);
      FUN_0311d190(uVar6,uVar11,0);
      uVar11 = thunk_FUN_01c273e8(System_Security_Cryptography_Utils_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar11);
    }
    if (*plVar3 != lVar10) {
      uVar6 = thunk_FUN_01c273e8(UnityEngine_UIElements_UxmlEnumeration_TypeInfo);
      uVar6 = System_Convert__ToSingle(uVar6,plVar3,0);
      thunk_FUN_01c273e8(PTR_DAT_04237cd0);
      uVar11 = thunk_FUN_01c496e0();
      FUN_032d1aa4(uVar11,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(System_Security_Cryptography_Utils_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar11,uVar6);
    }
    thunk_FUN_01c273e8(PTR_DAT_04230a40);
    uVar6 = thunk_FUN_01c496e0();
    uVar11 = thunk_FUN_01c273e8(UnityEngine_ProBuilder_UvUnwrapping_TypeInfo);
    FUN_032cd310(uVar6,uVar11,0);
    uVar11 = thunk_FUN_01c273e8(System_Security_Cryptography_Utils_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar11);
  }
  lVar4 = *(long *)UnityEngine_UIElements_UIR_Utility_TypeInfo;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *(long *)puVar1;
  }
  plVar12 = *(long **)(param_1 + 0xe);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar7 = *plVar12;
  lVar4 = **(long **)(lVar4 + 0xb8);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)VoxelBusters_CoreLibrary_UnityPackageDefinition_TypeInfo) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto FUN_03121028;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01c72498(plVar12,*(long *)VoxelBusters_CoreLibrary_UnityPackageDefinition_TypeInfo,0)
  ;
FUN_03121028:
  lVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar4 = FUN_0311da94(lVar7,plVar3,*(undefined4 *)(lVar7 + 0x28));
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x68) != '\0') {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(int *)(lVar4 + 0x10) != 0) {
      if (lVar10 != 0) {
        uVar11 = *(undefined8 *)(lVar10 + 0x30);
        uVar6 = thunk_FUN_01c273e8(UnityEngine_UIElements_UxmlAsset_TypeInfo);
        FUN_0311d6cc(uVar11,uVar6);
        local_34 = *(undefined4 *)(lVar4 + 0x10);
        uVar6 = thunk_FUN_01c273e8(PTR_DAT_04232100);
        uVar6 = thunk_FUN_01c49334(uVar6,&local_34);
        uVar11 = thunk_FUN_01c273e8(UnityEngine_UIElements_UxmlAttributeOverridesFactory_TypeInfo);
        uVar6 = System_Convert__ToSingle(uVar11,uVar6,0);
        thunk_FUN_01c273e8(UnityEngine_UIElements_UxmlBoolAttributeDescription_TypeInfo);
        uVar11 = thunk_FUN_01c496e0();
        FUN_03131354(uVar11,uVar6,0,lVar4,0);
        uVar6 = thunk_FUN_01c273e8(System_Security_Cryptography_Utils_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar11,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  if (lVar10 != 0) {
    FUN_0311d630(*(undefined8 *)(lVar10 + 0x30),
                 *(undefined8 *)VoxelBusters_EssentialKit_UtilityUnitySettings_TypeInfo);
    *param_1 = -2;
    puVar1 = VoxelBusters_EssentialKit_Utilities_TypeInfo;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_026d3ce0(param_1 + 2,lVar4,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


