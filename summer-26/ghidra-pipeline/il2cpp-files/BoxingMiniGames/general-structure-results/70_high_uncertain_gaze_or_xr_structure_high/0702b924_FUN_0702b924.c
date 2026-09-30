/*
FUNCTION_NAME: FUN_0702b924
ENTRY_POINT: 0702b924
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_18;validity_or_gating_hits_15;functionality_gaze_retrieval_or_extraction
*/


void FUN_0702b924(long param_1,long param_2)

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
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = OVRPlugin_HandStatus_TypeInfo;
  puVar4 = OVRPlugin_Hand_TypeInfo;
  if ((DAT_07eebdc9 & 1) == 0) {
    FUN_03642964(Unity_InferenceEngine_Layers_ReduceL1_TypeInfo);
    FUN_03642964(UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecord_TypeInfo);
    FUN_03642964(PTR_DAT_07a299a8);
    FUN_03642964(OVRPlugin_Hand_TypeInfo);
    FUN_03642964(Newtonsoft_Json_JsonValidatingReader_TypeInfo);
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(Firebase_FirebaseApp_CreateDelegate_TypeInfo);
    FUN_03642964(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_03642964(OVRPlugin_LayerLayout_TypeInfo);
    FUN_03642964(System_Xml_DtdParser_UndeclaredNotation_TypeInfo);
    FUN_03642964(PTR_DAT_079fdfb8);
    FUN_03642964(OVRPlugin_LogLevel_TypeInfo);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
    FUN_03642964(System_Runtime_InteropServices_Marshal_MarshalerInstanceKeyComparer_TypeInfo);
    FUN_03642964(Sirenix_Serialization_RectFormatter_TypeInfo);
    FUN_03642964(PTR_DAT_07a00fc8);
    FUN_03642964(Meta_XR_MRUtilityKit_MRUKNativeFuncs__MrukUuidAlignmentTest_TypeInfo);
    FUN_03642964(OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo);
    FUN_03642964(Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo);
    FUN_03642964(OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo);
    FUN_03642964(OVRPlugin_Media_TypeInfo);
    FUN_03642964(OVRPlugin_HandStatus_TypeInfo);
    FUN_03642964(PTR_DAT_079ff4c8);
    FUN_03642964(PTR_DAT_07a020f0);
    FUN_03642964(SpectrumKernel_TypeInfo);
    FUN_03642964(TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo);
    FUN_03642964(PTR_DAT_07a2c350);
    FUN_03642964(OVRPlugin_Mesh_TypeInfo);
    FUN_03642964(OVRPlugin_MeshType_TypeInfo);
    FUN_03642964(PTR_DAT_079f5008);
    FUN_03642964(PTR_DAT_07a2c348);
    DAT_07eebdc9 = 1;
  }
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
  FUN_06e9717c(uVar14,0);
  *(undefined8 *)(param_1 + 0x18) = uVar14;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x18),uVar14);
  lVar15 = *(long *)puVar3;
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar15 = *(long *)puVar3;
  }
  puVar4 = OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo;
  puVar19 = *(undefined8 **)(lVar15 + 0xb8);
  lVar20 = puVar19[1];
  if (lVar20 == 0) {
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar19 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar14 = *puVar19;
    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a299a8);
    FUN_0547f2d4(lVar20,uVar14,*(undefined8 *)OVRPlugin_Media_TypeInfo,0);
    plVar16 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar16 = lVar20;
    thunk_FUN_036b7ad0(plVar16,lVar20);
  }
  puVar5 = Meta_XR_MRUtilityKit_MRUKNativeFuncs__MrukUuidAlignmentTest_TypeInfo;
  puVar3 = PTR_DAT_079fdfb8;
  *(long *)(param_1 + 0x48) = lVar20;
  thunk_FUN_036b7ad0((long *)(param_1 + 0x48),lVar20);
  FUN_071facac(param_1,0);
  plVar16 = (long *)(param_1 + 0x38);
  *plVar16 = param_2;
  thunk_FUN_036b7ad0(plVar16,param_2);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar6 = OVRPlugin_LayerLayout_TypeInfo;
  puVar4 = System_Xml_DtdParser_UndeclaredNotation_TypeInfo;
  lVar15 = FUN_04de7ab8(*(undefined8 *)puVar5);
  plVar21 = (long *)(param_1 + 0x20);
  *plVar21 = lVar15;
  thunk_FUN_036b7ad0(plVar21,lVar15);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar14 = FUN_03d1b5c8(*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar14;
  thunk_FUN_036b7ad0();
  lVar15 = FUN_03d1b5c8(*(undefined8 *)puVar6);
  puVar4 = PTR_DAT_079ff4c8;
  if (lVar15 != 0) {
    uVar14 = *(undefined8 *)(lVar15 + 0x28);
    uVar18 = *(undefined8 *)(lVar15 + 0x30);
    if (*(int *)(*(long *)Unity_InferenceEngine_Layers_ReduceL1_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)Unity_InferenceEngine_Layers_ReduceL1_TypeInfo);
    }
    puVar5 = Sirenix_Serialization_RectFormatter_TypeInfo;
    FUN_06ef8a90(uVar14,uVar18,0);
    lVar15 = *plVar16;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_0702c1f0(lVar15);
    uVar11 = FUN_07181d78(0);
    uVar12 = FUN_07181da0(0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar5);
    }
    FUN_06eef5c8(uVar11,uVar12,0);
    FUN_0702c270();
    if (param_2 != 0) {
      FUN_071e1728(*(undefined1 *)(param_2 + 0xf4),0);
      iVar13 = FUN_07187e34(0);
      if (iVar13 < 1) {
        iVar13 = 1;
      }
      else {
        iVar13 = FUN_07187e34(0);
      }
      if (iVar13 != *(int *)(param_2 + 0x54)) {
        FUN_07187e5c(*(int *)(param_2 + 0x54),0);
      }
      puVar6 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      puVar5 = PTR_DAT_07a020f0;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar15 = FUN_03d1b5c8(*(undefined8 *)puVar6);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)puVar5);
      }
      lVar20 = FUN_06ec2f60(0);
      puVar3 = TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo;
      if ((lVar15 != 0) && (lVar20 != 0)) {
        FUN_06ec3d50(lVar20,*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(param_2 + 0x138),0);
        iVar13 = FUN_07187e34(0);
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
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        puVar3 = OVRPlugin_LogLevel_TypeInfo;
        FUN_06e879c8(iVar13,0);
        FUN_06e87ec4(*(undefined4 *)(param_2 + 0x58),0);
        lVar15 = *(long *)puVar4;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar15 = *(long *)puVar4;
        }
        puVar5 = UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecord_TypeInfo;
        uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x80);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)puVar3);
        }
        FUN_07208c18(uVar14,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (DAT_07eebec7 == '\0') {
          FUN_03642964(UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecord_TypeInfo);
          DAT_07eebec7 = '\x01';
        }
        puVar3 = Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo;
        lVar15 = *(long *)puVar5;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar15 = *(long *)puVar5;
        }
        lVar20 = *(long *)puVar3;
        iVar13 = *(int *)(lVar20 + 0xe4);
        *(undefined1 *)(*(long *)(lVar15 + 0xb8) + 8) = 1;
        if (iVar13 == 0) {
          thunk_FUN_036a1978(lVar20);
        }
        puVar6 = OVRPlugin_Mesh_TypeInfo;
        puVar5 = Firebase_FirebaseApp_CreateDelegate_TypeInfo;
        puVar3 = PTR_DAT_07a00fc8;
        FUN_07004ae4(0);
        uVar14 = FUN_06f8b234(param_2,0);
        if (DAT_07eebec8 == '\0') {
          FUN_03642964(UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_ForDevice_TypeInfo
                      );
          DAT_07eebec8 = '\x01';
        }
        puVar19 = (undefined8 *)
                  (*(long *)(*(long *)
                              UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_ForDevice_TypeInfo
                            + 0xb8) + 0x28);
        *puVar19 = uVar14;
        thunk_FUN_036b7ad0(puVar19,uVar14);
        uVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
        FUN_06f15dcc(uVar14,*(undefined8 *)puVar6,0);
        puVar19 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *puVar19 = uVar14;
        thunk_FUN_036b7ad0(puVar19,uVar14);
        lVar15 = FUN_03d1b5c8(*(undefined8 *)puVar5);
        puVar8 = OVRPlugin_MeshType_TypeInfo;
        puVar7 = System_Runtime_InteropServices_Marshal_MarshalerInstanceKeyComparer_TypeInfo;
        puVar19 = (undefined8 *)PTR_DAT_07a2c350;
        puVar6 = PTR_DAT_07a2c348;
        puVar5 = PTR_DAT_079f5008;
        puVar3 = PTR_DAT_079f4540;
        if (lVar15 != 0) {
          bVar10 = FUN_070081e8(lVar15,0);
          uVar14 = *(undefined8 *)puVar8;
          uVar18 = *(undefined8 *)puVar5;
          *(byte *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = (bVar10 ^ 0xff) & 1;
          if ((bVar10 & 1) == 0) {
            puVar19 = (undefined8 *)puVar6;
          }
          uVar14 = FUN_05c981c8(uVar14,*puVar19,uVar18,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978(*(long *)puVar3);
          }
          puVar3 = Newtonsoft_Json_JsonValidatingReader_TypeInfo;
          FUN_07179300(uVar14,0);
          uVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
          FUN_0700bb24(uVar14,0);
          lVar15 = *(long *)puVar4;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar15 = *(long *)puVar4;
          }
          puVar19 = (undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
          *puVar19 = uVar14;
          thunk_FUN_036b7ad0(puVar19,uVar14);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          lVar15 = FUN_06e96d28(0);
          puVar4 = PTR_DAT_079f4e28;
          if (lVar15 != 0) {
            FUN_06e96da0(lVar15,0);
            FUN_07187df8(*(undefined1 *)(param_2 + 0x68),0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            puVar4 = OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo;
            uVar17 = FUN_071c0684(param_2,0,0);
            if ((uVar17 & 1) == 0) {
              bVar9 = false;
            }
            else {
              bVar9 = *(int *)(param_2 + 0x74) == 1;
            }
            lVar15 = *(long *)puVar4;
            *(bool *)(param_1 + 0x30) = bVar9;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            lVar15 = FUN_072011a4(0);
            if (lVar15 != 0) {
              *(undefined1 *)(lVar15 + 0x3b) = *(undefined1 *)(param_1 + 0x30);
              lVar15 = FUN_072011a4(0);
              if (lVar15 != 0) {
                cVar1 = *(char *)(param_1 + 0x30);
                *(char *)(lVar15 + 0x26) = cVar1;
                puVar4 = UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo;
                if (cVar1 == '\0') {
LAB_0702c1ac:
                  if (*(int *)(*(long *)SpectrumKernel_TypeInfo + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                  }
                  FUN_06f10148(0);
                  return;
                }
                if (*(int *)(*(long *)
                              UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo +
                            0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                if (DAT_07eeb188 == '\0') {
                  FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo)
                  ;
                  DAT_07eeb188 = '\x01';
                }
                lVar15 = *(long *)puVar4;
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                  lVar15 = *(long *)puVar4;
                }
                local_c0 = *(undefined8 *)(param_2 + 0x78);
                lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
                uStack_a8 = 0;
                uStack_b0 = 0;
                uStack_98 = 0;
                local_a0 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                uStack_78 = 0;
                local_80 = 0;
                uStack_68 = 0;
                local_70 = 0;
                uVar11 = *(undefined4 *)(param_2 + 0x80);
                uVar17 = (ulong)CONCAT16((char)((uint)uVar11 >> 0x18),
                                         (uint6)CONCAT14((char)((uint)uVar11 >> 0x10),
                                                         (uint)CONCAT12((char)((uint)uVar11 >> 8),
                                                                        (ushort)(byte)uVar11)));
                uVar14 = NEON_ext(uVar17,uVar17,4,1);
                uStack_b8 = CONCAT44(CONCAT13((char)((ulong)uVar14 >> 0x30),
                                              CONCAT12((char)((ulong)uVar14 >> 0x20),
                                                       CONCAT11((char)((ulong)uVar14 >> 0x10),
                                                                (char)uVar14))),
                                     *(undefined4 *)(param_2 + 0x84));
                if (*plVar21 != 0) {
                  local_70 = FUN_06fc1054(*plVar21,0);
                  thunk_FUN_036b7ad0(&local_70,local_70);
                  if (lVar15 != 0) {
                    FUN_06eae7f4(lVar15,&local_c0,0);
                    goto LAB_0702c1ac;
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
  FUN_03642c18();
}


