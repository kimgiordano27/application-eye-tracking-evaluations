/*
FUNCTION_NAME: FUN_01229f54
ENTRY_POINT: 01229f54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01229f54(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  uint *puVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  long *__s;
  float fVar23;
  float fVar24;
  float fVar25;
  long *plVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint auStack_f0 [2];
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  uint *local_a8;
  uint *puStack_a0;
  uint local_94;
  long local_90;
  long lStack_88;
  long local_78;
  
  local_e8 = tpidr_el0;
  local_78 = *(long *)(local_e8 + 0x28);
  local_d0 = param_3;
  dStack_c8 = param_4;
  local_c0 = param_1;
  uStack_b8 = param_2;
  if ((DAT_03776463 & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
                    /* try { // try from 01229ff4 to 0132a01b has its CatchHandler @ 0122abf0 */
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(StringLiteral_6673);
                    /* try { // try from 0122a030 to 0132a09f has its CatchHandler @ 0122abf4 */
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_RemoveAt__
                      );
    DAT_03776463 = 1;
  }
  plVar18 = (long *)(param_5 + 0x20);
  lVar10 = *plVar18;
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x20);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  if (*(int *)(lVar10 + 0x28) < 0) {
    iVar9 = thunk_FUN_00d42afc();
    uVar13 = iVar9 - 0x10;
  }
  else {
    uVar13 = 8;
  }
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
  puVar7 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  puVar6 = OVRPlugin_OVRP_1_50_0_TypeInfo;
                    /* try { // try from 0122a0a0 to 0132a0d7 has its CatchHandler @ 012294ac */
  uVar15 = (ulong)uVar13 + 0xf & 0x1fffffff0;
  puVar19 = (uint *)((long)auStack_f0 - uVar15);
  lVar10 = (long)puVar19 - uVar15;
  local_e0 = 0;
  uStack_d8 = 0;
  uVar15 = System_MonoCustomAttrs__GetPseudoCustomAttributesData(0);
  if ((uVar15 & 1) != 0) {
    lVar11 = *plVar18;
                    /* try { // try from 0122a0d8 to 0132a0e7 has its CatchHandler @ 0122abec */
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
                    /* try { // try from 0122a0e8 to 0132a347 has its CatchHandler @ 012294ac */
    uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar22 = FUN_01780344(uVar22,0);
    uVar12 = FUN_01780344(*(undefined8 *)puVar7,0);
    uVar15 = FUN_01789ac0(uVar22,uVar12,0);
    lVar11 = *plVar18;
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c(lVar11);
    }
    if ((uVar15 & 1) == 0) {
      uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar12 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar15 = FUN_01789ac0(uVar22,uVar12,0);
      lVar11 = *plVar18;
      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
        lVar11 = FUN_00d5941c(lVar11);
      }
      if ((uVar15 & 1) == 0) {
        uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_01780344(uVar22,0);
        uVar12 = FUN_01780344(*(undefined8 *)puVar8,0);
        uVar15 = FUN_01789ac0(uVar22,uVar12,0);
        lVar11 = *plVar18;
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c(lVar11);
        }
        if ((uVar15 & 1) == 0) {
          uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_01780344(uVar22,0);
          uVar12 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
          uVar15 = FUN_01789ac0(uVar22,uVar12,0);
          lVar11 = *plVar18;
          if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
            lVar11 = FUN_00d5941c(lVar11);
          }
          if ((uVar15 & 1) == 0) {
            uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864();
            }
            uVar22 = FUN_01780344(uVar22,0);
            uVar12 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
            uVar15 = FUN_01789ac0(uVar22,uVar12,0);
            lVar11 = *plVar18;
            if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
              lVar11 = FUN_00d5941c(lVar11);
            }
            if ((uVar15 & 1) == 0) {
              uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
              if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0
                 ) {
                thunk_FUN_00d32864();
              }
              uVar22 = FUN_01780344(uVar22,0);
              uVar12 = FUN_01780344(*(undefined8 *)
                                     Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                    ,0);
              uVar15 = FUN_01789ac0(uVar22,uVar12,0);
              lVar11 = *plVar18;
              if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                lVar11 = FUN_00d5941c(lVar11);
              }
              if ((uVar15 & 1) == 0) {
                uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
                if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) ==
                    0) {
                  thunk_FUN_00d32864();
                }
                uVar22 = FUN_01780344(uVar22,0);
                uVar12 = FUN_01780344(*(undefined8 *)
                                       Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                      ,0);
                uVar15 = FUN_01789ac0(uVar22,uVar12,0);
                lVar11 = *plVar18;
                if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                  lVar11 = FUN_00d5941c(lVar11);
                }
                if ((uVar15 & 1) == 0) {
                  uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0)
                      == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar22 = FUN_01780344(uVar22,0);
                  uVar12 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,
                                        0);
                  uVar15 = FUN_01789ac0(uVar22,uVar12,0);
                  lVar11 = *plVar18;
                  if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                    lVar11 = FUN_00d5941c(lVar11);
                  }
                  if ((uVar15 & 1) == 0) {
                    uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0
                                ) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar22 = FUN_01780344(uVar22,0);
                    uVar12 = FUN_01780344(*(undefined8 *)
                                           System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                          ,0);
                    uVar15 = FUN_01789ac0(uVar22,uVar12,0);
                    lVar11 = *plVar18;
                    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                      lVar11 = FUN_00d5941c(lVar11);
                    }
                    if ((uVar15 & 1) == 0) {
                      uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18);
                      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ +
                                  0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar22 = FUN_01780344(uVar22,0);
                      uVar12 = FUN_01780344(*(undefined8 *)
                                             Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                      uVar15 = FUN_01789ac0(uVar22,uVar12,0);
                      if ((uVar15 & 1) == 0) goto LAB_0122c874;
                      lVar11 = *plVar18;
                      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                        lVar11 = FUN_00d5941c();
                      }
                      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
                      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                        lVar11 = FUN_00d5941c();
                      }
                      if (*(int *)(lVar11 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar16 = *plVar18;
                      uVar1 = *(ushort *)(lVar16 + 0x132);
                      lVar11 = lVar16;
                      if ((uVar1 & 1) == 0) {
                        lVar16 = FUN_00d5941c(lVar16);
                        uVar1 = *(ushort *)(*plVar18 + 0x132);
                        lVar11 = *plVar18;
                      }
                      uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
                      if ((uVar1 & 1) == 0) {
                        lVar11 = FUN_00d5941c(lVar11);
                      }
                      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
                      (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
                      if ((int)local_a8 == 0) {
                        __s = (long *)0x0;
                      }
                      else {
                        __s = (long *)(lVar10 - ((long)(int)local_a8 * 8 + 0xfU & 0xfffffffffffffff0
                                                ));
                      }
                      memset(__s,0,(long)(int)local_a8 * 8);
                      lVar11 = 0;
                      plVar26 = __s;
                      while( true ) {
                        lVar16 = *plVar18;
                        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                          lVar16 = FUN_00d5941c();
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                          lVar16 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar16 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar17 = *plVar18;
                        uVar1 = *(ushort *)(lVar17 + 0x132);
                        lVar16 = lVar17;
                        if ((uVar1 & 1) == 0) {
                          lVar17 = FUN_00d5941c(lVar17);
                          uVar1 = *(ushort *)(*plVar18 + 0x132);
                          lVar16 = *plVar18;
                        }
                        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
                        if ((uVar1 & 1) == 0) {
                          lVar16 = FUN_00d5941c(lVar16);
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
                        if ((int)local_a8 <= lVar11) break;
                        lVar16 = *plVar18;
                        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                          lVar16 = FUN_00d5941c();
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                          lVar16 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar16 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar17 = *plVar18;
                        uVar1 = *(ushort *)(lVar17 + 0x132);
                        lVar16 = lVar17;
                        if ((uVar1 & 1) == 0) {
                          lVar17 = FUN_00d5941c(lVar17);
                          uVar1 = *(ushort *)(*plVar18 + 0x132);
                          lVar16 = *plVar18;
                        }
                        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                        if ((uVar1 & 1) == 0) {
                          lVar16 = FUN_00d5941c(lVar16);
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                        local_a8 = &local_94;
                        puStack_a0 = puVar19;
                        local_94 = (uint)lVar11;
                        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
                        lVar17 = *plVar18;
                        uVar1 = *(ushort *)(lVar17 + 0x132);
                        lVar16 = lVar17;
                        if ((uVar1 & 1) == 0) {
                          lVar17 = FUN_00d5941c(lVar17);
                          uVar1 = *(ushort *)(*plVar18 + 0x132);
                          lVar16 = *plVar18;
                        }
                        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                        if ((uVar1 & 1) == 0) {
                          lVar16 = FUN_00d5941c(lVar16);
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                        local_a8 = &local_94;
                        puStack_a0 = (uint *)lVar10;
                        local_94 = (uint)lVar11;
                        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
                        lVar17 = *plVar18;
                        uVar1 = *(ushort *)(lVar17 + 0x132);
                        lVar16 = lVar17;
                        if ((uVar1 & 1) == 0) {
                          lVar17 = FUN_00d5941c(lVar17);
                          uVar1 = *(ushort *)(*plVar18 + 0x132);
                          lVar16 = *plVar18;
                        }
                        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
                        if ((uVar1 & 1) == 0) {
                          lVar16 = FUN_00d5941c(lVar16);
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
                        local_a8 = puVar19;
                        puStack_a0 = (uint *)lVar10;
                        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
                        lVar11 = lVar11 + 1;
                        lVar16 = 0;
                        if ((byte)local_94 != '\0') {
                          lVar16 = -1;
                        }
                        *plVar26 = lVar16;
                        plVar26 = plVar26 + 1;
                      }
                    }
                    else {
                      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
                      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                        lVar11 = FUN_00d5941c();
                      }
                      if (*(int *)(lVar11 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar16 = *plVar18;
                      uVar1 = *(ushort *)(lVar16 + 0x132);
                      lVar11 = lVar16;
                      if ((uVar1 & 1) == 0) {
                        lVar16 = FUN_00d5941c(lVar16);
                        uVar1 = *(ushort *)(*plVar18 + 0x132);
                        lVar11 = *plVar18;
                      }
                      uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
                      if ((uVar1 & 1) == 0) {
                        lVar11 = FUN_00d5941c(lVar11);
                      }
                      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
                      (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
                      if ((int)local_a8 == 0) {
                        __s = (long *)0x0;
                      }
                      else {
                        __s = (long *)(lVar10 - ((long)(int)local_a8 * 4 + 0xfU & 0xfffffffffffffff0
                                                ));
                      }
                      memset(__s,0,(long)(int)local_a8 * 4);
                      lVar11 = 0;
                      plVar26 = __s;
                      while( true ) {
                        lVar16 = *plVar18;
                        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                          lVar16 = FUN_00d5941c();
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                          lVar16 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar16 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar17 = *plVar18;
                        uVar1 = *(ushort *)(lVar17 + 0x132);
                        lVar16 = lVar17;
                        if ((uVar1 & 1) == 0) {
                          lVar17 = FUN_00d5941c(lVar17);
                          uVar1 = *(ushort *)(*plVar18 + 0x132);
                          lVar16 = *plVar18;
                        }
                        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
                        if ((uVar1 & 1) == 0) {
                          lVar16 = FUN_00d5941c(lVar16);
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
                        if ((int)local_a8 <= lVar11) break;
                        lVar16 = *plVar18;
                        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                          lVar16 = FUN_00d5941c();
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                          lVar16 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar16 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar17 = *plVar18;
                        uVar1 = *(ushort *)(lVar17 + 0x132);
                        lVar16 = lVar17;
                        if ((uVar1 & 1) == 0) {
                          lVar17 = FUN_00d5941c(lVar17);
                          uVar1 = *(ushort *)(*plVar18 + 0x132);
                          lVar16 = *plVar18;
                        }
                        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                        if ((uVar1 & 1) == 0) {
                          lVar16 = FUN_00d5941c(lVar16);
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                        local_a8 = &local_94;
                        puStack_a0 = puVar19;
                        local_94 = (uint)lVar11;
                        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
                        lVar17 = *plVar18;
                        uVar1 = *(ushort *)(lVar17 + 0x132);
                        lVar16 = lVar17;
                        if ((uVar1 & 1) == 0) {
                          lVar17 = FUN_00d5941c(lVar17);
                          uVar1 = *(ushort *)(*plVar18 + 0x132);
                          lVar16 = *plVar18;
                        }
                        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                        if ((uVar1 & 1) == 0) {
                          lVar16 = FUN_00d5941c(lVar16);
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                        local_a8 = &local_94;
                        puStack_a0 = (uint *)lVar10;
                        local_94 = (uint)lVar11;
                        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
                        lVar17 = *plVar18;
                        uVar1 = *(ushort *)(lVar17 + 0x132);
                        lVar16 = lVar17;
                        if ((uVar1 & 1) == 0) {
                          lVar17 = FUN_00d5941c(lVar17);
                          uVar1 = *(ushort *)(*plVar18 + 0x132);
                          lVar16 = *plVar18;
                        }
                        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
                        if ((uVar1 & 1) == 0) {
                          lVar16 = FUN_00d5941c(lVar16);
                        }
                        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
                        local_a8 = puVar19;
                        puStack_a0 = (uint *)lVar10;
                        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
                        lVar11 = lVar11 + 1;
                        iVar9 = 0;
                        if ((byte)local_94 != '\0') {
                          iVar9 = -1;
                        }
                        *(int *)plVar26 = iVar9;
                        plVar26 = (long *)((long)plVar26 + 4);
                      }
                    }
                  }
                  else {
                    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
                    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                      lVar11 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar16 = *plVar18;
                    uVar1 = *(ushort *)(lVar16 + 0x132);
                    lVar11 = lVar16;
                    if ((uVar1 & 1) == 0) {
                      lVar16 = FUN_00d5941c(lVar16);
                      uVar1 = *(ushort *)(*plVar18 + 0x132);
                      lVar11 = *plVar18;
                    }
                    uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar11 = FUN_00d5941c(lVar11);
                    }
                    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
                    (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
                    if ((int)local_a8 == 0) {
                      __s = (long *)0x0;
                    }
                    else {
                      __s = (long *)(lVar10 - ((long)(int)local_a8 * 8 + 0xfU & 0xfffffffffffffff0))
                      ;
                    }
                    memset(__s,0,(long)(int)local_a8 * 8);
                    lVar11 = 0;
                    plVar26 = __s;
                    while( true ) {
                      lVar16 = *plVar18;
                      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                        lVar16 = FUN_00d5941c();
                      }
                      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                        lVar16 = FUN_00d5941c();
                      }
                      if (*(int *)(lVar16 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar17 = *plVar18;
                      uVar1 = *(ushort *)(lVar17 + 0x132);
                      lVar16 = lVar17;
                      if ((uVar1 & 1) == 0) {
                        lVar17 = FUN_00d5941c(lVar17);
                        uVar1 = *(ushort *)(*plVar18 + 0x132);
                        lVar16 = *plVar18;
                      }
                      uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
                      if ((uVar1 & 1) == 0) {
                        lVar16 = FUN_00d5941c(lVar16);
                      }
                      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                      (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
                      if ((int)local_a8 <= lVar11) break;
                      lVar16 = *plVar18;
                      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                        lVar16 = FUN_00d5941c();
                      }
                      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                        lVar16 = FUN_00d5941c();
                      }
                      if (*(int *)(lVar16 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar17 = *plVar18;
                      uVar1 = *(ushort *)(lVar17 + 0x132);
                      lVar16 = lVar17;
                      if ((uVar1 & 1) == 0) {
                        lVar17 = FUN_00d5941c(lVar17);
                        uVar1 = *(ushort *)(*plVar18 + 0x132);
                        lVar16 = *plVar18;
                      }
                      uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                      if ((uVar1 & 1) == 0) {
                        lVar16 = FUN_00d5941c(lVar16);
                      }
                      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                      local_a8 = &local_94;
                      puStack_a0 = puVar19;
                      local_94 = (uint)lVar11;
                      (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
                      lVar17 = *plVar18;
                      uVar1 = *(ushort *)(lVar17 + 0x132);
                      lVar16 = lVar17;
                      if ((uVar1 & 1) == 0) {
                        lVar17 = FUN_00d5941c(lVar17);
                        uVar1 = *(ushort *)(*plVar18 + 0x132);
                        lVar16 = *plVar18;
                      }
                      uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                      if ((uVar1 & 1) == 0) {
                        lVar16 = FUN_00d5941c(lVar16);
                      }
                      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                      local_a8 = &local_94;
                      puStack_a0 = (uint *)lVar10;
                      local_94 = (uint)lVar11;
                      (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
                      lVar17 = *plVar18;
                      uVar1 = *(ushort *)(lVar17 + 0x132);
                      lVar16 = lVar17;
                      if ((uVar1 & 1) == 0) {
                        lVar17 = FUN_00d5941c(lVar17);
                        uVar1 = *(ushort *)(*plVar18 + 0x132);
                        lVar16 = *plVar18;
                      }
                      uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
                      if ((uVar1 & 1) == 0) {
                        lVar16 = FUN_00d5941c(lVar16);
                      }
                      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
                      local_a8 = puVar19;
                      puStack_a0 = (uint *)lVar10;
                      (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
                      lVar11 = lVar11 + 1;
                      *plVar26 = (long)(int)-(local_94 & 1);
                      plVar26 = plVar26 + 1;
                    }
                  }
                }
                else {
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
                  if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                    lVar11 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar16 = *plVar18;
                  uVar1 = *(ushort *)(lVar16 + 0x132);
                  lVar11 = lVar16;
                  if ((uVar1 & 1) == 0) {
                    lVar16 = FUN_00d5941c(lVar16);
                    uVar1 = *(ushort *)(*plVar18 + 0x132);
                    lVar11 = *plVar18;
                  }
                  uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar11 = FUN_00d5941c(lVar11);
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
                  (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
                  if ((int)local_a8 == 0) {
                    __s = (long *)0x0;
                  }
                  else {
                    __s = (long *)(lVar10 - ((long)(int)local_a8 * 8 + 0xfU & 0xfffffffffffffff0));
                  }
                  memset(__s,0,(long)(int)local_a8 * 8);
                  lVar11 = 0;
                  plVar26 = __s;
                  while( true ) {
                    lVar16 = *plVar18;
                    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                      lVar16 = FUN_00d5941c();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                      lVar16 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar17 = *plVar18;
                    uVar1 = *(ushort *)(lVar17 + 0x132);
                    lVar16 = lVar17;
                    if ((uVar1 & 1) == 0) {
                      lVar17 = FUN_00d5941c(lVar17);
                      uVar1 = *(ushort *)(*plVar18 + 0x132);
                      lVar16 = *plVar18;
                    }
                    uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar16 = FUN_00d5941c(lVar16);
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                    (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
                    if ((int)local_a8 <= lVar11) break;
                    lVar16 = *plVar18;
                    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                      lVar16 = FUN_00d5941c();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                      lVar16 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar17 = *plVar18;
                    uVar1 = *(ushort *)(lVar17 + 0x132);
                    lVar16 = lVar17;
                    if ((uVar1 & 1) == 0) {
                      lVar17 = FUN_00d5941c(lVar17);
                      uVar1 = *(ushort *)(*plVar18 + 0x132);
                      lVar16 = *plVar18;
                    }
                    uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar16 = FUN_00d5941c(lVar16);
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                    local_a8 = &local_94;
                    puStack_a0 = puVar19;
                    local_94 = (uint)lVar11;
                    (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
                    lVar17 = *plVar18;
                    uVar1 = *(ushort *)(lVar17 + 0x132);
                    lVar16 = lVar17;
                    if ((uVar1 & 1) == 0) {
                      lVar17 = FUN_00d5941c(lVar17);
                      uVar1 = *(ushort *)(*plVar18 + 0x132);
                      lVar16 = *plVar18;
                    }
                    uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar16 = FUN_00d5941c(lVar16);
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                    local_a8 = &local_94;
                    puStack_a0 = (uint *)lVar10;
                    local_94 = (uint)lVar11;
                    (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
                    lVar17 = *plVar18;
                    uVar1 = *(ushort *)(lVar17 + 0x132);
                    lVar16 = lVar17;
                    if ((uVar1 & 1) == 0) {
                      lVar17 = FUN_00d5941c(lVar17);
                      uVar1 = *(ushort *)(*plVar18 + 0x132);
                      lVar16 = *plVar18;
                    }
                    uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
                    if ((uVar1 & 1) == 0) {
                      lVar16 = FUN_00d5941c(lVar16);
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
                    local_a8 = puVar19;
                    puStack_a0 = (uint *)lVar10;
                    (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
                    lVar11 = lVar11 + 1;
                    *plVar26 = (long)(int)-(local_94 & 1);
                    plVar26 = plVar26 + 1;
                  }
                }
              }
              else {
                lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
                if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                  lVar11 = FUN_00d5941c();
                }
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar16 = *plVar18;
                uVar1 = *(ushort *)(lVar16 + 0x132);
                lVar11 = lVar16;
                if ((uVar1 & 1) == 0) {
                  lVar16 = FUN_00d5941c(lVar16);
                  uVar1 = *(ushort *)(*plVar18 + 0x132);
                  lVar11 = *plVar18;
                }
                uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar11 = FUN_00d5941c(lVar11);
                }
                lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
                (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
                if ((int)local_a8 == 0) {
                  __s = (long *)0x0;
                }
                else {
                  __s = (long *)(lVar10 - ((long)(int)local_a8 * 4 + 0xfU & 0xfffffffffffffff0));
                }
                memset(__s,0,(long)(int)local_a8 * 4);
                lVar11 = 0;
                plVar26 = __s;
                while( true ) {
                  lVar16 = *plVar18;
                  if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                    lVar16 = FUN_00d5941c();
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                  if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                    lVar16 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar17 = *plVar18;
                  uVar1 = *(ushort *)(lVar17 + 0x132);
                  lVar16 = lVar17;
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_00d5941c(lVar17);
                    uVar1 = *(ushort *)(*plVar18 + 0x132);
                    lVar16 = *plVar18;
                  }
                  uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar16 = FUN_00d5941c(lVar16);
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                  (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
                  if ((int)local_a8 <= lVar11) break;
                  lVar16 = *plVar18;
                  if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                    lVar16 = FUN_00d5941c();
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                  if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                    lVar16 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar17 = *plVar18;
                  uVar1 = *(ushort *)(lVar17 + 0x132);
                  lVar16 = lVar17;
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_00d5941c(lVar17);
                    uVar1 = *(ushort *)(*plVar18 + 0x132);
                    lVar16 = *plVar18;
                  }
                  uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                  if ((uVar1 & 1) == 0) {
                    lVar16 = FUN_00d5941c(lVar16);
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                  local_a8 = &local_94;
                  puStack_a0 = puVar19;
                  local_94 = (uint)lVar11;
                  (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
                  lVar17 = *plVar18;
                  uVar1 = *(ushort *)(lVar17 + 0x132);
                  lVar16 = lVar17;
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_00d5941c(lVar17);
                    uVar1 = *(ushort *)(*plVar18 + 0x132);
                    lVar16 = *plVar18;
                  }
                  uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                  if ((uVar1 & 1) == 0) {
                    lVar16 = FUN_00d5941c(lVar16);
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                  local_a8 = &local_94;
                  puStack_a0 = (uint *)lVar10;
                  local_94 = (uint)lVar11;
                  (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
                  lVar17 = *plVar18;
                  uVar1 = *(ushort *)(lVar17 + 0x132);
                  lVar16 = lVar17;
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_00d5941c(lVar17);
                    uVar1 = *(ushort *)(*plVar18 + 0x132);
                    lVar16 = *plVar18;
                  }
                  uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
                  if ((uVar1 & 1) == 0) {
                    lVar16 = FUN_00d5941c(lVar16);
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
                  local_a8 = puVar19;
                  puStack_a0 = (uint *)lVar10;
                  (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
                  lVar11 = lVar11 + 1;
                  *(uint *)plVar26 = -(local_94 & 1);
                  plVar26 = (long *)((long)plVar26 + 4);
                }
              }
            }
            else {
              lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
              if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                lVar11 = FUN_00d5941c();
              }
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar16 = *plVar18;
              uVar1 = *(ushort *)(lVar16 + 0x132);
              lVar11 = lVar16;
              if ((uVar1 & 1) == 0) {
                lVar16 = FUN_00d5941c(lVar16);
                uVar1 = *(ushort *)(*plVar18 + 0x132);
                lVar11 = *plVar18;
              }
              uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar11 = FUN_00d5941c(lVar11);
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
              (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
              if ((int)local_a8 == 0) {
                __s = (long *)0x0;
              }
              else {
                __s = (long *)(lVar10 - ((long)(int)local_a8 * 4 + 0xfU & 0xfffffffffffffff0));
              }
              memset(__s,0,(long)(int)local_a8 * 4);
              lVar11 = 0;
              plVar26 = __s;
              while( true ) {
                lVar16 = *plVar18;
                if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                  lVar16 = FUN_00d5941c();
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                  lVar16 = FUN_00d5941c();
                }
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar17 = *plVar18;
                uVar1 = *(ushort *)(lVar17 + 0x132);
                lVar16 = lVar17;
                if ((uVar1 & 1) == 0) {
                  lVar17 = FUN_00d5941c(lVar17);
                  uVar1 = *(ushort *)(*plVar18 + 0x132);
                  lVar16 = *plVar18;
                }
                uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar16 = FUN_00d5941c(lVar16);
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
                if ((int)local_a8 <= lVar11) break;
                lVar16 = *plVar18;
                if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                  lVar16 = FUN_00d5941c();
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                  lVar16 = FUN_00d5941c();
                }
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar17 = *plVar18;
                uVar1 = *(ushort *)(lVar17 + 0x132);
                lVar16 = lVar17;
                if ((uVar1 & 1) == 0) {
                  lVar17 = FUN_00d5941c(lVar17);
                  uVar1 = *(ushort *)(*plVar18 + 0x132);
                  lVar16 = *plVar18;
                }
                uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                if ((uVar1 & 1) == 0) {
                  lVar16 = FUN_00d5941c(lVar16);
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                local_a8 = &local_94;
                puStack_a0 = puVar19;
                local_94 = (uint)lVar11;
                (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
                lVar17 = *plVar18;
                uVar1 = *(ushort *)(lVar17 + 0x132);
                lVar16 = lVar17;
                if ((uVar1 & 1) == 0) {
                  lVar17 = FUN_00d5941c(lVar17);
                  uVar1 = *(ushort *)(*plVar18 + 0x132);
                  lVar16 = *plVar18;
                }
                uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                if ((uVar1 & 1) == 0) {
                  lVar16 = FUN_00d5941c(lVar16);
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
                local_a8 = &local_94;
                puStack_a0 = (uint *)lVar10;
                local_94 = (uint)lVar11;
                (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
                lVar17 = *plVar18;
                uVar1 = *(ushort *)(lVar17 + 0x132);
                lVar16 = lVar17;
                if ((uVar1 & 1) == 0) {
                  lVar17 = FUN_00d5941c(lVar17);
                  uVar1 = *(ushort *)(*plVar18 + 0x132);
                  lVar16 = *plVar18;
                }
                uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
                if ((uVar1 & 1) == 0) {
                  lVar16 = FUN_00d5941c(lVar16);
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
                local_a8 = puVar19;
                puStack_a0 = (uint *)lVar10;
                (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
                lVar11 = lVar11 + 1;
                *(uint *)plVar26 = -(local_94 & 1);
                plVar26 = (long *)((long)plVar26 + 4);
              }
            }
          }
          else {
            lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
            if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
              lVar11 = FUN_00d5941c();
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar16 = *plVar18;
            uVar1 = *(ushort *)(lVar16 + 0x132);
            lVar11 = lVar16;
            if ((uVar1 & 1) == 0) {
              lVar16 = FUN_00d5941c(lVar16);
              uVar1 = *(ushort *)(*plVar18 + 0x132);
              lVar11 = *plVar18;
            }
            uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar11 = FUN_00d5941c(lVar11);
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
            (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
            if ((int)local_a8 == 0) {
              __s = (long *)0x0;
            }
            else {
              __s = (long *)(lVar10 - ((long)(int)local_a8 * 2 + 0xfU & 0xfffffffffffffff0));
            }
            memset(__s,0,(long)(int)local_a8 * 2);
            lVar11 = 0;
            plVar26 = __s;
            while( true ) {
              lVar16 = *plVar18;
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar17 = *plVar18;
              uVar1 = *(ushort *)(lVar17 + 0x132);
              lVar16 = lVar17;
              if ((uVar1 & 1) == 0) {
                lVar17 = FUN_00d5941c(lVar17);
                uVar1 = *(ushort *)(*plVar18 + 0x132);
                lVar16 = *plVar18;
              }
              uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar16 = FUN_00d5941c(lVar16);
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
              (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
              if ((int)local_a8 <= lVar11) break;
              lVar16 = *plVar18;
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar17 = *plVar18;
              uVar1 = *(ushort *)(lVar17 + 0x132);
              lVar16 = lVar17;
              if ((uVar1 & 1) == 0) {
                lVar17 = FUN_00d5941c(lVar17);
                uVar1 = *(ushort *)(*plVar18 + 0x132);
                lVar16 = *plVar18;
              }
              uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
              if ((uVar1 & 1) == 0) {
                lVar16 = FUN_00d5941c(lVar16);
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
              local_a8 = &local_94;
              puStack_a0 = puVar19;
              local_94 = (uint)lVar11;
              (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
              lVar17 = *plVar18;
              uVar1 = *(ushort *)(lVar17 + 0x132);
              lVar16 = lVar17;
              if ((uVar1 & 1) == 0) {
                lVar17 = FUN_00d5941c(lVar17);
                uVar1 = *(ushort *)(*plVar18 + 0x132);
                lVar16 = *plVar18;
              }
              uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
              if ((uVar1 & 1) == 0) {
                lVar16 = FUN_00d5941c(lVar16);
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
              local_a8 = &local_94;
              puStack_a0 = (uint *)lVar10;
              local_94 = (uint)lVar11;
              (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
              lVar17 = *plVar18;
              uVar1 = *(ushort *)(lVar17 + 0x132);
              lVar16 = lVar17;
              if ((uVar1 & 1) == 0) {
                lVar17 = FUN_00d5941c(lVar17);
                uVar1 = *(ushort *)(*plVar18 + 0x132);
                lVar16 = *plVar18;
              }
              uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
              if ((uVar1 & 1) == 0) {
                lVar16 = FUN_00d5941c(lVar16);
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
              local_a8 = puVar19;
              puStack_a0 = (uint *)lVar10;
              (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
              lVar11 = lVar11 + 1;
              *(ushort *)plVar26 = -((byte)local_94 & 1);
              plVar26 = (long *)((long)plVar26 + 2);
            }
          }
        }
        else {
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
          if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
            lVar11 = FUN_00d5941c();
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar16 = *plVar18;
          uVar1 = *(ushort *)(lVar16 + 0x132);
          lVar11 = lVar16;
          if ((uVar1 & 1) == 0) {
            lVar16 = FUN_00d5941c(lVar16);
            uVar1 = *(ushort *)(*plVar18 + 0x132);
            lVar11 = *plVar18;
          }
          uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar11 = FUN_00d5941c(lVar11);
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
          (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
          if ((int)local_a8 == 0) {
            __s = (long *)0x0;
          }
          else {
            __s = (long *)(lVar10 - ((long)(int)local_a8 * 2 + 0xfU & 0xfffffffffffffff0));
          }
          memset(__s,0,(long)(int)local_a8 * 2);
          lVar11 = 0;
          plVar26 = __s;
          while( true ) {
            lVar16 = *plVar18;
            if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
              lVar16 = FUN_00d5941c();
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
            if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
              lVar16 = FUN_00d5941c();
            }
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar17 = *plVar18;
            uVar1 = *(ushort *)(lVar17 + 0x132);
            lVar16 = lVar17;
            if ((uVar1 & 1) == 0) {
              lVar17 = FUN_00d5941c(lVar17);
              uVar1 = *(ushort *)(*plVar18 + 0x132);
              lVar16 = *plVar18;
            }
            uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar16 = FUN_00d5941c(lVar16);
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
            (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
            if ((int)local_a8 <= lVar11) break;
            lVar16 = *plVar18;
            if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
              lVar16 = FUN_00d5941c();
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
            if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
              lVar16 = FUN_00d5941c();
            }
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar17 = *plVar18;
            uVar1 = *(ushort *)(lVar17 + 0x132);
            lVar16 = lVar17;
            if ((uVar1 & 1) == 0) {
              lVar17 = FUN_00d5941c(lVar17);
              uVar1 = *(ushort *)(*plVar18 + 0x132);
              lVar16 = *plVar18;
            }
            uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
            if ((uVar1 & 1) == 0) {
              lVar16 = FUN_00d5941c(lVar16);
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
            local_a8 = &local_94;
            puStack_a0 = puVar19;
            local_94 = (uint)lVar11;
            (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
            lVar17 = *plVar18;
            uVar1 = *(ushort *)(lVar17 + 0x132);
            lVar16 = lVar17;
            if ((uVar1 & 1) == 0) {
              lVar17 = FUN_00d5941c(lVar17);
              uVar1 = *(ushort *)(*plVar18 + 0x132);
              lVar16 = *plVar18;
            }
            uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
            if ((uVar1 & 1) == 0) {
              lVar16 = FUN_00d5941c(lVar16);
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
            local_a8 = &local_94;
            puStack_a0 = (uint *)lVar10;
            local_94 = (uint)lVar11;
            (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
            lVar17 = *plVar18;
            uVar1 = *(ushort *)(lVar17 + 0x132);
            lVar16 = lVar17;
            if ((uVar1 & 1) == 0) {
              lVar17 = FUN_00d5941c(lVar17);
              uVar1 = *(ushort *)(*plVar18 + 0x132);
              lVar16 = *plVar18;
            }
            uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
            if ((uVar1 & 1) == 0) {
              lVar16 = FUN_00d5941c(lVar16);
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
            local_a8 = puVar19;
            puStack_a0 = (uint *)lVar10;
            (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
            lVar11 = lVar11 + 1;
            *(ushort *)plVar26 = -((byte)local_94 & 1);
            plVar26 = (long *)((long)plVar26 + 2);
          }
        }
      }
      else {
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar16 = *plVar18;
        uVar1 = *(ushort *)(lVar16 + 0x132);
        lVar11 = lVar16;
        if ((uVar1 & 1) == 0) {
          lVar16 = FUN_00d5941c(lVar16);
          uVar1 = *(ushort *)(*plVar18 + 0x132);
          lVar11 = *plVar18;
        }
        uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar11 = FUN_00d5941c(lVar11);
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
        (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
        if ((int)local_a8 == 0) {
          __s = (long *)0x0;
        }
        else {
          __s = (long *)(lVar10 - ((long)(int)local_a8 + 0xfU & 0xfffffffffffffff0));
        }
        memset(__s,0,(long)(int)local_a8);
        lVar11 = 0;
        while( true ) {
          lVar16 = *plVar18;
          if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
            lVar16 = FUN_00d5941c();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
            lVar16 = FUN_00d5941c();
          }
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar17 = *plVar18;
          uVar1 = *(ushort *)(lVar17 + 0x132);
          lVar16 = lVar17;
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_00d5941c(lVar17);
            uVar1 = *(ushort *)(*plVar18 + 0x132);
            lVar16 = *plVar18;
          }
          uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar16 = FUN_00d5941c(lVar16);
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
          (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
          if ((int)local_a8 <= lVar11) break;
          lVar16 = *plVar18;
          if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
            lVar16 = FUN_00d5941c();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
            lVar16 = FUN_00d5941c();
          }
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar17 = *plVar18;
          uVar1 = *(ushort *)(lVar17 + 0x132);
          lVar16 = lVar17;
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_00d5941c(lVar17);
            uVar1 = *(ushort *)(*plVar18 + 0x132);
            lVar16 = *plVar18;
          }
          uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar16 = FUN_00d5941c(lVar16);
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
          local_a8 = &local_94;
          puStack_a0 = puVar19;
          local_94 = (uint)lVar11;
          (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
          lVar17 = *plVar18;
          uVar1 = *(ushort *)(lVar17 + 0x132);
          lVar16 = lVar17;
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_00d5941c(lVar17);
            uVar1 = *(ushort *)(*plVar18 + 0x132);
            lVar16 = *plVar18;
          }
          uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar16 = FUN_00d5941c(lVar16);
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
          local_a8 = &local_94;
          puStack_a0 = (uint *)lVar10;
          local_94 = (uint)lVar11;
          (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
          lVar17 = *plVar18;
          uVar1 = *(ushort *)(lVar17 + 0x132);
          lVar16 = lVar17;
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_00d5941c(lVar17);
            uVar1 = *(ushort *)(*plVar18 + 0x132);
            lVar16 = *plVar18;
          }
          uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
          if ((uVar1 & 1) == 0) {
            lVar16 = FUN_00d5941c(lVar16);
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
          local_a8 = puVar19;
          puStack_a0 = (uint *)lVar10;
          (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
          *(byte *)((long)__s + lVar11) = -((byte)local_94 & 1);
          lVar11 = lVar11 + 1;
        }
      }
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
        lVar11 = FUN_00d5941c();
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar16 = *plVar18;
      uVar1 = *(ushort *)(lVar16 + 0x132);
      lVar11 = lVar16;
      if ((uVar1 & 1) == 0) {
        lVar16 = FUN_00d5941c(lVar16);
        uVar1 = *(ushort *)(*plVar18 + 0x132);
        lVar11 = *plVar18;
      }
      uVar22 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar11 = FUN_00d5941c(lVar11);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
      (**(code **)(lVar11 + 0x10))(uVar22,lVar11,0,0,&local_a8);
      if ((int)local_a8 == 0) {
        __s = (long *)0x0;
      }
      else {
        __s = (long *)(lVar10 - ((long)(int)local_a8 + 0xfU & 0xfffffffffffffff0));
      }
      memset(__s,0,(long)(int)local_a8);
      lVar11 = 0;
      while( true ) {
        lVar16 = *plVar18;
        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
          lVar16 = FUN_00d5941c();
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
          lVar16 = FUN_00d5941c();
        }
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar17 = *plVar18;
        uVar1 = *(ushort *)(lVar17 + 0x132);
        lVar16 = lVar17;
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_00d5941c(lVar17);
          uVar1 = *(ushort *)(*plVar18 + 0x132);
          lVar16 = *plVar18;
        }
        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar16 = FUN_00d5941c(lVar16);
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,0,&local_a8);
        if ((int)local_a8 <= lVar11) break;
        lVar16 = *plVar18;
        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
          lVar16 = FUN_00d5941c();
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
          lVar16 = FUN_00d5941c();
        }
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar17 = *plVar18;
        uVar1 = *(ushort *)(lVar17 + 0x132);
        lVar16 = lVar17;
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_00d5941c(lVar17);
          uVar1 = *(ushort *)(*plVar18 + 0x132);
          lVar16 = *plVar18;
        }
        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar16 = FUN_00d5941c(lVar16);
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
        local_a8 = &local_94;
        puStack_a0 = puVar19;
        local_94 = (uint)lVar11;
        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_c0,&local_a8,puVar19);
        lVar17 = *plVar18;
        uVar1 = *(ushort *)(lVar17 + 0x132);
        lVar16 = lVar17;
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_00d5941c(lVar17);
          uVar1 = *(ushort *)(*plVar18 + 0x132);
          lVar16 = *plVar18;
        }
        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar16 = FUN_00d5941c(lVar16);
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
        local_a8 = &local_94;
        puStack_a0 = (uint *)lVar10;
        local_94 = (uint)lVar11;
        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,&local_d0,&local_a8,lVar10);
        lVar17 = *plVar18;
        uVar1 = *(ushort *)(lVar17 + 0x132);
        lVar16 = lVar17;
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_00d5941c(lVar17);
          uVar1 = *(ushort *)(*plVar18 + 0x132);
          lVar16 = *plVar18;
        }
        uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x48);
        if ((uVar1 & 1) == 0) {
          lVar16 = FUN_00d5941c(lVar16);
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x48);
        local_a8 = puVar19;
        puStack_a0 = (uint *)lVar10;
        (**(code **)(lVar16 + 0x10))(uVar22,lVar16,0,&local_a8,&local_94);
        *(byte *)((long)__s + lVar11) = -((byte)local_94 & 1);
        lVar11 = lVar11 + 1;
      }
    }
    local_90 = 0;
    lStack_88 = 0;
    lVar10 = *plVar18;
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    FUN_01224e8c(&local_90,__s,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x60));
    goto LAB_0122c834;
  }
  local_e0 = 0;
  uStack_d8 = 0;
  lVar10 = *plVar18;
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  }
  uVar22 = FUN_01780344(uVar22,0);
  uVar12 = FUN_01780344(*(undefined8 *)puVar7,0);
  uVar15 = FUN_01789ac0(uVar22,uVar12,0);
  if ((uVar15 & 1) == 0) {
    lVar10 = *plVar18;
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar22 = FUN_01780344(uVar22,0);
    uVar12 = FUN_01780344(*(undefined8 *)puVar6,0);
    uVar15 = FUN_01789ac0(uVar22,uVar12,0);
    if ((uVar15 & 1) != 0) goto LAB_0122a268;
    lVar10 = *plVar18;
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar22 = FUN_01780344(uVar22,0);
    uVar12 = FUN_01780344(*(undefined8 *)puVar8,0);
    uVar15 = FUN_01789ac0(uVar22,uVar12,0);
    fVar25 = SUB84(param_1,0);
    fVar20 = (float)((ulong)param_3 >> 0x20);
    fVar23 = SUB84(param_2,0);
    fVar27 = (float)((ulong)param_4 >> 0x20);
    fVar21 = SUB84(param_4,0);
    sVar3 = (short)((ulong)param_1 >> 0x30);
    uVar13 = (uint)((ulong)param_1 >> 0x10);
    fVar4 = (float)((ulong)param_1 >> 0x20);
    sVar2 = (short)((ulong)param_3 >> 0x30);
    fVar24 = SUB84(param_3,0);
    if ((uVar15 & 1) == 0) {
      lVar10 = *plVar18;
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar12 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
      uVar15 = FUN_01789ac0(uVar22,uVar12,0);
      fVar5 = (float)((ulong)param_2 >> 0x20);
      if ((uVar15 & 1) != 0) {
        local_e0._0_6_ = (uint6)(ushort)-(ushort)((uVar13 & 0xffff) == (uint)fVar24 >> 0x10) << 0x10
        ;
        sVar2 = -(ushort)(sVar3 == sVar2);
        local_e0 = CONCAT26(sVar2,(int6)local_e0);
        sVar3 = (short)((ulong)param_2 >> 0x30);
        local_e0 = CONCAT62(local_e0._2_6_,
                            -(ushort)(((uint)fVar25 & 0xffff) == ((uint)fVar24 & 0xffff)));
        local_e0._0_6_ =
             CONCAT24(-(ushort)(((uint)fVar4 & 0xffff) == ((uint)fVar20 & 0xffff)),
                      (undefined4)local_e0);
        local_e0 = CONCAT26(sVar2,(int6)local_e0);
        uStack_d8._0_6_ =
             CONCAT24(-(ushort)(((uint)fVar5 & 0xffff) == ((uint)fVar27 & 0xffff)),
                      CONCAT22(-(ushort)(((uint)((ulong)param_2 >> 0x10) & 0xffff) ==
                                        (uint)fVar21 >> 0x10),
                               -(ushort)(((uint)fVar23 & 0xffff) == ((uint)fVar21 & 0xffff))));
        goto LAB_0122a8bc;
      }
      lVar10 = *plVar18;
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar12 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
      uVar15 = FUN_01789ac0(uVar22,uVar12,0);
      if ((uVar15 & 1) == 0) {
        lVar10 = *plVar18;
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar22 = FUN_01780344(uVar22,0);
        uVar12 = FUN_01780344(*(undefined8 *)
                               Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                              ,0);
        uVar15 = FUN_01789ac0(uVar22,uVar12,0);
        if ((uVar15 & 1) != 0) goto LAB_0122acf4;
        lVar10 = *plVar18;
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
        }
        uVar22 = FUN_01780344(uVar22,0);
        uVar12 = FUN_01780344(*(undefined8 *)
                               Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                              ,0);
        uVar15 = FUN_01789ac0(uVar22,uVar12,0);
        if ((uVar15 & 1) == 0) {
          lVar10 = *plVar18;
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          uVar22 = FUN_01780344(uVar22,0);
          uVar12 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
          uVar15 = FUN_01789ac0(uVar22,uVar12,0);
          if ((uVar15 & 1) != 0) goto LAB_0122b42c;
          lVar10 = *plVar18;
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
          }
          uVar22 = FUN_01780344(uVar22,0);
          uVar12 = FUN_01780344(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                ,0);
          uVar15 = FUN_01789ac0(uVar22,uVar12,0);
          if ((uVar15 & 1) == 0) {
            lVar10 = *plVar18;
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            uVar22 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            }
            uVar22 = FUN_01780344(uVar22,0);
            uVar12 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
            uVar15 = FUN_01789ac0(uVar22,uVar12,0);
            if ((uVar15 & 1) == 0) {
LAB_0122c874:
              thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
              uVar22 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              uVar12 = thunk_FUN_00d48444(
                                         Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                         );
              FUN_0176c578(uVar22,uVar12,0);
              uVar12 = thunk_FUN_00d48444(
                                         Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_RemoveAt__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar22,uVar12);
            }
            local_e0 = -1;
            if (param_1 != param_3) {
              local_e0 = 0;
            }
            uStack_d8 = -1;
            if (param_2 != param_4) {
              uStack_d8 = 0;
            }
          }
          else {
            uVar14 = 0xffffffff;
            uVar29 = 0xffffffff;
            if (fVar25 != fVar24) {
              uVar29 = 0;
            }
            uVar28 = uVar14;
            if (fVar4 != fVar20) {
              uVar28 = 0;
            }
            local_e0 = CONCAT44(uVar28,uVar29);
            uVar29 = uVar14;
            if (fVar23 != fVar21) {
              uVar29 = 0;
            }
            if (fVar5 != fVar27) {
              uVar14 = 0;
            }
            uStack_d8 = CONCAT44(uVar14,uVar29);
          }
        }
        else {
LAB_0122b42c:
          local_e0 = -(ulong)(param_1 == param_3);
          uStack_d8 = -(ulong)(param_2 == param_4);
        }
      }
      else {
LAB_0122acf4:
        local_e0 = CONCAT44(-(uint)(fVar4 == fVar20),-(uint)(fVar25 == fVar24));
        uStack_d8 = CONCAT44(-(uint)(fVar5 == fVar27),-(uint)(fVar23 == fVar21));
      }
    }
    else {
      local_e0._0_4_ =
           CONCAT22(-(ushort)((uVar13 & 0xffff) == (uint)fVar24 >> 0x10),
                    -(ushort)(((uint)fVar25 & 0xffff) == ((uint)fVar24 & 0xffff)));
      local_e0._0_6_ =
           CONCAT24(-(ushort)(((uint)fVar4 & 0xffff) == ((uint)fVar20 & 0xffff)),
                    (undefined4)local_e0);
      local_e0 = CONCAT26(-(ushort)(sVar3 == sVar2),(int6)local_e0);
      uStack_d8._0_6_ =
           CONCAT24(-(ushort)((uint)uStack_b8._4_2_ == ((uint)fVar27 & 0xffff)),
                    CONCAT22(-(ushort)((uint)uStack_b8._2_2_ == (uint)fVar21 >> 0x10),
                             -(ushort)(((uint)fVar23 & 0xffff) == ((uint)fVar21 & 0xffff))));
      sVar3 = uStack_b8._6_2_;
LAB_0122a8bc:
      uStack_d8 = CONCAT26(-(ushort)(sVar3 == (short)((ulong)param_4 >> 0x30)),(undefined6)uStack_d8
                          );
    }
  }
  else {
LAB_0122a268:
    local_e0 = CONCAT17(-((char)((ulong)local_c0 >> 0x38) == (char)((ulong)local_d0 >> 0x38)),
                        CONCAT16(-((char)((ulong)local_c0 >> 0x30) ==
                                  (char)((ulong)local_d0 >> 0x30)),
                                 CONCAT15(-((char)((ulong)local_c0 >> 0x28) ==
                                           (char)((ulong)local_d0 >> 0x28)),
                                          CONCAT14(-((char)((ulong)local_c0 >> 0x20) ==
                                                    (char)((ulong)local_d0 >> 0x20)),
                                                   CONCAT13(-((char)((ulong)local_c0 >> 0x18) ==
                                                             (char)((ulong)local_d0 >> 0x18)),
                                                            CONCAT12(-((char)((ulong)local_c0 >>
                                                                             0x10) ==
                                                                      (char)((ulong)local_d0 >> 0x10
                                                                            )),
                                                                     CONCAT11(-((char)((ulong)
                                                  local_c0 >> 8) == (char)((ulong)local_d0 >> 8)),
                                                  -(SUB81(local_c0,0) == SUB81(local_d0,0)))))))));
    uStack_d8 = CONCAT17(-((char)((ulong)uStack_b8 >> 0x38) == (char)((ulong)dStack_c8 >> 0x38)),
                         CONCAT16(-((char)((ulong)uStack_b8 >> 0x30) ==
                                   (char)((ulong)dStack_c8 >> 0x30)),
                                  CONCAT15(-((char)((ulong)uStack_b8 >> 0x28) ==
                                            (char)((ulong)dStack_c8 >> 0x28)),
                                           CONCAT14(-((char)((ulong)uStack_b8 >> 0x20) ==
                                                     (char)((ulong)dStack_c8 >> 0x20)),
                                                    CONCAT13(-((char)((ulong)uStack_b8 >> 0x18) ==
                                                              (char)((ulong)dStack_c8 >> 0x18)),
                                                             CONCAT12(-((char)((ulong)uStack_b8 >>
                                                                              0x10) ==
                                                                       (char)((ulong)dStack_c8 >>
                                                                             0x10)),
                                                                      CONCAT11(-((char)((ulong)
                                                  uStack_b8 >> 8) == (char)((ulong)dStack_c8 >> 8)),
                                                  -(SUB81(uStack_b8,0) == SUB81(dStack_c8,0)))))))))
    ;
  }
  local_90 = 0;
  lStack_88 = 0;
  if ((*(byte *)(*plVar18 + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lStack_88 = uStack_d8;
  local_90 = local_e0;
LAB_0122c834:
  if (*(long *)(local_e8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_90,lStack_88);
}


