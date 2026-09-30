/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRPointCloudData$$set_positions
ENTRY_POINT: 05dd3330
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRPointCloudData__set_positions(void)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar19;
  long unaff_x22;
  long *unaff_x23;
  
                    /* try { // try from 05dd3334 to 05ed333b has its CatchHandler @ 05dd33bc */
  FUN_02f08768(
              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              );
  FUN_02f08768(Method_System_Runtime_Serialization_ObjectManager_GetCompletionInfo__);
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify<VolumeProfile>__
              );
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify<Shader>__
              );
  FUN_02f08768(PTR_DAT_067cb280);
  FUN_02f08768(PTR_DAT_067cdbd8);
  FUN_02f08768(Method_GoalManager_CloseModal__);
  FUN_02f08768(Method_Unity_Collections_DataStreamReader_CheckBits__);
  FUN_02f08768(PTR_DAT_067cc258);
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify<VrsLut>__
              );
  FUN_02f08768(Method_UnityEngine_RenderTexture__ctor__);
  FUN_02f08768(PTR_DAT_067cd9c0);
  FUN_02f08768(System_Xml_Schema_XmlSchemaValidationException_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xc5e) = 1;
  uVar14 = thunk_FUN_02f45270(*unaff_x21);
  FUN_05c4aacc(uVar14,0);
  lVar15 = *unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar15 = *unaff_x23;
  }
  puVar3 = Method_UnityEngine_ObjectDispatcher_GetTypeChangesAndClear<LODGroup>__;
  puVar17 = *(undefined8 **)(lVar15 + 0xb8);
  lVar19 = puVar17[1];
  if (lVar19 == 0) {
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar17 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar14 = *puVar17;
    lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                 Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_TypeInfo);
    FUN_046f107c(lVar19,uVar14,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify<VolumeProfile>__
                 ,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar19;
  }
  puVar5 = Method_System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_GetType__;
  puVar4 = PTR_DAT_067c9340;
  *(long *)(unaff_x19 + 0x48) = lVar19;
  FUN_061254ac();
  lVar15 = *(long *)puVar3;
  *(long *)(unaff_x19 + 0x38) = unaff_x20;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar6 = 
  Method_UnityEngine_Rendering_RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify<string>__;
  puVar3 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<uint>__;
  uVar14 = FUN_041e0870(*(undefined8 *)puVar5);
  lVar15 = *(long *)puVar4;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar14;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar15);
  }
  uVar14 = FUN_033dc7b0(*(undefined8 *)puVar3);
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
  lVar15 = FUN_033dc7b0(uVar18);
  puVar3 = PTR_DAT_067cb280;
  if (lVar15 != 0) {
    uVar14 = *(undefined8 *)(lVar15 + 0x28);
    uVar18 = *(undefined8 *)(lVar15 + 0x30);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                        );
    }
    puVar5 = Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__;
    FUN_05ca89ec(uVar14,uVar18,0);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dd3a68(uVar14);
    uVar11 = FUN_060b1ea4(0);
    uVar12 = FUN_060b1ecc(0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar5);
    }
    FUN_05c9f798(uVar11,uVar12,0);
    FUN_05dd3ae8();
    if (unaff_x20 != 0) {
      FUN_0610de9c(*(undefined1 *)(unaff_x20 + 0xf4),0);
      iVar13 = FUN_060b7f34(0);
      if (iVar13 < 1) {
        iVar13 = 1;
      }
      else {
        iVar13 = FUN_060b7f34(0);
      }
      if (iVar13 != *(int *)(unaff_x20 + 0x54)) {
        FUN_060b7f5c(*(int *)(unaff_x20 + 0x54),0);
      }
      puVar6 = 
      Method_UnityEngine_Rendering_RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify<ShaderVariantLogLevel>__
      ;
      puVar5 = PTR_DAT_067cdbd8;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar15 = FUN_033dc7b0(*(undefined8 *)puVar6);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar5);
      }
      lVar19 = FUN_05c74700(0);
      puVar4 = Method_Unity_Collections_DataStreamReader_CheckBits__;
      if ((lVar15 != 0) && (lVar19 != 0)) {
        FUN_05c754b0(lVar19,*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(unaff_x20 + 0x138),0);
        iVar13 = FUN_060b7f34(0);
        uVar2 = iVar13 - 1U | (int)(iVar13 - 1U) >> 0x10;
        uVar2 = uVar2 | (int)uVar2 >> 8;
        uVar2 = uVar2 | (int)uVar2 >> 4;
        uVar2 = uVar2 | (int)uVar2 >> 2;
        uVar2 = uVar2 | (int)uVar2 >> 1;
        iVar13 = 8;
        if ((int)(uVar2 + 1) < 8) {
          iVar13 = uVar2 + 1;
        }
        if (iVar13 < 2) {
          iVar13 = 1;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        puVar4 = 
        Method_UnityEngine_Rendering_RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify<Texture2D>__
        ;
        FUN_05c3ba30(iVar13,0);
        FUN_05c3bf2c(*(undefined4 *)(unaff_x20 + 0x58),0);
        lVar15 = *(long *)puVar3;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar15 = *(long *)puVar3;
        }
        puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
        uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x80);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar4);
        }
        FUN_061331a8(uVar14,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc3d5c == '\0') {
          FUN_02f08768(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__)
          ;
          DAT_06bc3d5c = '\x01';
        }
        puVar4 = 
        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
        ;
        lVar15 = *(long *)puVar5;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar15 = *(long *)puVar5;
        }
        lVar19 = *(long *)puVar4;
        iVar13 = *(int *)(lVar19 + 0xe4);
        *(undefined1 *)(*(long *)(lVar15 + 0xb8) + 8) = 1;
        if (iVar13 == 0) {
          thunk_FUN_02f6670c(lVar19);
        }
        puVar6 = 
        Method_UnityEngine_Rendering_RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify<VrsLut>__
        ;
        puVar5 = Method_System_Globalization_NumberFormatInfo_ValidateParseStyleFloatingPoint__;
        puVar4 = PTR_DAT_067cc9c0;
        FUN_05dad170(0);
        uVar14 = FUN_05d37c58();
        if (DAT_06bc3d5d == '\0') {
          FUN_02f08768(Method_OVRAnchor_ShareAsync__);
          DAT_06bc3d5d = '\x01';
        }
        uVar18 = *(undefined8 *)puVar4;
        *(undefined8 *)(*(long *)(*(long *)Method_OVRAnchor_ShareAsync__ + 0xb8) + 0x28) = uVar14;
        uVar14 = thunk_FUN_02f45270(uVar18);
        FUN_05cc5264(uVar14,*(undefined8 *)puVar6,0);
        uVar18 = *(undefined8 *)puVar5;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar14;
        lVar15 = FUN_033dc7b0(uVar18);
        puVar8 = Method_UnityEngine_RenderTexture__ctor__;
        puVar7 = Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
        puVar6 = System_Xml_Schema_XmlSchemaValidationException_TypeInfo;
        puVar5 = PTR_DAT_067cd9c0;
        puVar17 = (undefined8 *)PTR_DAT_067cc258;
        puVar4 = PTR_DAT_067c8f48;
        if (lVar15 != 0) {
          bVar10 = FUN_05db0474(lVar15,0);
          uVar14 = *(undefined8 *)puVar8;
          uVar18 = *(undefined8 *)puVar5;
          *(byte *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = (bVar10 ^ 0xff) & 1;
          if ((bVar10 & 1) == 0) {
            puVar17 = (undefined8 *)puVar6;
          }
          uVar14 = FUN_04f6f6b4(uVar14,*puVar17,uVar18,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)puVar4);
          }
          puVar4 = Method_System_DateTime_FromBinary__;
          FUN_060a9584(uVar14,0);
          uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
          FUN_05db3c6c(uVar14,0);
          lVar15 = *(long *)puVar3;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar15 = *(long *)puVar3;
          }
          lVar19 = *(long *)puVar4;
          iVar13 = *(int *)(lVar19 + 0xe4);
          *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10) = uVar14;
          if (iVar13 == 0) {
            thunk_FUN_02f6670c(lVar19);
          }
          lVar15 = FUN_05c4a690(0);
          puVar3 = PTR_DAT_067c8f20;
          if (lVar15 != 0) {
            FUN_05c4a708(lVar15,0);
            FUN_060b7e94(*(undefined1 *)(unaff_x20 + 0x68),0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            puVar3 = Method_System_Runtime_Serialization_ObjectManager_GetCompletionInfo__;
            uVar16 = FUN_060f078c();
            if ((uVar16 & 1) == 0) {
              bVar9 = false;
            }
            else {
              bVar9 = *(int *)(unaff_x20 + 0x74) == 1;
            }
            lVar15 = *(long *)puVar3;
            *(bool *)(unaff_x19 + 0x30) = bVar9;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            lVar15 = FUN_0612b924(0);
            if (lVar15 != 0) {
              *(undefined1 *)(lVar15 + 0x3b) = *(undefined1 *)(unaff_x19 + 0x30);
              lVar15 = FUN_0612b924(0);
              if (lVar15 != 0) {
                cVar1 = *(char *)(unaff_x19 + 0x30);
                *(char *)(lVar15 + 0x26) = cVar1;
                puVar3 = Method_System_Enum_TryParse<GradientMode>__;
                if (cVar1 == '\0') {
LAB_05dd3a28:
                  if (*(int *)(*(long *)Method_GoalManager_CloseModal__ + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  FUN_05cbf9d8(0);
                  return;
                }
                if (*(int *)(*(long *)Method_System_Enum_TryParse<GradientMode>__ + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                if (DAT_06bc301d == '\0') {
                  FUN_02f08768(Method_System_Enum_TryParse<GradientMode>__);
                  DAT_06bc301d = '\x01';
                }
                lVar15 = *(long *)puVar3;
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar15 = *(long *)puVar3;
                }
                lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
                uVar11 = *(undefined4 *)(unaff_x20 + 0x80);
                uVar16 = (ulong)CONCAT16((char)((uint)uVar11 >> 0x18),
                                         (uint6)CONCAT14((char)((uint)uVar11 >> 0x10),
                                                         (uint)CONCAT12((char)((uint)uVar11 >> 8),
                                                                        (ushort)(byte)uVar11)));
                NEON_ext(uVar16,uVar16,4,1);
                if (*(long *)(unaff_x19 + 0x20) != 0) {
                  FUN_05d6b478(*(long *)(unaff_x19 + 0x20),0);
                  if (lVar15 != 0) {
                    FUN_05c60ef4(lVar15);
                    goto LAB_05dd3a28;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


