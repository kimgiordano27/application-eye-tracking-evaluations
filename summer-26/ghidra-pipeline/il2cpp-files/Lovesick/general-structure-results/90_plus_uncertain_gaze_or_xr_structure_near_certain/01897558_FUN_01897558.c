/*
FUNCTION_NAME: FUN_01897558
ENTRY_POINT: 01897558
PROGRAM: Lovesick-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


long FUN_01897558(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  int *piVar20;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_74 [2];
  undefined8 local_70;
  uint local_64;
  
  puVar2 = UnityEngine_InputSystem_PlayerInput_DeviceLostEvent_TypeInfo;
  if ((DAT_03779802 & 1) == 0) {
    thunk_FUN_00d48444(System_IO_DriveNotFoundException_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_GetOrAdd__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ec078);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_Contains__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtmd_s64_f64__);
    thunk_FUN_00d48444(StringLiteral_1482);
    thunk_FUN_00d48444(StringLiteral_10777);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_633);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Models_DeserializableList<TrialOffer>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ee840);
    thunk_FUN_00d48444(
                      System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<SturdyBlastableModel>__);
    thunk_FUN_00d48444(Method_System_Uri_CreateUri__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__
                      );
    thunk_FUN_00d48444(StringLiteral_9027);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_List<MB3_MeshCombinerSingle_MBBlendShape>>_TryGetValue__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_52_0_TypeInfo);
    thunk_FUN_00d48444(System_Security_Cryptography_X509Certificates_X509CertificateImpl_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                      );
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_Manager_Watch_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10174);
    thunk_FUN_00d48444(UnityEngine_InputSystem_PlayerInput_DeviceLostEvent_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    DAT_03779802 = 1;
  }
  local_70 = 0;
  local_74[0] = 0;
  local_88 = 0;
  local_80 = 0;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar5 = StringLiteral_9027;
  puVar3 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<string,_List<MB3_MeshCombinerSingle_MBBlendShape>>_TryGetValue__
  ;
  puVar4 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  puVar2 = OVRPlugin_OVRP_1_52_0_TypeInfo;
  if (lVar8 == 0) goto LAB_01898230;
  FUN_017b46ec(lVar8,0);
  *(undefined8 *)(lVar8 + 0x10) = param_2;
  FUN_01865608(param_2,*(undefined8 *)puVar3,0);
  uVar9 = FUN_01898488(param_1,*(undefined8 *)(lVar8 + 0x10),0);
  lVar10 = FUN_01898488(param_1,*(undefined8 *)(lVar8 + 0x10),1);
  uVar11 = FUN_018651cc(uVar9,0);
  if ((uVar11 & 1) == 0) {
    plVar12 = *(long **)(param_1 + 0x20);
    if (plVar12 == (long *)0x0) goto LAB_01898230;
    lVar13 = (**(code **)(*plVar12 + 0x178))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x180));
    if (lVar13 != 0) {
      if ((param_3 != 2) &&
         (uVar11 = FUN_0189858c(*(undefined8 *)(lVar13 + 0x30),0x40), (uVar11 & 1) == 0)) {
        local_70 = *(undefined8 *)(lVar13 + 0x30);
        lVar8 = *(long *)(*(long *)puVar2 + 0x20);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pcVar14 = (char *)thunk_FUN_00d32ed4(&local_70,*(undefined8 *)(lVar8 + 0x80));
        if (*pcVar14 == '\0') {
          uVar11 = 0;
        }
        else {
          local_64 = FUN_00becc2c(&local_70,*(undefined8 *)puVar4);
          local_64 = local_64 | 0x40;
          local_90 = 0;
          FUN_01347274(&local_90,&local_64,*(undefined8 *)puVar1);
          uVar11 = local_90;
        }
        *(ulong *)(lVar13 + 0x30) = uVar11;
      }
      puVar2 = System_Security_Cryptography_X509Certificates_X509CertificateImpl_TypeInfo;
      if ((param_4 & 1) == 0) {
        return lVar13;
      }
      local_74[0] = *(undefined2 *)(lVar13 + 0x20);
      bVar6 = FUN_00bc4804(local_74,*(undefined8 *)
                                     Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__
                          );
      lVar8 = *(long *)(*(long *)puVar2 + 0x20);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      pcVar14 = (char *)thunk_FUN_00d32ed4(local_74,*(undefined8 *)(lVar8 + 0x80));
      if ((bVar6 & *pcVar14 != '\0') != 0) {
        return lVar13;
      }
      local_90 = local_90 & 0xffffffffffff0000;
      local_64 = CONCAT31(local_64._1_3_,1);
      FUN_01347274(&local_90,&local_64,*(undefined8 *)puVar5);
      *(undefined2 *)(lVar13 + 0x20) = (undefined2)local_90;
      return lVar13;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                               Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_Contains__
                             );
  puVar2 = 
  Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_GetOrAdd__
  ;
  if (lVar13 == 0) goto LAB_01898230;
  FUN_012d239c(lVar13,lVar8,*(undefined8 *)StringLiteral_10174,0);
  uVar11 = FUN_010d7cf0(uVar9,lVar13,*(undefined8 *)puVar2);
  if ((uVar11 & 1) != 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar9 = FUN_01731954(0);
    FUN_00ac2be8(lVar8);
    plVar12 = *(long **)(lVar8 + 0x10);
    uVar18 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIDocument>_Add__);
LAB_018982a4:
    uVar9 = FUN_018651d4(uVar18,uVar9,plVar12,0);
    thunk_FUN_00d48444(StringLiteral_1457);
    uVar18 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01802838(uVar18,uVar9,0);
    uVar9 = thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_EffectMesh_ReceiveAnchorUpdatedCallback__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar18,uVar9);
  }
  plVar12 = (long *)FUN_01896f9c(param_1);
  if (plVar12 == (long *)0x0) goto LAB_01898230;
  lVar13 = *plVar12;
  uVar9 = *(undefined8 *)(lVar8 + 0x10);
  uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar11 != 0) {
    piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10777) {
        puVar15 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_01897908;
      }
      uVar11 = uVar11 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar11 != 0);
  }
  puVar15 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10777,0);
LAB_01897908:
  plVar12 = (long *)(*(code *)*puVar15)(plVar12,uVar9,puVar15[1]);
  if (plVar12 == (long *)0x0) goto LAB_01898230;
  lVar13 = plVar12[0xe];
  if (lVar13 == 0) {
    lVar13 = plVar12[0xf];
  }
  uVar9 = *(undefined8 *)(lVar8 + 0x10);
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                               Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
                             );
  puVar2 = Meta_XR_ImmersiveDebugger_Manager_Watch_TypeInfo;
  if (lVar16 == 0) goto LAB_01898230;
  FUN_01890cf8();
  lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar17 == 0) goto LAB_01898230;
  FUN_0189880c(lVar17,uVar9,lVar16);
  uVar9 = FUN_01897040(param_1,lVar17);
  if (lVar10 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01898230;
    *(long *)(*(long *)(param_1 + 0x30) + 0x10) = lVar10;
  }
  if ((param_4 & 1) != 0) {
    lVar10 = *(long *)(param_1 + 0x30);
    local_90 = local_90 & 0xffffffffffff0000;
    local_64 = CONCAT31(local_64._1_3_,1);
    uVar9 = FUN_01347274(&local_90,&local_64,*(undefined8 *)puVar5);
    if (lVar10 == 0) goto LAB_01898230;
    *(undefined2 *)(lVar10 + 0x20) = (undefined2)local_90;
  }
  lVar10 = *(long *)(param_1 + 0x30);
  uVar9 = FUN_018982fc(uVar9,*(undefined8 *)(lVar8 + 0x10));
  if (lVar10 == 0) goto LAB_01898230;
  *(undefined8 *)(lVar10 + 0x18) = uVar9;
  lVar10 = *(long *)(param_1 + 0x30);
  uVar9 = FUN_01898398(uVar9,*(undefined8 *)(lVar8 + 0x10));
  if (lVar10 == 0) goto LAB_01898230;
  *(undefined8 *)(lVar10 + 0x28) = uVar9;
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__;
  if (lVar13 == 0) {
    switch(*(undefined4 *)((long)plVar12 + 0x24)) {
    case 1:
      lVar10 = *(long *)(param_1 + 0x30);
      local_64 = 0x10;
      if (param_3 != 2) {
        local_64 = 0x50;
      }
      local_90 = 0;
      FUN_01347274(&local_90,&local_64,*(undefined8 *)puVar1);
      if (lVar10 == 0) goto LAB_01898230;
      *(ulong *)(lVar10 + 0x30) = local_90;
      lVar10 = *(long *)(param_1 + 0x30);
      uVar9 = FUN_01898488(param_1,*(undefined8 *)(lVar8 + 0x10),0);
      puVar2 = StringLiteral_633;
      if (lVar10 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
      bVar6 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(*plVar12 + 300) < bVar6) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)puVar2)) {
LAB_018982f0:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar12);
      }
      FUN_018988b8(param_1,*(undefined8 *)(lVar8 + 0x10),plVar12);
      break;
    case 2:
      lVar10 = *(long *)(param_1 + 0x30);
      local_64 = 0x20;
      if (param_3 != 2) {
        local_64 = 0x60;
      }
      local_90 = 0;
      FUN_01347274(&local_90,&local_64,*(undefined8 *)puVar1);
      if (lVar10 == 0) goto LAB_01898230;
      *(ulong *)(lVar10 + 0x30) = local_90;
      lVar10 = *(long *)(param_1 + 0x30);
      uVar9 = FUN_01898488(param_1,*(undefined8 *)(lVar8 + 0x10),0);
      puVar1 = PTR_DAT_033ee840;
      if (lVar10 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
      puVar3 = Method_Oculus_Platform_Models_DeserializableList<TrialOffer>__ctor__;
      uVar9 = *(undefined8 *)(lVar8 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar10 = FUN_01101d58(uVar9,*(undefined8 *)puVar3);
      if (lVar10 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (uint)(*(char *)(lVar10 + 0x68) == '\0') << 1;
      }
      uVar9 = *(undefined8 *)(lVar8 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01860844(uVar9,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar11 = FUN_0178a8c4(uVar9,0,0);
      if ((uVar11 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x30);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Uri_CreateUri__);
        if ((lVar8 == 0) ||
           (FUN_01320e50(lVar8,*(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<SturdyBlastableModel>__),
           lVar10 == 0)) goto LAB_01898230;
        *(long *)(lVar10 + 0x98) = lVar8;
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_01898230;
        plVar12 = *(long **)(*(long *)(param_1 + 0x30) + 0x98);
        uVar9 = FUN_01897558(param_1,uVar9,iVar7,0);
        if (plVar12 == (long *)0x0) goto LAB_01898230;
        lVar8 = *plVar12;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_1482) {
              puVar15 = (undefined8 *)(lVar8 + (long)(*piVar20 + 2) * 0x10 + 0x138);
              goto LAB_0189821c;
            }
            uVar11 = uVar11 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_1482,2);
LAB_0189821c:
        (*(code *)*puVar15)(plVar12,uVar9,puVar15[1]);
      }
      break;
    case 3:
      lVar10 = *(long *)(param_1 + 0x30);
      local_64 = FUN_01898e14(uVar9,*(undefined8 *)(lVar8 + 0x10),param_3);
      local_90 = 0;
      FUN_01347274(&local_90,&local_64,*(undefined8 *)puVar1);
      if (lVar10 == 0) goto LAB_01898230;
      *(ulong *)(lVar10 + 0x30) = local_90;
      puVar2 = OVRPlugin_OVRP_1_52_0_TypeInfo;
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_01898230;
      local_70 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
      iVar7 = FUN_00becc2c(&local_70,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__
                          );
      lVar10 = *(long *)(*(long *)puVar2 + 0x20);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c(lVar10);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      pcVar14 = (char *)thunk_FUN_00d32ed4(&local_70,*(undefined8 *)(lVar10 + 0x80));
      if (((iVar7 == 4) && (*pcVar14 != '\0')) &&
         (uVar11 = FUN_01866238(*(undefined8 *)(lVar8 + 0x10),0), (uVar11 & 1) != 0)) {
        plVar12 = *(long **)(lVar8 + 0x10);
        uVar9 = *(undefined8 *)PTR_DAT_033ec078;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01780344(uVar9,0);
        if (plVar12 == (long *)0x0) goto LAB_01898230;
        uVar11 = (**(code **)(*plVar12 + 0x1f8))(plVar12,uVar9,1,*(undefined8 *)(*plVar12 + 0x200));
        if ((uVar11 & 1) == 0) {
          lVar13 = *(long *)(param_1 + 0x30);
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_get_Current__
                                     );
          if ((lVar10 != 0) &&
             (FUN_01320e50(lVar10,*(undefined8 *)
                                   System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                          ), puVar2 = System_IO_DriveNotFoundException_TypeInfo, lVar13 != 0)) {
            *(long *)(lVar13 + 0xe0) = lVar10;
            uVar9 = *(undefined8 *)(lVar8 + 0x10);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar10 = FUN_01857354(uVar9,0);
            puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtmd_s64_f64__;
            puVar4 = 
            Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
            ;
            puVar2 = 
            Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            ;
            if ((lVar10 != 0) && (lVar13 = *(long *)(lVar10 + 0x20), lVar13 != 0)) {
              uVar11 = 0;
              while( true ) {
                if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar11) goto LAB_01897a18;
                lVar13 = *(long *)(lVar10 + 0x18);
                if (lVar13 == 0) break;
                if (*(uint *)(lVar13 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar9 = *(undefined8 *)(lVar13 + uVar11 * 8 + 0x20);
                uVar18 = *(undefined8 *)(lVar8 + 0x10);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar9 = FUN_017a63ec(uVar18,uVar9,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                uVar9 = FUN_018b7f6c(uVar9,0);
                if ((*(long *)(param_1 + 0x30) == 0) ||
                   (plVar12 = *(long **)(*(long *)(param_1 + 0x30) + 0xe0), plVar12 == (long *)0x0))
                break;
                lVar13 = *plVar12;
                uVar19 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar19 != 0) {
                  piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                      puVar15 = (undefined8 *)(lVar13 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                      goto LAB_01897e74;
                    }
                    uVar19 = uVar19 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar19 != 0);
                }
                puVar15 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar1,2);
LAB_01897e74:
                (*(code *)*puVar15)(plVar12,uVar9,puVar15[1]);
                lVar13 = *(long *)(lVar10 + 0x20);
                uVar11 = uVar11 + 1;
                if (lVar13 == 0) break;
              }
            }
          }
          goto LAB_01898230;
        }
      }
      break;
    case 4:
      lVar8 = plVar12[0xc];
      if (*(int *)(*(long *)
                    Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_0184f0c8(lVar8,0);
      lVar8 = *(long *)(param_1 + 0x30);
      uVar9 = *(undefined8 *)puVar1;
      local_64 = 0x41;
      if (param_3 == 2) {
        local_64 = 1;
      }
      if ((uVar11 & 1) == 0) {
        local_64 = 1;
      }
      goto LAB_018979fc;
    case 5:
      lVar10 = *(long *)(param_1 + 0x30);
      local_64 = 0x10;
      if (param_3 != 2) {
        local_64 = 0x50;
      }
      local_90 = 0;
      FUN_01347274(&local_90,&local_64,*(undefined8 *)puVar1);
      if (lVar10 == 0) goto LAB_01898230;
      *(ulong *)(lVar10 + 0x30) = local_90;
      uVar9 = *(undefined8 *)(lVar8 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01860a6c(uVar9,&local_80,&local_88,0);
      uVar9 = local_80;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_0178a8c4(uVar9,0,0);
      if ((uVar11 & 1) != 0) {
        plVar12 = (long *)FUN_01896f9c(param_1);
        uVar9 = local_80;
        if (plVar12 == (long *)0x0) goto LAB_01898230;
        lVar8 = *plVar12;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10777) {
              puVar15 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_018981c8;
            }
            uVar11 = uVar11 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10777,0);
LAB_018981c8:
        lVar8 = (*(code *)*puVar15)(plVar12,uVar9,puVar15[1]);
        if (lVar8 == 0) goto LAB_01898230;
        if (*(int *)(lVar8 + 0x24) == 3) {
          lVar8 = *(long *)(param_1 + 0x30);
          uVar9 = FUN_01897558(param_1,local_88,0,0);
          if (lVar8 == 0) goto LAB_01898230;
          *(undefined8 *)(lVar8 + 0xc0) = uVar9;
        }
      }
      break;
    case 6:
    case 8:
      goto switchD_01897a80_caseD_6;
    case 7:
      lVar10 = *(long *)(param_1 + 0x30);
      local_64 = 0x10;
      if (param_3 != 2) {
        local_64 = 0x50;
      }
      local_90 = 0;
      FUN_01347274(&local_90,&local_64,*(undefined8 *)puVar1);
      if (lVar10 == 0) goto LAB_01898230;
      *(ulong *)(lVar10 + 0x30) = local_90;
      lVar10 = *(long *)(param_1 + 0x30);
      uVar9 = FUN_01898488(param_1,*(undefined8 *)(lVar8 + 0x10),0);
      puVar2 = OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo;
      if (lVar10 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
      bVar6 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(*plVar12 + 300) < bVar6) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)puVar2))
      goto LAB_018982f0;
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_01898230;
      *(undefined1 *)(*(long *)(param_1 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      FUN_00acb0a4();
      uVar9 = FUN_01731954(0);
      uVar18 = thunk_FUN_00d48444(StringLiteral_3315);
      goto LAB_018982a4;
    }
  }
  else {
switchD_01897a80_caseD_6:
    lVar8 = *(long *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)puVar1;
    local_64 = 0x7f;
LAB_018979fc:
    local_90 = 0;
    FUN_01347274(&local_90,&local_64,uVar9);
    if (lVar8 == 0) goto LAB_01898230;
    *(ulong *)(lVar8 + 0x30) = local_90;
  }
LAB_01897a18:
  lVar8 = FUN_01897180(param_1);
  if (lVar8 != 0) {
    return *(long *)(lVar8 + 0x18);
  }
LAB_01898230:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


