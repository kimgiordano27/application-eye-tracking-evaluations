/*
FUNCTION_NAME: Oculus.Interaction.SnapInteractor$$ComputePointerPose
ENTRY_POINT: 018976bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


long Oculus_Interaction_SnapInteractor__ComputePointerPose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  int iStack000000000000000c;
  undefined2 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined2 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x198));
  thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_Manager_Watch_TypeInfo);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(StringLiteral_10174);
  thunk_FUN_00d48444(UnityEngine_InputSystem_PlayerInput_DeviceLostEvent_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
  *(undefined1 *)(unaff_x24 + 0x802) = 1;
  in_stack_00000030 = 0;
  uStack000000000000002c = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  lVar7 = thunk_FUN_00d62348(*unaff_x20);
  puVar3 = StringLiteral_9027;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<string,_List<MB3_MeshCombinerSingle_MBBlendShape>>_TryGetValue__
  ;
  puVar4 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  puVar2 = OVRPlugin_OVRP_1_52_0_TypeInfo;
  if (lVar7 == 0) goto LAB_01898230;
  FUN_017b46ec(lVar7,0);
  *(undefined8 *)(lVar7 + 0x10) = unaff_x23;
  FUN_01865608();
  uVar8 = FUN_01898488();
  lVar9 = FUN_01898488();
  uVar10 = FUN_018651cc(uVar8,0);
  if ((uVar10 & 1) == 0) {
    plVar11 = *(long **)(unaff_x19 + 0x20);
    if (plVar11 == (long *)0x0) goto LAB_01898230;
    lVar12 = (**(code **)(*plVar11 + 0x178))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x180));
    if (lVar12 != 0) {
      if ((unaff_w21 != 2) &&
         (uVar10 = FUN_0189858c(*(undefined8 *)(lVar12 + 0x30),0x40), (uVar10 & 1) == 0)) {
        in_stack_00000030 = *(undefined8 *)(lVar12 + 0x30);
        lVar7 = *(long *)(*(long *)puVar2 + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        pcVar13 = (char *)thunk_FUN_00d32ed4(&stack0x00000030,*(undefined8 *)(lVar7 + 0x80));
        if (*pcVar13 == '\0') {
          uVar10 = 0;
        }
        else {
          in_stack_00000038._4_4_ = FUN_00becc2c(&stack0x00000030,*(undefined8 *)puVar4);
          in_stack_00000038._4_4_ = in_stack_00000038._4_4_ | 0x40;
          _uStack0000000000000010 = 0;
          FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*(undefined8 *)puVar1);
          uVar10 = _uStack0000000000000010;
        }
        *(ulong *)(lVar12 + 0x30) = uVar10;
      }
      puVar2 = System_Security_Cryptography_X509Certificates_X509CertificateImpl_TypeInfo;
      if ((unaff_x22 & 1) == 0) {
        return lVar12;
      }
      uStack000000000000002c = *(undefined2 *)(lVar12 + 0x20);
      bVar5 = FUN_00bc4804(&stack0x0000002c,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__
                          );
      lVar7 = *(long *)(*(long *)puVar2 + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pcVar13 = (char *)thunk_FUN_00d32ed4(&stack0x0000002c,*(undefined8 *)(lVar7 + 0x80));
      if ((bVar5 & *pcVar13 != '\0') != 0) {
        return lVar12;
      }
      _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
      in_stack_00000038._4_4_ = CONCAT31(in_stack_00000038._5_3_,1);
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*(undefined8 *)puVar3);
      *(undefined2 *)(lVar12 + 0x20) = uStack0000000000000010;
      return lVar12;
    }
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                               Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_Contains__
                             );
  puVar2 = 
  Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_GetOrAdd__
  ;
  if (lVar12 == 0) goto LAB_01898230;
  FUN_012d239c(lVar12,lVar7,*(undefined8 *)StringLiteral_10174,0);
  uVar10 = FUN_010d7cf0(uVar8,lVar12,*(undefined8 *)puVar2);
  if ((uVar10 & 1) != 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar8 = FUN_01731954(0);
    FUN_00ac2be8(lVar7);
    plVar11 = *(long **)(lVar7 + 0x10);
    uVar17 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIDocument>_Add__);
LAB_018982a4:
    uVar8 = FUN_018651d4(uVar17,uVar8,plVar11,0);
    thunk_FUN_00d48444(StringLiteral_1457);
    uVar17 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01802838(uVar17,uVar8,0);
    uVar8 = thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_EffectMesh_ReceiveAnchorUpdatedCallback__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar17,uVar8);
  }
  plVar11 = (long *)FUN_01896f9c();
  if (plVar11 == (long *)0x0) goto LAB_01898230;
  lVar12 = *plVar11;
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12a);
  iStack000000000000000c = unaff_w21;
  if (uVar10 != 0) {
    piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10777) {
        puVar14 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_01897908;
      }
      uVar10 = uVar10 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar10 != 0);
  }
  puVar14 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10777,0);
LAB_01897908:
  plVar11 = (long *)(*(code *)*puVar14)(plVar11,uVar8,puVar14[1]);
  if (plVar11 == (long *)0x0) goto LAB_01898230;
  lVar12 = plVar11[0xe];
  if (lVar12 == 0) {
    lVar12 = plVar11[0xf];
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                               Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
                             );
  puVar2 = Meta_XR_ImmersiveDebugger_Manager_Watch_TypeInfo;
  if (lVar15 == 0) goto LAB_01898230;
  FUN_01890cf8();
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar16 == 0) goto LAB_01898230;
  FUN_0189880c(lVar16,uVar8,lVar15);
  uVar8 = FUN_01897040();
  if (lVar9 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
    *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10) = lVar9;
  }
  if ((unaff_x22 & 1) != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
    in_stack_00000038._4_4_ = CONCAT31(in_stack_00000038._5_3_,1);
    uVar8 = FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*(undefined8 *)puVar3);
    if (lVar9 == 0) goto LAB_01898230;
    *(undefined2 *)(lVar9 + 0x20) = uStack0000000000000010;
  }
  lVar9 = *(long *)(unaff_x19 + 0x30);
  uVar8 = FUN_018982fc(uVar8,*(undefined8 *)(lVar7 + 0x10));
  if (lVar9 == 0) goto LAB_01898230;
  *(undefined8 *)(lVar9 + 0x18) = uVar8;
  lVar9 = *(long *)(unaff_x19 + 0x30);
  uVar8 = FUN_01898398(uVar8,*(undefined8 *)(lVar7 + 0x10));
  if (lVar9 == 0) goto LAB_01898230;
  *(undefined8 *)(lVar9 + 0x28) = uVar8;
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__;
  if (lVar12 == 0) {
    switch(*(undefined4 *)((long)plVar11 + 0x24)) {
    case 1:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x10;
      if (iStack000000000000000c != 2) {
        in_stack_00000038._4_4_ = 0x50;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*(undefined8 *)puVar1);
      if (lVar7 == 0) goto LAB_01898230;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000010;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar8 = FUN_01898488();
      puVar2 = StringLiteral_633;
      if (lVar7 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      bVar5 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(*plVar11 + 300) < bVar5) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar2)) {
LAB_018982f0:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar11);
      }
      FUN_018988b8();
      break;
    case 2:
      lVar9 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x20;
      if (iStack000000000000000c != 2) {
        in_stack_00000038._4_4_ = 0x60;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*(undefined8 *)puVar1);
      if (lVar9 == 0) goto LAB_01898230;
      *(ulong *)(lVar9 + 0x30) = _uStack0000000000000010;
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar8 = FUN_01898488();
      puVar1 = PTR_DAT_033ee840;
      if (lVar9 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
      puVar3 = Method_Oculus_Platform_Models_DeserializableList<TrialOffer>__ctor__;
      uVar8 = *(undefined8 *)(lVar7 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01101d58(uVar8,*(undefined8 *)puVar3);
      uVar8 = *(undefined8 *)(lVar7 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01860844(uVar8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar10 = FUN_0178a8c4(uVar8,0,0);
      if ((uVar10 & 1) != 0) {
        lVar9 = *(long *)(unaff_x19 + 0x30);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Uri_CreateUri__);
        if ((lVar7 == 0) ||
           (FUN_01320e50(lVar7,*(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<SturdyBlastableModel>__),
           lVar9 == 0)) goto LAB_01898230;
        *(long *)(lVar9 + 0x98) = lVar7;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
        plVar11 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
        uVar8 = FUN_01897558();
        if (plVar11 == (long *)0x0) goto LAB_01898230;
        lVar7 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar10 != 0) {
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_1482) {
              puVar14 = (undefined8 *)(lVar7 + (long)(*piVar19 + 2) * 0x10 + 0x138);
              goto LAB_0189821c;
            }
            uVar10 = uVar10 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar10 != 0);
        }
        puVar14 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_1482,2);
LAB_0189821c:
        (*(code *)*puVar14)(plVar11,uVar8,puVar14[1]);
      }
      break;
    case 3:
      lVar9 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ =
           FUN_01898e14(uVar8,*(undefined8 *)(lVar7 + 0x10),iStack000000000000000c);
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*(undefined8 *)puVar1);
      if (lVar9 == 0) goto LAB_01898230;
      *(ulong *)(lVar9 + 0x30) = _uStack0000000000000010;
      puVar2 = OVRPlugin_OVRP_1_52_0_TypeInfo;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
      in_stack_00000030 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      iVar6 = FUN_00becc2c(&stack0x00000030,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__
                          );
      lVar9 = *(long *)(*(long *)puVar2 + 0x20);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c(lVar9);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      pcVar13 = (char *)thunk_FUN_00d32ed4(&stack0x00000030,*(undefined8 *)(lVar9 + 0x80));
      if (((iVar6 == 4) && (*pcVar13 != '\0')) &&
         (uVar10 = FUN_01866238(*(undefined8 *)(lVar7 + 0x10),0), (uVar10 & 1) != 0)) {
        plVar11 = *(long **)(lVar7 + 0x10);
        uVar8 = *(undefined8 *)PTR_DAT_033ec078;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01780344(uVar8,0);
        if (plVar11 == (long *)0x0) goto LAB_01898230;
        uVar10 = (**(code **)(*plVar11 + 0x1f8))(plVar11,uVar8,1,*(undefined8 *)(*plVar11 + 0x200));
        if ((uVar10 & 1) == 0) {
          lVar12 = *(long *)(unaff_x19 + 0x30);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_get_Current__
                                    );
          if ((lVar9 != 0) &&
             (FUN_01320e50(lVar9,*(undefined8 *)
                                  System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                          ), puVar2 = System_IO_DriveNotFoundException_TypeInfo, lVar12 != 0)) {
            *(long *)(lVar12 + 0xe0) = lVar9;
            uVar8 = *(undefined8 *)(lVar7 + 0x10);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar9 = FUN_01857354(uVar8,0);
            puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtmd_s64_f64__;
            puVar4 = 
            Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
            ;
            puVar2 = 
            Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            ;
            if ((lVar9 != 0) && (lVar12 = *(long *)(lVar9 + 0x20), lVar12 != 0)) {
              uVar10 = 0;
              while( true ) {
                if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar10) goto LAB_01897a18;
                lVar12 = *(long *)(lVar9 + 0x18);
                if (lVar12 == 0) break;
                if (*(uint *)(lVar12 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar8 = *(undefined8 *)(lVar12 + uVar10 * 8 + 0x20);
                uVar17 = *(undefined8 *)(lVar7 + 0x10);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_017a63ec(uVar17,uVar8,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                uVar8 = FUN_018b7f6c(uVar8,0);
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (plVar11 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar11 == (long *)0x0
                   )) break;
                lVar12 = *plVar11;
                uVar18 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                      puVar14 = (undefined8 *)(lVar12 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                      goto LAB_01897e74;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar14 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,2);
LAB_01897e74:
                (*(code *)*puVar14)(plVar11,uVar8,puVar14[1]);
                lVar12 = *(long *)(lVar9 + 0x20);
                uVar10 = uVar10 + 1;
                if (lVar12 == 0) break;
              }
            }
          }
          goto LAB_01898230;
        }
      }
      break;
    case 4:
      lVar7 = plVar11[0xc];
      if (*(int *)(*(long *)
                    Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_0184f0c8(lVar7,0);
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar8 = *(undefined8 *)puVar1;
      in_stack_00000038._4_4_ = 0x41;
      if (iStack000000000000000c == 2) {
        in_stack_00000038._4_4_ = 1;
      }
      if ((uVar10 & 1) == 0) {
        in_stack_00000038._4_4_ = 1;
      }
      goto LAB_018979fc;
    case 5:
      lVar9 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x10;
      if (iStack000000000000000c != 2) {
        in_stack_00000038._4_4_ = 0x50;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*(undefined8 *)puVar1);
      if (lVar9 == 0) goto LAB_01898230;
      *(ulong *)(lVar9 + 0x30) = _uStack0000000000000010;
      uVar8 = *(undefined8 *)(lVar7 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01860a6c(uVar8,&stack0x00000020,&stack0x00000018,0);
      uVar8 = in_stack_00000020;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_0178a8c4(uVar8,0,0);
      if ((uVar10 & 1) != 0) {
        plVar11 = (long *)FUN_01896f9c();
        uVar8 = in_stack_00000020;
        if (plVar11 == (long *)0x0) goto LAB_01898230;
        lVar7 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar10 != 0) {
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10777) {
              puVar14 = (undefined8 *)(lVar7 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_018981c8;
            }
            uVar10 = uVar10 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar10 != 0);
        }
        puVar14 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10777,0);
LAB_018981c8:
        lVar7 = (*(code *)*puVar14)(plVar11,uVar8,puVar14[1]);
        if (lVar7 == 0) goto LAB_01898230;
        if (*(int *)(lVar7 + 0x24) == 3) {
          lVar7 = *(long *)(unaff_x19 + 0x30);
          uVar8 = FUN_01897558();
          if (lVar7 == 0) goto LAB_01898230;
          *(undefined8 *)(lVar7 + 0xc0) = uVar8;
        }
      }
      break;
    case 6:
    case 8:
      goto switchD_01897a80_caseD_6;
    case 7:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x10;
      if (iStack000000000000000c != 2) {
        in_stack_00000038._4_4_ = 0x50;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*(undefined8 *)puVar1);
      if (lVar7 == 0) goto LAB_01898230;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000010;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar8 = FUN_01898488();
      puVar2 = OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo;
      if (lVar7 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      bVar5 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(*plVar11 + 300) < bVar5) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar2))
      goto LAB_018982f0;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      FUN_00acb0a4();
      uVar8 = FUN_01731954(0);
      uVar17 = thunk_FUN_00d48444(StringLiteral_3315);
      goto LAB_018982a4;
    }
  }
  else {
switchD_01897a80_caseD_6:
    lVar7 = *(long *)(unaff_x19 + 0x30);
    uVar8 = *(undefined8 *)puVar1;
    in_stack_00000038._4_4_ = 0x7f;
LAB_018979fc:
    _uStack0000000000000010 = 0;
    FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,uVar8);
    if (lVar7 == 0) goto LAB_01898230;
    *(ulong *)(lVar7 + 0x30) = _uStack0000000000000010;
  }
LAB_01897a18:
  lVar7 = FUN_01897180();
  if (lVar7 != 0) {
    return *(long *)(lVar7 + 0x18);
  }
LAB_01898230:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


