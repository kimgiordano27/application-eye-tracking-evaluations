/*
FUNCTION_NAME: System.Dynamic.Utils.TypeUtils$$IsImplicitBoxingConversion
ENTRY_POINT: 03550864
PROGRAM: gunraiders-libil2cpp.so
SCORE: 208
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void System_Dynamic_Utils_TypeUtils__IsImplicitBoxingConversion(void)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  bool bVar10;
  undefined1 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar23;
  short *psVar24;
  long lVar25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  ushort uStack000000000000003c;
  
  FUN_01c5d288(Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__);
  *(undefined1 *)(unaff_x21 + 0x82c) = 1;
  uStack000000000000003c = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if ((unaff_x19 == 0) || (*(long *)(unaff_x19 + 0x20) == 0)) goto LAB_03550f20;
  uVar12 = FUN_03517d14(*(long *)(unaff_x19 + 0x20),0xdd,0);
  if ((uVar12 & 1) != 0) {
    lVar23 = unaff_x20[6];
    if (lVar23 == 0) {
      lVar23 = thunk_FUN_01c496e0(*(undefined8 *)System_Action<T1,_T2,_T3,_T4>_var);
      *(undefined1 *)(lVar23 + 0x10) = 0xff;
      FUN_03313b6c(lVar23,0);
      unaff_x20[6] = lVar23;
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
    uVar13 = FUN_03517228(*(long *)(unaff_x19 + 0x20),0xdd,0);
    *(undefined8 *)(lVar23 + 0x28) = uVar13;
    if (unaff_x20[6] == 0) goto LAB_03550f20;
    unaff_x20[9] = *(long *)(unaff_x20[6] + 0x28);
  }
  psVar24 = (short *)(unaff_x19 + 0x12);
  if (*psVar24 == 0x7fe7) {
    FUN_03546dec();
  }
  switch(*(char *)(unaff_x19 + 0x10)) {
  case -0x27:
    if (*psVar24 == 0) {
      lVar23 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<UIRAtlasAllocator_Row>_TypeInfo);
      FUN_02d4f880(lVar23,*(undefined8 *)
                           System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo
                  );
      plVar14 = (long *)FUN_03520e50();
      if (plVar14 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)System_Data_NameNode_var + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)System_Data_NameNode_var)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar14);
        }
        lVar21 = FUN_0290c578(plVar14,*(undefined8 *)
                                       Method_Photon_Voice_LocalVoiceFramed<short>_get_BufferFactory__
                             );
        if (lVar21 != 0) {
          FUN_02c5889c(&stack0x00000008,lVar21,
                       *(undefined8 *)
                        Method_Photon_Voice_LocalVoiceFramed<float>_get_BufferFactory__);
          puVar8 = Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__;
          puVar7 = Method_Photon_Voice_LocalVoiceFramed<float>_AddPostProcessor__;
          puVar6 = System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo;
          puVar5 = PTR_DAT_0422fc38;
          in_stack_00000030 = (long *)CONCAT44(uStack000000000000001c,uStack0000000000000018);
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          while (uVar12 = FUN_02a6048c(&stack0x00000020,*(undefined8 *)puVar7),
                plVar9 = in_stack_00000030, (uVar12 & 1) != 0) {
            if ((in_stack_00000030 != (long *)0x0) && (*in_stack_00000030 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(in_stack_00000030);
            }
            plVar16 = (long *)FUN_035097bc(plVar14,in_stack_00000030,0);
            uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar8);
            if (plVar16 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)System_Data_NameNode_var + 0x130);
              if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)System_Data_NameNode_var)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar16);
              }
            }
            FUN_0355ddf8(uVar13,plVar9,plVar16,0);
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar21 = *(long *)(lVar23 + 0x10);
            lVar25 = *(long *)puVar6;
            *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar19 = *(uint *)(lVar23 + 0x18);
            if (uVar19 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar23 + 0x18) = uVar19 + 1;
              *(undefined8 *)(lVar21 + (long)(int)uVar19 * 8 + 0x20) = uVar13;
            }
            else {
              FUN_02d5004c(lVar23,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_02a60488(&stack0x00000020,
                       *(undefined8 *)
                        Method_Photon_Voice_LocalVoiceFramed<short>_get_OptimalSourceFrameSize__);
          if (unaff_x20[0x19] != 0) {
            FUN_03552b84(unaff_x20[0x19],lVar23);
            break;
          }
        }
      }
      goto LAB_03550f20;
    }
    uVar13 = FUN_03520f54();
    FUN_03146988(*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__,uVar13,0);
    (**(code **)(*unaff_x20 + 0x218))();
    break;
  case -0x26:
  case -0x23:
  case -0x21:
  case -0x20:
    break;
  case -0x25:
    if (unaff_x20[0x1a] == 0) goto LAB_03550f20;
    FUN_0355327c();
    break;
  case -0x24:
    if (*psVar24 == 0) {
      lVar23 = unaff_x20[0x2a];
      if (lVar23 == 0) {
        uVar3 = *(undefined2 *)((long)unaff_x20 + 100);
        lVar23 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_System_Nullable<Addressables_MergeMode>_get_Value__);
        FUN_0355216c(lVar23,uVar3);
        unaff_x20[0x2a] = lVar23;
        if (lVar23 == 0) goto LAB_03550f20;
      }
      if (*(char *)(lVar23 + 0x48) != '\0') {
        (**(code **)(*unaff_x20 + 0x218))();
        return;
      }
      FUN_03552220(lVar23);
      if (unaff_x20[0x16] == 0) goto LAB_03550f20;
      FUN_035524e8(unaff_x20[0x16],unaff_x20[0x2a]);
      if ((char)unaff_x20[0x2d] != '\0') {
        lVar23 = unaff_x20[0x2a];
        uVar13 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Nullable<Vector4>__ctor__);
        FUN_0285da04();
        if (lVar23 == 0) goto LAB_03550f20;
        FUN_035526ac(lVar23,uVar13,unaff_x20[0x2b]);
      }
      break;
    }
    if (*psVar24 == 0x7fff) {
      uVar13 = FUN_03146988(*(undefined8 *)Method_System_Nullable<OVRPlugin_BodyState>__ctor__,
                            *(undefined8 *)(unaff_x19 + 0x18),0);
      lVar21 = *(long *)PTR_DAT_0422f958;
      lVar23 = *(long *)(lVar21 + 0x38);
      if (lVar23 == 0) {
        FUN_01c723f0(lVar21);
        lVar23 = *(long *)(lVar21 + 0x38);
      }
      lVar23 = *(long *)(lVar23 + 0x10);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = FUN_01c72394();
      }
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar23 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = FUN_01c72394();
      }
      FUN_0315375c(uVar13,**(undefined8 **)(lVar23 + 0xb8),0);
    }
    else {
      uVar13 = FUN_032cd624(psVar24,0);
      FUN_031532c4(*(undefined8 *)
                    Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                   ,uVar13,*(undefined8 *)PTR_DAT_04230aa8,*(undefined8 *)(unaff_x19 + 0x18),0);
    }
    (**(code **)(*unaff_x20 + 0x218))();
    goto LAB_035511d8;
  case -0x22:
    if (*psVar24 == 0) {
      uVar13 = FUN_03520e50();
      lVar23 = thunk_FUN_01c495e4(uVar13,*(undefined8 *)PTR_DAT_042323c8);
      uVar13 = FUN_03520e50();
      lVar21 = thunk_FUN_01c495e4(uVar13,*(undefined8 *)PTR_DAT_0422fd68);
      lVar25 = unaff_x20[0x27];
      if (lVar25 != 0) {
        lVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_System_Nullable<Addressables_MergeMode>__ctor__);
        FUN_02d4f8ec(lVar15,*(undefined4 *)(lVar25 + 0x18),
                     *(undefined8 *)Method_System_Nullable<WebSocketCloseStatus>__ctor__);
        puVar6 = Method_System_Nullable<Vector4>_get_Value__;
        puVar5 = Method_System_Nullable<Vector4>_get_HasValue__;
        lVar25 = unaff_x20[0x27];
        if (lVar25 != 0) {
          uVar12 = 0;
          while ((long)uVar12 < (long)*(int *)(lVar25 + 0x18)) {
            lVar25 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
            FUN_03313b6c(lVar25,0);
            lVar20 = unaff_x20[0x27];
            if (lVar20 == 0) goto LAB_03550f20;
            if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035517a8;
            if ((lVar25 == 0) ||
               (*(undefined8 *)(lVar25 + 0x10) = *(undefined8 *)(lVar20 + uVar12 * 8 + 0x20),
               lVar21 == 0)) goto LAB_03550f20;
            if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_035517a8;
            *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)(lVar21 + 0x20 + uVar12 * 8);
            if (lVar23 == 0) goto LAB_03550f20;
            if (*(uint *)(lVar23 + 0x18) <= uVar12) goto LAB_035517a8;
            *(undefined1 *)(lVar25 + 0x18) = *(undefined1 *)(lVar23 + 0x20 + uVar12);
            if (lVar15 == 0) goto LAB_03550f20;
            FUN_02d50cf4(lVar15,uVar12 & 0xffffffff,lVar25,*(undefined8 *)puVar6);
            lVar25 = unaff_x20[0x27];
            uVar12 = uVar12 + 1;
            if (lVar25 == 0) goto LAB_03550f20;
          }
          unaff_x20[0x27] = 0;
          if (unaff_x20[0x17] != 0) {
            FUN_035530bc(unaff_x20[0x17],lVar15);
            break;
          }
        }
      }
      goto LAB_03550f20;
    }
    uVar13 = FUN_03520f54();
    FUN_03146988(*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>_get_Value__,uVar13,0);
    (**(code **)(*unaff_x20 + 0x218))();
    unaff_x20[0x27] = 0;
    break;
  case -0x1f:
  case -0x1e:
  case -0x1d:
    bVar10 = (int)unaff_x20[0x10] != 1;
    if (*psVar24 == 0) {
      if (!bVar10) {
        FUN_0354f404();
        break;
      }
      plVar14 = (long *)FUN_03520e50();
      puVar5 = PTR_DAT_0422fc38;
      if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)PTR_DAT_0422fc38)) {
LAB_035517d4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar14);
      }
      sVar4 = *(short *)((long)unaff_x20 + 0x66);
      unaff_x20[0xf] = (long)plVar14;
      if (sVar4 != 0) {
        if (*(int *)(*(long *)Method_System_Nullable<int>_ToString__ + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar23 = FUN_03551c84(plVar14,sVar4);
        unaff_x20[0xf] = lVar23;
      }
      plVar14 = (long *)FUN_03520e50();
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
      }
      else if (*plVar14 != *(long *)puVar5) {
        plVar14 = (long *)0x0;
      }
      uVar12 = FUN_031532a8(plVar14,0);
      if ((uVar12 & 1) == 0) {
        if (unaff_x20[0x25] == 0) goto LAB_03550f20;
        *(long **)(unaff_x20[0x25] + 0x10) = plVar14;
      }
    }
    else {
      if (bVar10) {
        iVar1 = (int)unaff_x20[0x12];
        iVar17 = iVar1;
        if (iVar1 != 4) {
          iVar17 = 0xf;
        }
        if (iVar1 != iVar17) {
          lVar23 = unaff_x20[0x13];
          *(int *)(unaff_x20 + 0x12) = iVar17;
          if (lVar23 != 0) {
            (**(code **)(lVar23 + 0x18))
                      (*(undefined8 *)(lVar23 + 0x40),iVar1,iVar17,*(undefined8 *)(lVar23 + 0x28));
          }
        }
        FUN_03550078();
        break;
      }
      unaff_x20[0x26] = unaff_x19;
    }
    goto LAB_03551204;
  case -0x1c:
    lVar23 = unaff_x20[0x12];
    if ((int)lVar23 != 0xf) {
      lVar21 = unaff_x20[0x13];
      *(undefined4 *)(unaff_x20 + 0x12) = 0xf;
      if (lVar21 != 0) {
        (**(code **)(lVar21 + 0x18))
                  (*(undefined8 *)(lVar21 + 0x40),(int)lVar23,0xf,*(undefined8 *)(lVar21 + 0x28));
      }
    }
    if (unaff_x20[0x19] == 0) goto LAB_03550f20;
    FUN_03552f00();
    break;
  case -0x1b:
    lVar23 = unaff_x20[0x12];
    if ((int)lVar23 != 4) {
      lVar21 = unaff_x20[0x13];
      *(undefined4 *)(unaff_x20 + 0x12) = 4;
      if (lVar21 != 0) {
        (**(code **)(lVar21 + 0x18))
                  (*(undefined8 *)(lVar21 + 0x40),(int)lVar23,4,*(undefined8 *)(lVar21 + 0x28));
      }
    }
    if (unaff_x20[0x19] == 0) goto LAB_03550f20;
    FUN_03552d48();
    break;
  case -0x1a:
  case -0x19:
    if (*psVar24 == 0) {
      uVar19 = *(uint *)(unaff_x20 + 0x10);
      if ((uVar19 | 2) == 2) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
        uVar12 = FUN_03517d14(*(long *)(unaff_x19 + 0x20),0xe1,0);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
          plVar14 = (long *)FUN_03517228(*(long *)(unaff_x19 + 0x20),0xe1,0);
          if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)PTR_DAT_0422fc38))
          goto LAB_035517d4;
          uVar12 = FUN_031532a8(plVar14,0);
          if ((uVar12 & 1) == 0) {
            FUN_0354a9d4();
            if (unaff_x20[0x21] == 0) goto LAB_03550f20;
            *(long **)(unaff_x20[0x21] + 0x28) = plVar14;
            if (unaff_x20[6] == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(unaff_x20[6] + 0x30);
            }
            System_Convert__ToSingle
                      (*(undefined8 *)Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__,
                       uVar13,0);
            (**(code **)(*unaff_x20 + 0x218))();
          }
        }
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
        uVar12 = FUN_03517d14(*(long *)(unaff_x19 + 0x20),0xca,0);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
          plVar14 = (long *)FUN_03517228(*(long *)(unaff_x19 + 0x20),0xca,0);
          if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)PTR_DAT_0422fc38))
          goto LAB_035517c4;
          if (unaff_x20[0x21] == 0) goto LAB_03550f20;
          FUN_0354a958(unaff_x20[0x21],plVar14);
          if (unaff_x20[0x21] == 0) goto LAB_03550f20;
          System_Convert__ToSingle
                    (*(undefined8 *)
                      Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__
                     ,*(undefined8 *)(unaff_x20[0x21] + 0x20),0);
          (**(code **)(*unaff_x20 + 0x218))();
        }
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
        uVar12 = FUN_03517d14(*(long *)(unaff_x19 + 0x20),0xc0,0);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03550f20;
          plVar14 = (long *)FUN_03517228(*(long *)(unaff_x19 + 0x20),0xc0,0);
          if (plVar14 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__
                             + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__))
            goto LAB_035517c4;
          }
          FUN_03551a24();
        }
        uVar19 = *(uint *)(unaff_x20 + 0x10);
        if (uVar19 != 2) goto LAB_03551470;
        plVar14 = (long *)FUN_03520e50();
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
        }
        else if (*plVar14 != *(long *)PTR_DAT_0422fc38) {
          plVar14 = (long *)0x0;
        }
        uVar12 = FUN_031532a8(plVar14,0);
        if ((uVar12 & 1) == 0) {
          unaff_x20[0x29] = (long)plVar14;
        }
        plVar14 = (long *)FUN_03520e50();
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
        }
        else if (*plVar14 != *(long *)PTR_DAT_0422fc38) {
          plVar14 = (long *)0x0;
        }
        sVar4 = *(short *)((long)unaff_x20 + 100);
        unaff_x20[0xe] = (long)plVar14;
        if (sVar4 != 0) {
          if (*(int *)(*(long *)Method_System_Nullable<int>_ToString__ + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar23 = FUN_03551c84(plVar14,sVar4);
          unaff_x20[0xe] = lVar23;
        }
        if (((int)unaff_x20[7] == 2) &&
           (uStack000000000000003c = *(ushort *)(unaff_x20 + 8),
           (uStack000000000000003c & 0xff) != 0)) {
          in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uStack000000000000003c);
          uVar13 = thunk_FUN_01c49334(*(undefined8 *)
                                       Method_System_Nullable<Addressables_MergeMode>_get_HasValue__
                                      ,&stack0x00000008);
          System_Convert__ToSingle
                    (*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>__ctor__,uVar13,0);
          (**(code **)(*unaff_x20 + 0x218))();
          lVar23 = unaff_x20[2];
          uStack000000000000003c = *(ushort *)(unaff_x20 + 8);
          uVar11 = System_Collections_ObjectModel_ReadOnlyCollection<GlyphPairAdjustmentRecord>__System_Collections_ICollection_get_IsSynchronized
                             (&stack0x0000003c,
                              *(undefined8 *)
                               Method_System_Nullable<ObjectCreationHandling>_get_HasValue__);
          if (lVar23 == 0) goto LAB_03550f20;
          *(undefined1 *)(lVar23 + 0x8c) = uVar11;
          uStack000000000000003c = 0;
          *(undefined2 *)(unaff_x20 + 8) = 0;
        }
        FUN_0354c524();
      }
      else {
LAB_03551470:
        if (uVar19 == 1) {
          lVar23 = unaff_x20[0x12];
          if ((int)lVar23 != 8) {
            lVar21 = unaff_x20[0x13];
            *(undefined4 *)(unaff_x20 + 0x12) = 8;
            if (lVar21 != 0) {
              (**(code **)(lVar21 + 0x18))
                        (*(undefined8 *)(lVar21 + 0x40),(int)lVar23,8,*(undefined8 *)(lVar21 + 0x28)
                        );
            }
          }
          lVar23 = unaff_x20[0x25];
          if (lVar23 == 0) goto LAB_03550f20;
          if (*(char *)(lVar23 + 0x31) == '\x03') {
            *(undefined8 *)(lVar23 + 0x28) = 0;
          }
          else {
            lVar21 = thunk_FUN_01c496e0(*(undefined8 *)System_Data_NameNode_var);
            FUN_0350971c(lVar21,0);
            if (unaff_x20[0x21] == 0) goto LAB_03550f20;
            uVar13 = *(undefined8 *)(unaff_x20[0x21] + 0x38);
            if (*(int *)(*(long *)Method_System_Nullable<Guid>__ctor__ + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03548504(lVar21,uVar13);
            if (unaff_x20[0x21] == 0) goto LAB_03550f20;
            uVar12 = FUN_031532a8(*(undefined8 *)(unaff_x20[0x21] + 0x20),0);
            if ((uVar12 & 1) == 0) {
              if ((unaff_x20[0x21] == 0) || (lVar21 == 0)) goto LAB_03550f20;
              FUN_03509938(lVar21,0xff,*(undefined8 *)(unaff_x20[0x21] + 0x20),0);
            }
            lVar23 = unaff_x20[0x25];
            if (lVar23 == 0) goto LAB_03550f20;
            *(long *)(lVar23 + 0x28) = lVar21;
          }
          *(undefined1 *)(lVar23 + 0x30) = 1;
          if (*(int *)((long)unaff_x20 + 0x124) - 1U < 4) {
            plVar14 = (long *)unaff_x20[2];
            if (plVar14 == (long *)0x0) goto LAB_03550f20;
            pcVar22 = *(code **)(*plVar14 + 0x288);
            uVar13 = *(undefined8 *)(*plVar14 + 0x290);
          }
          else {
            if (*(int *)((long)unaff_x20 + 0x124) != 0) break;
            plVar14 = (long *)unaff_x20[2];
            if (plVar14 == (long *)0x0) goto LAB_03550f20;
            pcVar22 = *(code **)(*plVar14 + 0x278);
            uVar13 = *(undefined8 *)(*plVar14 + 0x280);
          }
          (*pcVar22)(plVar14,lVar23,uVar13);
          break;
        }
        if (uVar19 == 0) {
          lVar23 = unaff_x20[0x12];
          if ((int)lVar23 != 0xf) {
            lVar21 = unaff_x20[0x13];
            *(undefined4 *)(unaff_x20 + 0x12) = 0xf;
            if (lVar21 != 0) {
              (**(code **)(lVar21 + 0x18))
                        (*(undefined8 *)(lVar21 + 0x40),(int)lVar23,0xf,
                         *(undefined8 *)(lVar21 + 0x28));
            }
          }
          if (unaff_x20[0x26] == 0) {
            if (unaff_x20[0x16] == 0) goto LAB_03550f20;
            FUN_03551dec();
          }
          else {
            FUN_03550078();
            unaff_x20[0x26] = 0;
          }
          if ((int)unaff_x20[7] != 0) {
            plVar14 = (long *)unaff_x20[2];
            if (plVar14 == (long *)0x0) goto LAB_03550f20;
            (**(code **)(*plVar14 + 0x328))
                      (plVar14,(char)unaff_x20[0x1f],*(undefined8 *)(*plVar14 + 0x330));
          }
        }
      }
      plVar14 = (long *)FUN_03520e50();
      if (plVar14 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo
                         + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo)) {
LAB_035517c4:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar14);
        }
        if (unaff_x20[0x16] == 0) {
LAB_03550f20:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_03551fa8(unaff_x20[0x16],plVar14);
      }
      break;
    }
    lVar23 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,5);
    uVar13 = FUN_03520f54();
    if (lVar23 == 0) goto LAB_03550f20;
    if ((*(int *)(lVar23 + 0x18) == 0) ||
       (*(undefined8 *)(lVar23 + 0x20) = uVar13,
       puVar5 = Method_System_Nullable<PermissionLevel>_get_HasValue__, *(int *)(lVar23 + 0x18) == 1
       )) {
LAB_035517a8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined8 *)(lVar23 + 0x28) = *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>__ctor__;
    in_stack_00000008 = *(undefined8 *)puVar5;
    uStack0000000000000018 = (undefined4)unaff_x20[0x10];
    in_stack_00000010 = 0xffffffffffffffff;
    uVar13 = FUN_03307544(&stack0x00000008,0);
    if ((*(uint *)(lVar23 + 0x18) < 3) ||
       (*(undefined8 *)(lVar23 + 0x30) = uVar13, *(uint *)(lVar23 + 0x18) == 3)) goto LAB_035517a8;
    *(undefined8 *)(lVar23 + 0x38) =
         *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
    if (unaff_x20[2] == 0) goto LAB_03550f20;
    uVar13 = FUN_0351d96c(unaff_x20[2],0);
    if (*(uint *)(lVar23 + 0x18) < 5) goto LAB_035517a8;
    *(undefined8 *)(lVar23 + 0x40) = uVar13;
    FUN_031533cc(lVar23,0);
    (**(code **)(*unaff_x20 + 0x218))();
    sVar4 = *psVar24;
    if ((int)sVar4 + 3U < 2) {
      uVar18 = 0x10;
      goto LAB_03550d54;
    }
    switch((int)sVar4) {
    case 0x7ff1:
      uVar18 = 0xd;
      goto LAB_03550d54;
    case 0x7ff2:
      break;
    case 0x7ff3:
      *(undefined4 *)(unaff_x20 + 0x1c) = 0xc;
      if (unaff_x20[0x16] == 0) goto LAB_03550f20;
      FUN_03551860(unaff_x20[0x16],*(undefined8 *)(unaff_x19 + 0x18));
      break;
    case 0x7ff4:
      uVar18 = 0xf;
      goto LAB_03550d54;
    case 0x7ff5:
      uVar18 = 0xe;
LAB_03550d54:
      *(undefined4 *)(unaff_x20 + 0x1c) = uVar18;
      break;
    default:
      if (sVar4 == 0x7fff) {
        uVar18 = 0xb;
        goto LAB_03550d54;
      }
    }
LAB_035511d8:
    FUN_03546dec();
    break;
  default:
    if (*(char *)(unaff_x19 + 0x10) != -2) break;
LAB_03551204:
    FUN_0354c524();
  }
  lVar23 = unaff_x20[0x15];
  if (lVar23 != 0) {
    (**(code **)(lVar23 + 0x18))(*(undefined8 *)(lVar23 + 0x40));
  }
  return;
}


