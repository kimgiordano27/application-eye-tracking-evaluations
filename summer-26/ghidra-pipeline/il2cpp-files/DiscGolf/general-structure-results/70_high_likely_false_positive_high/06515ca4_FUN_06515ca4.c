/*
FUNCTION_NAME: FUN_06515ca4
ENTRY_POINT: 06515ca4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_06515ca4(long param_1,long param_2,undefined4 param_3,ulong param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined2 *param_7,undefined8 *param_8,undefined1 param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  int local_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  byte local_68;
  
  puVar6 = PTR_DAT_069fb930;
  param_4 = param_4 & 0xffffffff;
  if ((DAT_06dcd81c & 1) == 0) {
    FUN_02d965b8(
                Field_UnityEngine_UI_Extensions_ReorderableList_ReorderableListEventStruct_DroppedObject
                );
    FUN_02d965b8(Field_UnityEngine_TextCore_RichTextTagParser_Segment_tags);
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(
                Field_UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_element
                );
    FUN_02d965b8(Field_UnityEngine_Rendering_ContextContainer_Item_storage);
    FUN_02d965b8(
                Field_Meta_XR_BuildingBlocks_ControllerButtonsMapper_ButtonClickAction_InputActionReference
                );
    FUN_02d965b8(Field_Unity_Properties_ConversionRegistry_ConverterKey_SourceType);
    FUN_02d965b8(Field_UnityEngine_UIElements_CreationContext_AttributeOverrideRange_sourceAsset);
    FUN_02d965b8(
                Field_UnityEngine_UIElements_CreationContext_SerializedDataOverrideRange_sourceAsset
                );
    FUN_02d965b8(Field_System_Runtime_Remoting_Channels_CrossAppDomainSink_ProcessMessageRes_cadMrm)
    ;
    FUN_02d965b8(Field_DGVVR_XRIHMDActions_m_Wrapper);
    FUN_02d965b8(Field_UnityEngine_TextCore_RichTextTagParser_Tag_value);
    FUN_02d965b8(Field_System_IO_Compression_Zip64ExtraField__uncompressedSize);
    DAT_06dcd81c = 1;
  }
  local_190 = 0;
  local_1d0 = 0;
  _local_180 = CONCAT44(*(undefined4 *)(param_1 + 0x70),*(int *)(param_1 + 0x74));
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  uStack_1e8 = 0;
  local_1f0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  uStack_140 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  lStack_178 = param_2;
  LeanTween__value((ulong)&local_180 | 8,param_2);
  local_138 = CONCAT71(local_138._1_7_,param_9) & 0xffffffffffffff01;
  memcpy(param_8,&local_180,0x50);
  LeanTween__value(param_8 + 1,0);
  iVar1 = *(int *)(param_1 + 0x74);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0630c384(iVar1 != 0,0);
  puVar7 = Field_UnityEngine_UIElements_CreationContext_SerializedDataOverrideRange_sourceAsset;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x5c);
    if (iVar1 == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      param_8[4] = *(undefined8 *)(param_2 + 0x28);
      param_8[3] = uVar13;
      param_8[2] = uVar9;
      LeanTween__value(param_8 + 3,0);
      uVar13 = *(undefined8 *)(param_2 + 0x38);
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      param_8[7] = *(undefined8 *)(param_2 + 0x40);
      param_8[6] = uVar13;
      param_8[5] = uVar9;
      LeanTween__value(param_8 + 6,0);
      param_8[8] = *(undefined8 *)(param_2 + 0x50);
      uVar9 = LeanTween__value();
      uVar10 = FUN_06516720(uVar9,*(undefined8 *)(param_2 + 0x50),param_3,param_4,param_2 + 0x18,
                            param_2 + 0x30,1);
      if ((uVar10 & 1) == 0) {
        FUN_065155ac(param_1,param_2,param_3,param_4,param_5,param_6,1);
      }
      else {
        if ((*(long *)(param_2 + 0x50) == 0) ||
           (lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar8 == 0)) goto LAB_065163e4;
        FUN_04bb13e0(lVar8,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                     *(undefined8 *)
                      Field_UnityEngine_UI_Extensions_ReorderableList_ReorderableListEventStruct_DroppedObject
                    );
        if ((*(long *)(param_2 + 0x50) == 0) ||
           (lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar8 == 0)) goto LAB_065163e4;
        FUN_04bb0c58(lVar8,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                     *(undefined8 *)Field_UnityEngine_TextCore_RichTextTagParser_Segment_tags);
      }
      *(int *)(param_2 + 0x48) = (int)(param_4 / 3);
      uVar9 = NEON_rev64(*param_8,4);
      *(undefined8 *)(param_2 + 0x58) = uVar9;
      lVar8 = *(long *)(param_1 + 0x48);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar8 + 0x18);
        iVar2 = 0;
        if ((long)iVar1 != 0) {
          iVar2 = (int)((long)(ulong)*(uint *)(param_1 + 0x70) / (long)iVar1);
        }
        lVar8 = FUN_0400ff1c(lVar8,*(uint *)(param_1 + 0x70) - iVar2 * iVar1,*(undefined8 *)puVar7);
        puVar6 = 
        Field_UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_element;
        if (lVar8 != 0) {
          memcpy(&local_100,param_8,0x50);
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar3 * 0x50;
              *(uint *)(lVar8 + 0x18) = uVar3 + 1;
              memcpy((void *)(lVar11 + 0x20),&local_100,0x50);
              LeanTween__value(lVar11 + 0x28,0);
            }
            else {
              uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_b0,&local_100,0x50);
              FUN_0418c064(lVar8,&local_b0,uVar9);
            }
            if ((*(long *)(param_2 + 0x50) != 0) &&
               (lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar8 != 0)) {
              local_b0 = 0;
              local_a8 = 0;
              FUN_042e21e0(&local_b0,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                           *(undefined4 *)(param_2 + 0x18),param_3,
                           *(undefined8 *)Field_UnityEngine_TextCore_RichTextTagParser_Tag_value);
              param_5[1] = local_a8;
              *param_5 = local_b0;
              if ((*(long *)(param_2 + 0x50) != 0) &&
                 (lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar8 != 0)) {
                local_100 = 0;
                uStack_f8 = 0;
                FUN_042e1c60(&local_100,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                             *(undefined4 *)(param_2 + 0x30),param_4,
                             *(undefined8 *)
                              Field_System_IO_Compression_Zip64ExtraField__uncompressedSize);
                param_6[1] = uStack_f8;
                *param_6 = local_100;
                *param_7 = (short)*(undefined4 *)(param_2 + 0x18);
                return;
              }
            }
          }
        }
      }
    }
    else {
      lVar8 = *(long *)(param_1 + 0x48);
      if (lVar8 != 0) {
        iVar2 = *(int *)(lVar8 + 0x18);
        iVar4 = 0;
        if (iVar2 != 0) {
          iVar4 = *(int *)(param_2 + 0x58) / iVar2;
        }
        lVar8 = FUN_0400ff1c(lVar8,*(int *)(param_2 + 0x58) - iVar4 * iVar2,
                             *(undefined8 *)
                              Field_UnityEngine_UIElements_CreationContext_SerializedDataOverrideRange_sourceAsset
                            );
        if (lVar8 != 0) {
          iVar1 = iVar1 + -1;
          FUN_0418bcd4(&local_b0,lVar8,iVar1,
                       *(undefined8 *)
                        Field_System_Runtime_Remoting_Channels_CrossAppDomainSink_ProcessMessageRes_cadMrm
                      );
          iVar2 = *(int *)(param_2 + 0x5c);
          uStack_1b8 = uStack_a0;
          local_1c0 = local_a8;
          uStack_1a8 = uStack_90;
          local_1b0 = local_98;
          uStack_198 = uStack_80;
          local_1a0 = local_88;
          local_190 = local_78;
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_0630c384((int)local_b0 == iVar2,0);
          uStack_f8 = uStack_1b8;
          local_100 = local_1c0;
          local_e8 = uStack_1a8;
          uStack_f0 = local_1b0;
          local_d0 = local_190;
          uStack_d8 = uStack_198;
          local_e0 = local_1a0;
          *(byte *)(param_8 + 9) = *(byte *)(param_8 + 9) | local_68 & 1;
          param_8[3] = local_1b0;
          param_8[2] = uStack_1b8;
          param_8[4] = uStack_1a8;
          LeanTween__value(param_8 + 3,0);
          param_8[6] = uStack_198;
          param_8[5] = local_1a0;
          param_8[7] = local_190;
          LeanTween__value(param_8 + 6,0);
          param_8[8] = local_70;
          LeanTween__value(param_8 + 8,local_70);
          uStack_a0 = uStack_1b8;
          local_a8 = local_1c0;
          uStack_90 = uStack_1a8;
          local_98 = local_1b0;
          uStack_80 = uStack_198;
          local_88 = local_1a0;
          local_b0 = CONCAT44(0xffffffff,(int)local_b0);
          local_78 = local_190;
          FUN_0418bd38(lVar8,iVar1,&local_b0,*(undefined8 *)Field_DGVVR_XRIHMDActions_m_Wrapper);
          lVar8 = *(long *)(param_1 + 0x40);
          if (lVar8 != 0) {
            uVar3 = *(uint *)(lVar8 + 0x18);
            uVar5 = 0;
            if (uVar3 != 0) {
              uVar5 = *(uint *)(param_1 + 0x70) / uVar3;
            }
            FUN_0400ff1c(lVar8,*(uint *)(param_1 + 0x70) - uVar5 * uVar3,
                         *(undefined8 *)
                          Field_UnityEngine_UIElements_CreationContext_AttributeOverrideRange_sourceAsset
                        );
            uStack_1e8 = *(undefined8 *)(param_2 + 0x20);
            local_1f0 = *(undefined8 *)(param_2 + 0x18);
            local_1e0 = *(undefined8 *)(param_2 + 0x28);
            local_1d8 = 0;
            local_1d0 = 0;
            LeanTween__value((ulong)&local_1f0 | 8,0);
            local_1d8 = *(undefined8 *)(param_2 + 0x50);
            LeanTween__value(&local_1d8);
            local_1d0 = CONCAT71(local_1d0._1_7_,1);
            FUN_0664ffec();
            return;
          }
        }
      }
    }
  }
LAB_065163e4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


