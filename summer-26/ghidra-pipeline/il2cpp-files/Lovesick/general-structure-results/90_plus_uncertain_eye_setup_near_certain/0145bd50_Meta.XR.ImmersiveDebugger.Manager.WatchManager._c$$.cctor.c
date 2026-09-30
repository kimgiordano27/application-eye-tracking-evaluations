/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager.<>c$$.cctor
ENTRY_POINT: 0145bd50
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

undefined8
Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c___cctor(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  char cVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  long *plVar27;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  ulong unaff_x28;
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
  undefined8 in_stack_00000028;
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
  
  do {
    FUN_017b46ec(param_1,param_2);
    *(long *)(unaff_x21 + 0x18) = unaff_x20;
    lVar26 = *(long *)(unaff_x24 + 0x28);
    if (lVar26 != 0) {
      in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,(int)unaff_x28);
      uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000070);
      uVar13 = FUN_01600b5c(*(undefined8 *)System_Collections_Generic_IList<string>_TypeInfo,
                            in_stack_00000060,uVar13,0);
      if (((*(long *)(unaff_x21 + 0x18) == 0) ||
          (lVar22 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar22 == 0)) ||
         (lVar22 = *(long *)(lVar22 + 0x60), lVar22 == 0)) goto LAB_0145d050;
      (**(code **)(lVar26 + 0x18))
                ((unaff_s15 / (float)*(int *)(lVar22 + 0x18)) * unaff_s14,
                 *(undefined8 *)(lVar26 + 0x40),uVar13,*(undefined8 *)(lVar26 + 0x28));
    }
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x28) goto LAB_0145d054;
    if ((*(long *)(unaff_x21 + 0x18) == 0) ||
       (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0)) goto LAB_0145d050;
    lVar26 = *(long *)(lVar26 + 0x68);
    lVar22 = *(long *)(unaff_x25 + unaff_x28 * 8 + 0x20);
    if ((lVar26 == 0) ||
       (uVar14 = FUN_01322618(lVar26,lVar22,
                              *(undefined8 *)
                               System_Collections_Generic_IEnumerable<KeyValuePair<int,_int>>_TypeInfo
                             ), (uVar14 & 1) != 0)) {
      if ((in_stack_00000040._4_1_ & 1) == 0) {
        if (in_stack_000000d0 == 0) goto LAB_0145d050;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
        cVar19 = *(char *)(in_stack_000000d0 + unaff_x28 * 0x18 + 0x30);
      }
      else {
        cVar19 = '\x01';
      }
      in_stack_00000040._4_1_ = cVar19 != '\0';
      if ((lVar22 == 0) || (lVar26 = FUN_0268b6ac(lVar22,0), lVar26 == 0)) goto LAB_0145d050;
      uVar14 = FUN_0160472c(lVar26,*(undefined8 *)
                                    Method_TMPro_TMP_TextProcessingStack<MaterialReference>__ctor__,
                            0);
      if ((uVar14 & 1) != 0) {
        if (in_stack_00000060 != (long *)0x0) {
          uVar13 = FUN_0268b6ac(in_stack_00000060,0);
          uVar13 = FUN_01600424(*(undefined8 *)
                                 Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass8_0_<DOLocalPath>b__0__
                                ,uVar13,*(undefined8 *)
                                         Method_Oculus_Platform_Message<CowatchingState>_get_Data__,
                                0);
          lVar26 = *(long *)StringLiteral_302;
LAB_0145c928:
          iVar11 = *(int *)(lVar26 + 0xe0);
          goto joined_r0x0145d048;
        }
        goto LAB_0145d050;
      }
      if ((*(long *)(unaff_x21 + 0x18) == 0) ||
         (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0)) goto LAB_0145d050;
      if ((*(char *)(lVar26 + 0x27) != '\0') &&
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
      if (((*(long *)(unaff_x21 + 0x18) == 0) ||
          (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0)) ||
         (lVar26 = *(long *)(lVar26 + 0x70), lVar26 == 0)) goto LAB_0145d050;
      plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)
                                      Method_UnityEngine_XR_ARSubsystems_XRCpuImage_ValidateConversionParamsAndThrow__
                                     ,*(undefined4 *)(lVar26 + 0x18));
      lVar26 = *(long *)(unaff_x21 + 0x18);
      if (lVar26 == 0) goto LAB_0145d050;
      uVar14 = 0;
      while( true ) {
        lVar26 = *(long *)(lVar26 + 0x10);
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x70) == 0)) goto LAB_0145d050;
        if ((long)*(int *)(*(long *)(lVar26 + 0x70) + 0x18) <= (long)uVar14) break;
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
        if ((((*(long *)(unaff_x21 + 0x18) == 0) ||
             (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0)) ||
            (lVar26 = *(long *)(lVar26 + 0x70), lVar26 == 0)) ||
           (FUN_0132138c(lVar26,uVar14 & 0xffffffff,&stack0x00000070,*unaff_x27),
           in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
        uVar16 = FUN_0267e21c(lVar22,in_stack_00000070[2],0);
        if ((uVar16 & 1) == 0) {
          uVar9 = 0;
          plVar17 = (long *)0x0;
          fVar31 = 0.0;
        }
        else {
          if (((*(long *)(unaff_x21 + 0x18) == 0) ||
              (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0)) ||
             ((lVar26 = *(long *)(lVar26 + 0x90), lVar26 == 0 ||
              (lVar26 = FUN_02666a34(lVar26,0), lVar26 == 0)))) goto LAB_0145d050;
          uVar13 = FUN_0268b6ac(lVar26,0);
          if (((*(long *)(unaff_x21 + 0x18) == 0) ||
              (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0)) ||
             ((lVar26 = *(long *)(lVar26 + 0x70), lVar26 == 0 ||
              (FUN_0132138c(lVar26,uVar14 & 0xffffffff,&stack0x00000070,*unaff_x27),
              in_stack_00000070 == (long *)0x0)))) goto LAB_0145d050;
          lVar26 = in_stack_00000070[2];
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0)
          {
            thunk_FUN_00d32864();
          }
          plVar17 = (long *)FUN_014578b8(uVar13,lVar22,lVar26);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar16 = FUN_02681b9c(plVar17,0,0);
          if ((uVar16 & 1) == 0) {
            uVar9 = 0;
            plVar17 = (long *)0x0;
          }
          else {
            if ((plVar17 == (long *)0x0) ||
               (*plVar17 != *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
              if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
              uVar13 = FUN_0268b6ac(in_stack_00000060,0);
              uVar13 = FUN_01600424(*(undefined8 *)
                                     UnityEngine_UIElements_VisualElement_TypeData_TypeInfo,uVar13,
                                    *(undefined8 *)
                                     Method_System_Diagnostics_Contracts_Contract_ForAll<Type>__,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_026610e4(uVar13,0);
              lVar26 = *(long *)(in_stack_00000058 + 0x38);
              goto joined_r0x0145c834;
            }
            uVar10 = FUN_026709f8(plVar17,0);
            uVar16 = FUN_0269e56c(0);
            if ((uVar16 & 1) == 0) {
              plVar27 = *(long **)(in_stack_00000058 + 0x40);
              if (plVar27 == (long *)0x0) {
                uVar16 = 0;
                uVar9 = 0;
              }
              else {
                if (*plVar17 != *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)
                goto Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint;
                lVar26 = *plVar27;
                uVar16 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar16 != 0) {
                  piVar25 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == *(long *)StringLiteral_2590) {
                      puVar18 = (undefined8 *)(lVar26 + (long)(*piVar25 + 7) * 0x10 + 0x138);
                      goto LAB_0145c1b8;
                    }
                    uVar16 = uVar16 - 1;
                    piVar25 = piVar25 + 4;
                  } while (uVar16 != 0);
                }
                puVar18 = (undefined8 *)FUN_00d59724(plVar27,*(long *)StringLiteral_2590,7);
LAB_0145c1b8:
                uVar16 = (*(code *)*puVar18)(plVar27,plVar17,puVar18[1]);
                uVar9 = 1;
                if ((uVar16 & 1) != 0) {
                  uVar9 = 0xffffffff;
                }
              }
            }
            else {
              uVar16 = 0;
              uVar9 = 0;
            }
            if (((uVar16 & 1) != 0) || ((uVar10 | 2) != 3 && (uVar10 != 0xe && (uVar10 | 1) != 5)))
            {
              uVar16 = FUN_0269e56c(0);
              lVar26 = *(long *)(unaff_x21 + 0x18);
              if ((uVar16 & 1) == 0) {
                if (lVar26 == 0) goto LAB_0145d050;
              }
              else {
                if ((lVar26 == 0) || (lVar24 = *(long *)(lVar26 + 0x10), lVar24 == 0))
                goto LAB_0145d050;
                if ((*(int *)(lVar24 + 0x88) == 0) &&
                   ((*(int *)(lVar24 + 0x30) != 2 && (*(int *)(lVar24 + 0x30) != 5)))) {
                  plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                  puVar3 = StringLiteral_302;
                  if (plVar15 == (long *)0x0) goto LAB_0145d050;
                  if ((*(long *)StringLiteral_3316 != 0) &&
                     (lVar26 = thunk_FUN_00d6225c(*(long *)StringLiteral_3316,
                                                  *(undefined8 *)(*plVar15 + 0x40)), lVar26 == 0))
                  goto LAB_0145d058;
                  if ((int)plVar15[3] == 0) goto LAB_0145d054;
                  plVar15[4] = *(long *)StringLiteral_3316;
                  if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                  lVar26 = FUN_0268b6ac(in_stack_00000060,0);
                  if ((lVar26 != 0) &&
                     (lVar22 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar22 == 0)) goto LAB_0145d058;
                  uVar20 = *(uint *)(plVar15 + 3);
                  if (uVar20 < 2) goto LAB_0145d054;
                  plVar15[5] = lVar26;
                  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__;
                  if (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__ != 0) {
                    lVar26 = thunk_FUN_00d6225c(*(long *)
                                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__,
                                                *(undefined8 *)(*plVar15 + 0x40));
                    if (lVar26 == 0) goto LAB_0145d058;
                    uVar20 = *(uint *)(plVar15 + 3);
                  }
                  if (uVar20 < 3) goto LAB_0145d054;
                  plVar15[6] = *(long *)puVar4;
                  lVar26 = FUN_0268b6ac(plVar17,0);
                  if ((lVar26 != 0) &&
                     (lVar22 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar22 == 0)) goto LAB_0145d058;
                  uVar20 = *(uint *)(plVar15 + 3);
                  if (uVar20 < 4) goto LAB_0145d054;
                  plVar15[7] = lVar26;
                  puVar4 = System_TimeZoneInfo_AdjustmentRule___var;
                  if (*(long *)System_TimeZoneInfo_AdjustmentRule___var != 0) {
                    lVar26 = thunk_FUN_00d6225c(*(long *)System_TimeZoneInfo_AdjustmentRule___var,
                                                *(undefined8 *)(*plVar15 + 0x40));
                    if (lVar26 == 0) goto LAB_0145d058;
                    uVar20 = *(uint *)(plVar15 + 3);
                  }
                  if (uVar20 < 5) goto LAB_0145d054;
                  plVar15[8] = *(long *)puVar4;
                  in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,uVar10);
                  in_stack_00000070 =
                       *(long **)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                  in_stack_00000078 = 0xffffffffffffffff;
                  lVar26 = FUN_017a7f78(&stack0x00000070,0);
                  if ((lVar26 != 0) &&
                     (lVar22 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar22 == 0)) goto LAB_0145d058;
                  uVar10 = *(uint *)(plVar15 + 3);
                  if (uVar10 < 6) goto LAB_0145d054;
                  plVar15[9] = lVar26;
                  puVar4 = System_Func<double>_TypeInfo;
                  if (*(long *)System_Func<double>_TypeInfo != 0) {
                    lVar26 = thunk_FUN_00d6225c(*(long *)System_Func<double>_TypeInfo,
                                                *(undefined8 *)(*plVar15 + 0x40));
                    if (lVar26 == 0) goto LAB_0145d058;
                    uVar10 = *(uint *)(plVar15 + 3);
                  }
                  if (uVar10 < 7) goto LAB_0145d054;
                  plVar15[10] = *(long *)puVar4;
                  uVar13 = FUN_01600844(plVar15,0);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar3);
                  }
                  FUN_026610e4(uVar13,0);
                  lVar26 = *(long *)(in_stack_00000058 + 0x38);
                  goto joined_r0x0145c834;
                }
              }
              if (((*(long *)(lVar26 + 0x10) == 0) ||
                  (lVar26 = *(long *)(*(long *)(lVar26 + 0x10) + 0x70), lVar26 == 0)) ||
                 (FUN_0132138c(lVar26,uVar14 & 0xffffffff,&stack0x00000070,*unaff_x27),
                 in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
              plVar17 = (long *)FUN_0267dbbc(lVar22,in_stack_00000070[2],0);
              if ((plVar17 != (long *)0x0) &&
                 (*plVar17 != *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint:
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar17);
              }
            }
          }
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = FUN_02681b9c(plVar17,0,0);
          fVar31 = 0.0;
          if ((uVar16 & 1) != 0) {
            if ((*(long *)(unaff_x21 + 0x18) == 0) ||
               (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0))
            goto LAB_0145d050;
            if (*(char *)(lVar26 + 0x48) != '\0') {
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar14) goto LAB_0145d054;
              if (*(float *)(in_stack_000000d0 + uVar14 * 0x18 + 0x34) != 0.0) {
                if (plVar17 == (long *)0x0) goto LAB_0145d050;
                iVar11 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
                iVar12 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar14) goto LAB_0145d054;
                fVar31 = (float)(iVar12 * iVar11) /
                         *(float *)(in_stack_000000d0 + uVar14 * 0x18 + 0x34);
              }
            }
          }
          if ((((*(long *)(unaff_x21 + 0x18) == 0) ||
               (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0)) ||
              (lVar26 = *(long *)(lVar26 + 0x70), lVar26 == 0)) ||
             (FUN_0132138c(lVar26,uVar14 & 0xffffffff,&stack0x00000070,*unaff_x27),
             in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
          lVar26 = in_stack_00000070[2];
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0)
          {
            thunk_FUN_00d32864();
          }
          FUN_01459f0c(lVar22,lVar26,&stack0x000000a0,&stack0x000000a8);
        }
        uVar16 = in_stack_000000a0 & 0xffffffff;
        uVar7 = in_stack_000000a0._4_4_;
        uVar32 = in_stack_000000a8 & 0xffffffff;
        uVar8 = in_stack_000000a8._4_4_;
        lVar26 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2762);
        if ((lVar26 == 0) ||
           (FUN_01443e40(uVar16,uVar7,uVar32,uVar8,fVar31,lVar26,plVar17,uVar9,0),
           plVar15 == (long *)0x0)) goto LAB_0145d050;
        lVar24 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar15 + 0x40));
        if (lVar24 == 0) goto LAB_0145d058;
        if (*(uint *)(plVar15 + 3) <= uVar14) goto LAB_0145d054;
        plVar15[uVar14 + 4] = lVar26;
        lVar26 = *(long *)(unaff_x21 + 0x18);
        uVar14 = uVar14 + 1;
        if (lVar26 == 0) goto LAB_0145d050;
      }
      if ((*(long *)(lVar26 + 0x50) == 0) ||
         (FUN_01449654(*(long *)(lVar26 + 0x50),*(undefined8 *)(lVar26 + 0x90),lVar22,0),
         in_stack_000000d0 == 0)) goto LAB_0145d050;
      if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
      uVar13 = FUN_026884c4(in_stack_000000d0 + unaff_x28 * 0x18 + 0x20,0);
      if (in_stack_000000d0 == 0) goto LAB_0145d050;
      if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
      uVar28 = FUN_026884d4(in_stack_000000d0 + unaff_x28 * 0x18 + 0x20,0);
      if (in_stack_000000d0 == 0) goto LAB_0145d050;
      if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
      uVar29 = FUN_02688390(in_stack_000000d0 + unaff_x28 * 0x18 + 0x20,0);
      if (in_stack_000000d0 == 0) goto LAB_0145d050;
      if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
      uVar30 = FUN_026883a0(in_stack_000000d0 + unaff_x28 * 0x18 + 0x20,0);
      if ((*(long *)(unaff_x21 + 0x18) == 0) ||
         (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0)) goto LAB_0145d050;
      uVar1 = *(undefined1 *)(lVar26 + 0x27);
      lVar26 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13654);
      if (lVar26 == 0) goto LAB_0145d050;
      FUN_01444820(uVar29,uVar30,uVar13,uVar28,lVar26,plVar15,uVar1,0);
      *(long *)(unaff_x21 + 0x10) = lVar26;
      in_stack_00000078 = 0;
      in_stack_00000070 = (long *)0x0;
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      FUN_01431554(uVar29,uVar30,uVar13,uVar28,&stack0x00000070,0);
      if ((*(long *)(unaff_x21 + 0x18) == 0) ||
         (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar26 == 0)) goto LAB_0145d050;
      cVar19 = *(char *)(lVar26 + 0x27);
      lVar26 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                 );
      if (lVar26 == 0) goto LAB_0145d050;
      FUN_01444454(in_stack_00000070,in_stack_00000078,in_stack_00000080,in_stack_00000088,lVar26,
                   cVar19 != '\0',lVar22,0);
      if (((*(long *)(unaff_x21 + 0x10) == 0) ||
          (lVar22 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x18), lVar22 == 0)) ||
         (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto LAB_0145d050;
      FUN_00bc03b0(lVar22,lVar26,*(undefined8 *)PTR_DAT_033eb210);
      if ((*(long *)(unaff_x21 + 0x18) == 0) ||
         (lVar22 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar22 == 0)) goto LAB_0145d050;
      lVar24 = *(long *)(lVar22 + 0x58);
      lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__
                                 );
      if ((lVar22 == 0) ||
         (FUN_0136b58c(lVar22,unaff_x21,*(undefined8 *)Method_PhoneDialtoneController_MuteDialtone__
                       ,0), lVar24 == 0)) goto LAB_0145d050;
      FUN_01322b20(lVar24,lVar22,&stack0x000000d8,
                   *(undefined8 *)Method_ShowPromptWhenTeleportPadsUsed_TeleportPointEntered__);
      lVar22 = CONCAT71(uStack00000000000000d9,uStack00000000000000d8);
      if (lVar22 == 0) {
        if (((*(long *)(unaff_x21 + 0x18) == 0) ||
            (lVar22 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar22 == 0)) ||
           (lVar22 = *(long *)(lVar22 + 0x58), lVar22 == 0)) goto LAB_0145d050;
        FUN_00bc0938(lVar22,*(undefined8 *)(unaff_x21 + 0x10),
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_TryGetValue__);
        lVar22 = *(long *)(unaff_x21 + 0x10);
        if (lVar22 == 0) goto LAB_0145d050;
      }
      else {
        *(long *)(unaff_x21 + 0x10) = lVar22;
      }
      if ((*(long *)(lVar22 + 0x18) == 0) ||
         (lVar22 = *(long *)(*(long *)(lVar22 + 0x18) + 0x10), lVar22 == 0)) goto LAB_0145d050;
      uVar14 = FUN_01322618(lVar22,lVar26,
                            *(undefined8 *)
                             Method_Meta_WitAi_Json_WitResponseNode_SaveToCompressedStream__);
      if ((uVar14 & 1) == 0) {
        if (((*(long *)(unaff_x21 + 0x10) == 0) ||
            (lVar22 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x18), lVar22 == 0)) ||
           (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto LAB_0145d050;
        FUN_00bc03b0(lVar22,lVar26,*(undefined8 *)PTR_DAT_033eb210);
      }
      if (((*(long *)(unaff_x21 + 0x10) == 0) ||
          (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x18), lVar26 == 0)) ||
         (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_0145d050;
      uVar14 = FUN_01322618(lVar26,in_stack_00000060,
                            *(undefined8 *)
                             Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                           );
      unaff_x24 = in_stack_00000058;
      if ((uVar14 & 1) == 0) {
        if (((*(long *)(unaff_x21 + 0x10) == 0) ||
            (lVar26 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x18), lVar26 == 0)) ||
           (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_0145d050;
        FUN_00ac8520(lVar26,in_stack_00000060,*(undefined8 *)StringLiteral_1415);
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
    unaff_x28 = unaff_x28 + 1;
    if ((long)*(int *)(in_stack_00000048 + 0x18) <= (long)unaff_x28) {
      do {
        puVar6 = StringLiteral_7763;
        puVar4 = StringLiteral_302;
        puVar3 = PTR_DAT_033ee2d8;
        lVar26 = *(long *)(unaff_x20 + 0x10);
        in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
        if ((lVar26 == 0) || (lVar22 = *(long *)(lVar26 + 0x60), lVar22 == 0)) goto LAB_0145d050;
        if (*(int *)(lVar22 + 0x18) <= in_stack_00000028._4_4_) {
          if (3 < *(int *)(unaff_x24 + 0x30)) {
            if (*(long *)(lVar26 + 0x58) == 0) goto LAB_0145d050;
            in_stack_00000070 =
                 (long *)CONCAT44(in_stack_00000070._4_4_,
                                  *(undefined4 *)(*(long *)(lVar26 + 0x58) + 0x18));
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
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar4);
            }
            FUN_02660dac(uVar13,0);
            lVar26 = *(long *)(unaff_x20 + 0x10);
            if (lVar26 == 0) goto LAB_0145d050;
          }
          if (*(long *)(lVar26 + 0x58) == 0) goto LAB_0145d050;
          if (*(int *)(*(long *)(lVar26 + 0x58) + 0x18) == 0) {
            if ((*(long *)(lVar26 + 0x68) == 0) ||
               (plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,
                                               *(undefined4 *)(*(long *)(lVar26 + 0x68) + 0x18)),
               puVar5 = 
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_<CreateWireframeNotSupportedWarning>b__0__
               , puVar3 = UnityEngine_XR_InputTrackingState_TypeInfo, plVar15 == (long *)0x0))
            goto LAB_0145d050;
            if ((int)plVar15[3] < 1) goto LAB_0145cee8;
            uVar14 = 0;
            goto LAB_0145ce80;
          }
          cVar19 = *(char *)(lVar26 + 0x49);
          uVar13 = *(undefined8 *)(lVar26 + 0x50);
          cVar2 = *(char *)(lVar26 + 0x27);
          uVar9 = *(undefined4 *)(unaff_x24 + 0x30);
          lVar26 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f0098);
          if (lVar26 == 0) goto LAB_0145d050;
          FUN_014467b4(lVar26,cVar19 != '\0',uVar13,cVar2 != '\0',uVar9,0);
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
          FUN_0144680c(lVar26,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x58),0);
          lVar22 = *(long *)(unaff_x20 + 0x10);
          if (lVar22 == 0) goto LAB_0145d050;
          if (*(char *)(lVar22 + 0x4a) != '\0') {
            iVar11 = *(int *)(lVar22 + 0x20);
            if (*(int *)(lVar22 + 0x20) <= *(int *)(lVar22 + 0x1c)) {
              iVar11 = *(int *)(lVar22 + 0x1c);
            }
            FUN_01448250(lVar26,*(undefined8 *)(lVar22 + 0x58),iVar11,0);
            lVar22 = *(long *)(unaff_x20 + 0x10);
            if (lVar22 == 0) goto LAB_0145d050;
          }
          uVar14 = 0;
          goto LAB_0145cd00;
        }
        FUN_0132138c(lVar22,in_stack_00000028._4_4_,&stack0x00000070,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
        plVar15 = in_stack_00000070;
        lVar26 = *(long *)(unaff_x24 + 0x28);
        unaff_s15 = (float)in_stack_00000028._4_4_;
        in_stack_00000060 = in_stack_00000070;
        if (lVar26 != 0) {
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
             (lVar22 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x60), lVar22 == 0))
          goto LAB_0145d050;
          (**(code **)(lVar26 + 0x18))
                    ((unaff_s15 / (float)*(int *)(lVar22 + 0x18)) * unaff_s14,
                     *(undefined8 *)(lVar26 + 0x40),uVar13,*(undefined8 *)(lVar26 + 0x28));
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
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar4);
          }
          FUN_02660dac(uVar13,0);
        }
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_0268b4e0(plVar15,0,0);
        if ((uVar14 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = *(undefined8 *)StringLiteral_14312;
          goto LAB_0145c940;
        }
        lVar26 = FUN_0142fbb8(plVar15,0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar14 = FUN_0268b4e0(lVar26,0,0);
        if ((uVar14 & 1) != 0) {
          if (plVar15 == (long *)0x0) goto LAB_0145d050;
          uVar13 = FUN_0268b6ac(plVar15,0);
          uVar28 = *(undefined8 *)StringLiteral_3316;
          puVar18 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>__ctor__
          ;
LAB_0145c910:
          uVar13 = FUN_01600424(uVar28,uVar13,*puVar18,0);
          lVar26 = *(long *)puVar4;
          goto LAB_0145c928;
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
        if (lVar26 == 0) goto LAB_0145d050;
        uVar9 = FUN_02681c0c(lVar26,0);
        in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar9);
        uVar14 = FUN_0129eff4(in_stack_00000018,&stack0x00000070,&stack0x000000d0,
                              *(undefined8 *)System_Collections_Generic_ICollection<Vertex>_TypeInfo
                             );
        if ((uVar14 & 1) == 0) {
          uVar9 = FUN_02666048(lVar26,0);
          in_stack_000000d0 =
               FUN_00da4fb8(*(undefined8 *)
                             Method_System_Collections_Generic_List<VolumeComponent>_Add__,uVar9);
          iVar11 = FUN_02666048(lVar26,0);
          if (0 < iVar11) {
            lVar22 = 0;
            uVar14 = 0;
            do {
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar14) goto LAB_0145d054;
              FUN_014344d8(lVar26,in_stack_000000d0 + lVar22 + 0x20,uVar14 & 0xffffffff,0,0);
              lVar24 = in_stack_000000d0;
              lVar21 = *(long *)(unaff_x20 + 0x10);
              if (lVar21 == 0) goto LAB_0145d050;
              if (*(char *)(lVar21 + 0x48) != '\0') {
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0)
                    == 0) {
                  thunk_FUN_00d32864();
                }
                uVar9 = Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture
                                  (lVar26,uVar14 & 0xffffffff);
                if (*(uint *)(lVar24 + 0x18) <= uVar14) goto LAB_0145d054;
                *(undefined4 *)(lVar24 + lVar22 + 0x34) = uVar9;
                lVar21 = *(long *)(unaff_x20 + 0x10);
                if (lVar21 == 0) goto LAB_0145d050;
              }
              lVar24 = in_stack_000000d0;
              if (*(char *)(lVar21 + 0x27) != '\0') {
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar14) goto LAB_0145d054;
                if (*(char *)(in_stack_000000d0 + lVar22 + 0x32) == '\0') {
                  in_stack_00000070 = (long *)0x0;
                  in_stack_00000078 = 0;
                  FUN_0268834c(0,0,&stack0x00000070,0);
                  if (*(uint *)(lVar24 + 0x18) <= uVar14) goto LAB_0145d054;
                  lVar24 = lVar24 + lVar22;
                  *(undefined8 *)(lVar24 + 0x28) = in_stack_00000078;
                  *(long **)(lVar24 + 0x20) = in_stack_00000070;
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
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar4);
                  }
                  FUN_02661754(uVar13,0);
                }
              }
              uVar14 = uVar14 + 1;
              iVar11 = FUN_02666048(lVar26,0);
              lVar22 = lVar22 + 0x18;
            } while ((long)uVar14 < (long)iVar11);
          }
          uVar9 = FUN_02681c0c(lVar26,0);
          in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar9);
          FUN_0129a054(in_stack_00000018,&stack0x00000070,in_stack_000000d0,
                       *(undefined8 *)StringLiteral_5001);
        }
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
        if ((*(char *)(*(long *)(unaff_x20 + 0x10) + 0x27) != '\0') &&
           (4 < *(int *)(unaff_x24 + 0x30))) {
          plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
          if (plVar17 == (long *)0x0) goto LAB_0145d050;
          if ((*(long *)PTR_DAT_033f6398 != 0) &&
             (lVar26 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f6398,*(undefined8 *)(*plVar17 + 0x40)
                                         ), lVar26 == 0)) goto LAB_0145d058;
          if ((int)plVar17[3] == 0) goto LAB_0145d054;
          if (plVar15 != (long *)0x0) {
            in_stack_00000020 = plVar15;
          }
          plVar17[4] = *(long *)PTR_DAT_033f6398;
          lVar26 = 0;
          if (plVar15 != (long *)0x0) {
            if (in_stack_00000020 == (long *)0x0) goto LAB_0145d050;
            lVar26 = (**(code **)(*in_stack_00000020 + 0x168))
                               (in_stack_00000020,*(undefined8 *)(*in_stack_00000020 + 0x170));
            if ((lVar26 != 0) &&
               (lVar22 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar17 + 0x40)), lVar22 == 0))
            goto LAB_0145d058;
          }
          uVar10 = *(uint *)(plVar17 + 3);
          if (uVar10 < 2) goto LAB_0145d054;
          plVar17[5] = lVar26;
          if (*(long *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
              != 0) {
            lVar26 = thunk_FUN_00d6225c(*(long *)
                                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
                                        ,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar26 == 0) goto LAB_0145d058;
            uVar10 = *(uint *)(plVar17 + 3);
          }
          if (uVar10 < 3) goto LAB_0145d054;
          plVar17[6] = *(long *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
          ;
          if (in_stack_000000d0 == 0) goto LAB_0145d050;
          in_stack_000000c8._4_4_ = (undefined4)*(undefined8 *)(in_stack_000000d0 + 0x18);
          lVar26 = FUN_0176eb1c((long)&stack0x000000c8 + 4,0);
          if ((lVar26 != 0) &&
             (lVar22 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar17 + 0x40)), lVar22 == 0))
          goto LAB_0145d058;
          uVar10 = *(uint *)(plVar17 + 3);
          if (uVar10 < 4) goto LAB_0145d054;
          plVar17[7] = lVar26;
          if (*(long *)Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__ != 0) {
            lVar26 = thunk_FUN_00d6225c(*(long *)
                                         Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__
                                        ,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar26 == 0) goto LAB_0145d058;
            uVar10 = *(uint *)(plVar17 + 3);
          }
          if (uVar10 < 5) goto LAB_0145d054;
          plVar17[8] = *(long *)Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__;
          if (in_stack_000000d0 == 0) goto LAB_0145d050;
          if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
          lVar26 = in_stack_000000d0 + 0x30;
          if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar26 = FUN_016f5f58(lVar26,0);
          if ((lVar26 != 0) &&
             (lVar22 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar17 + 0x40)), lVar22 == 0))
          goto LAB_0145d058;
          uVar10 = *(uint *)(plVar17 + 3);
          if (uVar10 < 6) goto LAB_0145d054;
          plVar17[9] = lVar26;
          if (*(long *)Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__ != 0) {
            lVar26 = thunk_FUN_00d6225c(*(long *)
                                         Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__
                                        ,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar26 == 0) goto LAB_0145d058;
            uVar10 = *(uint *)(plVar17 + 3);
          }
          if (uVar10 < 7) goto LAB_0145d054;
          plVar17[10] = *(long *)Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__;
          if (in_stack_000000d0 == 0) goto LAB_0145d050;
          if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
          in_stack_000000b8 = *(undefined8 *)(in_stack_000000d0 + 0x28);
          in_stack_000000b0 = *(undefined8 *)(in_stack_000000d0 + 0x20);
          lVar26 = FUN_02688894(&stack0x000000b0,0);
          if ((lVar26 != 0) &&
             (lVar22 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar17 + 0x40)), lVar22 == 0))
          goto LAB_0145d058;
          if (*(uint *)(plVar17 + 3) < 8) goto LAB_0145d054;
          plVar17[0xb] = lVar26;
          uVar13 = FUN_01600844(plVar17,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar4);
          }
          FUN_02660dac(uVar13,0);
        }
      } while (*(int *)(in_stack_00000048 + 0x18) < 1);
      unaff_x28 = 0;
    }
    param_1 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_Obi_ObiConstraints<ObiAerodynamicConstraintsBatch>_GetBatchCount__
                                );
    if (param_1 == 0) goto LAB_0145d050;
    param_2 = 0;
    unaff_x21 = param_1;
    unaff_x25 = in_stack_00000048;
  } while( true );
  while( true ) {
    lVar26 = FUN_0268b6ac(in_stack_00000070,0);
    if ((lVar26 != 0) &&
       (lVar22 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar15 + 0x40)), lVar22 == 0))
    goto LAB_0145d058;
    uVar10 = *(uint *)(plVar15 + 3);
    if (uVar10 <= uVar14) goto LAB_0145d054;
    plVar15[uVar14 + 4] = lVar26;
    uVar14 = uVar14 + 1;
    if ((long)(int)uVar10 <= (long)uVar14) break;
LAB_0145ce80:
    if (((*(long *)(unaff_x20 + 0x10) == 0) ||
        (lVar26 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x68), lVar26 == 0)) ||
       (FUN_0132138c(lVar26,uVar14 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar6),
       in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
  }
LAB_0145cee8:
  lVar26 = FUN_01600f98(*(undefined8 *)PTR_DAT_033f38b8,plVar15,0);
  plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
  if (plVar15 != (long *)0x0) {
    lVar22 = *(long *)puVar3;
    if ((lVar22 != 0) &&
       (lVar22 = thunk_FUN_00d6225c(lVar22,*(undefined8 *)(*plVar15 + 0x40)), lVar22 == 0)) {
LAB_0145d058:
      uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar13,0);
    }
    if ((int)plVar15[3] != 0) {
      plVar15[4] = *(long *)puVar3;
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
      plVar17 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x90);
      if (plVar17 == (long *)0x0) {
        lVar22 = 0;
      }
      else {
        lVar22 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
        if ((lVar22 != 0) &&
           (lVar24 = thunk_FUN_00d6225c(lVar22,*(undefined8 *)(*plVar15 + 0x40)), lVar24 == 0))
        goto LAB_0145d058;
      }
      uVar10 = *(uint *)(plVar15 + 3);
      if (1 < uVar10) {
        plVar15[5] = lVar22;
        lVar22 = *(long *)puVar5;
        if (lVar22 != 0) {
          lVar22 = thunk_FUN_00d6225c(lVar22,*(undefined8 *)(*plVar15 + 0x40));
          if (lVar22 == 0) goto LAB_0145d058;
          uVar10 = *(uint *)(plVar15 + 3);
        }
        puVar3 = Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_GetBehaviour__
        ;
        if (2 < uVar10) {
          plVar15[6] = *(long *)puVar5;
          if (lVar26 != 0) {
            lVar22 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar15 + 0x40));
            if (lVar22 == 0) goto LAB_0145d058;
            uVar10 = *(uint *)(plVar15 + 3);
          }
          if (3 < uVar10) {
            plVar15[7] = lVar26;
            lVar26 = *(long *)puVar3;
            if (lVar26 != 0) {
              lVar26 = thunk_FUN_00d6225c(lVar26,*(undefined8 *)(*plVar15 + 0x40));
              if (lVar26 == 0) goto LAB_0145d058;
              uVar10 = *(uint *)(plVar15 + 3);
            }
            if (4 < uVar10) {
              plVar15[8] = *(long *)puVar3;
              uVar13 = FUN_01600844(plVar15,0);
              lVar26 = *(long *)puVar4;
              iVar11 = *(int *)(lVar26 + 0xe0);
joined_r0x0145d048:
              if (iVar11 == 0) {
                thunk_FUN_00d32864(lVar26);
              }
LAB_0145c940:
              FUN_026610e4(uVar13,0);
              lVar26 = *(long *)(unaff_x24 + 0x38);
joined_r0x0145c834:
              if (lVar26 != 0) {
                *(undefined1 *)(lVar26 + 0x10) = 0;
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
  goto LAB_0145d050;
  while( true ) {
    if ((long)*(int *)(lVar26 + 0x18) <= (long)uVar14) {
      if (*(int *)(in_stack_00000058 + 0x30) < 4) {
        return 0;
      }
      in_stack_00000098 = FUN_020407b0(in_stack_00000010,0);
      uVar13 = FUN_01770034(&stack0x00000098,*(undefined8 *)StringLiteral_12992,0);
      uVar13 = FUN_015f5b28(*(undefined8 *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCaptureOutEvent>__
                            ,uVar13,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      FUN_02660dac(uVar13,0);
      return 0;
    }
    FUN_0132138c(lVar26,uVar14 & 0xffffffff,&stack0x00000070,*unaff_x27);
    plVar15 = in_stack_00000070;
    if (in_stack_00000070 == (long *)0x0) break;
    lVar22 = *(long *)(unaff_x20 + 0x10);
    if (*(char *)((long)in_stack_00000070 + 0x19) != '\0') {
      if (lVar22 == 0) break;
      iVar12 = 0;
      iVar11 = 0;
      while( true ) {
        lVar26 = *(long *)(lVar22 + 0x58);
        if (lVar26 == 0) goto LAB_0145d050;
        if (*(int *)(lVar26 + 0x18) <= iVar11) break;
        FUN_0132138c(lVar26,iVar11,&stack0x00000070,*(undefined8 *)puVar3);
        if ((in_stack_00000070 == (long *)0x0) || (lVar26 = in_stack_00000070[2], lVar26 == 0))
        goto LAB_0145d050;
        if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_0145d054;
        lVar26 = *(long *)(lVar26 + uVar14 * 8 + 0x20);
        if (lVar26 == 0) goto LAB_0145d050;
        lVar22 = *(long *)(unaff_x20 + 0x10);
        iVar11 = iVar11 + 1;
        iVar12 = *(int *)(lVar26 + 0x60) + iVar12;
        if (lVar22 == 0) goto LAB_0145d050;
      }
      *(byte *)(plVar15 + 3) = (byte)((uint)iVar12 >> 0x1f);
      *(undefined1 *)((long)plVar15 + 0x19) = 0;
    }
    uVar14 = uVar14 + 1;
    if (lVar22 == 0) break;
LAB_0145cd00:
    lVar26 = *(long *)(lVar22 + 0x70);
    if (lVar26 == 0) break;
  }
LAB_0145d050:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


