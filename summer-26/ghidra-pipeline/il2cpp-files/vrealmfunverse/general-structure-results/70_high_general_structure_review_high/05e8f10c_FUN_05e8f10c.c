/*
FUNCTION_NAME: FUN_05e8f10c
ENTRY_POINT: 05e8f10c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05e8f10c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  long *plVar21;
  bool bVar22;
  undefined8 *puVar23;
  undefined1 auVar24 [16];
  undefined4 local_80;
  int local_7c;
  undefined4 local_74;
  undefined1 local_70 [16];
  
  plVar21 = (long *)
            Method_Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5_System_Collections_IEnumerator_Reset__
  ;
  if ((DAT_066dc831 & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                );
    FUN_02b3c81c(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Entry__);
    FUN_02b3c81c(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Key__);
    FUN_02b3c81c(PTR_DAT_06321b68);
    FUN_02b3c81c(PTR_DAT_06321b60);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_10__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_11__
                );
    FUN_02b3c81c(Method_System_Xml_XmlEncodedRawTextWriter_EncodeSurrogate__);
    FUN_02b3c81c(Method_System_Xml_XmlEncodedRawTextWriter_ValidateContentChars__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_STP_<>c_<Execute>b__38_1__);
    FUN_02b3c81c(
                Method_Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(Method_System_Xml_XmlDictionaryReaderQuotas_CopyTo__);
    FUN_02b3c81c(System_Collections_Generic_List<TimelineClip>_TypeInfo);
    DAT_066dc831 = 1;
  }
  lVar10 = *plVar21;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_74 = 0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar10 = *plVar21;
  }
  auVar7._8_8_ = local_70._8_8_;
  auVar7._0_8_ = local_70._0_8_;
  auVar24._8_8_ = local_70._8_8_;
  auVar24._0_8_ = local_70._0_8_;
  plVar15 = *(long **)(lVar10 + 0xb8);
  lVar10 = *plVar15;
  if (lVar10 != 0) {
    lVar18 = plVar15[1];
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    local_70 = auVar24;
    if (lVar18 != 0) {
      lVar10 = plVar15[2];
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      local_70 = auVar7;
      if (lVar10 != 0) {
        iVar9 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar9) {
          FUN_04d9e084(*(undefined8 *)(lVar10 + 0x10),0,iVar9,0);
          plVar15 = *(long **)(*plVar21 + 0xb8);
        }
        auVar8._8_8_ = local_70._8_8_;
        auVar8._0_8_ = local_70._0_8_;
        lVar10 = plVar15[3];
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          local_70 = auVar8;
          if (param_1 != 0) {
            local_7c = 0;
            iVar1 = *(int *)(param_1 + 0x54);
            iVar9 = 0;
            bVar16 = false;
            plVar15 = (long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
            ;
            puVar19 = (undefined8 *)Method_System_Xml_XmlEncodedRawTextWriter_EncodeSurrogate__;
            puVar23 = (undefined8 *)Method_System_Xml_XmlEncodedRawTextWriter_ValidateContentChars__
            ;
            do {
              if (bVar16) goto LAB_05e8f73c;
              if (*(int *)(*plVar15 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              lVar10 = FUN_05e8cf80();
              if (lVar10 == 0) goto LAB_05e8f7c0;
              auVar24 = FUN_0382e160(lVar10,0,*puVar19);
              local_70 = auVar24;
              lVar10 = FUN_05e8cf08();
              if (lVar10 == 0) goto LAB_05e8f7c0;
              uVar11 = FUN_0384959c(lVar10,0,*puVar23);
              lVar10 = FUN_05e8ce90();
              if (lVar10 == 0) goto LAB_05e8f7c0;
              uVar12 = FUN_0384959c(lVar10,0,*puVar23);
              lVar10 = FUN_05e8cff8();
              if (lVar10 == 0) goto LAB_05e8f7c0;
              local_80 = FUN_0372476c(lVar10,0,*(undefined8 *)
                                                Method_UnityEngine_Rendering_STP_<>c_<Execute>b__38_1__
                                     );
              if (iVar9 < iVar1) {
                bVar22 = false;
                bVar3 = false;
                bVar6 = false;
                bVar5 = false;
                bVar4 = true;
                bVar16 = false;
                do {
                  iVar20 = iVar9;
                  iVar9 = FUN_05e97668(param_1,iVar20,0);
                  if (iVar9 < 4) {
                    if (iVar9 == 1) {
                      uVar14 = FUN_05e9777c(param_1,iVar20,6,0);
                      if (((uVar14 & 1) == 0) || (local_7c != 0)) goto LAB_05e8f470;
                      FUN_05e14a7c(local_70,*(undefined8 *)
                                             System_Collections_Generic_List<TimelineClip>_TypeInfo,
                                   0);
                      bVar6 = true;
                      local_7c = 0;
                      bVar16 = true;
                    }
                    else if (iVar9 == 3) {
                      uVar13 = FUN_05e97c90(param_1,iVar20,0);
                      if (bVar22) {
                        if (!bVar3) {
                          uVar12 = uVar13;
                        }
                        bVar4 = (bool)((bVar3 ^ 1U) & bVar4);
                        bVar22 = true;
                        bVar3 = true;
                      }
                      else {
                        bVar22 = true;
                        uVar11 = uVar13;
                      }
                    }
                    else {
LAB_05e8f470:
                      bVar4 = false;
                    }
                  }
                  else {
                    if (iVar9 != 7) {
                      if (iVar9 != 0xb) goto LAB_05e8f470;
                      local_7c = local_7c + 1;
                      break;
                    }
                    uVar13 = FUN_05e97818(param_1,iVar20,0);
                    if (!bVar5) {
                      if (*(int *)(*(long *)Method_System_Xml_XmlDictionaryReaderQuotas_CopyTo__ +
                                  0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      uVar14 = FUN_05e8fafc(5,uVar13,&local_74);
                      if ((uVar14 & 1) != 0) {
                        local_80 = FUN_05dcda04(local_74,0);
                        bVar5 = true;
                        goto LAB_05e8f498;
                      }
                    }
                    if (bVar6) {
                      bVar4 = false;
                    }
                    else {
                      FUN_05e14a7c(local_70,uVar13,0);
                    }
                    bVar6 = true;
                  }
LAB_05e8f498:
                  iVar9 = iVar20 + 1;
                } while (iVar20 + 1 < iVar1);
                iVar9 = iVar20 + 1;
                bVar22 = iVar9 < iVar1;
                plVar15 = (long *)
                          Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                ;
                puVar19 = (undefined8 *)Method_System_Xml_XmlEncodedRawTextWriter_EncodeSurrogate__;
                plVar21 = (long *)
                          Method_Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5_System_Collections_IEnumerator_Reset__
                ;
                puVar23 = (undefined8 *)
                          Method_System_Xml_XmlEncodedRawTextWriter_ValidateContentChars__;
              }
              else {
                bVar16 = false;
                bVar22 = false;
                bVar4 = true;
              }
              lVar10 = *plVar21;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar10 = *plVar21;
              }
              lVar10 = **(long **)(lVar10 + 0xb8);
              if (lVar10 == 0) goto LAB_05e8f7c0;
              lVar18 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)
                        Method_System_Resources_ResourceReader_ResourceEnumerator_get_Entry__;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_05e8f7c0;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
              }
              else {
                FUN_03849890(lVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = *(long *)(*(long *)(*plVar21 + 0xb8) + 8);
              if (lVar10 == 0) goto LAB_05e8f7c0;
              lVar18 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)
                        Method_System_Resources_ResourceReader_ResourceEnumerator_get_Entry__;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_05e8f7c0;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
              }
              else {
                FUN_03849890(lVar10,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = *(long *)(*(long *)(*plVar21 + 0xb8) + 0x10);
              if (lVar10 == 0) goto LAB_05e8f7c0;
              lVar18 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_05e8f7c0;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                lVar18 = lVar18 + (long)(int)uVar2 * 0x10;
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined1 (*) [16])(lVar18 + 0x20) = local_70;
                thunk_FUN_02bb0e9c(lVar18 + 0x28,0);
              }
              else {
                FUN_0382e480();
              }
              lVar10 = *(long *)(*(long *)(*plVar21 + 0xb8) + 0x18);
              if (lVar10 == 0) goto LAB_05e8f7c0;
              lVar18 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)Method_System_Resources_ResourceReader_ResourceEnumerator_get_Key__;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_05e8f7c0;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar2 * 4 + 0x20) = local_80;
              }
              else {
                FUN_03724a68(lVar10,local_80,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            } while ((bool)(bVar22 & bVar4));
            if (bVar4) {
              lVar10 = *plVar21;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar10 = *plVar21;
              }
              *param_4 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
              thunk_FUN_02bb0e9c(param_4);
              *param_2 = **(undefined8 **)(*plVar21 + 0xb8);
              thunk_FUN_02bb0e9c(param_2);
              *param_3 = *(undefined8 *)(*(long *)(*plVar21 + 0xb8) + 8);
              thunk_FUN_02bb0e9c(param_3);
              uVar11 = *(undefined8 *)(*(long *)(*plVar21 + 0xb8) + 0x18);
            }
            else {
LAB_05e8f73c:
              if (*(int *)(*plVar15 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar11 = FUN_05e8cf80();
              *param_4 = uVar11;
              thunk_FUN_02bb0e9c();
              uVar11 = FUN_05e8ce90();
              *param_2 = uVar11;
              thunk_FUN_02bb0e9c();
              uVar11 = FUN_05e8cf08();
              *param_3 = uVar11;
              thunk_FUN_02bb0e9c();
              uVar11 = FUN_05e8cff8();
            }
            *param_5 = uVar11;
            thunk_FUN_02bb0e9c(param_5);
            return;
          }
        }
      }
    }
  }
LAB_05e8f7c0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


