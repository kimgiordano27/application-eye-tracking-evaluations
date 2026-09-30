/*
FUNCTION_NAME: Oculus.Interaction.SnapInteractor$$TimedOut
ENTRY_POINT: 018978a4
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


undefined8 Oculus_Interaction_SnapInteractor__TimedOut(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x24;
  undefined8 uVar17;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  int iStack000000000000000c;
  undefined2 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_1 == (long *)0x0) goto LAB_01898230;
  lVar13 = *param_1;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
  iStack000000000000000c = unaff_w21;
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10777) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_01897908;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(param_1,*(long *)StringLiteral_10777,0);
LAB_01897908:
  plVar8 = (long *)(*(code *)*puVar7)(param_1,uVar17,puVar7[1]);
  if (plVar8 == (long *)0x0) goto LAB_01898230;
  lVar13 = plVar8[0xe];
  if (lVar13 == 0) {
    lVar13 = plVar8[0xf];
  }
  uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
                            );
  puVar3 = Meta_XR_ImmersiveDebugger_Manager_Watch_TypeInfo;
  if (lVar9 == 0) goto LAB_01898230;
  FUN_01890cf8();
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar10 == 0) goto LAB_01898230;
  FUN_0189880c(lVar10,uVar17,lVar9);
  uVar17 = FUN_01897040();
  if (unaff_x24 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
    *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10) = unaff_x24;
  }
  if ((unaff_x22 & 1) != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000010 = _uStack0000000000000010 & 0xffffffffffff0000;
    in_stack_00000038._4_4_ = CONCAT31(in_stack_00000038._5_3_,1);
    uVar17 = FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x28);
    if (lVar9 == 0) goto LAB_01898230;
    *(undefined2 *)(lVar9 + 0x20) = uStack0000000000000010;
  }
  lVar9 = *(long *)(unaff_x19 + 0x30);
  uVar17 = FUN_018982fc(uVar17,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar9 == 0) goto LAB_01898230;
  *(undefined8 *)(lVar9 + 0x18) = uVar17;
  lVar9 = *(long *)(unaff_x19 + 0x30);
  uVar17 = FUN_01898398(uVar17,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar9 == 0) goto LAB_01898230;
  *(undefined8 *)(lVar9 + 0x28) = uVar17;
  puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__;
  if (lVar13 == 0) {
    switch(*(undefined4 *)((long)plVar8 + 0x24)) {
    case 1:
      lVar13 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x10;
      if (iStack000000000000000c != 2) {
        in_stack_00000038._4_4_ = 0x50;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar13 == 0) goto LAB_01898230;
      *(ulong *)(lVar13 + 0x30) = _uStack0000000000000010;
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar17 = FUN_01898488();
      puVar3 = StringLiteral_633;
      if (lVar13 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar13 + 0x10) = uVar17;
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
LAB_018982f0:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar8);
      }
      FUN_018988b8();
      break;
    case 2:
      lVar13 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x20;
      if (iStack000000000000000c != 2) {
        in_stack_00000038._4_4_ = 0x60;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar13 == 0) goto LAB_01898230;
      *(ulong *)(lVar13 + 0x30) = _uStack0000000000000010;
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar17 = FUN_01898488();
      puVar2 = PTR_DAT_033ee840;
      if (lVar13 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar13 + 0x10) = uVar17;
      puVar4 = Method_Oculus_Platform_Models_DeserializableList<TrialOffer>__ctor__;
      uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01101d58(uVar17,*(undefined8 *)puVar4);
      uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_01860844(uVar17,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar14 = FUN_0178a8c4(uVar17,0,0);
      if ((uVar14 & 1) != 0) {
        lVar9 = *(long *)(unaff_x19 + 0x30);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Uri_CreateUri__);
        if ((lVar13 == 0) ||
           (FUN_01320e50(lVar13,*(undefined8 *)
                                 Method_UnityEngine_GameObject_GetComponent<SturdyBlastableModel>__)
           , lVar9 == 0)) goto LAB_01898230;
        *(long *)(lVar9 + 0x98) = lVar13;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
        uVar17 = FUN_01897558();
        if (plVar8 == (long *)0x0) goto LAB_01898230;
        lVar13 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_1482) {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_0189821c;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_1482,2);
LAB_0189821c:
        (*(code *)*puVar7)(plVar8,uVar17,puVar7[1]);
      }
      break;
    case 3:
      lVar13 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ =
           FUN_01898e14(uVar17,*(undefined8 *)(unaff_x20 + 0x10),iStack000000000000000c);
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar13 == 0) goto LAB_01898230;
      *(ulong *)(lVar13 + 0x30) = _uStack0000000000000010;
      puVar3 = OVRPlugin_OVRP_1_52_0_TypeInfo;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
      in_stack_00000030 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      iVar6 = FUN_00becc2c(&stack0x00000030,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__
                          );
      lVar13 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_00d5941c(lVar13);
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_00d5941c();
      }
      pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000030,*(undefined8 *)(lVar13 + 0x80));
      if (((iVar6 == 4) && (*pcVar11 != '\0')) &&
         (uVar14 = FUN_01866238(*(undefined8 *)(unaff_x20 + 0x10),0), (uVar14 & 1) != 0)) {
        plVar8 = *(long **)(unaff_x20 + 0x10);
        uVar17 = *(undefined8 *)PTR_DAT_033ec078;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_01780344(uVar17,0);
        if (plVar8 == (long *)0x0) goto LAB_01898230;
        uVar14 = (**(code **)(*plVar8 + 0x1f8))(plVar8,uVar17,1,*(undefined8 *)(*plVar8 + 0x200));
        if ((uVar14 & 1) == 0) {
          lVar9 = *(long *)(unaff_x19 + 0x30);
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_get_Current__
                                     );
          if ((lVar13 != 0) &&
             (FUN_01320e50(lVar13,*(undefined8 *)
                                   System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                          ), puVar3 = System_IO_DriveNotFoundException_TypeInfo, lVar9 != 0)) {
            *(long *)(lVar9 + 0xe0) = lVar13;
            uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar13 = FUN_01857354(uVar17,0);
            puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtmd_s64_f64__;
            puVar5 = 
            Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
            ;
            puVar3 = 
            Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            ;
            if ((lVar13 != 0) && (lVar9 = *(long *)(lVar13 + 0x20), lVar9 != 0)) {
              uVar14 = 0;
              while( true ) {
                if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar14) goto LAB_01897a18;
                lVar9 = *(long *)(lVar13 + 0x18);
                if (lVar9 == 0) break;
                if (*(uint *)(lVar9 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar17 = *(undefined8 *)(lVar9 + uVar14 * 8 + 0x20);
                uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_017a63ec(uVar12,uVar17,0);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar3);
                }
                uVar17 = FUN_018b7f6c(uVar17,0);
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar8 == (long *)0x0))
                break;
                lVar9 = *plVar8;
                uVar15 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                      puVar7 = (undefined8 *)(lVar9 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                      goto LAB_01897e74;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,2);
LAB_01897e74:
                (*(code *)*puVar7)(plVar8,uVar17,puVar7[1]);
                lVar9 = *(long *)(lVar13 + 0x20);
                uVar14 = uVar14 + 1;
                if (lVar9 == 0) break;
              }
            }
          }
          goto LAB_01898230;
        }
      }
      break;
    case 4:
      lVar13 = plVar8[0xc];
      if (*(int *)(*(long *)
                    Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_0184f0c8(lVar13,0);
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar17 = *unaff_x29;
      in_stack_00000038._4_4_ = 0x41;
      if (iStack000000000000000c == 2) {
        in_stack_00000038._4_4_ = 1;
      }
      if ((uVar14 & 1) == 0) {
        in_stack_00000038._4_4_ = 1;
      }
      goto LAB_018979fc;
    case 5:
      lVar13 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x10;
      if (iStack000000000000000c != 2) {
        in_stack_00000038._4_4_ = 0x50;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar13 == 0) goto LAB_01898230;
      *(ulong *)(lVar13 + 0x30) = _uStack0000000000000010;
      uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01860a6c(uVar17,&stack0x00000020,&stack0x00000018,0);
      uVar17 = in_stack_00000020;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_0178a8c4(uVar17,0,0);
      if ((uVar14 & 1) != 0) {
        plVar8 = (long *)FUN_01896f9c();
        uVar17 = in_stack_00000020;
        if (plVar8 == (long *)0x0) goto LAB_01898230;
        lVar13 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10777) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_018981c8;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_10777,0);
LAB_018981c8:
        lVar13 = (*(code *)*puVar7)(plVar8,uVar17,puVar7[1]);
        if (lVar13 == 0) goto LAB_01898230;
        if (*(int *)(lVar13 + 0x24) == 3) {
          lVar13 = *(long *)(unaff_x19 + 0x30);
          uVar17 = FUN_01897558();
          if (lVar13 == 0) goto LAB_01898230;
          *(undefined8 *)(lVar13 + 0xc0) = uVar17;
        }
      }
      break;
    case 6:
    case 8:
      goto switchD_01897a80_caseD_6;
    case 7:
      lVar13 = *(long *)(unaff_x19 + 0x30);
      in_stack_00000038._4_4_ = 0x10;
      if (iStack000000000000000c != 2) {
        in_stack_00000038._4_4_ = 0x50;
      }
      _uStack0000000000000010 = 0;
      FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,*unaff_x29);
      if (lVar13 == 0) goto LAB_01898230;
      *(ulong *)(lVar13 + 0x30) = _uStack0000000000000010;
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar17 = FUN_01898488();
      puVar3 = OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo;
      if (lVar13 == 0) goto LAB_01898230;
      *(undefined8 *)(lVar13 + 0x10) = uVar17;
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
      goto LAB_018982f0;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01898230;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      FUN_00acb0a4();
      uVar17 = FUN_01731954(0);
      uVar12 = thunk_FUN_00d48444(StringLiteral_3315);
      uVar17 = FUN_018651d4(uVar12,uVar17,plVar8,0);
      thunk_FUN_00d48444(StringLiteral_1457);
      uVar12 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_01802838(uVar12,uVar17,0);
      uVar17 = thunk_FUN_00d48444(
                                 Method_Meta_XR_MRUtilityKit_EffectMesh_ReceiveAnchorUpdatedCallback__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,uVar17);
    }
  }
  else {
switchD_01897a80_caseD_6:
    lVar13 = *(long *)(unaff_x19 + 0x30);
    uVar17 = *unaff_x29;
    in_stack_00000038._4_4_ = 0x7f;
LAB_018979fc:
    _uStack0000000000000010 = 0;
    FUN_01347274(&stack0x00000010,(long)&stack0x00000038 + 4,uVar17);
    if (lVar13 == 0) goto LAB_01898230;
    *(ulong *)(lVar13 + 0x30) = _uStack0000000000000010;
  }
LAB_01897a18:
  lVar13 = FUN_01897180();
  if (lVar13 != 0) {
    return *(undefined8 *)(lVar13 + 0x18);
  }
LAB_01898230:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


