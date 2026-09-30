/*
FUNCTION_NAME: Oculus.Interaction.SnapInteractor$$ComputeCandidate
ENTRY_POINT: 01897948
PROGRAM: Lovesick-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Interaction_SnapInteractor__ComputeCandidate(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  long lVar16;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined2 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar3 = Meta_XR_ImmersiveDebugger_Manager_Watch_TypeInfo;
  FUN_01890cf8();
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar7 == 0) goto LAB_01898230;
  FUN_0189880c();
  uVar8 = FUN_01897040();
  if (unaff_x24 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
    *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10) = unaff_x24;
  }
  if ((unaff_x22 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
    in_stack_00000038._4_4_ = CONCAT31(in_stack_00000038._5_3_,1);
    uVar8 = FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x21);
    if (lVar7 == 0) goto LAB_01898230;
    *(undefined2 *)(lVar7 + 0x20) = uStack0000000000000010;
  }
  lVar7 = *(long *)(unaff_x19 + 0x30);
  uVar8 = FUN_018982fc(uVar8,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar7 == 0) goto LAB_01898230;
  *(undefined8 *)(lVar7 + 0x18) = uVar8;
  lVar7 = *(long *)(unaff_x19 + 0x30);
  uVar8 = FUN_01898398(uVar8,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar7 == 0) goto LAB_01898230;
  *(undefined8 *)(lVar7 + 0x28) = uVar8;
  puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__;
  if (unaff_x28 == 0) {
    switch(*(undefined4 *)((long)unaff_x23 + 0x24)) {
    case 1:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x10;
      if (in_stack_00000008._4_4_ != 2) {
        in_stack_00000038._4_4_ = 0x50;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar7 == 0) goto LAB_01898230;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000010;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar8 = FUN_01898488();
      puVar3 = StringLiteral_633;
      if (lVar7 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*unaff_x23 + 300) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
LAB_018982f0:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      FUN_018988b8();
      break;
    case 2:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x20;
      if (in_stack_00000008._4_4_ != 2) {
        in_stack_00000038._4_4_ = 0x60;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar7 == 0) goto LAB_01898230;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000010;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar8 = FUN_01898488();
      puVar2 = PTR_DAT_033ee840;
      if (lVar7 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      puVar4 = Method_Oculus_Platform_Models_DeserializableList<TrialOffer>__ctor__;
      uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01101d58(uVar8,*(undefined8 *)puVar4);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01860844(uVar8,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar9 = FUN_0178a8c4(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        lVar16 = *(long *)(unaff_x19 + 0x30);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Uri_CreateUri__);
        if ((lVar7 == 0) ||
           (FUN_01320e50(lVar7,*(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<SturdyBlastableModel>__),
           lVar16 == 0)) goto LAB_01898230;
        *(long *)(lVar16 + 0x98) = lVar7;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
        plVar10 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
        uVar8 = FUN_01897558();
        if (plVar10 == (long *)0x0) goto LAB_01898230;
        lVar7 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1482) {
              puVar11 = (undefined8 *)(lVar7 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_0189821c;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_1482,2);
LAB_0189821c:
        (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
      }
      break;
    case 3:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ =
           FUN_01898e14(uVar8,*(undefined8 *)(unaff_x20 + 0x10),in_stack_00000008._4_4_);
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar7 == 0) goto LAB_01898230;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000010;
      puVar3 = OVRPlugin_OVRP_1_52_0_TypeInfo;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
      in_stack_00000030 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      iVar6 = FUN_00becc2c(&stack0x00000030,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__
                          );
      lVar7 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000030,*(undefined8 *)(lVar7 + 0x80));
      if (((iVar6 == 4) && (*pcVar12 != '\0')) &&
         (uVar9 = FUN_01866238(*(undefined8 *)(unaff_x20 + 0x10),0), (uVar9 & 1) != 0)) {
        plVar10 = *(long **)(unaff_x20 + 0x10);
        uVar8 = *(undefined8 *)PTR_DAT_033ec078;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01780344(uVar8,0);
        if (plVar10 == (long *)0x0) goto LAB_01898230;
        uVar9 = (**(code **)(*plVar10 + 0x1f8))(plVar10,uVar8,1,*(undefined8 *)(*plVar10 + 0x200));
        if ((uVar9 & 1) == 0) {
          lVar16 = *(long *)(unaff_x19 + 0x30);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_get_Current__
                                    );
          if ((lVar7 != 0) &&
             (FUN_01320e50(lVar7,*(undefined8 *)
                                  System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                          ), puVar3 = System_IO_DriveNotFoundException_TypeInfo, lVar16 != 0)) {
            *(long *)(lVar16 + 0xe0) = lVar7;
            uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar7 = FUN_01857354(uVar8,0);
            puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtmd_s64_f64__;
            puVar5 = 
            Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
            ;
            puVar3 = 
            Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            ;
            if ((lVar7 != 0) && (lVar16 = *(long *)(lVar7 + 0x20), lVar16 != 0)) {
              uVar9 = 0;
              while( true ) {
                if ((long)*(int *)(lVar16 + 0x18) <= (long)uVar9) goto LAB_01897a18;
                lVar16 = *(long *)(lVar7 + 0x18);
                if (lVar16 == 0) break;
                if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar8 = *(undefined8 *)(lVar16 + uVar9 * 8 + 0x20);
                uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_017a63ec(uVar13,uVar8,0);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar3);
                }
                uVar8 = FUN_018b7f6c(uVar8,0);
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (plVar10 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar10 == (long *)0x0
                   )) break;
                lVar16 = *plVar10;
                uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                      puVar11 = (undefined8 *)(lVar16 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_01897e74;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,2);
LAB_01897e74:
                (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
                lVar16 = *(long *)(lVar7 + 0x20);
                uVar9 = uVar9 + 1;
                if (lVar16 == 0) break;
              }
            }
          }
          goto LAB_01898230;
        }
      }
      break;
    case 4:
      lVar7 = unaff_x23[0xc];
      if (*(int *)(*(long *)
                    Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_0184f0c8(lVar7,0);
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar8 = *unaff_x29;
      in_stack_00000038._4_4_ = 0x41;
      if (in_stack_00000008._4_4_ == 2) {
        in_stack_00000038._4_4_ = 1;
      }
      if ((uVar9 & 1) == 0) {
        in_stack_00000038._4_4_ = 1;
      }
      goto LAB_018979fc;
    case 5:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x10;
      if (in_stack_00000008._4_4_ != 2) {
        in_stack_00000038._4_4_ = 0x50;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar7 == 0) goto LAB_01898230;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000010;
      uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01860a6c(uVar8,&stack0x00000020,&stack0x00000018,0);
      uVar8 = in_stack_00000020;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_0178a8c4(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_01896f9c();
        uVar8 = in_stack_00000020;
        if (plVar10 == (long *)0x0) goto LAB_01898230;
        lVar7 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_10777) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_018981c8;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_10777,0);
LAB_018981c8:
        lVar7 = (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
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
      if (in_stack_00000008._4_4_ != 2) {
        in_stack_00000038._4_4_ = 0x50;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar7 == 0) goto LAB_01898230;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000010;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar8 = FUN_01898488();
      puVar3 = OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo;
      if (lVar7 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*unaff_x23 + 300) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
      goto LAB_018982f0;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      FUN_00acb0a4();
      uVar8 = FUN_01731954(0);
      uVar13 = thunk_FUN_00d48444(StringLiteral_3315);
      uVar8 = FUN_018651d4(uVar13,uVar8);
      thunk_FUN_00d48444(StringLiteral_1457);
      uVar13 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_01802838(uVar13,uVar8,0);
      uVar8 = thunk_FUN_00d48444(
                                Method_Meta_XR_MRUtilityKit_EffectMesh_ReceiveAnchorUpdatedCallback__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar13,uVar8);
    }
  }
  else {
switchD_01897a80_caseD_6:
    lVar7 = *(long *)(unaff_x19 + 0x30);
    uVar8 = *unaff_x29;
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
    return *(undefined8 *)(lVar7 + 0x18);
  }
LAB_01898230:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


