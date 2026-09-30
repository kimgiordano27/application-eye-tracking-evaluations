/*
FUNCTION_NAME: FUN_012270a0
ENTRY_POINT: 012270a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_012270a0(ulong *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined2 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  long lVar22;
  long *plVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90 [2];
  undefined2 local_8c [2];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  int *local_80;
  undefined1 *puStack_78;
  int local_6c;
  long local_68;
  
                    /* try { // try from 012270b0 to 01327207 has its CatchHandler @ 012270b0
                       catch() { ... } // from try @ 012270b0 with catch @ 012270b0
                       catch() { ... } // from try @ 012272b0 with catch @ 012270b0
                       catch() { ... } // from try @ 0122734c with catch @ 012270b0
                       catch() { ... } // from try @ 012273e8 with catch @ 012270b0 */
  local_b8 = tpidr_el0;
  local_68 = *(long *)(local_b8 + 0x28);
  if ((DAT_0377645f & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(System_Collections_Generic_List<EasingFunction>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                      );
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    DAT_0377645f = 1;
  }
  plVar23 = (long *)(param_2 + 0x20);
  lVar12 = *plVar23;
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    lVar12 = FUN_00d5941c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    lVar12 = FUN_00d5941c();
  }
  if (*(int *)(lVar12 + 0x28) < 0) {
    iVar8 = thunk_FUN_00d42afc();
    uVar11 = iVar8 - 0x10;
  }
  else {
    uVar11 = 8;
  }
  puVar6 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar24 = auStack_c0 + -((ulong)uVar11 + 0xf & 0x1fffffff0);
  local_84[0] = 0;
  local_88[0] = 0;
  local_8c[0] = 0;
  local_90[0] = 0;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_ac = 0;
  uVar13 = System_MonoCustomAttrs__GetPseudoCustomAttributesData(0);
  lVar12 = *plVar23;
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    lVar12 = FUN_00d5941c(lVar12);
  }
  puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
  puVar4 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  puVar2 = System_Collections_Generic_List<EasingFunction>_TypeInfo;
  uVar25 = FUN_01780344(uVar25,0);
  uVar14 = FUN_01780344(*(undefined8 *)puVar3,0);
  uVar15 = FUN_01789ac0(uVar25,uVar14,0);
  puVar5 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
  puVar3 = UnityEngine_Texture2D___TypeInfo;
  if ((uVar13 & 1) == 0) {
    if ((uVar15 & 1) == 0) {
      lVar12 = *plVar23;
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      uVar25 = FUN_01780344(uVar25,0);
      uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
      uVar13 = FUN_01789ac0(uVar25,uVar14,0);
      if ((uVar13 & 1) == 0) {
        lVar12 = *plVar23;
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        uVar25 = FUN_01780344(uVar25,0);
        uVar14 = FUN_01780344(*(undefined8 *)puVar7,0);
        uVar13 = FUN_01789ac0(uVar25,uVar14,0);
        if ((uVar13 & 1) == 0) {
          lVar12 = *plVar23;
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar6);
          }
          uVar25 = FUN_01780344(uVar25,0);
          uVar14 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
          uVar13 = FUN_01789ac0(uVar25,uVar14,0);
          if ((uVar13 & 1) == 0) {
            lVar12 = *plVar23;
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              lVar12 = FUN_00d5941c();
            }
            uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar6);
            }
            uVar25 = FUN_01780344(uVar25,0);
            uVar14 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
            uVar13 = FUN_01789ac0(uVar25,uVar14,0);
            if ((uVar13 & 1) == 0) {
              lVar12 = *plVar23;
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar6);
              }
              uVar25 = FUN_01780344(uVar25,0);
              uVar14 = FUN_01780344(*(undefined8 *)
                                     Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                    ,0);
              uVar13 = FUN_01789ac0(uVar25,uVar14,0);
              if ((uVar13 & 1) == 0) {
                lVar12 = *plVar23;
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar6);
                }
                uVar25 = FUN_01780344(uVar25,0);
                uVar14 = FUN_01780344(*(undefined8 *)
                                       Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                      ,0);
                uVar13 = FUN_01789ac0(uVar25,uVar14,0);
                if ((uVar13 & 1) == 0) {
                  lVar12 = *plVar23;
                  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    lVar12 = FUN_00d5941c();
                  }
                  uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar6);
                  }
                  uVar25 = FUN_01780344(uVar25,0);
                  uVar14 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,
                                        0);
                  uVar13 = FUN_01789ac0(uVar25,uVar14,0);
                  if ((uVar13 & 1) == 0) {
                    lVar12 = *plVar23;
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar6);
                    }
                    uVar25 = FUN_01780344(uVar25,0);
                    uVar14 = FUN_01780344(*(undefined8 *)
                                           System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                          ,0);
                    uVar13 = FUN_01789ac0(uVar25,uVar14,0);
                    if ((uVar13 & 1) == 0) {
                      lVar12 = *plVar23;
                      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                        lVar12 = FUN_00d5941c();
                      }
                      uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
                      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)puVar6);
                      }
                      uVar25 = FUN_01780344(uVar25,0);
                      uVar14 = FUN_01780344(*(undefined8 *)
                                             Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                      uVar13 = FUN_01789ac0(uVar25,uVar14,0);
                      if ((uVar13 & 1) == 0) goto LAB_0122966c;
                      if (DAT_03776497 == '\0') {
                        thunk_FUN_00d48444(
                                          Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                                          );
                        DAT_03776497 = '\x01';
                      }
                      uVar13 = *param_1;
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar15 = uVar13 & 0x7ff0000000000000;
                      if (((uVar13 - 1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
                        uVar15 = uVar13;
                      }
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar10 = FUN_016c0558(0,(uint)(uVar15 >> 0x20) ^ (uint)uVar15,0);
                      if (DAT_03776497 == '\0') {
                        thunk_FUN_00d48444(
                                          Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                                          );
                        DAT_03776497 = '\x01';
                      }
                      uVar13 = param_1[1];
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar15 = uVar13 & 0x7ff0000000000000;
                      if (((uVar13 - 1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
                        uVar15 = uVar13;
                      }
                      uVar11 = (uint)(uVar15 >> 0x20) ^ (uint)uVar15;
                    }
                    else {
                      uVar10 = FUN_01784044(param_1,0);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)puVar2);
                      }
                      uVar10 = FUN_016c0558(0,uVar10,0);
                      uVar9 = FUN_01784044((long)param_1 + 4,0);
                      uVar10 = FUN_016c0558(uVar10,uVar9,0);
                      uVar9 = FUN_01784044(param_1 + 1,0);
                      uVar10 = FUN_016c0558(uVar10,uVar9,0);
                      uVar11 = FUN_01784044((long)param_1 + 0xc,0);
                    }
                  }
                  else {
                    uVar10 = FUN_0176fc24(param_1,0);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar2);
                    }
                    uVar10 = FUN_016c0558(0,uVar10,0);
                    uVar11 = FUN_0176fc24(param_1 + 1,0);
                  }
                }
                else {
                  uVar10 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_1,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar2);
                  }
                  uVar10 = FUN_016c0558(0,uVar10,0);
                  uVar11 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_1 + 1,0);
                }
              }
              else {
                uVar10 = Newtonsoft_Json_Serialization_DefaultContractResolver__CreateISerializableContract
                                   (param_1,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                uVar10 = FUN_016c0558(0,uVar10,0);
                uVar9 = Newtonsoft_Json_Serialization_DefaultContractResolver__CreateISerializableContract
                                  ((long)param_1 + 4,0);
                uVar10 = FUN_016c0558(uVar10,uVar9,0);
                uVar9 = Newtonsoft_Json_Serialization_DefaultContractResolver__CreateISerializableContract
                                  (param_1 + 1,0);
                uVar10 = FUN_016c0558(uVar10,uVar9,0);
                uVar11 = Newtonsoft_Json_Serialization_DefaultContractResolver__CreateISerializableContract
                                   ((long)param_1 + 0xc,0);
              }
            }
            else {
              uVar10 = FUN_0178e9b0(param_1,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar2);
              }
              uVar10 = FUN_016c0558(0,uVar10,0);
              uVar9 = FUN_0178e9b0((long)param_1 + 4,0);
              uVar10 = FUN_016c0558(uVar10,uVar9,0);
              uVar9 = FUN_0178e9b0(param_1 + 1,0);
              uVar10 = FUN_016c0558(uVar10,uVar9,0);
              uVar11 = FUN_0178e9b0((long)param_1 + 0xc,0);
            }
          }
          else {
            uVar10 = FUN_0176c888(param_1,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            uVar10 = FUN_016c0558(0,uVar10,0);
            uVar9 = FUN_0176c888((long)param_1 + 2,0);
            uVar10 = FUN_016c0558(uVar10,uVar9,0);
            uVar9 = FUN_0176c888((long)param_1 + 4,0);
            uVar10 = FUN_016c0558(uVar10,uVar9,0);
            uVar9 = FUN_0176c888((long)param_1 + 6,0);
            uVar10 = FUN_016c0558(uVar10,uVar9,0);
            uVar9 = FUN_0176c888(param_1 + 1,0);
            uVar10 = FUN_016c0558(uVar10,uVar9,0);
            uVar9 = FUN_0176c888((long)param_1 + 10,0);
            uVar10 = FUN_016c0558(uVar10,uVar9,0);
            uVar9 = FUN_0176c888((long)param_1 + 0xc,0);
            uVar10 = FUN_016c0558(uVar10,uVar9,0);
            uVar11 = FUN_0176c888((long)param_1 + 0xe,0);
          }
        }
        else {
          uVar10 = FUN_0178dad8(param_1,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          uVar10 = FUN_016c0558(0,uVar10,0);
          uVar9 = FUN_0178dad8((long)param_1 + 2,0);
          uVar10 = FUN_016c0558(uVar10,uVar9,0);
          uVar9 = FUN_0178dad8((long)param_1 + 4,0);
          uVar10 = FUN_016c0558(uVar10,uVar9,0);
          uVar9 = FUN_0178dad8((long)param_1 + 6,0);
          uVar10 = FUN_016c0558(uVar10,uVar9,0);
          uVar9 = FUN_0178dad8(param_1 + 1,0);
          uVar10 = FUN_016c0558(uVar10,uVar9,0);
          uVar9 = FUN_0178dad8((long)param_1 + 10,0);
          uVar10 = FUN_016c0558(uVar10,uVar9,0);
          uVar9 = FUN_0178dad8((long)param_1 + 0xc,0);
          uVar10 = FUN_016c0558(uVar10,uVar9,0);
          uVar11 = FUN_0178dad8((long)param_1 + 0xe,0);
        }
      }
      else {
        uVar10 = FUN_01782cb4(param_1,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar10 = FUN_016c0558(0,uVar10,0);
        uVar9 = FUN_01782cb4((long)param_1 + 1,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 2,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 3,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 4,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 5,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 6,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 7,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4(param_1 + 1,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 9,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 10,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 0xb,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 0xc,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 0xd,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar9 = FUN_01782cb4((long)param_1 + 0xe,0);
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        uVar11 = FUN_01782cb4((long)param_1 + 0xf,0);
      }
    }
    else {
      uVar10 = FUN_016f7f0c(param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar10 = FUN_016c0558(0,uVar10,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 1,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 2,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 3,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 4,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 5,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 6,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 7,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c(param_1 + 1,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 9,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 10,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 0xb,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 0xc,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 0xd,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar9 = FUN_016f7f0c((long)param_1 + 0xe,0);
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      uVar11 = FUN_016f7f0c((long)param_1 + 0xf,0);
    }
    uVar10 = FUN_016c0558(uVar10,uVar11,0);
LAB_01229288:
    if (*(long *)(local_b8 + 0x28) == local_68) {
      return uVar10;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((uVar15 & 1) == 0) {
    lVar12 = *plVar23;
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_00d5941c();
    }
    uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar6);
    }
    uVar25 = FUN_01780344(uVar25,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar13 = FUN_01789ac0(uVar25,uVar14,0);
    puVar3 = StringLiteral_7239;
    if ((uVar13 & 1) == 0) {
      lVar12 = *plVar23;
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      uVar25 = FUN_01780344(uVar25,0);
      uVar14 = FUN_01780344(*(undefined8 *)puVar7,0);
      uVar13 = FUN_01789ac0(uVar25,uVar14,0);
      puVar3 = 
      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
      ;
      if ((uVar13 & 1) != 0) {
        iVar8 = 0;
        uVar10 = 0;
        do {
          lVar12 = *plVar23;
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar22 = *plVar23;
          uVar1 = *(ushort *)(lVar22 + 0x132);
          lVar12 = lVar22;
          if ((uVar1 & 1) == 0) {
            lVar22 = FUN_00d5941c(lVar22);
            uVar1 = *(ushort *)(*plVar23 + 0x132);
            lVar12 = *plVar23;
          }
          uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar12 = FUN_00d5941c(lVar12);
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
          (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
          if ((int)local_80 <= iVar8) goto LAB_01229288;
          lVar12 = *plVar23;
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar22 = *plVar23;
          uVar1 = *(ushort *)(lVar22 + 0x132);
          lVar12 = lVar22;
          if ((uVar1 & 1) == 0) {
            lVar22 = FUN_00d5941c(lVar22);
            uVar1 = *(ushort *)(*plVar23 + 0x132);
            lVar12 = *plVar23;
          }
          uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar12 = FUN_00d5941c(lVar12);
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
          local_80 = &local_6c;
          puStack_78 = puVar24;
          local_6c = iVar8;
          (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
          lVar12 = *plVar23;
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
          if (plVar16 == (long *)0x0) {
LAB_01229660:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_01229664;
          puVar18 = (undefined2 *)thunk_FUN_00d624a0();
          local_8c[0] = *puVar18;
          uVar9 = FUN_0178dad8(local_8c,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          uVar10 = FUN_016c0558(uVar10,uVar9,0);
          iVar8 = iVar8 + 1;
        } while( true );
      }
      lVar12 = *plVar23;
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      uVar25 = FUN_01780344(uVar25,0);
      uVar14 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
      uVar13 = FUN_01789ac0(uVar25,uVar14,0);
      puVar3 = Method_System_Data_Common_UInt32Storage_Aggregate__;
      if ((uVar13 & 1) == 0) {
        lVar12 = *plVar23;
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        uVar25 = FUN_01780344(uVar25,0);
        uVar14 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
        uVar13 = FUN_01789ac0(uVar25,uVar14,0);
        puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<char>__;
        if ((uVar13 & 1) == 0) {
          lVar12 = *plVar23;
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar6);
          }
          uVar25 = FUN_01780344(uVar25,0);
          uVar14 = FUN_01780344(*(undefined8 *)
                                 Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                ,0);
          uVar13 = FUN_01789ac0(uVar25,uVar14,0);
          puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
          if ((uVar13 & 1) == 0) {
            lVar12 = *plVar23;
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              lVar12 = FUN_00d5941c();
            }
            uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar6);
            }
            uVar25 = FUN_01780344(uVar25,0);
            uVar14 = FUN_01780344(*(undefined8 *)
                                   Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                  ,0);
            uVar13 = FUN_01789ac0(uVar25,uVar14,0);
            puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
            if ((uVar13 & 1) == 0) {
              lVar12 = *plVar23;
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar6);
              }
              uVar25 = FUN_01780344(uVar25,0);
              uVar14 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
              uVar13 = FUN_01789ac0(uVar25,uVar14,0);
              puVar3 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
              if ((uVar13 & 1) == 0) {
                lVar12 = *plVar23;
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar6);
                }
                uVar25 = FUN_01780344(uVar25,0);
                uVar14 = FUN_01780344(*(undefined8 *)
                                       System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                      ,0);
                uVar13 = FUN_01789ac0(uVar25,uVar14,0);
                puVar3 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                if ((uVar13 & 1) == 0) {
                  lVar12 = *plVar23;
                  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    lVar12 = FUN_00d5941c();
                  }
                  uVar25 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar6);
                  }
                  uVar25 = FUN_01780344(uVar25,0);
                  uVar14 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,
                                        0);
                  uVar13 = FUN_01789ac0(uVar25,uVar14,0);
                  if ((uVar13 & 1) == 0) {
LAB_0122966c:
                    thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
                    uVar25 = thunk_FUN_00d62348();
                    FUN_00ac2be8();
                    uVar14 = thunk_FUN_00d48444(
                                               Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                               );
                    FUN_0176c578(uVar25,uVar14,0);
                    uVar14 = thunk_FUN_00d48444(Method_System_Array_Empty<char>__);
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar25,uVar14);
                  }
                  iVar8 = 0;
                  uVar10 = 0;
                  while( true ) {
                    lVar12 = *plVar23;
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar22 = *plVar23;
                    uVar1 = *(ushort *)(lVar22 + 0x132);
                    lVar12 = lVar22;
                    if ((uVar1 & 1) == 0) {
                      lVar22 = FUN_00d5941c(lVar22);
                      uVar1 = *(ushort *)(*plVar23 + 0x132);
                      lVar12 = *plVar23;
                    }
                    uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar12 = FUN_00d5941c(lVar12);
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
                    (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
                    if ((int)local_80 <= iVar8) goto LAB_01229288;
                    lVar12 = *plVar23;
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar22 = *plVar23;
                    uVar1 = *(ushort *)(lVar22 + 0x132);
                    lVar12 = lVar22;
                    if ((uVar1 & 1) == 0) {
                      lVar22 = FUN_00d5941c(lVar22);
                      uVar1 = *(ushort *)(*plVar23 + 0x132);
                      lVar12 = *plVar23;
                    }
                    uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar12 = FUN_00d5941c(lVar12);
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
                    local_80 = &local_6c;
                    puStack_78 = puVar24;
                    local_6c = iVar8;
                    (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
                    lVar12 = *plVar23;
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
                    if (plVar16 == (long *)0x0) goto LAB_01229660;
                    if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40))
                    break;
                    puVar21 = (ulong *)thunk_FUN_00d624a0();
                    uVar13 = *puVar21;
                    if (DAT_03776497 == '\0') {
                      thunk_FUN_00d48444(puVar5);
                      DAT_03776497 = '\x01';
                    }
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar15 = uVar13 & 0x7ff0000000000000;
                    if (((uVar13 - 1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
                      uVar15 = uVar13;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar10 = FUN_016c0558(uVar10,(uint)(uVar15 >> 0x20) ^ (uint)uVar15,0);
                    iVar8 = iVar8 + 1;
                  }
                }
                else {
                  iVar8 = 0;
                  uVar10 = 0;
                  while( true ) {
                    lVar12 = *plVar23;
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar22 = *plVar23;
                    uVar1 = *(ushort *)(lVar22 + 0x132);
                    lVar12 = lVar22;
                    if ((uVar1 & 1) == 0) {
                      lVar22 = FUN_00d5941c(lVar22);
                      uVar1 = *(ushort *)(*plVar23 + 0x132);
                      lVar12 = *plVar23;
                    }
                    uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar12 = FUN_00d5941c(lVar12);
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
                    (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
                    if ((int)local_80 <= iVar8) goto LAB_01229288;
                    lVar12 = *plVar23;
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar22 = *plVar23;
                    uVar1 = *(ushort *)(lVar22 + 0x132);
                    lVar12 = lVar22;
                    if ((uVar1 & 1) == 0) {
                      lVar22 = FUN_00d5941c(lVar22);
                      uVar1 = *(ushort *)(*plVar23 + 0x132);
                      lVar12 = *plVar23;
                    }
                    uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar12 = FUN_00d5941c(lVar12);
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
                    local_80 = &local_6c;
                    puStack_78 = puVar24;
                    local_6c = iVar8;
                    (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
                    lVar12 = *plVar23;
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
                    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                      lVar12 = FUN_00d5941c();
                    }
                    plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
                    if (plVar16 == (long *)0x0) goto LAB_01229660;
                    if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                    puVar19 = (undefined4 *)thunk_FUN_00d624a0();
                    local_ac = *puVar19;
                    uVar9 = FUN_01784044(&local_ac,0);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar2);
                    }
                    uVar10 = FUN_016c0558(uVar10,uVar9,0);
                    iVar8 = iVar8 + 1;
                  }
                }
              }
              else {
                iVar8 = 0;
                uVar10 = 0;
                while( true ) {
                  lVar12 = *plVar23;
                  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    lVar12 = FUN_00d5941c();
                  }
                  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    lVar12 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar22 = *plVar23;
                  uVar1 = *(ushort *)(lVar22 + 0x132);
                  lVar12 = lVar22;
                  if ((uVar1 & 1) == 0) {
                    lVar22 = FUN_00d5941c(lVar22);
                    uVar1 = *(ushort *)(*plVar23 + 0x132);
                    lVar12 = *plVar23;
                  }
                  uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar12 = FUN_00d5941c(lVar12);
                  }
                  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
                  (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
                  if ((int)local_80 <= iVar8) goto LAB_01229288;
                  lVar12 = *plVar23;
                  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    lVar12 = FUN_00d5941c();
                  }
                  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    lVar12 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar22 = *plVar23;
                  uVar1 = *(ushort *)(lVar22 + 0x132);
                  lVar12 = lVar22;
                  if ((uVar1 & 1) == 0) {
                    lVar22 = FUN_00d5941c(lVar22);
                    uVar1 = *(ushort *)(*plVar23 + 0x132);
                    lVar12 = *plVar23;
                  }
                  uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
                  if ((uVar1 & 1) == 0) {
                    lVar12 = FUN_00d5941c(lVar12);
                  }
                  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
                  local_80 = &local_6c;
                  puStack_78 = puVar24;
                  local_6c = iVar8;
                  (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
                  lVar12 = *plVar23;
                  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    lVar12 = FUN_00d5941c();
                  }
                  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
                  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    lVar12 = FUN_00d5941c();
                  }
                  plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
                  if (plVar16 == (long *)0x0) goto LAB_01229660;
                  if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                  puVar20 = (undefined8 *)thunk_FUN_00d624a0();
                  local_a8 = *puVar20;
                  uVar9 = FUN_0176fc24(&local_a8,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar2);
                  }
                  uVar10 = FUN_016c0558(uVar10,uVar9,0);
                  iVar8 = iVar8 + 1;
                }
              }
            }
            else {
              iVar8 = 0;
              uVar10 = 0;
              while( true ) {
                lVar12 = *plVar23;
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar22 = *plVar23;
                uVar1 = *(ushort *)(lVar22 + 0x132);
                lVar12 = lVar22;
                if ((uVar1 & 1) == 0) {
                  lVar22 = FUN_00d5941c(lVar22);
                  uVar1 = *(ushort *)(*plVar23 + 0x132);
                  lVar12 = *plVar23;
                }
                uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar12 = FUN_00d5941c(lVar12);
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
                (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
                if ((int)local_80 <= iVar8) goto LAB_01229288;
                lVar12 = *plVar23;
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar22 = *plVar23;
                uVar1 = *(ushort *)(lVar22 + 0x132);
                lVar12 = lVar22;
                if ((uVar1 & 1) == 0) {
                  lVar22 = FUN_00d5941c(lVar22);
                  uVar1 = *(ushort *)(*plVar23 + 0x132);
                  lVar12 = *plVar23;
                }
                uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
                if ((uVar1 & 1) == 0) {
                  lVar12 = FUN_00d5941c(lVar12);
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
                local_80 = &local_6c;
                puStack_78 = puVar24;
                local_6c = iVar8;
                (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
                lVar12 = *plVar23;
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
                if (plVar16 == (long *)0x0) goto LAB_01229660;
                if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                puVar20 = (undefined8 *)thunk_FUN_00d624a0();
                local_a0 = *puVar20;
                uVar9 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(&local_a0,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                uVar10 = FUN_016c0558(uVar10,uVar9,0);
                iVar8 = iVar8 + 1;
              }
            }
          }
          else {
            iVar8 = 0;
            uVar10 = 0;
            while( true ) {
              lVar12 = *plVar23;
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar22 = *plVar23;
              uVar1 = *(ushort *)(lVar22 + 0x132);
              lVar12 = lVar22;
              if ((uVar1 & 1) == 0) {
                lVar22 = FUN_00d5941c(lVar22);
                uVar1 = *(ushort *)(*plVar23 + 0x132);
                lVar12 = *plVar23;
              }
              uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar12 = FUN_00d5941c(lVar12);
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
              (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
              if ((int)local_80 <= iVar8) goto LAB_01229288;
              lVar12 = *plVar23;
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar22 = *plVar23;
              uVar1 = *(ushort *)(lVar22 + 0x132);
              lVar12 = lVar22;
              if ((uVar1 & 1) == 0) {
                lVar22 = FUN_00d5941c(lVar22);
                uVar1 = *(ushort *)(*plVar23 + 0x132);
                lVar12 = *plVar23;
              }
              uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
              if ((uVar1 & 1) == 0) {
                lVar12 = FUN_00d5941c(lVar12);
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
              local_80 = &local_6c;
              puStack_78 = puVar24;
              local_6c = iVar8;
              (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
              lVar12 = *plVar23;
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
              if (plVar16 == (long *)0x0) goto LAB_01229660;
              if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
              puVar19 = (undefined4 *)thunk_FUN_00d624a0();
              local_98 = CONCAT44(local_98._4_4_,*puVar19);
              uVar9 = Newtonsoft_Json_Serialization_DefaultContractResolver__CreateISerializableContract
                                (&local_98,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar2);
              }
              uVar10 = FUN_016c0558(uVar10,uVar9,0);
              iVar8 = iVar8 + 1;
            }
          }
        }
        else {
          iVar8 = 0;
          uVar10 = 0;
          while( true ) {
            lVar12 = *plVar23;
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              lVar12 = FUN_00d5941c();
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              lVar12 = FUN_00d5941c();
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar22 = *plVar23;
            uVar1 = *(ushort *)(lVar22 + 0x132);
            lVar12 = lVar22;
            if ((uVar1 & 1) == 0) {
              lVar22 = FUN_00d5941c(lVar22);
              uVar1 = *(ushort *)(*plVar23 + 0x132);
              lVar12 = *plVar23;
            }
            uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar12 = FUN_00d5941c(lVar12);
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
            (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
            if ((int)local_80 <= iVar8) goto LAB_01229288;
            lVar12 = *plVar23;
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              lVar12 = FUN_00d5941c();
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              lVar12 = FUN_00d5941c();
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar22 = *plVar23;
            uVar1 = *(ushort *)(lVar22 + 0x132);
            lVar12 = lVar22;
            if ((uVar1 & 1) == 0) {
              lVar22 = FUN_00d5941c(lVar22);
              uVar1 = *(ushort *)(*plVar23 + 0x132);
              lVar12 = *plVar23;
            }
            uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
            if ((uVar1 & 1) == 0) {
              lVar12 = FUN_00d5941c(lVar12);
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
            local_80 = &local_6c;
            puStack_78 = puVar24;
            local_6c = iVar8;
            (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
            lVar12 = *plVar23;
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              lVar12 = FUN_00d5941c();
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              lVar12 = FUN_00d5941c();
            }
            plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
            if (plVar16 == (long *)0x0) goto LAB_01229660;
            if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
            puVar19 = (undefined4 *)thunk_FUN_00d624a0();
            local_98 = CONCAT44(*puVar19,(undefined4)local_98);
            uVar9 = FUN_0178e9b0((long)&local_98 + 4,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            uVar10 = FUN_016c0558(uVar10,uVar9,0);
            iVar8 = iVar8 + 1;
          }
        }
      }
      else {
        iVar8 = 0;
        uVar10 = 0;
        while( true ) {
          lVar12 = *plVar23;
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar22 = *plVar23;
          uVar1 = *(ushort *)(lVar22 + 0x132);
          lVar12 = lVar22;
          if ((uVar1 & 1) == 0) {
            lVar22 = FUN_00d5941c(lVar22);
            uVar1 = *(ushort *)(*plVar23 + 0x132);
            lVar12 = *plVar23;
          }
          uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar12 = FUN_00d5941c(lVar12);
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
          (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
          if ((int)local_80 <= iVar8) goto LAB_01229288;
          lVar12 = *plVar23;
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar22 = *plVar23;
          uVar1 = *(ushort *)(lVar22 + 0x132);
          lVar12 = lVar22;
          if ((uVar1 & 1) == 0) {
            lVar22 = FUN_00d5941c(lVar22);
            uVar1 = *(ushort *)(*plVar23 + 0x132);
            lVar12 = *plVar23;
          }
          uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar12 = FUN_00d5941c(lVar12);
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
          local_80 = &local_6c;
          puStack_78 = puVar24;
          local_6c = iVar8;
          (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
          lVar12 = *plVar23;
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_00d5941c();
          }
          plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
          if (plVar16 == (long *)0x0) goto LAB_01229660;
          if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
          puVar18 = (undefined2 *)thunk_FUN_00d624a0();
          local_90[0] = *puVar18;
          uVar9 = FUN_0176c888(local_90,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          uVar10 = FUN_016c0558(uVar10,uVar9,0);
          iVar8 = iVar8 + 1;
        }
      }
    }
    else {
      iVar8 = 0;
      uVar10 = 0;
      while( true ) {
        lVar12 = *plVar23;
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar22 = *plVar23;
        uVar1 = *(ushort *)(lVar22 + 0x132);
        lVar12 = lVar22;
        if ((uVar1 & 1) == 0) {
          lVar22 = FUN_00d5941c(lVar22);
          uVar1 = *(ushort *)(*plVar23 + 0x132);
          lVar12 = *plVar23;
        }
        uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar12 = FUN_00d5941c(lVar12);
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
        (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
        if ((int)local_80 <= iVar8) goto LAB_01229288;
        lVar12 = *plVar23;
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar22 = *plVar23;
        uVar1 = *(ushort *)(lVar22 + 0x132);
        lVar12 = lVar22;
        if ((uVar1 & 1) == 0) {
          lVar22 = FUN_00d5941c(lVar22);
          uVar1 = *(ushort *)(*plVar23 + 0x132);
          lVar12 = *plVar23;
        }
        uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar12 = FUN_00d5941c(lVar12);
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
        local_80 = &local_6c;
        puStack_78 = puVar24;
        local_6c = iVar8;
        (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
        lVar12 = *plVar23;
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
        if (plVar16 == (long *)0x0) goto LAB_01229660;
        if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
        puVar17 = (undefined1 *)thunk_FUN_00d624a0();
        local_88[0] = *puVar17;
        uVar9 = FUN_01782cb4(local_88,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar10 = FUN_016c0558(uVar10,uVar9,0);
        iVar8 = iVar8 + 1;
      }
    }
  }
  else {
    iVar8 = 0;
    uVar10 = 0;
    while( true ) {
      lVar12 = *plVar23;
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar22 = *plVar23;
      uVar1 = *(ushort *)(lVar22 + 0x132);
      lVar12 = lVar22;
      if ((uVar1 & 1) == 0) {
        lVar22 = FUN_00d5941c(lVar22);
        uVar1 = *(ushort *)(*plVar23 + 0x132);
        lVar12 = *plVar23;
      }
      uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar12 = FUN_00d5941c(lVar12);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
      (**(code **)(lVar12 + 0x10))(uVar25,lVar12,0,0,&local_80);
      if ((int)local_80 <= iVar8) goto LAB_01229288;
      lVar12 = *plVar23;
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar22 = *plVar23;
      uVar1 = *(ushort *)(lVar22 + 0x132);
      lVar12 = lVar22;
      if ((uVar1 & 1) == 0) {
        lVar22 = FUN_00d5941c(lVar22);
        uVar1 = *(ushort *)(*plVar23 + 0x132);
        lVar12 = *plVar23;
      }
      uVar25 = **(undefined8 **)(*(long *)(lVar22 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar12 = FUN_00d5941c(lVar12);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
      local_80 = &local_6c;
      puStack_78 = puVar24;
      local_6c = iVar8;
      (**(code **)(lVar12 + 0x10))(uVar25,lVar12,param_1,&local_80,puVar24);
      lVar12 = *plVar23;
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_00d5941c();
      }
      plVar16 = (long *)thunk_FUN_00d61fa0(lVar12,puVar24);
      if (plVar16 == (long *)0x0) goto LAB_01229660;
      if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
      puVar17 = (undefined1 *)thunk_FUN_00d624a0();
      local_84[0] = *puVar17;
      uVar9 = FUN_016f7f0c(local_84,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar10 = FUN_016c0558(uVar10,uVar9,0);
      iVar8 = iVar8 + 1;
    }
  }
LAB_01229664:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


