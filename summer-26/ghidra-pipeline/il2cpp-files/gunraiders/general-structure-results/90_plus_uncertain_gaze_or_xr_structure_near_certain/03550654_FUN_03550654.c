/*
FUNCTION_NAME: FUN_03550654
ENTRY_POINT: 03550654
PROGRAM: gunraiders-libil2cpp.so
SCORE: 260
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_19;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_03550654(long *param_1,long param_2)

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
  long lVar23;
  short *psVar24;
  long lVar25;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  ushort local_64 [2];
  
  if ((DAT_0453782c & 1) == 0) {
    FUN_01c5d288(Method_System_Nullable<Vector4>__ctor__);
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(System_Action<T1,_T2,_T3,_T4>_var);
    FUN_01c5d288(PTR_DAT_042323c8);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_get_BufferFactory__);
    FUN_01c5d288(Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__);
    FUN_01c5d288(Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_get_OptimalSourceFrameSize__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_AddPostProcessor__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_PushDataAsync__);
    FUN_01c5d288(Method_System_Nullable<Guid>__ctor__);
    FUN_01c5d288(Method_System_Nullable<Vector4>_get_HasValue__);
    FUN_01c5d288(System_Data_NameNode_var);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_get_BufferFactory__);
    FUN_01c5d288(System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo);
    FUN_01c5d288(Method_System_Nullable<Vector4>_get_Value__);
    FUN_01c5d288(System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo);
    FUN_01c5d288(Method_System_Nullable<WebSocketCloseStatus>__ctor__);
    FUN_01c5d288(System_Func<UIRAtlasAllocator_Row>_TypeInfo);
    FUN_01c5d288(Method_System_Nullable<Addressables_MergeMode>__ctor__);
    FUN_01c5d288(Method_System_Nullable<Addressables_MergeMode>_GetValueOrDefault__);
    FUN_01c5d288(Method_System_Nullable<int>_ToString__);
    FUN_01c5d288(Method_System_Nullable<OVRPose>__ctor__);
    FUN_01c5d288(Method_System_Nullable<ObjectCreationHandling>_get_HasValue__);
    FUN_01c5d288(Method_System_Nullable<Addressables_MergeMode>_get_HasValue__);
    FUN_01c5d288(Method_System_Nullable<Addressables_MergeMode>_get_Value__);
    FUN_01c5d288(Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__);
    FUN_01c5d288(Method_System_Nullable<PermissionLevel>_get_HasValue__);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(PTR_DAT_04230aa8);
    FUN_01c5d288(
                Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__
                );
    FUN_01c5d288(
                Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                );
    FUN_01c5d288(Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    FUN_01c5d288(Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    FUN_01c5d288(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    FUN_01c5d288(Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
    FUN_01c5d288(Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
    FUN_01c5d288(Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
    FUN_01c5d288(Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
    FUN_01c5d288(Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__);
    DAT_0453782c = 1;
  }
  local_64[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_03550f20;
  uVar12 = FUN_03517d14(*(long *)(param_2 + 0x20),0xdd,0);
  if ((uVar12 & 1) != 0) {
    lVar23 = param_1[6];
    if (lVar23 == 0) {
      lVar23 = thunk_FUN_01c496e0(*(undefined8 *)System_Action<T1,_T2,_T3,_T4>_var);
      *(undefined1 *)(lVar23 + 0x10) = 0xff;
      FUN_03313b6c(lVar23,0);
      param_1[6] = lVar23;
    }
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_03550f20;
    uVar13 = FUN_03517228(*(long *)(param_2 + 0x20),0xdd,0);
    *(undefined8 *)(lVar23 + 0x28) = uVar13;
    if (param_1[6] == 0) goto LAB_03550f20;
    param_1[9] = *(long *)(param_1[6] + 0x28);
  }
  psVar24 = (short *)(param_2 + 0x12);
  if (*psVar24 == 0x7fe7) {
    FUN_03546dec(param_1,0x12);
  }
  switch(*(char *)(param_2 + 0x10)) {
  case -0x27:
    if (*psVar24 == 0) {
      lVar23 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<UIRAtlasAllocator_Row>_TypeInfo);
      FUN_02d4f880(lVar23,*(undefined8 *)
                           System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo
                  );
      plVar14 = (long *)FUN_03520e50(param_2,0xde,0);
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
          FUN_02c5889c(&local_98,lVar21,
                       *(undefined8 *)
                        Method_Photon_Voice_LocalVoiceFramed<float>_get_BufferFactory__);
          puVar8 = Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__;
          puVar7 = Method_Photon_Voice_LocalVoiceFramed<float>_AddPostProcessor__;
          puVar6 = System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo;
          puVar5 = PTR_DAT_0422fc38;
          local_70 = (long *)CONCAT44(uStack_84,local_88);
          uStack_78 = uStack_90;
          local_80 = local_98;
          while (uVar12 = FUN_02a6048c(&local_80,*(undefined8 *)puVar7), plVar9 = local_70,
                (uVar12 & 1) != 0) {
            if ((local_70 != (long *)0x0) && (*local_70 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(local_70);
            }
            plVar16 = (long *)FUN_035097bc(plVar14,local_70,0);
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
          FUN_02a60488(&local_80,
                       *(undefined8 *)
                        Method_Photon_Voice_LocalVoiceFramed<short>_get_OptimalSourceFrameSize__);
          if (param_1[0x19] != 0) {
            FUN_03552b84(param_1[0x19],lVar23);
            break;
          }
        }
      }
      goto LAB_03550f20;
    }
    uVar13 = FUN_03520f54(param_2,0);
    uVar13 = FUN_03146988(*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__,
                          uVar13,0);
    (**(code **)(*param_1 + 0x218))(param_1,1,uVar13,*(undefined8 *)(*param_1 + 0x220));
    break;
  case -0x26:
  case -0x23:
  case -0x21:
  case -0x20:
    break;
  case -0x25:
    if (param_1[0x1a] == 0) goto LAB_03550f20;
    FUN_0355327c(param_1[0x1a],param_2);
    break;
  case -0x24:
    if (*psVar24 == 0) {
      lVar23 = param_1[0x2a];
      if (lVar23 == 0) {
        uVar3 = *(undefined2 *)((long)param_1 + 100);
        lVar23 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_System_Nullable<Addressables_MergeMode>_get_Value__);
        FUN_0355216c(lVar23,uVar3);
        param_1[0x2a] = lVar23;
        if (lVar23 == 0) goto LAB_03550f20;
      }
      if (*(char *)(lVar23 + 0x48) != '\0') {
        (**(code **)(*param_1 + 0x218))
                  (param_1,2,*(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>_get_Value__,
                   *(undefined8 *)(*param_1 + 0x220));
        return;
      }
      FUN_03552220(lVar23,param_2);
      if (param_1[0x16] == 0) goto LAB_03550f20;
      FUN_035524e8(param_1[0x16],param_1[0x2a]);
      if ((char)param_1[0x2d] != '\0') {
        lVar23 = param_1[0x2a];
        uVar13 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Nullable<Vector4>__ctor__);
        FUN_0285da04(uVar13,param_1,
                     *(undefined8 *)
                      Method_System_Nullable<Addressables_MergeMode>_GetValueOrDefault__,0);
        if (lVar23 == 0) goto LAB_03550f20;
        FUN_035526ac(lVar23,uVar13,param_1[0x2b]);
      }
      break;
    }
    if (*psVar24 == 0x7fff) {
      uVar13 = FUN_03146988(*(undefined8 *)Method_System_Nullable<OVRPlugin_BodyState>__ctor__,
                            *(undefined8 *)(param_2 + 0x18),0);
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
      uVar13 = FUN_0315375c(uVar13,**(undefined8 **)(lVar23 + 0xb8),0);
    }
    else {
      uVar13 = FUN_032cd624(psVar24,0);
      uVar13 = FUN_031532c4(*(undefined8 *)
                             Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                            ,uVar13,*(undefined8 *)PTR_DAT_04230aa8,*(undefined8 *)(param_2 + 0x18),
                            0);
    }
    (**(code **)(*param_1 + 0x218))(param_1,1,uVar13,*(undefined8 *)(*param_1 + 0x220));
    uVar18 = 0xb;
    goto LAB_035511d8;
  case -0x22:
    if (*psVar24 == 0) {
      uVar13 = FUN_03520e50(param_2,1,0);
      lVar23 = thunk_FUN_01c495e4(uVar13,*(undefined8 *)PTR_DAT_042323c8);
      uVar13 = FUN_03520e50(param_2,2,0);
      lVar21 = thunk_FUN_01c495e4(uVar13,*(undefined8 *)PTR_DAT_0422fd68);
      lVar25 = param_1[0x27];
      if (lVar25 != 0) {
        lVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_System_Nullable<Addressables_MergeMode>__ctor__);
        FUN_02d4f8ec(lVar15,*(undefined4 *)(lVar25 + 0x18),
                     *(undefined8 *)Method_System_Nullable<WebSocketCloseStatus>__ctor__);
        puVar6 = Method_System_Nullable<Vector4>_get_Value__;
        puVar5 = Method_System_Nullable<Vector4>_get_HasValue__;
        lVar25 = param_1[0x27];
        if (lVar25 != 0) {
          uVar12 = 0;
          while ((long)uVar12 < (long)*(int *)(lVar25 + 0x18)) {
            lVar25 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
            FUN_03313b6c(lVar25,0);
            lVar20 = param_1[0x27];
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
            lVar25 = param_1[0x27];
            uVar12 = uVar12 + 1;
            if (lVar25 == 0) goto LAB_03550f20;
          }
          param_1[0x27] = 0;
          if (param_1[0x17] != 0) {
            FUN_035530bc(param_1[0x17],lVar15);
            break;
          }
        }
      }
      goto LAB_03550f20;
    }
    uVar13 = FUN_03520f54(param_2,0);
    uVar13 = FUN_03146988(*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>_get_Value__,uVar13,
                          0);
    (**(code **)(*param_1 + 0x218))(param_1,1,uVar13,*(undefined8 *)(*param_1 + 0x220));
    param_1[0x27] = 0;
    break;
  case -0x1f:
  case -0x1e:
  case -0x1d:
    bVar10 = (int)param_1[0x10] != 1;
    if (*psVar24 == 0) {
      if (!bVar10) {
        FUN_0354f404(param_1,param_2);
        break;
      }
      plVar14 = (long *)FUN_03520e50(param_2,0xe6,0);
      puVar5 = PTR_DAT_0422fc38;
      if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)PTR_DAT_0422fc38)) {
LAB_035517d4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar14);
      }
      sVar4 = *(short *)((long)param_1 + 0x66);
      param_1[0xf] = (long)plVar14;
      if (sVar4 != 0) {
        if (*(int *)(*(long *)Method_System_Nullable<int>_ToString__ + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar23 = FUN_03551c84(plVar14,sVar4);
        param_1[0xf] = lVar23;
      }
      plVar14 = (long *)FUN_03520e50(param_2,0xff,0);
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
      }
      else if (*plVar14 != *(long *)puVar5) {
        plVar14 = (long *)0x0;
      }
      uVar12 = FUN_031532a8(plVar14,0);
      if ((uVar12 & 1) == 0) {
        if (param_1[0x25] == 0) goto LAB_03550f20;
        *(long **)(param_1[0x25] + 0x10) = plVar14;
      }
    }
    else {
      if (bVar10) {
        iVar1 = (int)param_1[0x12];
        iVar17 = iVar1;
        if (iVar1 != 4) {
          iVar17 = 0xf;
        }
        if (iVar1 != iVar17) {
          lVar23 = param_1[0x13];
          *(int *)(param_1 + 0x12) = iVar17;
          if (lVar23 != 0) {
            (**(code **)(lVar23 + 0x18))
                      (*(undefined8 *)(lVar23 + 0x40),iVar1,iVar17,*(undefined8 *)(lVar23 + 0x28));
          }
        }
        FUN_03550078(param_1,param_2);
        break;
      }
      param_1[0x26] = param_2;
    }
    goto LAB_03551204;
  case -0x1c:
    lVar23 = param_1[0x12];
    if ((int)lVar23 != 0xf) {
      lVar21 = param_1[0x13];
      *(undefined4 *)(param_1 + 0x12) = 0xf;
      if (lVar21 != 0) {
        (**(code **)(lVar21 + 0x18))
                  (*(undefined8 *)(lVar21 + 0x40),(int)lVar23,0xf,*(undefined8 *)(lVar21 + 0x28));
      }
    }
    if (param_1[0x19] == 0) goto LAB_03550f20;
    FUN_03552f00();
    break;
  case -0x1b:
    lVar23 = param_1[0x12];
    if ((int)lVar23 != 4) {
      lVar21 = param_1[0x13];
      *(undefined4 *)(param_1 + 0x12) = 4;
      if (lVar21 != 0) {
        (**(code **)(lVar21 + 0x18))
                  (*(undefined8 *)(lVar21 + 0x40),(int)lVar23,4,*(undefined8 *)(lVar21 + 0x28));
      }
    }
    if (param_1[0x19] == 0) goto LAB_03550f20;
    FUN_03552d48();
    break;
  case -0x1a:
  case -0x19:
    if (*psVar24 == 0) {
      uVar19 = *(uint *)(param_1 + 0x10);
      if ((uVar19 | 2) == 2) {
        if (*(long *)(param_2 + 0x20) == 0) goto LAB_03550f20;
        uVar12 = FUN_03517d14(*(long *)(param_2 + 0x20),0xe1,0);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(param_2 + 0x20) == 0) goto LAB_03550f20;
          plVar14 = (long *)FUN_03517228(*(long *)(param_2 + 0x20),0xe1,0);
          if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)PTR_DAT_0422fc38))
          goto LAB_035517d4;
          uVar12 = FUN_031532a8(plVar14,0);
          if ((uVar12 & 1) == 0) {
            FUN_0354a9d4(param_1,plVar14);
            if (param_1[0x21] == 0) goto LAB_03550f20;
            *(long **)(param_1[0x21] + 0x28) = plVar14;
            if (param_1[6] == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(param_1[6] + 0x30);
            }
            uVar13 = System_Convert__ToSingle
                               (*(undefined8 *)
                                 Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__,uVar13
                                ,0);
            (**(code **)(*param_1 + 0x218))(param_1,3,uVar13,*(undefined8 *)(*param_1 + 0x220));
          }
        }
        if (*(long *)(param_2 + 0x20) == 0) goto LAB_03550f20;
        uVar12 = FUN_03517d14(*(long *)(param_2 + 0x20),0xca,0);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(param_2 + 0x20) == 0) goto LAB_03550f20;
          plVar14 = (long *)FUN_03517228(*(long *)(param_2 + 0x20),0xca,0);
          if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)PTR_DAT_0422fc38))
          goto LAB_035517c4;
          if (param_1[0x21] == 0) goto LAB_03550f20;
          FUN_0354a958(param_1[0x21],plVar14);
          if (param_1[0x21] == 0) goto LAB_03550f20;
          uVar13 = System_Convert__ToSingle
                             (*(undefined8 *)
                               Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__
                              ,*(undefined8 *)(param_1[0x21] + 0x20),0);
          (**(code **)(*param_1 + 0x218))(param_1,3,uVar13,*(undefined8 *)(*param_1 + 0x220));
        }
        if (*(long *)(param_2 + 0x20) == 0) goto LAB_03550f20;
        uVar12 = FUN_03517d14(*(long *)(param_2 + 0x20),0xc0,0);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(param_2 + 0x20) == 0) goto LAB_03550f20;
          plVar14 = (long *)FUN_03517228(*(long *)(param_2 + 0x20),0xc0,0);
          if (plVar14 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__
                             + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__))
            goto LAB_035517c4;
          }
          FUN_03551a24(param_1,plVar14);
        }
        uVar19 = *(uint *)(param_1 + 0x10);
        if (uVar19 != 2) goto LAB_03551470;
        plVar14 = (long *)FUN_03520e50(param_2,0xc4,0);
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
        }
        else if (*plVar14 != *(long *)PTR_DAT_0422fc38) {
          plVar14 = (long *)0x0;
        }
        uVar12 = FUN_031532a8(plVar14,0);
        if ((uVar12 & 1) == 0) {
          param_1[0x29] = (long)plVar14;
        }
        plVar14 = (long *)FUN_03520e50(param_2,0xe6,0);
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
        }
        else if (*plVar14 != *(long *)PTR_DAT_0422fc38) {
          plVar14 = (long *)0x0;
        }
        sVar4 = *(short *)((long)param_1 + 100);
        param_1[0xe] = (long)plVar14;
        if (sVar4 != 0) {
          if (*(int *)(*(long *)Method_System_Nullable<int>_ToString__ + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar23 = FUN_03551c84(plVar14,sVar4);
          param_1[0xe] = lVar23;
        }
        if (((int)param_1[7] == 2) &&
           (local_64[0] = *(ushort *)(param_1 + 8), (local_64[0] & 0xff) != 0)) {
          local_98 = CONCAT62(local_98._2_6_,local_64[0]);
          uVar13 = thunk_FUN_01c49334(*(undefined8 *)
                                       Method_System_Nullable<Addressables_MergeMode>_get_HasValue__
                                      ,&local_98);
          uVar13 = System_Convert__ToSingle
                             (*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>__ctor__,uVar13,
                              0);
          (**(code **)(*param_1 + 0x218))(param_1,3,uVar13,*(undefined8 *)(*param_1 + 0x220));
          lVar23 = param_1[2];
          local_64[0] = *(ushort *)(param_1 + 8);
          uVar11 = System_Collections_ObjectModel_ReadOnlyCollection<GlyphPairAdjustmentRecord>__System_Collections_ICollection_get_IsSynchronized
                             (local_64,*(undefined8 *)
                                        Method_System_Nullable<ObjectCreationHandling>_get_HasValue__
                             );
          if (lVar23 == 0) goto LAB_03550f20;
          *(undefined1 *)(lVar23 + 0x8c) = uVar11;
          local_64[0] = 0;
          *(undefined2 *)(param_1 + 8) = 0;
        }
        FUN_0354c524(param_1);
      }
      else {
LAB_03551470:
        if (uVar19 == 1) {
          lVar23 = param_1[0x12];
          if ((int)lVar23 != 8) {
            lVar21 = param_1[0x13];
            *(undefined4 *)(param_1 + 0x12) = 8;
            if (lVar21 != 0) {
              (**(code **)(lVar21 + 0x18))
                        (*(undefined8 *)(lVar21 + 0x40),(int)lVar23,8,*(undefined8 *)(lVar21 + 0x28)
                        );
            }
          }
          lVar23 = param_1[0x25];
          if (lVar23 == 0) goto LAB_03550f20;
          if (*(char *)(lVar23 + 0x31) == '\x03') {
            *(undefined8 *)(lVar23 + 0x28) = 0;
          }
          else {
            lVar21 = thunk_FUN_01c496e0(*(undefined8 *)System_Data_NameNode_var);
            FUN_0350971c(lVar21,0);
            if (param_1[0x21] == 0) goto LAB_03550f20;
            uVar13 = *(undefined8 *)(param_1[0x21] + 0x38);
            if (*(int *)(*(long *)Method_System_Nullable<Guid>__ctor__ + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03548504(lVar21,uVar13);
            if (param_1[0x21] == 0) goto LAB_03550f20;
            uVar12 = FUN_031532a8(*(undefined8 *)(param_1[0x21] + 0x20),0);
            if ((uVar12 & 1) == 0) {
              if ((param_1[0x21] == 0) || (lVar21 == 0)) goto LAB_03550f20;
              FUN_03509938(lVar21,0xff,*(undefined8 *)(param_1[0x21] + 0x20),0);
            }
            lVar23 = param_1[0x25];
            if (lVar23 == 0) goto LAB_03550f20;
            *(long *)(lVar23 + 0x28) = lVar21;
          }
          *(undefined1 *)(lVar23 + 0x30) = 1;
          if (*(int *)((long)param_1 + 0x124) - 1U < 4) {
            plVar14 = (long *)param_1[2];
            if (plVar14 == (long *)0x0) goto LAB_03550f20;
            pcVar22 = *(code **)(*plVar14 + 0x288);
            uVar13 = *(undefined8 *)(*plVar14 + 0x290);
          }
          else {
            if (*(int *)((long)param_1 + 0x124) != 0) break;
            plVar14 = (long *)param_1[2];
            if (plVar14 == (long *)0x0) goto LAB_03550f20;
            pcVar22 = *(code **)(*plVar14 + 0x278);
            uVar13 = *(undefined8 *)(*plVar14 + 0x280);
          }
          (*pcVar22)(plVar14,lVar23,uVar13);
          break;
        }
        if (uVar19 == 0) {
          lVar23 = param_1[0x12];
          if ((int)lVar23 != 0xf) {
            lVar21 = param_1[0x13];
            *(undefined4 *)(param_1 + 0x12) = 0xf;
            if (lVar21 != 0) {
              (**(code **)(lVar21 + 0x18))
                        (*(undefined8 *)(lVar21 + 0x40),(int)lVar23,0xf,
                         *(undefined8 *)(lVar21 + 0x28));
            }
          }
          if (param_1[0x26] == 0) {
            if (param_1[0x16] == 0) goto LAB_03550f20;
            FUN_03551dec();
          }
          else {
            FUN_03550078(param_1);
            param_1[0x26] = 0;
          }
          if ((int)param_1[7] != 0) {
            plVar14 = (long *)param_1[2];
            if (plVar14 == (long *)0x0) goto LAB_03550f20;
            (**(code **)(*plVar14 + 0x328))
                      (plVar14,(char)param_1[0x1f],*(undefined8 *)(*plVar14 + 0x330));
          }
        }
      }
      plVar14 = (long *)FUN_03520e50(param_2,0xf5,0);
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
        if (param_1[0x16] == 0) {
LAB_03550f20:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_03551fa8(param_1[0x16],plVar14);
      }
      break;
    }
    lVar23 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,5);
    uVar13 = FUN_03520f54(param_2,0);
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
    local_98 = *(undefined8 *)puVar5;
    local_88 = (undefined4)param_1[0x10];
    uStack_90 = 0xffffffffffffffff;
    uVar13 = FUN_03307544(&local_98,0);
    if ((*(uint *)(lVar23 + 0x18) < 3) ||
       (*(undefined8 *)(lVar23 + 0x30) = uVar13, *(uint *)(lVar23 + 0x18) == 3)) goto LAB_035517a8;
    *(undefined8 *)(lVar23 + 0x38) =
         *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
    if (param_1[2] == 0) goto LAB_03550f20;
    uVar13 = FUN_0351d96c(param_1[2],0);
    if (*(uint *)(lVar23 + 0x18) < 5) goto LAB_035517a8;
    *(undefined8 *)(lVar23 + 0x40) = uVar13;
    uVar13 = FUN_031533cc(lVar23,0);
    (**(code **)(*param_1 + 0x218))(param_1,1,uVar13,*(undefined8 *)(*param_1 + 0x220));
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
      *(undefined4 *)(param_1 + 0x1c) = 0xc;
      if (param_1[0x16] == 0) goto LAB_03550f20;
      FUN_03551860(param_1[0x16],*(undefined8 *)(param_2 + 0x18));
      break;
    case 0x7ff4:
      uVar18 = 0xf;
      goto LAB_03550d54;
    case 0x7ff5:
      uVar18 = 0xe;
LAB_03550d54:
      *(undefined4 *)(param_1 + 0x1c) = uVar18;
      break;
    default:
      if (sVar4 == 0x7fff) {
        uVar18 = 0xb;
        goto LAB_03550d54;
      }
    }
    uVar18 = (undefined4)param_1[0x1c];
LAB_035511d8:
    FUN_03546dec(param_1,uVar18);
    break;
  default:
    if (*(char *)(param_2 + 0x10) != -2) break;
LAB_03551204:
    FUN_0354c524(param_1);
  }
  lVar23 = param_1[0x15];
  if (lVar23 != 0) {
    (**(code **)(lVar23 + 0x18))
              (*(undefined8 *)(lVar23 + 0x40),param_2,*(undefined8 *)(lVar23 + 0x28));
  }
  return;
}


