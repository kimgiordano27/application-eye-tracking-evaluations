/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$.ctor
ENTRY_POINT: 0145bcd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 Meta_XR_ImmersiveDebugger_Manager_WatchManager___ctor(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  char cVar19;
  uint uVar20;
  long lVar21;
  ulong *puVar22;
  long lVar23;
  int *piVar24;
  long *unaff_x19;
  long lVar25;
  long *plVar26;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x27;
  int unaff_w28;
  ulong uVar27;
  long *unaff_x29;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  ulong uVar32;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined1 uStack00000000000000d8;
  undefined7 uStack00000000000000d9;
  
  while (lVar12 = thunk_FUN_00d6225c(param_1,param_2), param_1 = unaff_x21, lVar12 != 0) {
    do {
      if (*(uint *)(unaff_x19 + 3) < 8) goto LAB_0145d054;
      unaff_x19[0xb] = param_1;
      uVar13 = FUN_01600844(unaff_x19,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      FUN_02660dac(uVar13,0);
      do {
        if (0 < *(int *)(in_stack_00000048 + 0x18)) {
          uVar27 = 0;
          do {
            lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_Obi_ObiConstraints<ObiAerodynamicConstraintsBatch>_GetBatchCount__
                                       );
            if (lVar12 == 0) goto LAB_0145d050;
            FUN_017b46ec(lVar12,0);
            *(long *)(lVar12 + 0x18) = unaff_x20;
            lVar25 = *(long *)(unaff_x24 + 0x28);
            if (lVar25 != 0) {
              in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,(int)uVar27);
              uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                          ,&stack0x00000070);
              uVar13 = FUN_01600b5c(*(undefined8 *)System_Collections_Generic_IList<string>_TypeInfo
                                    ,in_stack_00000060,uVar13,0);
              if (((*(long *)(lVar12 + 0x18) == 0) ||
                  (lVar21 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar21 == 0)) ||
                 (lVar21 = *(long *)(lVar21 + 0x60), lVar21 == 0)) goto LAB_0145d050;
              (**(code **)(lVar25 + 0x18))
                        ((unaff_s15 / (float)*(int *)(lVar21 + 0x18)) * unaff_s14,
                         *(undefined8 *)(lVar25 + 0x40),uVar13,*(undefined8 *)(lVar25 + 0x28));
            }
            if (*(uint *)(in_stack_00000048 + 0x18) <= uVar27) goto LAB_0145d054;
            if ((*(long *)(lVar12 + 0x18) == 0) ||
               (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0))
            goto LAB_0145d050;
            lVar25 = *(long *)(lVar25 + 0x68);
            lVar21 = *(long *)(in_stack_00000048 + uVar27 * 8 + 0x20);
            if ((lVar25 == 0) ||
               (uVar14 = FUN_01322618(lVar25,lVar21,
                                      *(undefined8 *)
                                       System_Collections_Generic_IEnumerable<KeyValuePair<int,_int>>_TypeInfo
                                     ), (uVar14 & 1) != 0)) {
              if ((in_stack_00000040._4_1_ & 1) == 0) {
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
                cVar19 = *(char *)(in_stack_000000d0 + uVar27 * 0x18 + 0x30);
              }
              else {
                cVar19 = '\x01';
              }
              in_stack_00000040._4_1_ = cVar19 != '\0';
              if ((lVar21 == 0) || (lVar25 = FUN_0268b6ac(lVar21,0), lVar25 == 0))
              goto LAB_0145d050;
              uVar14 = FUN_0160472c(lVar25,*(undefined8 *)
                                            Method_TMPro_TMP_TextProcessingStack<MaterialReference>__ctor__
                                    ,0);
              if ((uVar14 & 1) != 0) {
                if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                uVar13 = FUN_0268b6ac(in_stack_00000060,0);
                uVar13 = FUN_01600424(*(undefined8 *)
                                       Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass8_0_<DOLocalPath>b__0__
                                      ,uVar13,*(undefined8 *)
                                               Method_Oculus_Platform_Message<CowatchingState>_get_Data__
                                      ,0);
                lVar12 = *(long *)StringLiteral_302;
                goto LAB_0145c928;
              }
              if ((*(long *)(lVar12 + 0x18) == 0) ||
                 (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0))
              goto LAB_0145d050;
              if ((*(char *)(lVar25 + 0x27) != '\0') &&
                 ((uVar14 = FUN_01434ca8(in_stack_00000048,0), (uVar14 & 1) == 0 &&
                  (1 < *(int *)(unaff_x24 + 0x30))))) {
                if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                uVar13 = FUN_0268b6ac(in_stack_00000060,0);
                uVar13 = FUN_01600424(*(undefined8 *)StringLiteral_3316,uVar13,
                                      *(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_laneq_f32__,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02661754(uVar13,0);
              }
              if (((*(long *)(lVar12 + 0x18) == 0) ||
                  (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0)) ||
                 (lVar25 = *(long *)(lVar25 + 0x70), lVar25 == 0)) goto LAB_0145d050;
              plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)
                                              Method_UnityEngine_XR_ARSubsystems_XRCpuImage_ValidateConversionParamsAndThrow__
                                             ,*(undefined4 *)(lVar25 + 0x18));
              lVar25 = *(long *)(lVar12 + 0x18);
              if (lVar25 == 0) goto LAB_0145d050;
              uVar14 = 0;
              while( true ) {
                lVar25 = *(long *)(lVar25 + 0x10);
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0x70) == 0)) goto LAB_0145d050;
                if ((long)*(int *)(*(long *)(lVar25 + 0x70) + 0x18) <= (long)uVar14) break;
                if (DAT_03774e1e == '\0') {
                  thunk_FUN_00d48444();
                  DAT_03774e1e = '\x01';
                }
                puVar22 = *(ulong **)(*unaff_x29 + 0xb8);
                in_stack_000000a8 = puVar22[1];
                if (DAT_03774d77 == '\0') {
                  thunk_FUN_00d48444();
                  DAT_03774d77 = '\x01';
                  puVar22 = *(ulong **)(*unaff_x29 + 0xb8);
                }
                in_stack_000000a0 = *puVar22;
                if ((((*(long *)(lVar12 + 0x18) == 0) ||
                     (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0)) ||
                    (lVar25 = *(long *)(lVar25 + 0x70), lVar25 == 0)) ||
                   (FUN_0132138c(lVar25,uVar14 & 0xffffffff,&stack0x00000070,*unaff_x27),
                   in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
                uVar16 = FUN_0267e21c(lVar21,in_stack_00000070[2],0);
                if ((uVar16 & 1) == 0) {
                  uVar8 = 0;
                  plVar17 = (long *)0x0;
                  fVar31 = 0.0;
                }
                else {
                  if (((*(long *)(lVar12 + 0x18) == 0) ||
                      (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0)) ||
                     ((lVar25 = *(long *)(lVar25 + 0x90), lVar25 == 0 ||
                      (lVar25 = FUN_02666a34(lVar25,0), lVar25 == 0)))) goto LAB_0145d050;
                  uVar13 = FUN_0268b6ac(lVar25,0);
                  if (((*(long *)(lVar12 + 0x18) == 0) ||
                      (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0)) ||
                     ((lVar25 = *(long *)(lVar25 + 0x70), lVar25 == 0 ||
                      (FUN_0132138c(lVar25,uVar14 & 0xffffffff,&stack0x00000070,*unaff_x27),
                      in_stack_00000070 == (long *)0x0)))) goto LAB_0145d050;
                  lVar25 = in_stack_00000070[2];
                  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  plVar17 = (long *)FUN_014578b8(uVar13,lVar21,lVar25);
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      );
                  }
                  uVar16 = FUN_02681b9c(plVar17,0,0);
                  if ((uVar16 & 1) == 0) {
                    uVar8 = 0;
                    plVar17 = (long *)0x0;
                  }
                  else {
                    if ((plVar17 == (long *)0x0) ||
                       (*plVar17 !=
                        *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
                      if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                      uVar13 = FUN_0268b6ac(in_stack_00000060,0);
                      uVar13 = FUN_01600424(*(undefined8 *)
                                             UnityEngine_UIElements_VisualElement_TypeData_TypeInfo,
                                            uVar13,*(undefined8 *)
                                                                                                        
                                                  Method_System_Diagnostics_Contracts_Contract_ForAll<Type>__
                                            ,0);
                      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)StringLiteral_302);
                      }
                      FUN_026610e4(uVar13,0);
                      lVar12 = *(long *)(in_stack_00000058 + 0x38);
                      goto joined_r0x0145c834;
                    }
                    uVar9 = FUN_026709f8(plVar17,0);
                    uVar16 = FUN_0269e56c(0);
                    if ((uVar16 & 1) == 0) {
                      plVar26 = *(long **)(in_stack_00000058 + 0x40);
                      if (plVar26 == (long *)0x0) {
                        uVar16 = 0;
                        uVar8 = 0;
                      }
                      else {
                        if (*plVar17 !=
                            *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)
                        goto Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint;
                        lVar25 = *plVar26;
                        uVar16 = (ulong)*(ushort *)(lVar25 + 0x12a);
                        if (uVar16 != 0) {
                          piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_2590) {
                              puVar18 = (undefined8 *)(lVar25 + (long)(*piVar24 + 7) * 0x10 + 0x138)
                              ;
                              goto LAB_0145c1b8;
                            }
                            uVar16 = uVar16 - 1;
                            piVar24 = piVar24 + 4;
                          } while (uVar16 != 0);
                        }
                        puVar18 = (undefined8 *)FUN_00d59724(plVar26,*(long *)StringLiteral_2590,7);
LAB_0145c1b8:
                        uVar16 = (*(code *)*puVar18)(plVar26,plVar17,puVar18[1]);
                        uVar8 = 1;
                        if ((uVar16 & 1) != 0) {
                          uVar8 = 0xffffffff;
                        }
                      }
                    }
                    else {
                      uVar16 = 0;
                      uVar8 = 0;
                    }
                    if (((uVar16 & 1) != 0) ||
                       ((uVar9 | 2) != 3 && (uVar9 != 0xe && (uVar9 | 1) != 5))) {
                      uVar16 = FUN_0269e56c(0);
                      lVar25 = *(long *)(lVar12 + 0x18);
                      if ((uVar16 & 1) == 0) {
                        if (lVar25 == 0) goto LAB_0145d050;
                      }
                      else {
                        if ((lVar25 == 0) || (lVar23 = *(long *)(lVar25 + 0x10), lVar23 == 0))
                        goto LAB_0145d050;
                        if ((*(int *)(lVar23 + 0x88) == 0) &&
                           ((*(int *)(lVar23 + 0x30) != 2 && (*(int *)(lVar23 + 0x30) != 5)))) {
                          plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                          puVar3 = StringLiteral_302;
                          if (plVar15 == (long *)0x0) goto LAB_0145d050;
                          if ((*(long *)StringLiteral_3316 != 0) &&
                             (lVar12 = thunk_FUN_00d6225c(*(long *)StringLiteral_3316,
                                                          *(undefined8 *)(*plVar15 + 0x40)),
                             lVar12 == 0)) goto LAB_0145d058;
                          if ((int)plVar15[3] == 0) goto LAB_0145d054;
                          plVar15[4] = *(long *)StringLiteral_3316;
                          if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                          lVar12 = FUN_0268b6ac(in_stack_00000060,0);
                          if ((lVar12 != 0) &&
                             (lVar25 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar25 == 0)) goto LAB_0145d058;
                          uVar20 = *(uint *)(plVar15 + 3);
                          if (uVar20 < 2) goto LAB_0145d054;
                          plVar15[5] = lVar12;
                          puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__;
                          if (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__ != 0) {
                            lVar12 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__
                                                  ,*(undefined8 *)(*plVar15 + 0x40));
                            if (lVar12 == 0) goto LAB_0145d058;
                            uVar20 = *(uint *)(plVar15 + 3);
                          }
                          if (uVar20 < 3) goto LAB_0145d054;
                          plVar15[6] = *(long *)puVar4;
                          lVar12 = FUN_0268b6ac(plVar17,0);
                          if ((lVar12 != 0) &&
                             (lVar25 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar25 == 0)) goto LAB_0145d058;
                          uVar20 = *(uint *)(plVar15 + 3);
                          if (uVar20 < 4) goto LAB_0145d054;
                          plVar15[7] = lVar12;
                          puVar4 = System_TimeZoneInfo_AdjustmentRule___var;
                          if (*(long *)System_TimeZoneInfo_AdjustmentRule___var != 0) {
                            lVar12 = thunk_FUN_00d6225c(*(long *)
                                                  System_TimeZoneInfo_AdjustmentRule___var,
                                                  *(undefined8 *)(*plVar15 + 0x40));
                            if (lVar12 == 0) goto LAB_0145d058;
                            uVar20 = *(uint *)(plVar15 + 3);
                          }
                          if (uVar20 < 5) goto LAB_0145d054;
                          plVar15[8] = *(long *)puVar4;
                          in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,uVar9);
                          in_stack_00000070 =
                               *(long **)
                                Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                          in_stack_00000078 = 0xffffffffffffffff;
                          lVar12 = FUN_017a7f78(&stack0x00000070,0);
                          if ((lVar12 != 0) &&
                             (lVar25 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar25 == 0)) goto LAB_0145d058;
                          uVar9 = *(uint *)(plVar15 + 3);
                          if (uVar9 < 6) goto LAB_0145d054;
                          plVar15[9] = lVar12;
                          puVar4 = System_Func<double>_TypeInfo;
                          if (*(long *)System_Func<double>_TypeInfo != 0) {
                            lVar12 = thunk_FUN_00d6225c(*(long *)System_Func<double>_TypeInfo,
                                                        *(undefined8 *)(*plVar15 + 0x40));
                            if (lVar12 == 0) goto LAB_0145d058;
                            uVar9 = *(uint *)(plVar15 + 3);
                          }
                          if (uVar9 < 7) goto LAB_0145d054;
                          plVar15[10] = *(long *)puVar4;
                          uVar13 = FUN_01600844(plVar15,0);
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)puVar3);
                          }
                          FUN_026610e4(uVar13,0);
                          lVar12 = *(long *)(in_stack_00000058 + 0x38);
                          goto joined_r0x0145c834;
                        }
                      }
                      if (((*(long *)(lVar25 + 0x10) == 0) ||
                          (lVar25 = *(long *)(*(long *)(lVar25 + 0x10) + 0x70), lVar25 == 0)) ||
                         (FUN_0132138c(lVar25,uVar14 & 0xffffffff,&stack0x00000070,*unaff_x27),
                         in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
                      plVar17 = (long *)FUN_0267dbbc(lVar21,in_stack_00000070[2],0);
                      if ((plVar17 != (long *)0x0) &&
                         (*plVar17 !=
                          *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint:
                    /* WARNING: Subroutine does not return */
                        FUN_00da544c(plVar17);
                      }
                    }
                  }
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar16 = FUN_02681b9c(plVar17,0,0);
                  fVar31 = 0.0;
                  if ((uVar16 & 1) != 0) {
                    if ((*(long *)(lVar12 + 0x18) == 0) ||
                       (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0))
                    goto LAB_0145d050;
                    if (*(char *)(lVar25 + 0x48) != '\0') {
                      if (in_stack_000000d0 == 0) goto LAB_0145d050;
                      if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar14) goto LAB_0145d054;
                      if (*(float *)(in_stack_000000d0 + uVar14 * 0x18 + 0x34) != 0.0) {
                        if (plVar17 == (long *)0x0) goto LAB_0145d050;
                        iVar10 = (**(code **)(*plVar17 + 0x188))
                                           (plVar17,*(undefined8 *)(*plVar17 + 400));
                        iVar11 = (**(code **)(*plVar17 + 0x1a8))
                                           (plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
                        if (in_stack_000000d0 == 0) goto LAB_0145d050;
                        if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar14) goto LAB_0145d054;
                        fVar31 = (float)(iVar11 * iVar10) /
                                 *(float *)(in_stack_000000d0 + uVar14 * 0x18 + 0x34);
                      }
                    }
                  }
                  if ((((*(long *)(lVar12 + 0x18) == 0) ||
                       (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0)) ||
                      (lVar25 = *(long *)(lVar25 + 0x70), lVar25 == 0)) ||
                     (FUN_0132138c(lVar25,uVar14 & 0xffffffff,&stack0x00000070,*unaff_x27),
                     in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
                  lVar25 = in_stack_00000070[2];
                  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01459f0c(lVar21,lVar25,&stack0x000000a0,&stack0x000000a8);
                }
                uVar16 = in_stack_000000a0 & 0xffffffff;
                uVar6 = in_stack_000000a0._4_4_;
                uVar32 = in_stack_000000a8 & 0xffffffff;
                uVar7 = in_stack_000000a8._4_4_;
                lVar25 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2762);
                if ((lVar25 == 0) ||
                   (FUN_01443e40(uVar16,uVar6,uVar32,uVar7,fVar31,lVar25,plVar17,uVar8,0),
                   plVar15 == (long *)0x0)) goto LAB_0145d050;
                lVar23 = thunk_FUN_00d6225c(lVar25,*(undefined8 *)(*plVar15 + 0x40));
                if (lVar23 == 0) goto LAB_0145d058;
                if (*(uint *)(plVar15 + 3) <= uVar14) goto LAB_0145d054;
                plVar15[uVar14 + 4] = lVar25;
                lVar25 = *(long *)(lVar12 + 0x18);
                uVar14 = uVar14 + 1;
                if (lVar25 == 0) goto LAB_0145d050;
              }
              if ((*(long *)(lVar25 + 0x50) == 0) ||
                 (FUN_01449654(*(long *)(lVar25 + 0x50),*(undefined8 *)(lVar25 + 0x90),lVar21,0),
                 in_stack_000000d0 == 0)) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
              uVar13 = FUN_026884c4(in_stack_000000d0 + uVar27 * 0x18 + 0x20,0);
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
              uVar28 = FUN_026884d4(in_stack_000000d0 + uVar27 * 0x18 + 0x20,0);
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
              uVar29 = FUN_02688390(in_stack_000000d0 + uVar27 * 0x18 + 0x20,0);
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
              uVar30 = FUN_026883a0(in_stack_000000d0 + uVar27 * 0x18 + 0x20,0);
              if ((*(long *)(lVar12 + 0x18) == 0) ||
                 (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0))
              goto LAB_0145d050;
              uVar1 = *(undefined1 *)(lVar25 + 0x27);
              lVar25 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13654);
              if (lVar25 == 0) goto LAB_0145d050;
              FUN_01444820(uVar29,uVar30,uVar13,uVar28,lVar25,plVar15,uVar1,0);
              *(long *)(lVar12 + 0x10) = lVar25;
              in_stack_00000078 = 0;
              in_stack_00000070 = (long *)0x0;
              in_stack_00000088 = 0;
              in_stack_00000080 = 0;
              FUN_01431554(uVar29,uVar30,uVar13,uVar28,&stack0x00000070,0);
              if ((*(long *)(lVar12 + 0x18) == 0) ||
                 (lVar25 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar25 == 0))
              goto LAB_0145d050;
              cVar19 = *(char *)(lVar25 + 0x27);
              lVar25 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                         );
              if (lVar25 == 0) goto LAB_0145d050;
              FUN_01444454(in_stack_00000070,in_stack_00000078,in_stack_00000080,in_stack_00000088,
                           lVar25,cVar19 != '\0',lVar21,0);
              if (((*(long *)(lVar12 + 0x10) == 0) ||
                  (lVar21 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18), lVar21 == 0)) ||
                 (lVar21 = *(long *)(lVar21 + 0x10), lVar21 == 0)) goto LAB_0145d050;
              FUN_00bc03b0(lVar21,lVar25,*(undefined8 *)PTR_DAT_033eb210);
              if ((*(long *)(lVar12 + 0x18) == 0) ||
                 (lVar21 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar21 == 0))
              goto LAB_0145d050;
              lVar23 = *(long *)(lVar21 + 0x58);
              lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__
                                         );
              if ((lVar21 == 0) ||
                 (FUN_0136b58c(lVar21,lVar12,
                               *(undefined8 *)Method_PhoneDialtoneController_MuteDialtone__,0),
                 lVar23 == 0)) goto LAB_0145d050;
              FUN_01322b20(lVar23,lVar21,&stack0x000000d8,
                           *(undefined8 *)
                            Method_ShowPromptWhenTeleportPadsUsed_TeleportPointEntered__);
              lVar21 = CONCAT71(uStack00000000000000d9,uStack00000000000000d8);
              if (lVar21 == 0) {
                if (((*(long *)(lVar12 + 0x18) == 0) ||
                    (lVar21 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar21 == 0)) ||
                   (lVar21 = *(long *)(lVar21 + 0x58), lVar21 == 0)) goto LAB_0145d050;
                FUN_00bc0938(lVar21,*(undefined8 *)(lVar12 + 0x10),
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_TryGetValue__
                            );
                lVar21 = *(long *)(lVar12 + 0x10);
                if (lVar21 == 0) goto LAB_0145d050;
              }
              else {
                *(long *)(lVar12 + 0x10) = lVar21;
              }
              if ((*(long *)(lVar21 + 0x18) == 0) ||
                 (lVar21 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar21 == 0))
              goto LAB_0145d050;
              uVar14 = FUN_01322618(lVar21,lVar25,
                                    *(undefined8 *)
                                     Method_Meta_WitAi_Json_WitResponseNode_SaveToCompressedStream__
                                   );
              if ((uVar14 & 1) == 0) {
                if (((*(long *)(lVar12 + 0x10) == 0) ||
                    (lVar21 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18), lVar21 == 0)) ||
                   (lVar21 = *(long *)(lVar21 + 0x10), lVar21 == 0)) goto LAB_0145d050;
                FUN_00bc03b0(lVar21,lVar25,*(undefined8 *)PTR_DAT_033eb210);
              }
              if (((*(long *)(lVar12 + 0x10) == 0) ||
                  (lVar25 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18), lVar25 == 0)) ||
                 (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)) goto LAB_0145d050;
              uVar14 = FUN_01322618(lVar25,in_stack_00000060,
                                    *(undefined8 *)
                                     Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                                   );
              unaff_x24 = in_stack_00000058;
              if ((uVar14 & 1) == 0) {
                if (((*(long *)(lVar12 + 0x10) == 0) ||
                    (lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18), lVar12 == 0)) ||
                   (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) goto LAB_0145d050;
                FUN_00ac8520(lVar12,in_stack_00000060,*(undefined8 *)StringLiteral_1415);
                if (*(long *)(in_stack_00000058 + 0x48) == 0) goto LAB_0145d050;
                uVar14 = FUN_01322618(*(long *)(in_stack_00000058 + 0x48),in_stack_00000060,
                                      *(undefined8 *)
                                       Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                                     );
                if ((uVar14 & 1) == 0) {
                  if (*(long *)(in_stack_00000058 + 0x48) == 0) goto LAB_0145d050;
                  FUN_00ac8520(*(long *)(in_stack_00000058 + 0x48),in_stack_00000060,
                               *(undefined8 *)StringLiteral_1415);
                }
              }
            }
            uVar27 = uVar27 + 1;
          } while ((long)uVar27 < (long)*(int *)(in_stack_00000048 + 0x18));
        }
        puVar4 = StringLiteral_7763;
        unaff_x25 = (long *)StringLiteral_302;
        puVar3 = PTR_DAT_033ee2d8;
        lVar12 = *(long *)(unaff_x20 + 0x10);
        unaff_w28 = unaff_w28 + 1;
        if ((lVar12 == 0) || (lVar25 = *(long *)(lVar12 + 0x60), lVar25 == 0)) goto LAB_0145d050;
        if (*(int *)(lVar25 + 0x18) <= unaff_w28) {
          if (3 < *(int *)(unaff_x24 + 0x30)) {
            if (*(long *)(lVar12 + 0x58) == 0) goto LAB_0145d050;
            in_stack_00000070 =
                 (long *)CONCAT44(in_stack_00000070._4_4_,
                                  *(undefined4 *)(*(long *)(lVar12 + 0x58) + 0x18));
            uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                        ,&stack0x00000070);
            puVar5 = StringLiteral_9958;
            if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
            uStack00000000000000d8 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x27);
            uVar28 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x000000d8);
            if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
            in_stack_00000068._4_1_ = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x49);
            uVar29 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,(long)&stack0x00000068 + 4);
            uVar13 = FUN_01600ba0(*(undefined8 *)Method_System_Threading_Tasks_Task_Run<int>__,
                                  uVar13,uVar28,uVar29,0);
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x25);
            }
            FUN_02660dac(uVar13,0);
            lVar12 = *(long *)(unaff_x20 + 0x10);
            if (lVar12 == 0) goto LAB_0145d050;
          }
          if (*(long *)(lVar12 + 0x58) == 0) goto LAB_0145d050;
          if (*(int *)(*(long *)(lVar12 + 0x58) + 0x18) == 0) {
            if ((*(long *)(lVar12 + 0x68) == 0) ||
               (plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,
                                               *(undefined4 *)(*(long *)(lVar12 + 0x68) + 0x18)),
               puVar5 = 
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_<CreateWireframeNotSupportedWarning>b__0__
               , puVar3 = UnityEngine_XR_InputTrackingState_TypeInfo, plVar15 == (long *)0x0))
            goto LAB_0145d050;
            if ((int)plVar15[3] < 1) goto LAB_0145cee8;
            uVar27 = 0;
            goto LAB_0145ce80;
          }
          cVar19 = *(char *)(lVar12 + 0x49);
          uVar13 = *(undefined8 *)(lVar12 + 0x50);
          cVar2 = *(char *)(lVar12 + 0x27);
          uVar8 = *(undefined4 *)(unaff_x24 + 0x30);
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f0098);
          if (lVar12 == 0) goto LAB_0145d050;
          FUN_014467b4(lVar12,cVar19 != '\0',uVar13,cVar2 != '\0',uVar8,0);
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
          FUN_0144680c(lVar12,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x58),0);
          lVar25 = *(long *)(unaff_x20 + 0x10);
          if (lVar25 == 0) goto LAB_0145d050;
          if (*(char *)(lVar25 + 0x4a) != '\0') {
            iVar10 = *(int *)(lVar25 + 0x20);
            if (*(int *)(lVar25 + 0x20) <= *(int *)(lVar25 + 0x1c)) {
              iVar10 = *(int *)(lVar25 + 0x1c);
            }
            FUN_01448250(lVar12,*(undefined8 *)(lVar25 + 0x58),iVar10,0);
            lVar25 = *(long *)(unaff_x20 + 0x10);
            if (lVar25 == 0) goto LAB_0145d050;
          }
          uVar27 = 0;
          goto LAB_0145cd00;
        }
        FUN_0132138c(lVar25,unaff_w28,&stack0x00000070,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
        plVar15 = in_stack_00000070;
        lVar12 = *(long *)(unaff_x24 + 0x28);
        unaff_s15 = (float)unaff_w28;
        in_stack_00000060 = in_stack_00000070;
        if (lVar12 != 0) {
          uVar13 = *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_TryGetValue__
          ;
          if (in_stack_00000070 == (long *)0x0) {
            uVar28 = 0;
          }
          else {
            if (in_stack_00000070 == (long *)0x0) goto LAB_0145d050;
            uVar28 = (**(code **)(*in_stack_00000070 + 0x168))
                               (in_stack_00000070,*(undefined8 *)(*in_stack_00000070 + 0x170));
          }
          uVar13 = FUN_015f5b28(uVar13,uVar28,0);
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (lVar25 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x60), lVar25 == 0))
          goto LAB_0145d050;
          (**(code **)(lVar12 + 0x18))
                    ((unaff_s15 / (float)*(int *)(lVar25 + 0x18)) * unaff_s14,
                     *(undefined8 *)(lVar12 + 0x40),uVar13,*(undefined8 *)(lVar12 + 0x28));
        }
        if (3 < *(int *)(unaff_x24 + 0x30)) {
          uVar13 = *(undefined8 *)PTR_DAT_033f4f00;
          if (plVar15 == (long *)0x0) {
            uVar28 = 0;
          }
          else {
            if (plVar15 == (long *)0x0) goto LAB_0145d050;
            uVar28 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
          }
          uVar13 = FUN_015f5b28(uVar13,uVar28,0);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x25);
          }
          FUN_02660dac(uVar13,0);
        }
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_0268b4e0(plVar15,0,0);
        if ((uVar27 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = *(undefined8 *)StringLiteral_14312;
          goto LAB_0145c940;
        }
        lVar12 = FUN_0142fbb8(plVar15,0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar27 = FUN_0268b4e0(lVar12,0,0);
        if ((uVar27 & 1) != 0) {
          if (plVar15 == (long *)0x0) goto LAB_0145d050;
          uVar13 = FUN_0268b6ac(plVar15,0);
          uVar28 = *(undefined8 *)StringLiteral_3316;
          puVar18 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>__ctor__
          ;
LAB_0145c910:
          uVar13 = FUN_01600424(uVar28,uVar13,*puVar18,0);
          lVar12 = *unaff_x25;
LAB_0145c928:
          iVar10 = *(int *)(lVar12 + 0xe0);
          goto joined_r0x0145d048;
        }
        in_stack_00000048 = FUN_01433b54(plVar15,0);
        if (in_stack_00000048 == 0) goto LAB_0145d050;
        if (*(long *)(in_stack_00000048 + 0x18) == 0) {
          if (plVar15 != (long *)0x0) {
            uVar13 = FUN_0268b6ac(plVar15,0);
            uVar28 = *(undefined8 *)StringLiteral_3316;
            puVar18 = (undefined8 *)
                      Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData__
            ;
            goto LAB_0145c910;
          }
          goto LAB_0145d050;
        }
        if (lVar12 == 0) goto LAB_0145d050;
        uVar8 = FUN_02681c0c(lVar12,0);
        in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar8);
        uVar27 = FUN_0129eff4(in_stack_00000018,&stack0x00000070,&stack0x000000d0,
                              *(undefined8 *)System_Collections_Generic_ICollection<Vertex>_TypeInfo
                             );
        if ((uVar27 & 1) == 0) {
          uVar8 = FUN_02666048(lVar12,0);
          in_stack_000000d0 =
               FUN_00da4fb8(*(undefined8 *)
                             Method_System_Collections_Generic_List<VolumeComponent>_Add__,uVar8);
          iVar10 = FUN_02666048(lVar12,0);
          if (0 < iVar10) {
            lVar25 = 0;
            uVar27 = 0;
            do {
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
              FUN_014344d8(lVar12,in_stack_000000d0 + lVar25 + 0x20,uVar27 & 0xffffffff,0,0);
              lVar21 = in_stack_000000d0;
              lVar23 = *(long *)(unaff_x20 + 0x10);
              if (lVar23 == 0) goto LAB_0145d050;
              if (*(char *)(lVar23 + 0x48) != '\0') {
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0)
                    == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture
                                  (lVar12,uVar27 & 0xffffffff);
                if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_0145d054;
                *(undefined4 *)(lVar21 + lVar25 + 0x34) = uVar8;
                lVar23 = *(long *)(unaff_x20 + 0x10);
                if (lVar23 == 0) goto LAB_0145d050;
              }
              lVar21 = in_stack_000000d0;
              if (*(char *)(lVar23 + 0x27) != '\0') {
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
                if (*(char *)(in_stack_000000d0 + lVar25 + 0x32) == '\0') {
                  in_stack_00000070 = (long *)0x0;
                  in_stack_00000078 = 0;
                  FUN_0268834c(0,0,&stack0x00000070,0);
                  if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_0145d054;
                  lVar21 = lVar21 + lVar25;
                  *(undefined8 *)(lVar21 + 0x28) = in_stack_00000078;
                  *(long **)(lVar21 + 0x20) = in_stack_00000070;
                  uVar13 = *(undefined8 *)System_Linq_Expressions_IArgumentProvider_TypeInfo;
                  if (plVar15 == (long *)0x0) {
                    uVar28 = 0;
                  }
                  else {
                    if (plVar15 == (long *)0x0) goto LAB_0145d050;
                    uVar28 = (**(code **)(*plVar15 + 0x168))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                  }
                  uVar13 = FUN_01600424(uVar13,uVar28,
                                        *(undefined8 *)
                                         Method_System_Collections_Generic_List<SerializationFieldInfo>_Add__
                                        ,0);
                  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x25);
                  }
                  FUN_02661754(uVar13,0);
                }
              }
              uVar27 = uVar27 + 1;
              iVar10 = FUN_02666048(lVar12,0);
              lVar25 = lVar25 + 0x18;
            } while ((long)uVar27 < (long)iVar10);
          }
          uVar8 = FUN_02681c0c(lVar12,0);
          in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar8);
          FUN_0129a054(in_stack_00000018,&stack0x00000070,in_stack_000000d0,
                       *(undefined8 *)StringLiteral_5001);
        }
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
      } while ((*(char *)(*(long *)(unaff_x20 + 0x10) + 0x27) == '\0') ||
              (*(int *)(unaff_x24 + 0x30) < 5));
      unaff_x19 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
      if (unaff_x19 == (long *)0x0) goto LAB_0145d050;
      if ((*(long *)PTR_DAT_033f6398 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f6398,*(undefined8 *)(*unaff_x19 + 0x40)),
         lVar12 == 0)) goto LAB_0145d058;
      if ((int)unaff_x19[3] == 0) goto LAB_0145d054;
      if (plVar15 != (long *)0x0) {
        in_stack_00000020 = plVar15;
      }
      unaff_x19[4] = *(long *)PTR_DAT_033f6398;
      lVar12 = 0;
      if (plVar15 != (long *)0x0) {
        if (in_stack_00000020 == (long *)0x0) goto LAB_0145d050;
        lVar12 = (**(code **)(*in_stack_00000020 + 0x168))
                           (in_stack_00000020,*(undefined8 *)(*in_stack_00000020 + 0x170));
        if ((lVar12 != 0) &&
           (lVar25 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x19 + 0x40)), lVar25 == 0))
        goto LAB_0145d058;
      }
      uVar9 = *(uint *)(unaff_x19 + 3);
      if (uVar9 < 2) goto LAB_0145d054;
      unaff_x19[5] = lVar12;
      if (*(long *)
           Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
          != 0) {
        lVar12 = thunk_FUN_00d6225c(*(long *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
                                    ,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar12 == 0) goto LAB_0145d058;
        uVar9 = *(uint *)(unaff_x19 + 3);
      }
      if (uVar9 < 3) goto LAB_0145d054;
      unaff_x19[6] = *(long *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
      ;
      if (in_stack_000000d0 == 0) goto LAB_0145d050;
      in_stack_000000c8._4_4_ = (undefined4)*(undefined8 *)(in_stack_000000d0 + 0x18);
      lVar12 = FUN_0176eb1c((long)&stack0x000000c8 + 4,0);
      if ((lVar12 != 0) &&
         (lVar25 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x19 + 0x40)), lVar25 == 0))
      goto LAB_0145d058;
      uVar9 = *(uint *)(unaff_x19 + 3);
      if (uVar9 < 4) goto LAB_0145d054;
      unaff_x19[7] = lVar12;
      if (*(long *)Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__ != 0) {
        lVar12 = thunk_FUN_00d6225c(*(long *)
                                     Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__
                                    ,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar12 == 0) goto LAB_0145d058;
        uVar9 = *(uint *)(unaff_x19 + 3);
      }
      if (uVar9 < 5) goto LAB_0145d054;
      unaff_x19[8] = *(long *)Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__;
      if (in_stack_000000d0 == 0) goto LAB_0145d050;
      if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
      lVar12 = in_stack_000000d0 + 0x30;
      if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar12 = FUN_016f5f58(lVar12,0);
      if ((lVar12 != 0) &&
         (lVar25 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x19 + 0x40)), lVar25 == 0))
      goto LAB_0145d058;
      uVar9 = *(uint *)(unaff_x19 + 3);
      if (uVar9 < 6) goto LAB_0145d054;
      unaff_x19[9] = lVar12;
      if (*(long *)Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__ != 0) {
        lVar12 = thunk_FUN_00d6225c(*(long *)
                                     Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__
                                    ,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar12 == 0) goto LAB_0145d058;
        uVar9 = *(uint *)(unaff_x19 + 3);
      }
      if (uVar9 < 7) goto LAB_0145d054;
      unaff_x19[10] = *(long *)Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__;
      if (in_stack_000000d0 == 0) goto LAB_0145d050;
      if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
      in_stack_000000b8 = *(undefined8 *)(in_stack_000000d0 + 0x28);
      in_stack_000000b0 = *(undefined8 *)(in_stack_000000d0 + 0x20);
      param_1 = FUN_02688894(&stack0x000000b0,0);
    } while (param_1 == 0);
    param_2 = *(undefined8 *)(*unaff_x19 + 0x40);
    unaff_x21 = param_1;
  }
  goto LAB_0145d058;
  while( true ) {
    if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar27) {
      if (*(int *)(in_stack_00000058 + 0x30) < 4) {
        return 0;
      }
      in_stack_00000098 = FUN_020407b0(in_stack_00000010,0);
      uVar13 = FUN_01770034(&stack0x00000098,*(undefined8 *)StringLiteral_12992,0);
      uVar13 = FUN_015f5b28(*(undefined8 *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCaptureOutEvent>__
                            ,uVar13,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      FUN_02660dac(uVar13,0);
      return 0;
    }
    FUN_0132138c(lVar12,uVar27 & 0xffffffff,&stack0x00000070,*unaff_x27);
    plVar15 = in_stack_00000070;
    if (in_stack_00000070 == (long *)0x0) break;
    lVar25 = *(long *)(unaff_x20 + 0x10);
    if (*(char *)((long)in_stack_00000070 + 0x19) != '\0') {
      if (lVar25 == 0) break;
      iVar11 = 0;
      iVar10 = 0;
      while( true ) {
        lVar12 = *(long *)(lVar25 + 0x58);
        if (lVar12 == 0) goto LAB_0145d050;
        if (*(int *)(lVar12 + 0x18) <= iVar10) break;
        FUN_0132138c(lVar12,iVar10,&stack0x00000070,*(undefined8 *)puVar3);
        if ((in_stack_00000070 == (long *)0x0) || (lVar12 = in_stack_00000070[2], lVar12 == 0))
        goto LAB_0145d050;
        if (*(uint *)(lVar12 + 0x18) <= uVar27) goto LAB_0145d054;
        lVar12 = *(long *)(lVar12 + uVar27 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_0145d050;
        lVar25 = *(long *)(unaff_x20 + 0x10);
        iVar10 = iVar10 + 1;
        iVar11 = *(int *)(lVar12 + 0x60) + iVar11;
        if (lVar25 == 0) goto LAB_0145d050;
      }
      *(byte *)(plVar15 + 3) = (byte)((uint)iVar11 >> 0x1f);
      *(undefined1 *)((long)plVar15 + 0x19) = 0;
    }
    uVar27 = uVar27 + 1;
    if (lVar25 == 0) break;
LAB_0145cd00:
    lVar12 = *(long *)(lVar25 + 0x70);
    if (lVar12 == 0) break;
  }
LAB_0145d050:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    lVar12 = FUN_0268b6ac(in_stack_00000070,0);
    if ((lVar12 != 0) &&
       (lVar25 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar25 == 0))
    goto LAB_0145d058;
    uVar9 = *(uint *)(plVar15 + 3);
    if (uVar9 <= uVar27) goto LAB_0145d054;
    plVar15[uVar27 + 4] = lVar12;
    uVar27 = uVar27 + 1;
    if ((long)(int)uVar9 <= (long)uVar27) break;
LAB_0145ce80:
    if (((*(long *)(unaff_x20 + 0x10) == 0) ||
        (lVar12 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x68), lVar12 == 0)) ||
       (FUN_0132138c(lVar12,uVar27 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar4),
       in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
  }
LAB_0145cee8:
  lVar12 = FUN_01600f98(*(undefined8 *)PTR_DAT_033f38b8,plVar15,0);
  plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
  if (plVar15 == (long *)0x0) goto LAB_0145d050;
  lVar25 = *(long *)puVar3;
  if ((lVar25 == 0) ||
     (lVar25 = thunk_FUN_00d6225c(lVar25,*(undefined8 *)(*plVar15 + 0x40)), lVar25 != 0)) {
    if ((int)plVar15[3] != 0) {
      plVar15[4] = *(long *)puVar3;
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
      plVar17 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x90);
      if (plVar17 == (long *)0x0) {
        lVar25 = 0;
      }
      else {
        lVar25 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
        if ((lVar25 != 0) &&
           (lVar21 = thunk_FUN_00d6225c(lVar25,*(undefined8 *)(*plVar15 + 0x40)), lVar21 == 0))
        goto LAB_0145d058;
      }
      uVar9 = *(uint *)(plVar15 + 3);
      if (1 < uVar9) {
        plVar15[5] = lVar25;
        lVar25 = *(long *)puVar5;
        if (lVar25 != 0) {
          lVar25 = thunk_FUN_00d6225c(lVar25,*(undefined8 *)(*plVar15 + 0x40));
          if (lVar25 == 0) goto LAB_0145d058;
          uVar9 = *(uint *)(plVar15 + 3);
        }
        puVar3 = Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_GetBehaviour__
        ;
        if (2 < uVar9) {
          plVar15[6] = *(long *)puVar5;
          if (lVar12 != 0) {
            lVar25 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar15 + 0x40));
            if (lVar25 == 0) goto LAB_0145d058;
            uVar9 = *(uint *)(plVar15 + 3);
          }
          if (3 < uVar9) {
            plVar15[7] = lVar12;
            lVar12 = *(long *)puVar3;
            if (lVar12 != 0) {
              lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar15 + 0x40));
              if (lVar12 == 0) goto LAB_0145d058;
              uVar9 = *(uint *)(plVar15 + 3);
            }
            if (4 < uVar9) {
              plVar15[8] = *(long *)puVar3;
              uVar13 = FUN_01600844(plVar15,0);
              lVar12 = *unaff_x25;
              iVar10 = *(int *)(lVar12 + 0xe0);
joined_r0x0145d048:
              if (iVar10 == 0) {
                thunk_FUN_00d32864(lVar12);
              }
LAB_0145c940:
              FUN_026610e4(uVar13,0);
              lVar12 = *(long *)(unaff_x24 + 0x38);
joined_r0x0145c834:
              if (lVar12 != 0) {
                *(undefined1 *)(lVar12 + 0x10) = 0;
                return 0;
              }
              goto LAB_0145d050;
            }
          }
        }
      }
    }
LAB_0145d054:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0145d058:
  uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar13,0);
}


