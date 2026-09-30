/*
FUNCTION_NAME: System.Linq.Lookup<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$InternalGetHashCode
ENTRY_POINT: 012265b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Linq_Lookup<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__InternalGetHashCode
               (double *param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ushort uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ushort uVar15;
  long *plVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  int *local_90;
  int *piStack_88;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  uStack_70 = param_3;
  if ((DAT_0377645e & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    DAT_0377645e = 1;
  }
  plVar16 = (long *)(param_4 + 0x20);
  lVar8 = *plVar16;
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x20);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  if (*(int *)(lVar8 + 0x28) < 0) {
    iVar7 = thunk_FUN_00d42afc();
    uVar12 = iVar7 - 0x10;
  }
  else {
    uVar12 = 8;
  }
  uVar13 = (ulong)uVar12 + 0xf & 0x1fffffff0;
  piVar20 = (int *)((long)&local_90 - uVar13);
  lVar8 = (long)piVar20 - uVar13;
  uVar13 = System_MonoCustomAttrs__GetPseudoCustomAttributesData(0);
  puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((uVar13 & 1) == 0) {
    lVar8 = *plVar16;
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    puVar4 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
    uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    uVar18 = FUN_01780344(uVar18,0);
    uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar13 = FUN_01789ac0(uVar18,uVar10,0);
    uVar11 = (ushort)((ulong)param_2 >> 0x30);
    fVar19 = SUB84(param_2,0);
    uVar12 = (uint)((ulong)param_2 >> 8);
    uVar2 = (uint)((ulong)param_2 >> 0x10);
    fVar22 = (float)((ulong)param_2 >> 0x20);
    fVar17 = SUB84(param_3,0);
    uVar3 = (uint)((ulong)param_3 >> 8);
    if ((uVar13 & 1) == 0) {
      lVar8 = *plVar16;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar4 = OVRPlugin_OVRP_1_50_0_TypeInfo;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
      uVar13 = FUN_01789ac0(uVar18,uVar10,0);
      fVar21 = (float)((ulong)param_3 >> 0x20);
      uVar15 = (ushort)((ulong)param_3 >> 0x30);
      if ((uVar13 & 1) == 0) {
        lVar8 = *plVar16;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
        uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar5);
        }
        uVar18 = FUN_01780344(uVar18,0);
        uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
        uVar13 = FUN_01789ac0(uVar18,uVar10,0);
        if ((uVar13 & 1) == 0) {
          lVar8 = *plVar16;
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c();
          }
          puVar4 = StringLiteral_5228;
          uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar5);
          }
          uVar18 = FUN_01780344(uVar18,0);
          uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
          uVar13 = FUN_01789ac0(uVar18,uVar10,0);
          if ((uVar13 & 1) == 0) {
            lVar8 = *plVar16;
            if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
              lVar8 = FUN_00d5941c();
            }
            puVar4 = StringLiteral_6673;
            uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar5);
            }
            uVar18 = FUN_01780344(uVar18,0);
            uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
            uVar13 = FUN_01789ac0(uVar18,uVar10,0);
            if ((uVar13 & 1) == 0) {
              lVar8 = *plVar16;
              if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                lVar8 = FUN_00d5941c();
              }
              puVar4 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
              uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar5);
              }
              uVar18 = FUN_01780344(uVar18,0);
              uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
              uVar13 = FUN_01789ac0(uVar18,uVar10,0);
              if ((uVar13 & 1) == 0) {
                lVar8 = *plVar16;
                if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                  lVar8 = FUN_00d5941c();
                }
                puVar4 = 
                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                ;
                uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar5);
                }
                uVar18 = FUN_01780344(uVar18,0);
                uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
                uVar13 = FUN_01789ac0(uVar18,uVar10,0);
                if ((uVar13 & 1) == 0) {
                  lVar8 = *plVar16;
                  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                    lVar8 = FUN_00d5941c();
                  }
                  puVar4 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                  uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar5);
                  }
                  uVar18 = FUN_01780344(uVar18,0);
                  uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
                  uVar13 = FUN_01789ac0(uVar18,uVar10,0);
                  if ((uVar13 & 1) == 0) {
                    lVar8 = *plVar16;
                    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                      lVar8 = FUN_00d5941c();
                    }
                    puVar4 = 
                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                    ;
                    uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar5);
                    }
                    uVar18 = FUN_01780344(uVar18,0);
                    uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
                    uVar13 = FUN_01789ac0(uVar18,uVar10,0);
                    if ((uVar13 & 1) == 0) {
                      lVar8 = *plVar16;
                      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                        lVar8 = FUN_00d5941c();
                      }
                      puVar4 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)puVar5);
                      }
                      uVar18 = FUN_01780344(uVar18,0);
                      uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
                      uVar13 = FUN_01789ac0(uVar18,uVar10,0);
                      if ((uVar13 & 1) == 0) {
                        thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
                        uVar18 = thunk_FUN_00d62348();
                        FUN_00ac2be8();
                        uVar10 = thunk_FUN_00d48444(
                                                  Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                                  );
                        FUN_0176c578(uVar18,uVar10,0);
                        uVar10 = thunk_FUN_00d48444(
                                                  Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_get_Current__
                                                  );
                    /* WARNING: Subroutine does not return */
                        FUN_00da5038(uVar18,uVar10);
                      }
                      if (*param_1 == param_2) {
                        bVar6 = param_1[1] == param_3;
                        goto LAB_01227020;
                      }
                    }
                    else if (((*(float *)param_1 == fVar19) &&
                             (*(float *)((long)param_1 + 4) == fVar22)) &&
                            (*(float *)(param_1 + 1) == fVar17)) {
                      bVar6 = *(float *)((long)param_1 + 0xc) == fVar21;
                      goto LAB_01227020;
                    }
                    goto LAB_0122701c;
                  }
                }
                if (*param_1 == param_2) {
                  bVar6 = param_1[1] == param_3;
                  goto LAB_01227020;
                }
                goto LAB_0122701c;
              }
            }
            if (((*(float *)param_1 == fVar19) && (*(float *)((long)param_1 + 4) == fVar22)) &&
               (*(float *)(param_1 + 1) == fVar17)) {
              bVar6 = *(float *)((long)param_1 + 0xc) == fVar21;
              goto LAB_01227020;
            }
            goto LAB_0122701c;
          }
        }
        if ((((uint)*(ushort *)param_1 == ((uint)fVar19 & 0xffff)) &&
            ((uint)*(ushort *)((long)param_1 + 2) == (uint)fVar19 >> 0x10)) &&
           (((uint)*(ushort *)((long)param_1 + 4) == ((uint)fVar22 & 0xffff) &&
            ((((*(ushort *)((long)param_1 + 6) == uVar11 &&
               ((uint)*(ushort *)(param_1 + 1) == ((uint)fVar17 & 0xffff))) &&
              ((uint)*(ushort *)((long)param_1 + 10) == (uint)fVar17 >> 0x10)) &&
             ((uint)*(ushort *)((long)param_1 + 0xc) == ((uint)fVar21 & 0xffff))))))) {
          uVar11 = *(ushort *)((long)param_1 + 0xe);
          goto LAB_01226cf8;
        }
      }
      else if (((((uint)*(byte *)param_1 == ((uint)fVar19 & 0xff)) &&
                ((uint)*(byte *)((long)param_1 + 1) == (uVar12 & 0xff))) &&
               (((uint)*(byte *)((long)param_1 + 2) == (uVar2 & 0xff) &&
                (((uint)*(byte *)((long)param_1 + 3) == (uint)fVar19 >> 0x18 &&
                 ((uint)*(byte *)((long)param_1 + 4) == ((uint)fVar22 & 0xff))))))) &&
              ((((uint)*(byte *)((long)param_1 + 5) == ((uint)fVar22 >> 8 & 0xff) &&
                (((((ushort)*(byte *)((long)param_1 + 6) == (uVar11 & 0xff) &&
                   (*(byte *)((long)param_1 + 7) == (byte)((ulong)param_2 >> 0x38))) &&
                  ((uint)*(byte *)(param_1 + 1) == ((uint)fVar17 & 0xff))) &&
                 ((((uint)*(byte *)((long)param_1 + 9) == (uVar3 & 0xff) &&
                   ((uint)*(byte *)((long)param_1 + 10) == ((uint)((ulong)param_3 >> 0x10) & 0xff)))
                  && (((uint)*(byte *)((long)param_1 + 0xb) == (uint)fVar17 >> 0x18 &&
                      (((uint)*(byte *)((long)param_1 + 0xc) == ((uint)fVar21 & 0xff) &&
                       ((uint)*(byte *)((long)param_1 + 0xd) == ((uint)fVar21 >> 8 & 0xff)))))))))))
               && ((ushort)*(byte *)((long)param_1 + 0xe) == (uVar15 & 0xff))))) {
        uVar11 = (ushort)*(byte *)((long)param_1 + 0xf);
        uVar15 = (ushort)(byte)((ulong)param_3 >> 0x38);
LAB_01226cf8:
        bVar6 = uVar11 == uVar15;
        goto LAB_01227020;
      }
    }
    else if (((((uint)*(byte *)param_1 == ((uint)fVar19 & 0xff)) &&
              ((uint)*(byte *)((long)param_1 + 1) == (uVar12 & 0xff))) &&
             ((uint)*(byte *)((long)param_1 + 2) == (uVar2 & 0xff))) &&
            ((((uint)*(byte *)((long)param_1 + 3) == (uint)fVar19 >> 0x18 &&
              ((uint)*(byte *)((long)param_1 + 4) == ((uint)fVar22 & 0xff))) &&
             (((((uint)*(byte *)((long)param_1 + 5) == ((uint)fVar22 >> 8 & 0xff) &&
                (((ushort)*(byte *)((long)param_1 + 6) == (uVar11 & 0xff) &&
                 (*(byte *)((long)param_1 + 7) == local_78._7_1_)))) &&
               ((uint)*(byte *)(param_1 + 1) == ((uint)fVar17 & 0xff))) &&
              ((((((uint)*(byte *)((long)param_1 + 9) == (uVar3 & 0xff) &&
                  (*(byte *)((long)param_1 + 10) == uStack_70._2_1_)) &&
                 (*(byte *)((long)param_1 + 0xb) == uStack_70._3_1_)) &&
                ((*(byte *)((long)param_1 + 0xc) == uStack_70._4_1_ &&
                 (*(byte *)((long)param_1 + 0xd) == uStack_70._5_1_)))) &&
               (*(byte *)((long)param_1 + 0xe) == uStack_70._6_1_)))))))) {
      bVar6 = *(byte *)((long)param_1 + 0xf) == uStack_70._7_1_;
      goto LAB_01227020;
    }
  }
  else {
    iVar7 = 0;
    do {
      lVar9 = *plVar16;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar14 = *plVar16;
      uVar11 = *(ushort *)(lVar14 + 0x132);
      lVar9 = lVar14;
      if ((uVar11 & 1) == 0) {
        lVar14 = FUN_00d5941c(lVar14);
        uVar11 = *(ushort *)(*plVar16 + 0x132);
        lVar9 = *plVar16;
      }
      uVar18 = **(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x28);
      if ((uVar11 & 1) == 0) {
        lVar9 = FUN_00d5941c(lVar9);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      (**(code **)(lVar9 + 0x10))(uVar18,lVar9,0,0,&local_90);
      if ((int)local_90 <= iVar7) {
        bVar6 = true;
        goto LAB_01227020;
      }
      lVar9 = *plVar16;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar14 = *plVar16;
      uVar11 = *(ushort *)(lVar14 + 0x132);
      lVar9 = lVar14;
      if ((uVar11 & 1) == 0) {
        lVar14 = FUN_00d5941c(lVar14);
        uVar11 = *(ushort *)(*plVar16 + 0x132);
        lVar9 = *plVar16;
      }
      uVar18 = **(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x40);
      if ((uVar11 & 1) == 0) {
        lVar9 = FUN_00d5941c(lVar9);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
      local_90 = &local_7c;
      piStack_88 = piVar20;
      local_7c = iVar7;
      (**(code **)(lVar9 + 0x10))(uVar18,lVar9,param_1,&local_90,piVar20);
      lVar14 = *plVar16;
      uVar11 = *(ushort *)(lVar14 + 0x132);
      lVar9 = lVar14;
      if ((uVar11 & 1) == 0) {
        lVar14 = FUN_00d5941c(lVar14);
        uVar11 = *(ushort *)(*plVar16 + 0x132);
        lVar9 = *plVar16;
      }
      uVar18 = **(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x40);
      if ((uVar11 & 1) == 0) {
        lVar9 = FUN_00d5941c(lVar9);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
      local_90 = &local_7c;
      piStack_88 = (int *)lVar8;
      local_7c = iVar7;
      (**(code **)(lVar9 + 0x10))(uVar18,lVar9,&local_78,&local_90,lVar8);
      lVar14 = *plVar16;
      uVar11 = *(ushort *)(lVar14 + 0x132);
      lVar9 = lVar14;
      if ((uVar11 & 1) == 0) {
        lVar14 = FUN_00d5941c(lVar14);
        uVar11 = *(ushort *)(*plVar16 + 0x132);
        lVar9 = *plVar16;
      }
      uVar18 = **(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x48);
      if ((uVar11 & 1) == 0) {
        lVar9 = FUN_00d5941c(lVar9);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
      local_90 = piVar20;
      piStack_88 = (int *)lVar8;
      (**(code **)(lVar9 + 0x10))(uVar18,lVar9,0,&local_90,&local_7c);
      iVar7 = iVar7 + 1;
    } while ((char)local_7c != '\0');
  }
LAB_0122701c:
  bVar6 = false;
LAB_01227020:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
}


