/*
FUNCTION_NAME: FUN_06d8b958
ENTRY_POINT: 06d8b958
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_06d8b958(byte *param_1,int param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined8 *puVar36;
  ulong uVar37;
  undefined1 auVar38 [12];
  undefined8 local_190;
  undefined8 uStack_188;
  int local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  int local_174;
  undefined8 local_170;
  ulong local_160;
  undefined4 local_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong auStack_108 [12];
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar11 = OVR_OpenVR_HmdRect2_t_TypeInfo;
  puVar10 = OVR_OpenVR_HmdQuad_t_TypeInfo;
  puVar9 = OVR_OpenVR_HmdMatrix44_t_TypeInfo;
  puVar8 = OVR_OpenVR_HmdMatrix34_t_TypeInfo;
  puVar7 = Unity_Hierarchy_HierarchySearchQueryDescriptor_TypeInfo;
  puVar6 = Unity_Hierarchy_HierarchySearchFilterOperator_TypeInfo;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 06d8b948 with catch @ 06d8b964
                        */
  if ((DAT_07eeabe0 & 1) == 0) {
    FUN_03642964(OVR_OpenVR_HmdVector2_t_TypeInfo);
    FUN_03642964(HomeSpace_MVVM_HomeSpaceScreen_TypeInfo);
    FUN_03642964(UnityEngine_TextCore_HorizontalAlignment_TypeInfo);
    FUN_03642964(Oculus_Interaction_Input_HandJointUtils_TypeInfo);
    FUN_03642964(Sirenix_OdinInspector_HorizontalGroupAttribute_TypeInfo);
    FUN_03642964(System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
    FUN_03642964(Oculus_Interaction_Input_HmdDataAsset_TypeInfo);
    FUN_03642964(Oculus_Interaction_Input_Compatibility_OVR_HandJointUtils_TypeInfo);
    FUN_03642964(OVR_OpenVR_HmdMatrix44_t_TypeInfo);
    FUN_03642964(Unity_Hierarchy_HierarchySearchFilterOperator_TypeInfo);
    FUN_03642964(OVR_OpenVR_HmdRect2_t_TypeInfo);
    FUN_03642964(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_03642964(UnityEngine_TextCore_Text_HighlightState_TypeInfo);
    FUN_03642964(System_Xml_HtmlTernaryTree_TypeInfo);
    FUN_03642964(System_Xml_HtmlUtf8RawTextWriter_TypeInfo);
    FUN_03642964(System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo);
    FUN_03642964(System_Net_HttpRequestCreator_TypeInfo);
    FUN_03642964(OVR_OpenVR_HmdMatrix34_t_TypeInfo);
    FUN_03642964(OVR_OpenVR_HmdQuad_t_TypeInfo);
    FUN_03642964(Unity_Hierarchy_HierarchySearchQueryDescriptor_TypeInfo);
    FUN_03642964(System_Net_HttpStatusCode_TypeInfo);
    FUN_03642964(PTR_DAT_079f5e18);
    FUN_03642964(PTR_DAT_079f5de8);
    DAT_07eeabe0 = 1;
  }
  local_158 = 0;
  local_160 = 0;
  local_170 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  local_174 = 0;
  local_180 = 0;
  local_17c = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  auStack_108[0] = 0;
  local_110 = 0;
  auStack_108[2] = 0;
  auStack_108[1] = 0;
  auStack_108[4] = 0;
  auStack_108[3] = 0;
  auStack_108[6] = 0;
  auStack_108[5] = 0;
  auStack_108[8] = 0;
  auStack_108[7] = 0;
  auStack_108[10] = 0;
  auStack_108[9] = 0;
  lVar26 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
  FUN_046ccf7c(lVar26,*(undefined8 *)puVar9);
  lVar27 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_046ca1b8(lVar27,*(undefined8 *)puVar6);
  lVar28 = thunk_FUN_0367fe20(*(undefined8 *)puVar10);
  FUN_046c74b8(lVar28,*(undefined8 *)puVar11);
  pbVar1 = param_1 + param_2;
  if (param_1 < pbVar1) {
    iVar33 = -1;
    puVar36 = (undefined8 *)PTR_DAT_079f5e18;
    do {
      bVar4 = *param_1;
      if (bVar4 == 0xfe) {
        thunk_FUN_036aa1c8(PTR_DAT_079f5660);
        uVar29 = thunk_FUN_0367fe20();
        uVar30 = thunk_FUN_036aa1c8(Oculus_Platform_Models_HttpTransferUpdate_TypeInfo);
        FUN_05e1a2c8(uVar29,uVar30,0);
        uVar30 = thunk_FUN_036aa1c8(System_Net_HttpValidationHelpers_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar29,uVar30);
      }
      bVar3 = bVar4 & 0xfc;
      uVar37 = (ulong)bVar4 & 3;
      pbVar2 = param_1 + 1;
      if (bVar3 < 0x55) {
        if (bVar3 < 0x19) {
          if (bVar3 < 9) {
            if (bVar3 == 4) {
              uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
              local_a8 = 0;
              FUN_0493bdd8(&local_a8,uVar12,*puVar36);
              local_150 = local_a8;
            }
            else if (bVar3 == 8) {
              uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
              FUN_06d8c4e0(auStack_108 + 1,uVar12);
            }
          }
          else if (bVar3 == 0x14) {
            uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0493bdd8(&local_a8,uVar12,*puVar36);
            uStack_148 = local_a8;
          }
          else if (bVar3 == 0x18) {
            uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0493bdd8(&local_a8,uVar12,*puVar36);
            auStack_108[2] = local_a8;
          }
        }
        else if (bVar3 < 0x29) {
          if (bVar3 == 0x24) {
            uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0493bdd8(&local_a8,uVar12,*puVar36);
            local_140 = local_a8;
          }
          else if (bVar3 == 0x28) {
            uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0493bdd8(&local_a8,uVar12,*puVar36);
            auStack_108[3] = local_a8;
          }
        }
        else if (bVar3 == 0x34) {
          uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_0493bdd8(&local_a8,uVar12,*puVar36);
          local_138 = local_a8;
        }
        else if (bVar3 == 0x44) {
          uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_0493bdd8(&local_a8,uVar12,*puVar36);
          local_130 = local_a8;
        }
        else if (bVar3 == 0x54) {
          uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_0493bdd8(&local_a8,uVar12,*puVar36);
          uStack_128 = local_a8;
        }
      }
      else if (bVar3 < 0x85) {
        if (bVar3 < 0x75) {
          if (bVar3 == 100) {
            uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0493bdd8(&local_a8,uVar12,*puVar36);
            local_120 = local_a8;
          }
          else if (bVar3 == 0x74) {
            uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0493bdd8(&local_a8,uVar12,*puVar36);
            local_118 = local_a8;
          }
        }
        else {
          if (bVar3 == 0x80) {
            uVar12 = 1;
            goto LAB_06d8bf2c;
          }
          if (bVar3 == 0x84) {
            uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0493bdd8(&local_a8,uVar12,*puVar36);
            auStack_108[0] = local_a8;
          }
        }
      }
      else if (bVar3 < 0x95) {
        if (bVar3 == 0x90) {
          uVar12 = 2;
LAB_06d8bf2c:
          uVar13 = FUN_06d8c86c(auStack_108[0],uVar12,lVar26);
          if (lVar26 == 0) goto LAB_06d8c3dc;
          auVar38 = FUN_046cd514(lVar26,uVar13,*(undefined8 *)System_Xml_HtmlTernaryTree_TypeInfo);
          iVar35 = (uint)((char)auStack_108[0] != '\0') << 3;
          if (auVar38._8_4_ != 0) {
            iVar35 = auVar38._8_4_;
          }
          iVar14 = FUN_0493be1c(&local_110,1,*(undefined8 *)System_Net_HttpStatusCode_TypeInfo);
          uVar15 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
          if (0 < iVar14) {
            iVar34 = 0;
            do {
              uVar16 = FUN_06d8c6ec(auStack_108 + 1,iVar34);
              uVar17 = FUN_06d8c660(&local_150,iVar34,auStack_108 + 1);
              puVar6 = System_Net_HttpStatusCode_TypeInfo;
              iVar18 = FUN_0493be1c(&local_118,8,*(undefined8 *)System_Net_HttpStatusCode_TypeInfo);
              uVar19 = FUN_0493be1c(auStack_108,1,*(undefined8 *)puVar6);
              iVar20 = FUN_0493be1c((ulong)&local_150 | 8,0,*(undefined8 *)puVar6);
              iVar21 = FUN_0493be1c(&local_140,0,*(undefined8 *)puVar6);
              uVar22 = UnityEngine_Rendering_ComputeCommandBuffer__SetRayTracingIntParams
                                 (&local_150);
              uVar23 = FUN_06d8cab8(&local_150);
              uVar24 = FUN_0493be1c(&uStack_128,0,*(undefined8 *)puVar6);
              uVar25 = FUN_0493be1c(&local_120,0,*(undefined8 *)puVar6);
              if (lVar27 == 0) goto LAB_06d8c3dc;
              lVar31 = *(long *)(lVar27 + 0x10);
              lVar32 = *(long *)Oculus_Interaction_Input_HandJointUtils_TypeInfo;
              *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
              if (lVar31 == 0) goto LAB_06d8c3dc;
              uVar5 = *(uint *)(lVar27 + 0x18);
              if (uVar5 < *(uint *)(lVar31 + 0x18)) {
                lVar31 = lVar31 + (long)(int)uVar5 * 0x48;
                *(uint *)(lVar27 + 0x18) = uVar5 + 1;
                *(int *)(lVar31 + 0x30) = iVar20;
                *(int *)(lVar31 + 0x34) = iVar21;
                *(uint *)(lVar31 + 0x20) = uVar16 & 0xffff;
                *(undefined4 *)(lVar31 + 0x24) = uVar17;
                *(undefined4 *)(lVar31 + 0x28) = uVar25;
                *(undefined4 *)(lVar31 + 0x2c) = uVar24;
                *(undefined4 *)(lVar31 + 0x38) = uVar22;
                *(undefined4 *)(lVar31 + 0x3c) = uVar23;
                *(undefined4 *)(lVar31 + 0x40) = uVar12;
                *(undefined4 *)(lVar31 + 0x44) = 0;
                *(undefined4 *)(lVar31 + 0x48) = uVar19;
                *(int *)(lVar31 + 0x4c) = iVar18;
                *(int *)(lVar31 + 0x50) = iVar35;
                *(undefined4 *)(lVar31 + 0x54) = uVar15;
                *(undefined8 *)(lVar31 + 0x58) = 0;
                *(undefined8 *)(lVar31 + 0x60) = 0;
              }
              else {
                local_a8 = CONCAT44(uVar17,uVar16) & 0xffffffff0000ffff;
                local_a0 = (undefined8 *)CONCAT44(uVar24,uVar25);
                local_84 = 0;
                local_70 = 0;
                uStack_68 = 0;
                local_98 = iVar20;
                local_94 = iVar21;
                local_90 = uVar22;
                local_8c = uVar23;
                local_88 = uVar12;
                local_80 = uVar19;
                local_7c = iVar18;
                local_78 = iVar35;
                local_74 = uVar15;
                FUN_046caac8(lVar27,&local_a8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
              }
              iVar34 = iVar34 + 1;
              iVar35 = iVar18 + iVar35;
            } while (iVar14 != iVar34);
          }
          FUN_046cd570(lVar26,uVar13,auVar38._0_8_,iVar35,
                       *(undefined8 *)System_Net_HttpRequestCreator_TypeInfo);
          FUN_06d8c7fc(auStack_108 + 1);
          puVar36 = (undefined8 *)PTR_DAT_079f5e18;
        }
        else if (bVar3 == 0x94) {
          uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_0493bdd8(&local_a8,uVar12,*puVar36);
          local_110 = local_a8;
        }
      }
      else if (bVar3 == 0xa0) {
        if (lVar28 == 0) goto LAB_06d8c3dc;
        iVar35 = *(int *)(lVar28 + 0x18);
        uVar12 = FUN_06d8c478(uVar37,pbVar2,pbVar1);
        uVar13 = FUN_06d8c660(&local_150,0,auStack_108 + 1);
        uVar15 = FUN_06d8c6ec(auStack_108 + 1,0);
        if (lVar27 == 0) goto LAB_06d8c3dc;
        lVar31 = *(long *)(lVar28 + 0x10);
        iVar14 = *(int *)(lVar27 + 0x18);
        lVar32 = *(long *)Sirenix_OdinInspector_HorizontalGroupAttribute_TypeInfo;
        *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
        if (lVar31 == 0) goto LAB_06d8c3dc;
        uVar16 = *(uint *)(lVar28 + 0x18);
        if (uVar16 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + (long)(int)uVar16 * 0x18;
          *(uint *)(lVar28 + 0x18) = uVar16 + 1;
          *(undefined4 *)(lVar31 + 0x20) = uVar12;
          *(undefined4 *)(lVar31 + 0x24) = uVar15;
          *(undefined4 *)(lVar31 + 0x28) = uVar13;
          *(int *)(lVar31 + 0x2c) = iVar33;
          *(undefined4 *)(lVar31 + 0x30) = 0;
          *(int *)(lVar31 + 0x34) = iVar14;
        }
        else {
          local_a8 = CONCAT44(uVar15,uVar12);
          local_a0 = (undefined8 *)CONCAT44(iVar33,uVar13);
          local_98 = 0;
          local_94 = iVar14;
          FUN_046c7dc0(lVar28,&local_a8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
        }
        FUN_06d8c7fc(auStack_108 + 1);
        iVar33 = iVar35;
      }
      else {
        if (bVar3 == 0xb0) {
          uVar12 = 3;
          goto LAB_06d8bf2c;
        }
        if (bVar3 == 0xc0) {
          if (iVar33 == -1) {
            return 0;
          }
          if (lVar28 == 0) goto LAB_06d8c3dc;
          FUN_046c7a50(&local_a8,lVar28,iVar33,
                       *(undefined8 *)System_Xml_HtmlUtf8RawTextWriter_TypeInfo);
          local_160 = local_a8;
          local_158 = (undefined4)local_a0;
          if (lVar27 == 0) goto LAB_06d8c3dc;
          iVar35 = local_a0._4_4_;
          local_98 = *(int *)(lVar27 + 0x18) - local_94;
          FUN_046c7ab8(lVar28,iVar33,&local_a8,
                       *(undefined8 *)System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo);
          FUN_06d8c7fc(auStack_108 + 1);
          iVar33 = iVar35;
        }
      }
      param_1 = param_1 + 5;
      if ((int)uVar37 != 3) {
        param_1 = pbVar2 + uVar37;
      }
    } while (param_1 < pbVar1);
  }
  if (lVar27 != 0) {
    uVar29 = FUN_046cc95c(lVar27,*(undefined8 *)
                                  Oculus_Interaction_Input_Compatibility_OVR_HandJointUtils_TypeInfo
                         );
    *(undefined8 *)(param_3 + 0x20) = uVar29;
    thunk_FUN_036b7ad0();
    puVar8 = System_Xml_HtmlEncodedRawTextWriter_TypeInfo;
    puVar7 = HomeSpace_MVVM_HomeSpaceScreen_TypeInfo;
    puVar6 = OVR_OpenVR_HmdVector2_t_TypeInfo;
    if (lVar28 != 0) {
      uVar29 = FUN_046c9bac(lVar28,*(undefined8 *)Oculus_Interaction_Input_HmdDataAsset_TypeInfo);
      *(undefined8 *)(param_3 + 0x28) = uVar29;
      thunk_FUN_036b7ad0();
      FUN_046c8ab0(&local_190,lVar28,*(undefined8 *)puVar8);
      local_a8 = 0;
      local_a0 = &local_190;
      do {
        uVar37 = FUN_058d60b8(&local_190,*(undefined8 *)puVar7);
        if ((uVar37 & 1) == 0) goto LAB_06d8c3a4;
      } while ((local_174 != -1) || (local_180 != 1));
      *(ulong *)(param_3 + 8) = CONCAT44(uStack_178,local_17c);
LAB_06d8c3a4:
      FUN_058d60b4(&local_190,*(undefined8 *)puVar6);
      return 1;
    }
  }
LAB_06d8c3dc:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


