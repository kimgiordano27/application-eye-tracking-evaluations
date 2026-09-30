/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$IsWatchTypeSupported
ENTRY_POINT: 0145bac8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

undefined8
Meta_XR_ImmersiveDebugger_Manager_WatchManager__IsWatchTypeSupported(long param_1,long param_2)

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
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  char cVar20;
  uint uVar21;
  long lVar22;
  ulong *puVar23;
  long lVar24;
  int *piVar25;
  long *unaff_x19;
  long *plVar26;
  long unaff_x20;
  long *unaff_x21;
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
  
  while (lVar12 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(param_1 + 0x40)), lVar12 != 0) {
    do {
      if ((int)unaff_x19[3] == 0) goto LAB_0145d054;
      if (unaff_x21 != (long *)0x0) {
        in_stack_00000020 = unaff_x21;
      }
      unaff_x19[4] = *(long *)PTR_DAT_033f6398;
      lVar12 = 0;
      if (unaff_x21 != (long *)0x0) {
        if (in_stack_00000020 == (long *)0x0) goto LAB_0145d050;
        lVar12 = (**(code **)(*in_stack_00000020 + 0x168))
                           (in_stack_00000020,*(undefined8 *)(*in_stack_00000020 + 0x170));
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x19 + 0x40)), lVar13 == 0))
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
         (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x19 + 0x40)), lVar13 == 0))
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
         (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x19 + 0x40)), lVar13 == 0))
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
      lVar12 = FUN_02688894(&stack0x000000b0,0);
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x19 + 0x40)), lVar13 == 0))
      goto LAB_0145d058;
      if (*(uint *)(unaff_x19 + 3) < 8) goto LAB_0145d054;
      unaff_x19[0xb] = lVar12;
      uVar14 = FUN_01600844(unaff_x19,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      FUN_02660dac(uVar14,0);
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
            lVar13 = *(long *)(unaff_x24 + 0x28);
            if (lVar13 != 0) {
              in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,(int)uVar27);
              uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                          ,&stack0x00000070);
              uVar14 = FUN_01600b5c(*(undefined8 *)System_Collections_Generic_IList<string>_TypeInfo
                                    ,in_stack_00000060,uVar14,0);
              if (((*(long *)(lVar12 + 0x18) == 0) ||
                  (lVar22 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar22 == 0)) ||
                 (lVar22 = *(long *)(lVar22 + 0x60), lVar22 == 0)) goto LAB_0145d050;
              (**(code **)(lVar13 + 0x18))
                        ((unaff_s15 / (float)*(int *)(lVar22 + 0x18)) * unaff_s14,
                         *(undefined8 *)(lVar13 + 0x40),uVar14,*(undefined8 *)(lVar13 + 0x28));
            }
            if (*(uint *)(in_stack_00000048 + 0x18) <= uVar27) goto LAB_0145d054;
            if ((*(long *)(lVar12 + 0x18) == 0) ||
               (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0))
            goto LAB_0145d050;
            lVar13 = *(long *)(lVar13 + 0x68);
            lVar22 = *(long *)(in_stack_00000048 + uVar27 * 8 + 0x20);
            if ((lVar13 == 0) ||
               (uVar15 = FUN_01322618(lVar13,lVar22,
                                      *(undefined8 *)
                                       System_Collections_Generic_IEnumerable<KeyValuePair<int,_int>>_TypeInfo
                                     ), (uVar15 & 1) != 0)) {
              if ((in_stack_00000040._4_1_ & 1) == 0) {
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
                cVar20 = *(char *)(in_stack_000000d0 + uVar27 * 0x18 + 0x30);
              }
              else {
                cVar20 = '\x01';
              }
              in_stack_00000040._4_1_ = cVar20 != '\0';
              if ((lVar22 == 0) || (lVar13 = FUN_0268b6ac(lVar22,0), lVar13 == 0))
              goto LAB_0145d050;
              uVar15 = FUN_0160472c(lVar13,*(undefined8 *)
                                            Method_TMPro_TMP_TextProcessingStack<MaterialReference>__ctor__
                                    ,0);
              if ((uVar15 & 1) != 0) {
                if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                uVar14 = FUN_0268b6ac(in_stack_00000060,0);
                uVar14 = FUN_01600424(*(undefined8 *)
                                       Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass8_0_<DOLocalPath>b__0__
                                      ,uVar14,*(undefined8 *)
                                               Method_Oculus_Platform_Message<CowatchingState>_get_Data__
                                      ,0);
                lVar12 = *(long *)StringLiteral_302;
                goto LAB_0145c928;
              }
              if ((*(long *)(lVar12 + 0x18) == 0) ||
                 (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0))
              goto LAB_0145d050;
              if ((*(char *)(lVar13 + 0x27) != '\0') &&
                 ((uVar15 = FUN_01434ca8(in_stack_00000048,0), (uVar15 & 1) == 0 &&
                  (1 < *(int *)(unaff_x24 + 0x30))))) {
                if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                uVar14 = FUN_0268b6ac(in_stack_00000060,0);
                uVar14 = FUN_01600424(*(undefined8 *)StringLiteral_3316,uVar14,
                                      *(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_laneq_f32__,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02661754(uVar14,0);
              }
              if (((*(long *)(lVar12 + 0x18) == 0) ||
                  (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0)) ||
                 (lVar13 = *(long *)(lVar13 + 0x70), lVar13 == 0)) goto LAB_0145d050;
              plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)
                                              Method_UnityEngine_XR_ARSubsystems_XRCpuImage_ValidateConversionParamsAndThrow__
                                             ,*(undefined4 *)(lVar13 + 0x18));
              lVar13 = *(long *)(lVar12 + 0x18);
              if (lVar13 == 0) goto LAB_0145d050;
              uVar15 = 0;
              while( true ) {
                lVar13 = *(long *)(lVar13 + 0x10);
                if ((lVar13 == 0) || (*(long *)(lVar13 + 0x70) == 0)) goto LAB_0145d050;
                if ((long)*(int *)(*(long *)(lVar13 + 0x70) + 0x18) <= (long)uVar15) break;
                if (DAT_03774e1e == '\0') {
                  thunk_FUN_00d48444();
                  DAT_03774e1e = '\x01';
                }
                puVar23 = *(ulong **)(*unaff_x29 + 0xb8);
                in_stack_000000a8 = puVar23[1];
                if (DAT_03774d77 == '\0') {
                  thunk_FUN_00d48444();
                  DAT_03774d77 = '\x01';
                  puVar23 = *(ulong **)(*unaff_x29 + 0xb8);
                }
                in_stack_000000a0 = *puVar23;
                if ((((*(long *)(lVar12 + 0x18) == 0) ||
                     (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0)) ||
                    (lVar13 = *(long *)(lVar13 + 0x70), lVar13 == 0)) ||
                   (FUN_0132138c(lVar13,uVar15 & 0xffffffff,&stack0x00000070,*unaff_x27),
                   in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
                uVar17 = FUN_0267e21c(lVar22,in_stack_00000070[2],0);
                if ((uVar17 & 1) == 0) {
                  uVar8 = 0;
                  plVar18 = (long *)0x0;
                  fVar31 = 0.0;
                }
                else {
                  if (((*(long *)(lVar12 + 0x18) == 0) ||
                      (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0)) ||
                     ((lVar13 = *(long *)(lVar13 + 0x90), lVar13 == 0 ||
                      (lVar13 = FUN_02666a34(lVar13,0), lVar13 == 0)))) goto LAB_0145d050;
                  uVar14 = FUN_0268b6ac(lVar13,0);
                  if (((*(long *)(lVar12 + 0x18) == 0) ||
                      (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0)) ||
                     ((lVar13 = *(long *)(lVar13 + 0x70), lVar13 == 0 ||
                      (FUN_0132138c(lVar13,uVar15 & 0xffffffff,&stack0x00000070,*unaff_x27),
                      in_stack_00000070 == (long *)0x0)))) goto LAB_0145d050;
                  lVar13 = in_stack_00000070[2];
                  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  plVar18 = (long *)FUN_014578b8(uVar14,lVar22,lVar13);
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      );
                  }
                  uVar17 = FUN_02681b9c(plVar18,0,0);
                  if ((uVar17 & 1) == 0) {
                    uVar8 = 0;
                    plVar18 = (long *)0x0;
                  }
                  else {
                    if ((plVar18 == (long *)0x0) ||
                       (*plVar18 !=
                        *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
                      if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                      uVar14 = FUN_0268b6ac(in_stack_00000060,0);
                      uVar14 = FUN_01600424(*(undefined8 *)
                                             UnityEngine_UIElements_VisualElement_TypeData_TypeInfo,
                                            uVar14,*(undefined8 *)
                                                                                                        
                                                  Method_System_Diagnostics_Contracts_Contract_ForAll<Type>__
                                            ,0);
                      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)StringLiteral_302);
                      }
                      FUN_026610e4(uVar14,0);
                      lVar12 = *(long *)(in_stack_00000058 + 0x38);
                      goto joined_r0x0145c834;
                    }
                    uVar9 = FUN_026709f8(plVar18,0);
                    uVar17 = FUN_0269e56c(0);
                    if ((uVar17 & 1) == 0) {
                      plVar26 = *(long **)(in_stack_00000058 + 0x40);
                      if (plVar26 == (long *)0x0) {
                        uVar17 = 0;
                        uVar8 = 0;
                      }
                      else {
                        if (*plVar18 !=
                            *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)
                        goto Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint;
                        lVar13 = *plVar26;
                        uVar17 = (ulong)*(ushort *)(lVar13 + 0x12a);
                        if (uVar17 != 0) {
                          piVar25 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar25 + -2) == *(long *)StringLiteral_2590) {
                              puVar19 = (undefined8 *)(lVar13 + (long)(*piVar25 + 7) * 0x10 + 0x138)
                              ;
                              goto LAB_0145c1b8;
                            }
                            uVar17 = uVar17 - 1;
                            piVar25 = piVar25 + 4;
                          } while (uVar17 != 0);
                        }
                        puVar19 = (undefined8 *)FUN_00d59724(plVar26,*(long *)StringLiteral_2590,7);
LAB_0145c1b8:
                        uVar17 = (*(code *)*puVar19)(plVar26,plVar18,puVar19[1]);
                        uVar8 = 1;
                        if ((uVar17 & 1) != 0) {
                          uVar8 = 0xffffffff;
                        }
                      }
                    }
                    else {
                      uVar17 = 0;
                      uVar8 = 0;
                    }
                    if (((uVar17 & 1) != 0) ||
                       ((uVar9 | 2) != 3 && (uVar9 != 0xe && (uVar9 | 1) != 5))) {
                      uVar17 = FUN_0269e56c(0);
                      lVar13 = *(long *)(lVar12 + 0x18);
                      if ((uVar17 & 1) == 0) {
                        if (lVar13 == 0) goto LAB_0145d050;
                      }
                      else {
                        if ((lVar13 == 0) || (lVar24 = *(long *)(lVar13 + 0x10), lVar24 == 0))
                        goto LAB_0145d050;
                        if ((*(int *)(lVar24 + 0x88) == 0) &&
                           ((*(int *)(lVar24 + 0x30) != 2 && (*(int *)(lVar24 + 0x30) != 5)))) {
                          plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                          puVar3 = StringLiteral_302;
                          if (plVar16 == (long *)0x0) goto LAB_0145d050;
                          if ((*(long *)StringLiteral_3316 != 0) &&
                             (lVar12 = thunk_FUN_00d6225c(*(long *)StringLiteral_3316,
                                                          *(undefined8 *)(*plVar16 + 0x40)),
                             lVar12 == 0)) goto LAB_0145d058;
                          if ((int)plVar16[3] == 0) goto LAB_0145d054;
                          plVar16[4] = *(long *)StringLiteral_3316;
                          if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                          lVar12 = FUN_0268b6ac(in_stack_00000060,0);
                          if ((lVar12 != 0) &&
                             (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar16 + 0x40)),
                             lVar13 == 0)) goto LAB_0145d058;
                          uVar21 = *(uint *)(plVar16 + 3);
                          if (uVar21 < 2) goto LAB_0145d054;
                          plVar16[5] = lVar12;
                          puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__;
                          if (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__ != 0) {
                            lVar12 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__
                                                  ,*(undefined8 *)(*plVar16 + 0x40));
                            if (lVar12 == 0) goto LAB_0145d058;
                            uVar21 = *(uint *)(plVar16 + 3);
                          }
                          if (uVar21 < 3) goto LAB_0145d054;
                          plVar16[6] = *(long *)puVar4;
                          lVar12 = FUN_0268b6ac(plVar18,0);
                          if ((lVar12 != 0) &&
                             (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar16 + 0x40)),
                             lVar13 == 0)) goto LAB_0145d058;
                          uVar21 = *(uint *)(plVar16 + 3);
                          if (uVar21 < 4) goto LAB_0145d054;
                          plVar16[7] = lVar12;
                          puVar4 = System_TimeZoneInfo_AdjustmentRule___var;
                          if (*(long *)System_TimeZoneInfo_AdjustmentRule___var != 0) {
                            lVar12 = thunk_FUN_00d6225c(*(long *)
                                                  System_TimeZoneInfo_AdjustmentRule___var,
                                                  *(undefined8 *)(*plVar16 + 0x40));
                            if (lVar12 == 0) goto LAB_0145d058;
                            uVar21 = *(uint *)(plVar16 + 3);
                          }
                          if (uVar21 < 5) goto LAB_0145d054;
                          plVar16[8] = *(long *)puVar4;
                          in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,uVar9);
                          in_stack_00000070 =
                               *(long **)
                                Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                          in_stack_00000078 = 0xffffffffffffffff;
                          lVar12 = FUN_017a7f78(&stack0x00000070,0);
                          if ((lVar12 != 0) &&
                             (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar16 + 0x40)),
                             lVar13 == 0)) goto LAB_0145d058;
                          uVar9 = *(uint *)(plVar16 + 3);
                          if (uVar9 < 6) goto LAB_0145d054;
                          plVar16[9] = lVar12;
                          puVar4 = System_Func<double>_TypeInfo;
                          if (*(long *)System_Func<double>_TypeInfo != 0) {
                            lVar12 = thunk_FUN_00d6225c(*(long *)System_Func<double>_TypeInfo,
                                                        *(undefined8 *)(*plVar16 + 0x40));
                            if (lVar12 == 0) goto LAB_0145d058;
                            uVar9 = *(uint *)(plVar16 + 3);
                          }
                          if (uVar9 < 7) goto LAB_0145d054;
                          plVar16[10] = *(long *)puVar4;
                          uVar14 = FUN_01600844(plVar16,0);
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)puVar3);
                          }
                          FUN_026610e4(uVar14,0);
                          lVar12 = *(long *)(in_stack_00000058 + 0x38);
                          goto joined_r0x0145c834;
                        }
                      }
                      if (((*(long *)(lVar13 + 0x10) == 0) ||
                          (lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + 0x70), lVar13 == 0)) ||
                         (FUN_0132138c(lVar13,uVar15 & 0xffffffff,&stack0x00000070,*unaff_x27),
                         in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
                      plVar18 = (long *)FUN_0267dbbc(lVar22,in_stack_00000070[2],0);
                      if ((plVar18 != (long *)0x0) &&
                         (*plVar18 !=
                          *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint:
                    /* WARNING: Subroutine does not return */
                        FUN_00da544c(plVar18);
                      }
                    }
                  }
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar17 = FUN_02681b9c(plVar18,0,0);
                  fVar31 = 0.0;
                  if ((uVar17 & 1) != 0) {
                    if ((*(long *)(lVar12 + 0x18) == 0) ||
                       (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0))
                    goto LAB_0145d050;
                    if (*(char *)(lVar13 + 0x48) != '\0') {
                      if (in_stack_000000d0 == 0) goto LAB_0145d050;
                      if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar15) goto LAB_0145d054;
                      if (*(float *)(in_stack_000000d0 + uVar15 * 0x18 + 0x34) != 0.0) {
                        if (plVar18 == (long *)0x0) goto LAB_0145d050;
                        iVar10 = (**(code **)(*plVar18 + 0x188))
                                           (plVar18,*(undefined8 *)(*plVar18 + 400));
                        iVar11 = (**(code **)(*plVar18 + 0x1a8))
                                           (plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
                        if (in_stack_000000d0 == 0) goto LAB_0145d050;
                        if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar15) goto LAB_0145d054;
                        fVar31 = (float)(iVar11 * iVar10) /
                                 *(float *)(in_stack_000000d0 + uVar15 * 0x18 + 0x34);
                      }
                    }
                  }
                  if ((((*(long *)(lVar12 + 0x18) == 0) ||
                       (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0)) ||
                      (lVar13 = *(long *)(lVar13 + 0x70), lVar13 == 0)) ||
                     (FUN_0132138c(lVar13,uVar15 & 0xffffffff,&stack0x00000070,*unaff_x27),
                     in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
                  lVar13 = in_stack_00000070[2];
                  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01459f0c(lVar22,lVar13,&stack0x000000a0,&stack0x000000a8);
                }
                uVar17 = in_stack_000000a0 & 0xffffffff;
                uVar6 = in_stack_000000a0._4_4_;
                uVar32 = in_stack_000000a8 & 0xffffffff;
                uVar7 = in_stack_000000a8._4_4_;
                lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2762);
                if ((lVar13 == 0) ||
                   (FUN_01443e40(uVar17,uVar6,uVar32,uVar7,fVar31,lVar13,plVar18,uVar8,0),
                   plVar16 == (long *)0x0)) goto LAB_0145d050;
                lVar24 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar16 + 0x40));
                if (lVar24 == 0) goto LAB_0145d058;
                if (*(uint *)(plVar16 + 3) <= uVar15) goto LAB_0145d054;
                plVar16[uVar15 + 4] = lVar13;
                lVar13 = *(long *)(lVar12 + 0x18);
                uVar15 = uVar15 + 1;
                if (lVar13 == 0) goto LAB_0145d050;
              }
              if ((*(long *)(lVar13 + 0x50) == 0) ||
                 (FUN_01449654(*(long *)(lVar13 + 0x50),*(undefined8 *)(lVar13 + 0x90),lVar22,0),
                 in_stack_000000d0 == 0)) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
              uVar14 = FUN_026884c4(in_stack_000000d0 + uVar27 * 0x18 + 0x20,0);
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
                 (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0))
              goto LAB_0145d050;
              uVar1 = *(undefined1 *)(lVar13 + 0x27);
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13654);
              if (lVar13 == 0) goto LAB_0145d050;
              FUN_01444820(uVar29,uVar30,uVar14,uVar28,lVar13,plVar16,uVar1,0);
              *(long *)(lVar12 + 0x10) = lVar13;
              in_stack_00000078 = 0;
              in_stack_00000070 = (long *)0x0;
              in_stack_00000088 = 0;
              in_stack_00000080 = 0;
              FUN_01431554(uVar29,uVar30,uVar14,uVar28,&stack0x00000070,0);
              if ((*(long *)(lVar12 + 0x18) == 0) ||
                 (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar13 == 0))
              goto LAB_0145d050;
              cVar20 = *(char *)(lVar13 + 0x27);
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                         );
              if (lVar13 == 0) goto LAB_0145d050;
              FUN_01444454(in_stack_00000070,in_stack_00000078,in_stack_00000080,in_stack_00000088,
                           lVar13,cVar20 != '\0',lVar22,0);
              if (((*(long *)(lVar12 + 0x10) == 0) ||
                  (lVar22 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18), lVar22 == 0)) ||
                 (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto LAB_0145d050;
              FUN_00bc03b0(lVar22,lVar13,*(undefined8 *)PTR_DAT_033eb210);
              if ((*(long *)(lVar12 + 0x18) == 0) ||
                 (lVar22 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar22 == 0))
              goto LAB_0145d050;
              lVar24 = *(long *)(lVar22 + 0x58);
              lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__
                                         );
              if ((lVar22 == 0) ||
                 (FUN_0136b58c(lVar22,lVar12,
                               *(undefined8 *)Method_PhoneDialtoneController_MuteDialtone__,0),
                 lVar24 == 0)) goto LAB_0145d050;
              FUN_01322b20(lVar24,lVar22,&stack0x000000d8,
                           *(undefined8 *)
                            Method_ShowPromptWhenTeleportPadsUsed_TeleportPointEntered__);
              lVar22 = CONCAT71(uStack00000000000000d9,uStack00000000000000d8);
              if (lVar22 == 0) {
                if (((*(long *)(lVar12 + 0x18) == 0) ||
                    (lVar22 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar22 == 0)) ||
                   (lVar22 = *(long *)(lVar22 + 0x58), lVar22 == 0)) goto LAB_0145d050;
                FUN_00bc0938(lVar22,*(undefined8 *)(lVar12 + 0x10),
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_TryGetValue__
                            );
                lVar22 = *(long *)(lVar12 + 0x10);
                if (lVar22 == 0) goto LAB_0145d050;
              }
              else {
                *(long *)(lVar12 + 0x10) = lVar22;
              }
              if ((*(long *)(lVar22 + 0x18) == 0) ||
                 (lVar22 = *(long *)(*(long *)(lVar22 + 0x18) + 0x10), lVar22 == 0))
              goto LAB_0145d050;
              uVar15 = FUN_01322618(lVar22,lVar13,
                                    *(undefined8 *)
                                     Method_Meta_WitAi_Json_WitResponseNode_SaveToCompressedStream__
                                   );
              if ((uVar15 & 1) == 0) {
                if (((*(long *)(lVar12 + 0x10) == 0) ||
                    (lVar22 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18), lVar22 == 0)) ||
                   (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto LAB_0145d050;
                FUN_00bc03b0(lVar22,lVar13,*(undefined8 *)PTR_DAT_033eb210);
              }
              if (((*(long *)(lVar12 + 0x10) == 0) ||
                  (lVar13 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18), lVar13 == 0)) ||
                 (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)) goto LAB_0145d050;
              uVar15 = FUN_01322618(lVar13,in_stack_00000060,
                                    *(undefined8 *)
                                     Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                                   );
              unaff_x24 = in_stack_00000058;
              if ((uVar15 & 1) == 0) {
                if (((*(long *)(lVar12 + 0x10) == 0) ||
                    (lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18), lVar12 == 0)) ||
                   (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) goto LAB_0145d050;
                FUN_00ac8520(lVar12,in_stack_00000060,*(undefined8 *)StringLiteral_1415);
                if (*(long *)(in_stack_00000058 + 0x48) == 0) goto LAB_0145d050;
                uVar15 = FUN_01322618(*(long *)(in_stack_00000058 + 0x48),in_stack_00000060,
                                      *(undefined8 *)
                                       Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                                     );
                if ((uVar15 & 1) == 0) {
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
        if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x60), lVar13 == 0)) goto LAB_0145d050;
        if (*(int *)(lVar13 + 0x18) <= unaff_w28) {
          if (3 < *(int *)(unaff_x24 + 0x30)) {
            if (*(long *)(lVar12 + 0x58) == 0) goto LAB_0145d050;
            in_stack_00000070 =
                 (long *)CONCAT44(in_stack_00000070._4_4_,
                                  *(undefined4 *)(*(long *)(lVar12 + 0x58) + 0x18));
            uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                        ,&stack0x00000070);
            puVar5 = StringLiteral_9958;
            if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
            uStack00000000000000d8 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x27);
            uVar28 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x000000d8);
            if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
            in_stack_00000068._4_1_ = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x49);
            uVar29 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,(long)&stack0x00000068 + 4);
            uVar14 = FUN_01600ba0(*(undefined8 *)Method_System_Threading_Tasks_Task_Run<int>__,
                                  uVar14,uVar28,uVar29,0);
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x25);
            }
            FUN_02660dac(uVar14,0);
            lVar12 = *(long *)(unaff_x20 + 0x10);
            if (lVar12 == 0) goto LAB_0145d050;
          }
          if (*(long *)(lVar12 + 0x58) == 0) goto LAB_0145d050;
          if (*(int *)(*(long *)(lVar12 + 0x58) + 0x18) == 0) {
            if ((*(long *)(lVar12 + 0x68) == 0) ||
               (plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,
                                               *(undefined4 *)(*(long *)(lVar12 + 0x68) + 0x18)),
               puVar5 = 
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_<CreateWireframeNotSupportedWarning>b__0__
               , puVar3 = UnityEngine_XR_InputTrackingState_TypeInfo, plVar16 == (long *)0x0))
            goto LAB_0145d050;
            if ((int)plVar16[3] < 1) goto LAB_0145cee8;
            uVar27 = 0;
            goto LAB_0145ce80;
          }
          cVar20 = *(char *)(lVar12 + 0x49);
          uVar14 = *(undefined8 *)(lVar12 + 0x50);
          cVar2 = *(char *)(lVar12 + 0x27);
          uVar8 = *(undefined4 *)(unaff_x24 + 0x30);
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f0098);
          if (lVar12 == 0) goto LAB_0145d050;
          FUN_014467b4(lVar12,cVar20 != '\0',uVar14,cVar2 != '\0',uVar8,0);
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
          FUN_0144680c(lVar12,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x58),0);
          lVar13 = *(long *)(unaff_x20 + 0x10);
          if (lVar13 == 0) goto LAB_0145d050;
          if (*(char *)(lVar13 + 0x4a) != '\0') {
            iVar10 = *(int *)(lVar13 + 0x20);
            if (*(int *)(lVar13 + 0x20) <= *(int *)(lVar13 + 0x1c)) {
              iVar10 = *(int *)(lVar13 + 0x1c);
            }
            FUN_01448250(lVar12,*(undefined8 *)(lVar13 + 0x58),iVar10,0);
            lVar13 = *(long *)(unaff_x20 + 0x10);
            if (lVar13 == 0) goto LAB_0145d050;
          }
          uVar27 = 0;
          goto LAB_0145cd00;
        }
        FUN_0132138c(lVar13,unaff_w28,&stack0x00000070,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
        unaff_x21 = in_stack_00000070;
        lVar12 = *(long *)(unaff_x24 + 0x28);
        unaff_s15 = (float)unaff_w28;
        in_stack_00000060 = in_stack_00000070;
        if (lVar12 != 0) {
          uVar14 = *(undefined8 *)
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
          uVar14 = FUN_015f5b28(uVar14,uVar28,0);
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (lVar13 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x60), lVar13 == 0))
          goto LAB_0145d050;
          (**(code **)(lVar12 + 0x18))
                    ((unaff_s15 / (float)*(int *)(lVar13 + 0x18)) * unaff_s14,
                     *(undefined8 *)(lVar12 + 0x40),uVar14,*(undefined8 *)(lVar12 + 0x28));
        }
        if (3 < *(int *)(unaff_x24 + 0x30)) {
          uVar14 = *(undefined8 *)PTR_DAT_033f4f00;
          if (unaff_x21 == (long *)0x0) {
            uVar28 = 0;
          }
          else {
            if (unaff_x21 == (long *)0x0) goto LAB_0145d050;
            uVar28 = (**(code **)(*unaff_x21 + 0x168))
                               (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
          }
          uVar14 = FUN_015f5b28(uVar14,uVar28,0);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x25);
          }
          FUN_02660dac(uVar14,0);
        }
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_0268b4e0(unaff_x21,0,0);
        if ((uVar27 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = *(undefined8 *)StringLiteral_14312;
          goto LAB_0145c940;
        }
        lVar12 = FUN_0142fbb8(unaff_x21,0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar27 = FUN_0268b4e0(lVar12,0,0);
        if ((uVar27 & 1) != 0) {
          if (unaff_x21 == (long *)0x0) goto LAB_0145d050;
          uVar14 = FUN_0268b6ac(unaff_x21,0);
          uVar28 = *(undefined8 *)StringLiteral_3316;
          puVar19 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>__ctor__
          ;
LAB_0145c910:
          uVar14 = FUN_01600424(uVar28,uVar14,*puVar19,0);
          lVar12 = *unaff_x25;
LAB_0145c928:
          iVar10 = *(int *)(lVar12 + 0xe0);
          goto joined_r0x0145d048;
        }
        in_stack_00000048 = FUN_01433b54(unaff_x21,0);
        if (in_stack_00000048 == 0) goto LAB_0145d050;
        if (*(long *)(in_stack_00000048 + 0x18) == 0) {
          if (unaff_x21 != (long *)0x0) {
            uVar14 = FUN_0268b6ac(unaff_x21,0);
            uVar28 = *(undefined8 *)StringLiteral_3316;
            puVar19 = (undefined8 *)
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
            lVar13 = 0;
            uVar27 = 0;
            do {
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
              FUN_014344d8(lVar12,in_stack_000000d0 + lVar13 + 0x20,uVar27 & 0xffffffff,0,0);
              lVar22 = in_stack_000000d0;
              lVar24 = *(long *)(unaff_x20 + 0x10);
              if (lVar24 == 0) goto LAB_0145d050;
              if (*(char *)(lVar24 + 0x48) != '\0') {
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0)
                    == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture
                                  (lVar12,uVar27 & 0xffffffff);
                if (*(uint *)(lVar22 + 0x18) <= uVar27) goto LAB_0145d054;
                *(undefined4 *)(lVar22 + lVar13 + 0x34) = uVar8;
                lVar24 = *(long *)(unaff_x20 + 0x10);
                if (lVar24 == 0) goto LAB_0145d050;
              }
              lVar22 = in_stack_000000d0;
              if (*(char *)(lVar24 + 0x27) != '\0') {
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar27) goto LAB_0145d054;
                if (*(char *)(in_stack_000000d0 + lVar13 + 0x32) == '\0') {
                  in_stack_00000070 = (long *)0x0;
                  in_stack_00000078 = 0;
                  FUN_0268834c(0,0,&stack0x00000070,0);
                  if (*(uint *)(lVar22 + 0x18) <= uVar27) goto LAB_0145d054;
                  lVar22 = lVar22 + lVar13;
                  *(undefined8 *)(lVar22 + 0x28) = in_stack_00000078;
                  *(long **)(lVar22 + 0x20) = in_stack_00000070;
                  uVar14 = *(undefined8 *)System_Linq_Expressions_IArgumentProvider_TypeInfo;
                  if (unaff_x21 == (long *)0x0) {
                    uVar28 = 0;
                  }
                  else {
                    if (unaff_x21 == (long *)0x0) goto LAB_0145d050;
                    uVar28 = (**(code **)(*unaff_x21 + 0x168))
                                       (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
                  }
                  uVar14 = FUN_01600424(uVar14,uVar28,
                                        *(undefined8 *)
                                         Method_System_Collections_Generic_List<SerializationFieldInfo>_Add__
                                        ,0);
                  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x25);
                  }
                  FUN_02661754(uVar14,0);
                }
              }
              uVar27 = uVar27 + 1;
              iVar10 = FUN_02666048(lVar12,0);
              lVar13 = lVar13 + 0x18;
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
      param_2 = *(long *)PTR_DAT_033f6398;
    } while (param_2 == 0);
    param_1 = *unaff_x19;
  }
  goto LAB_0145d058;
  while( true ) {
    if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar27) {
      if (*(int *)(in_stack_00000058 + 0x30) < 4) {
        return 0;
      }
      in_stack_00000098 = FUN_020407b0(in_stack_00000010,0);
      uVar14 = FUN_01770034(&stack0x00000098,*(undefined8 *)StringLiteral_12992,0);
      uVar14 = FUN_015f5b28(*(undefined8 *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCaptureOutEvent>__
                            ,uVar14,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      FUN_02660dac(uVar14,0);
      return 0;
    }
    FUN_0132138c(lVar12,uVar27 & 0xffffffff,&stack0x00000070,*unaff_x27);
    plVar16 = in_stack_00000070;
    if (in_stack_00000070 == (long *)0x0) break;
    lVar13 = *(long *)(unaff_x20 + 0x10);
    if (*(char *)((long)in_stack_00000070 + 0x19) != '\0') {
      if (lVar13 == 0) break;
      iVar11 = 0;
      iVar10 = 0;
      while( true ) {
        lVar12 = *(long *)(lVar13 + 0x58);
        if (lVar12 == 0) goto LAB_0145d050;
        if (*(int *)(lVar12 + 0x18) <= iVar10) break;
        FUN_0132138c(lVar12,iVar10,&stack0x00000070,*(undefined8 *)puVar3);
        if ((in_stack_00000070 == (long *)0x0) || (lVar12 = in_stack_00000070[2], lVar12 == 0))
        goto LAB_0145d050;
        if (*(uint *)(lVar12 + 0x18) <= uVar27) goto LAB_0145d054;
        lVar12 = *(long *)(lVar12 + uVar27 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_0145d050;
        lVar13 = *(long *)(unaff_x20 + 0x10);
        iVar10 = iVar10 + 1;
        iVar11 = *(int *)(lVar12 + 0x60) + iVar11;
        if (lVar13 == 0) goto LAB_0145d050;
      }
      *(byte *)(plVar16 + 3) = (byte)((uint)iVar11 >> 0x1f);
      *(undefined1 *)((long)plVar16 + 0x19) = 0;
    }
    uVar27 = uVar27 + 1;
    if (lVar13 == 0) break;
LAB_0145cd00:
    lVar12 = *(long *)(lVar13 + 0x70);
    if (lVar12 == 0) break;
  }
LAB_0145d050:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    lVar12 = FUN_0268b6ac(in_stack_00000070,0);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
    goto LAB_0145d058;
    uVar9 = *(uint *)(plVar16 + 3);
    if (uVar9 <= uVar27) goto LAB_0145d054;
    plVar16[uVar27 + 4] = lVar12;
    uVar27 = uVar27 + 1;
    if ((long)(int)uVar9 <= (long)uVar27) break;
LAB_0145ce80:
    if (((*(long *)(unaff_x20 + 0x10) == 0) ||
        (lVar12 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x68), lVar12 == 0)) ||
       (FUN_0132138c(lVar12,uVar27 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar4),
       in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
  }
LAB_0145cee8:
  lVar12 = FUN_01600f98(*(undefined8 *)PTR_DAT_033f38b8,plVar16,0);
  plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
  if (plVar16 == (long *)0x0) goto LAB_0145d050;
  lVar13 = *(long *)puVar3;
  if ((lVar13 == 0) ||
     (lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar13 != 0)) {
    if ((int)plVar16[3] != 0) {
      plVar16[4] = *(long *)puVar3;
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
      plVar18 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x90);
      if (plVar18 == (long *)0x0) {
        lVar13 = 0;
      }
      else {
        lVar13 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
        if ((lVar13 != 0) &&
           (lVar22 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar22 == 0))
        goto LAB_0145d058;
      }
      uVar9 = *(uint *)(plVar16 + 3);
      if (1 < uVar9) {
        plVar16[5] = lVar13;
        lVar13 = *(long *)puVar5;
        if (lVar13 != 0) {
          lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar13 == 0) goto LAB_0145d058;
          uVar9 = *(uint *)(plVar16 + 3);
        }
        puVar3 = Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_GetBehaviour__
        ;
        if (2 < uVar9) {
          plVar16[6] = *(long *)puVar5;
          if (lVar12 != 0) {
            lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar13 == 0) goto LAB_0145d058;
            uVar9 = *(uint *)(plVar16 + 3);
          }
          if (3 < uVar9) {
            plVar16[7] = lVar12;
            lVar12 = *(long *)puVar3;
            if (lVar12 != 0) {
              lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar12 == 0) goto LAB_0145d058;
              uVar9 = *(uint *)(plVar16 + 3);
            }
            if (4 < uVar9) {
              plVar16[8] = *(long *)puVar3;
              uVar14 = FUN_01600844(plVar16,0);
              lVar12 = *unaff_x25;
              iVar10 = *(int *)(lVar12 + 0xe0);
joined_r0x0145d048:
              if (iVar10 == 0) {
                thunk_FUN_00d32864(lVar12);
              }
LAB_0145c940:
              FUN_026610e4(uVar14,0);
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
  uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar14,0);
}


