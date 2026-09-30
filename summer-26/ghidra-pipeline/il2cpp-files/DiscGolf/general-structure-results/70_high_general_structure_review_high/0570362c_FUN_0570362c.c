/*
FUNCTION_NAME: FUN_0570362c
ENTRY_POINT: 0570362c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05703cf0) */
/* WARNING: Removing unreachable block (ram,0x05703da4) */
/* WARNING: Removing unreachable block (ram,0x05703e40) */

void FUN_0570362c(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long local_190;
  int *piStack_188;
  int **local_180;
  undefined8 local_178;
  int *piStack_170;
  undefined8 *local_168;
  long local_160;
  int *piStack_158;
  int **local_150;
  long local_148;
  int *local_140;
  int **local_138;
  undefined8 uStack_130;
  int local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  int *piStack_f8;
  undefined8 *local_f0;
  undefined8 local_e0;
  int *piStack_d8;
  undefined8 *local_d0;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  int *piStack_98;
  int **local_90;
  int local_84;
  long local_80;
  int *piStack_78;
  int **local_70;
  int *local_58;
  
  local_58 = param_1;
  if ((DAT_06dbebdc & 1) == 0) {
    FUN_02d965b8(System_Security_Cryptography_Aes_TypeInfo);
    FUN_02d965b8(System_Security_Cryptography_AesTransform_TypeInfo);
    FUN_02d965b8(UnityEngine_AndroidJavaRunnableProxy_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_AffordanceStateShortcuts_TypeInfo
                );
    FUN_02d965b8(System_AggregateException_TypeInfo);
    FUN_02d965b8(UnityEngine_Android_AndroidKeyboard_TypeInfo);
    FUN_02d965b8(System_Data_AggregateNode_TypeInfo);
    FUN_02d965b8(UnityEngine_Android_AndroidKeyboardHidden_TypeInfo);
    FUN_02d965b8(UnityEngine_Android_AndroidLocale_TypeInfo);
    FUN_02d965b8(UnityEngine_Android_AndroidNavigation_TypeInfo);
    FUN_02d965b8(UnityEngine_Android_AndroidNavigationHidden_TypeInfo);
    FUN_02d965b8(UnityEngine_Android_AndroidOrientation_TypeInfo);
    FUN_02d965b8(Oculus_Platform_AndroidPlatform_TypeInfo);
    FUN_02d965b8(Microsoft_CSharp_RuntimeBinder_Semantics_AggregateSymbol_TypeInfo);
    FUN_02d965b8(System_Xml_XmlNode___TypeInfo);
    FUN_02d965b8(Microsoft_CSharp_RuntimeBinder_Semantics_AggregateType_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    FUN_02d965b8(PTR_DAT_06a00f70);
    FUN_02d965b8(UnityEngine_Rendering_VertexAttributeDescriptor___TypeInfo);
    FUN_02d965b8(UnityEngine_AndroidReflection_TypeInfo);
    FUN_02d965b8(UnityEngine_Android_AndroidHardwareKeyboardHidden_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_AllElementsContentValidator_TypeInfo);
    FUN_02d965b8(Unity_Services_Relay_Models_AllocationRequest_TypeInfo);
    FUN_02d965b8(Unity_Collections_Allocator_TypeInfo);
    FUN_02d965b8(Unity_Collections_AllocatorManager_TypeInfo);
    FUN_02d965b8(Unity_Services_Wire_Internal_AlreadySubscribedException_TypeInfo);
    DAT_06dbebdc = 1;
  }
  puVar3 = UnityEngine_Rendering_VertexAttributeDescriptor___TypeInfo;
  local_84 = *param_1;
  local_a0 = 0;
  piStack_98 = (int *)0x0;
  local_90 = (int **)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  piStack_d8 = (int *)0x0;
  local_d0 = (undefined8 *)0x0;
  local_100 = 0;
  piStack_f8 = (int *)0x0;
  local_f0 = (undefined8 *)0x0;
  local_110._0_8_ = 0;
  local_110._8_8_ = 0;
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  local_128 = 0;
  if (local_84 == 0) {
LAB_05703a20:
    local_80 = 0;
    local_70 = &local_58;
    piStack_78 = &local_84;
LAB_05703a2c:
    local_148 = 0;
    local_138 = &local_58;
    local_140 = &local_84;
LAB_05703a38:
    local_150 = &local_58;
    piStack_158 = &local_84;
    local_160 = 0;
    local_84 = -1;
    local_110 = *(undefined1 (*) [16])(local_58 + 0x18);
    local_58[0x18] = 0;
    local_58[0x19] = 0;
    local_58[0x1a] = 0;
    local_58[0x1b] = 0;
    *local_58 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 10);
    if (lVar9 == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
      uVar8 = thunk_FUN_02dd3144();
      uVar12 = thunk_FUN_02dfd288(PTR_DAT_06a0e6b0);
      FUN_0544bf54(uVar8,uVar12,0);
      uVar12 = thunk_FUN_02dfd288(UnityEngine_Android_AndroidScreenLayoutDirection_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,uVar12);
    }
    if (*(long *)(param_1 + 0xc) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
      uVar8 = thunk_FUN_02dd3144();
      uVar12 = thunk_FUN_02dfd288(UnityEngine_XR_ARCore_ARCoreFaceRegion_TypeInfo);
      FUN_0544bf54(uVar8,uVar12,0);
      uVar12 = thunk_FUN_02dfd288(UnityEngine_Android_AndroidScreenLayoutDirection_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,uVar12);
    }
    local_80 = 0;
    uVar8 = *(undefined8 *)UnityEngine_Android_AndroidOrientation_TypeInfo;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    FUN_03bb078c(&local_80,&local_a8,uVar8);
    *(long *)(local_58 + 0x10) = local_80;
    LeanTween__value(local_58 + 0x10,0);
    piStack_78 = &local_84;
    local_80 = 0;
    local_70 = &local_58;
    if (local_84 == 0) goto LAB_05703a20;
    local_148 = 0;
    FUN_03bb078c(&local_148,&local_b0,
                 *(undefined8 *)UnityEngine_Android_AndroidNavigationHidden_TypeInfo);
    *(long *)(local_58 + 0x12) = local_148;
    LeanTween__value(local_58 + 0x12,0);
    uVar8 = local_a8;
    lVar9 = local_b0;
    puVar2 = PTR_DAT_06a0d0a8;
    local_140 = &local_84;
    local_148 = 0;
    local_138 = &local_58;
    if (local_84 == 0) goto LAB_05703a2c;
    uVar12 = *(undefined8 *)(local_58 + 0xc);
    if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_056fe314(uVar12,uVar8,lVar9,0);
    local_160 = 0;
    piStack_158 = (int *)0x0;
    FUN_04808e60(&local_160,&local_b8,&local_c0,
                 *(undefined8 *)Unity_Services_Wire_Internal_AlreadySubscribedException_TypeInfo);
    *(int **)(local_58 + 0x16) = piStack_158;
    *(long *)(local_58 + 0x14) = local_160;
    LeanTween__value(local_58 + 0x14,0);
    piStack_158 = &local_84;
    local_160 = 0;
    local_150 = &local_58;
    if (local_84 == 0) goto LAB_05703a38;
    if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_03bff8a8(&local_178,local_b0,*(undefined8 *)Oculus_Platform_AndroidPlatform_TypeInfo);
    puVar5 = UnityEngine_Android_AndroidKeyboard_TypeInfo;
    puVar4 = Microsoft_CSharp_RuntimeBinder_Semantics_AggregateSymbol_TypeInfo;
    local_d0 = local_168;
    piStack_d8 = piStack_170;
    local_e0 = local_178;
    local_178 = 0;
    local_168 = &local_e0;
    piStack_170 = &local_84;
    while (uVar7 = FUN_0514450c(&local_e0,*(undefined8 *)puVar5), uVar8 = local_a8, lVar9 = local_b8
          , puVar6 = local_d0, (uVar7 & 1) != 0) {
      uVar15 = *(undefined8 *)(local_58 + 10);
      uVar12 = *(undefined8 *)(local_58 + 0xe);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      auVar16 = FUN_056fe9a4(uVar15,uVar8,(ulong)puVar6 & 0xffffffff,uVar12,0);
      if (lVar9 == 0) {
LAB_05703d90:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_05703d90;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined1 (*) [16])(lVar10 + (long)(int)uVar1 * 0x10 + 0x20) = auVar16;
      }
      else {
        FUN_03ef77a0(lVar9,auVar16._0_8_,auVar16._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (local_84 < 0) {
      FUN_05144508(local_168,*(undefined8 *)UnityEngine_AndroidJavaRunnableProxy_TypeInfo);
    }
    local_120 = FUN_0376a32c(local_b8,local_c0,*(undefined8 *)Unity_Collections_Allocator_TypeInfo);
    if (*(int *)(*(long *)Unity_Services_Relay_Models_AllocationRequest_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Unity_Services_Relay_Models_AllocationRequest_TypeInfo);
    }
    local_110 = FUN_04384368(local_120,
                             *(undefined8 *)System_Xml_Schema_AllElementsContentValidator_TypeInfo);
    uVar7 = FUN_040c0684(local_110,*(undefined8 *)System_Security_Cryptography_AesTransform_TypeInfo
                        );
    if ((uVar7 & 1) == 0) {
      local_84 = 0;
      *local_58 = 0;
      uVar8 = *(undefined8 *)UnityEngine_AndroidReflection_TypeInfo;
      *(undefined1 (*) [16])(local_58 + 0x18) = local_110;
      FUN_033688e8(local_58 + 2,local_110,local_58,uVar8);
      iVar14 = 0x10;
      goto OVRSimpleJSON_JSONNode__ReadVector4;
    }
  }
  lVar9 = FUN_040c0784(local_110,*(undefined8 *)System_Security_Cryptography_Aes_TypeInfo);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_03fb6fa8(&local_178,lVar9,
               *(undefined8 *)Microsoft_CSharp_RuntimeBinder_Semantics_AggregateType_TypeInfo);
  puVar4 = System_AggregateException_TypeInfo;
  puVar2 = PTR_DAT_06a00f70;
  piStack_f8 = piStack_170;
  local_100 = local_178;
  local_f0 = local_168;
  piStack_170 = &local_84;
  local_178 = 0;
  local_168 = &local_100;
  do {
    uVar7 = FUN_0514478c(&local_100,*(undefined8 *)puVar4);
    puVar6 = local_f0;
    if ((uVar7 & 1) == 0) {
      iVar14 = 0x14;
      goto LAB_05703b20;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = FUN_0576856c((ulong)puVar6 & 0xffffffff,0);
  } while ((uVar7 & 1) != 0);
  FUN_03767334(&local_190,*(undefined8 *)(local_58 + 10),(ulong)puVar6 & 0xffffffff,
               *(undefined8 *)puVar3);
  iVar14 = 0x13;
  piStack_98 = piStack_188;
  local_a0 = local_190;
  local_90 = local_180;
LAB_05703b20:
  if (local_84 < 0) {
    FUN_05144788(local_168,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_AffordanceStateShortcuts_TypeInfo
                );
  }
  if ((iVar14 == 0x14) || (iVar14 == 0)) {
    iVar14 = 0x15;
  }
OVRSimpleJSON_JSONNode__ReadVector4:
  if (*piStack_158 < 0) {
    FUN_04808f10(*local_150 + 0x14,*(undefined8 *)Unity_Collections_AllocatorManager_TypeInfo);
  }
  if (local_160 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if ((iVar14 == 0x15) || (iVar14 == 0)) {
    uVar12 = *(undefined8 *)puVar3;
    uVar8 = *(undefined8 *)(local_58 + 10);
    local_58[0x14] = 0;
    local_58[0x15] = 0;
    local_58[0x16] = 0;
    local_58[0x17] = 0;
    FUN_03767334(&local_160,uVar8,0,uVar12);
    iVar14 = 0x13;
    piStack_98 = piStack_158;
    local_a0 = local_160;
    local_90 = local_150;
  }
  if (*local_140 < 0) {
    FUN_03bb07f0(*local_138 + 0x12,*(undefined8 *)UnityEngine_Android_AndroidNavigation_TypeInfo);
  }
  if (local_148 == 0) {
    if (*piStack_78 < 0) {
      FUN_03bb07f0(*local_70 + 0x10,*(undefined8 *)UnityEngine_Android_AndroidLocale_TypeInfo);
    }
    puVar3 = UnityEngine_Android_AndroidHardwareKeyboardHidden_TypeInfo;
    if (local_80 == 0) {
      if (iVar14 == 0x13) {
        *local_58 = -2;
        piStack_78 = piStack_98;
        local_80 = local_a0;
        local_70 = local_90;
        FUN_0435ecc8(local_58 + 2,&local_80,*(undefined8 *)puVar3);
      }
      else if (iVar14 == 0) {
        uVar12 = (&uStack_130)[local_128 + -1];
        piVar13 = local_58 + 2;
        *local_58 = -2;
        uVar8 = thunk_FUN_02dfd288(UnityEngine_AndroidJavaObject_TypeInfo);
        FUN_0435ebf8(piVar13,uVar12,uVar8);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


