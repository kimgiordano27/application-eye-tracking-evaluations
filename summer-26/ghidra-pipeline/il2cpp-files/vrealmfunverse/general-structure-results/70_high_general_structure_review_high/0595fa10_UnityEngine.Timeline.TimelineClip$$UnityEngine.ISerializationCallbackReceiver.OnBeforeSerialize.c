/*
FUNCTION_NAME: UnityEngine.Timeline.TimelineClip$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
ENTRY_POINT: 0595fa10
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x05960b0c) */
/* WARNING: Removing unreachable block (ram,0x05960da4) */
/* WARNING: Removing unreachable block (ram,0x05960db8) */
/* WARNING: Removing unreachable block (ram,0x05960c40) */

void UnityEngine_Timeline_TimelineClip__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               void *param_5,void *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  double dVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar23;
  undefined4 *puVar24;
  undefined8 *unaff_x25;
  long *plVar25;
  int iVar26;
  int *piVar27;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar28;
  float fVar29;
  float fVar32;
  undefined1 auVar30 [16];
  ulong uVar33;
  undefined1 auVar31 [16];
  long in_stack_00000030;
  uint uStack0000000000000044;
  long in_stack_00000058;
  int in_stack_00000078;
  undefined8 in_stack_000000f8;
  undefined1 *in_stack_00000100;
  ulong in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000120;
  undefined1 *in_stack_00000128;
  undefined4 uStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  int in_stack_00000254;
  undefined4 in_stack_0000029c;
  float fVar34;
  float in_stack_000002b0;
  float in_stack_000002b4;
  undefined8 in_stack_000002b8;
  undefined4 in_stack_000002d0;
  undefined4 in_stack_000002d4;
  undefined4 in_stack_000002d8;
  int in_stack_0000035c;
  undefined4 in_stack_000003a4;
  undefined4 in_stack_000003a8;
  undefined4 in_stack_000003ac;
  undefined4 in_stack_000003b0;
  int in_stack_000003dc;
  int in_stack_00000440;
  float in_stack_000004a4;
  float in_stack_000004a8;
  float in_stack_000004ac;
  float in_stack_000004b0;
  int in_stack_000005d8;
  long *in_stack_00000618;
  int in_stack_00000620;
  long in_stack_000006d8;
  
  memcpy(param_5,param_6,0x98);
LAB_0595fa2c:
  uVar12 = FUN_047cc97c(&stack0x00000640,*unaff_x25);
  if ((uVar12 & 1) != 0) {
    memcpy(&stack0x00000540,&stack0x00000650,0x80);
    FUN_03614cb0(&stack0x00000540,&stack0x0000029c,&stack0x000004c0,*unaff_x28);
    memcpy(&stack0x000005c0,&stack0x000004c0,0x78);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar11 = in_stack_00000620 - in_stack_00000078;
    iVar5 = -iVar11;
    if (-1 < iVar11) {
      iVar5 = iVar11;
    }
    if (1 < iVar5) goto LAB_0595fae8;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = FUN_05c921ac(in_stack_00000618,0);
    if ((uVar12 & 1) == 0) goto LAB_0595fae8;
    if (in_stack_00000618 != (long *)0x0) goto code_r0x0595fad0;
    if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05961098;
  }
  FUN_047ccb40(&stack0x00000640,
               *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<float>__ctor__
              );
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<Vector3>_ReadVector3Value__
  ;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<Vector2>__ctor__
  ;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<InputTrackingState>_TryReadInputTrackingStateValue__
  ;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    FUN_03753b90(&stack0x000002a0,*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_0631fb80);
    while (uVar12 = FUN_0471d8c0(&stack0x00000280,*unaff_x29), (uVar12 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x12) == 0) {
        if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05961098;
      }
      FUN_0449cdbc(*(long *)(unaff_x19 + 0x12),in_stack_000002b0,*(undefined8 *)puVar1);
    }
    FUN_0471d8bc(&stack0x00000280,*(undefined8 *)PTR_DAT_0631fb68);
    lVar13 = *(long *)(unaff_x19 + 0x18);
    if (lVar13 != 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (*(long *)(unaff_x19 + 0x14) != 0) {
        FUN_0444ed90(&stack0x000002a0,*(long *)(unaff_x19 + 0x14),
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<InputTrackingState>__ctor__
                    );
        auVar30._4_4_ = in_stack_000002b4;
        auVar30._0_4_ = in_stack_000002b0;
        auVar30._8_8_ = in_stack_000002b8;
LAB_0595fc70:
        uVar12 = FUN_047c5b7c(&stack0x00000260,*(undefined8 *)puVar2);
        if ((uVar12 & 1) != 0) {
          FUN_03613aa0(&stack0x00000258,&stack0x0000029c,&stack0x00000254,*(undefined8 *)puVar3);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar11 = in_stack_00000254 - in_stack_00000078;
          iVar5 = -iVar11;
          if (-1 < iVar11) {
            iVar5 = iVar11;
          }
          if (1 < iVar5) {
            lVar13 = *(long *)(unaff_x19 + 0x18);
            if (lVar13 != 0) {
              lVar18 = *(long *)(lVar13 + 0x10);
              lVar20 = *(long *)PTR_DAT_06316c50;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar18 != 0) {
                uVar10 = *(uint *)(lVar13 + 0x18);
                if (uVar10 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar10 + 1;
                  *(undefined4 *)(lVar18 + (long)(int)uVar10 * 4 + 0x20) = in_stack_0000029c;
                }
                else {
                  FUN_03753114(lVar13,in_stack_0000029c,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_0595fc70;
              }
            }
            if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            goto LAB_05961098;
          }
          goto LAB_0595fc70;
        }
        FUN_047c5c84(&stack0x00000260,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<float>_ReadFloatValue__
                    );
        puVar1 = 
        Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<InputTrackingState>_ReadInputTrackingStateValue__
        ;
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          FUN_03753b90(&stack0x000002a0,*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_0631fb80)
          ;
          while (uVar12 = FUN_0471d8c0(&stack0x00000280,*unaff_x29), (uVar12 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x14) == 0) {
              if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              goto LAB_05961098;
            }
            FUN_0444fd8c(*(long *)(unaff_x19 + 0x14),in_stack_000002b0,*(undefined8 *)puVar1);
          }
          FUN_0471d8bc(&stack0x00000280,*(undefined8 *)PTR_DAT_0631fb68);
          lVar13 = *(long *)(unaff_x19 + 0x18);
          if (lVar13 != 0) {
            iVar5 = (int)unaff_x27;
            *(undefined4 *)(lVar13 + 0x18) = 0;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            fVar34 = DAT_01031cf4;
            if (iVar5 < 1) {
              iVar26 = 0;
              iVar11 = 0;
              uStack0000000000000044 = 0;
            }
            else {
              lVar13 = 0;
              iVar11 = 0;
              iVar26 = 0;
              uStack0000000000000044 = 0;
              do {
                memmove(&stack0x000001cc,(void *)(in_stack_00000058 + lVar13 * 0x88),0x88);
                plVar14 = (long *)FUN_05ccbac0(&stack0x000001cc,0);
                lVar18 = FUN_05ccbb68(&stack0x000001cc,0);
                if (lVar18 == 0) goto LAB_05960c98;
                uVar6 = FUN_05c91f88(lVar18,0);
                if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_05960c98;
                uVar12 = FUN_0449d43c(*(long *)(unaff_x19 + 0x12),uVar6,&stack0x00000440,
                                      *(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<Quaternion>__ctor__
                                     );
                if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
                }
                uVar15 = FUN_05c921ac(plVar14,0);
                if ((uVar15 & 1) != 0) {
                  if ((uVar12 & 1) == 0) {
                    if (plVar14 == (long *)0x0) goto LAB_05960c98;
                    iVar7 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400))
                    ;
                    dVar19 = (double)((ulong)(iVar7 * 4 - 1) | 0x4330000000000000);
                    auVar30._8_8_ = 0;
                    auVar30._0_8_ = (ulong)dVar19;
                    iVar8 = FUN_0592e6d4(unaff_x19 + 8,0);
                    iVar23 = (int)((long)(dVar19 + -4503599627370496.0) >> 0x34);
                    iVar7 = iVar23;
                    if (0x403 < iVar23) {
                      iVar7 = 0x404;
                    }
                    iVar7 = iVar7 + -0x3fd;
                    thunk_FUN_02bb0e9c(&stack0x00000498,plVar14);
                    if (iVar7 < 1) {
                      uVar12 = 0;
LAB_0596013c:
                      uVar15 = uVar12 << 2;
                      lVar18 = uVar12 - 7;
                      do {
                        uVar12 = uVar15 & 0xfffffffc;
                        bVar4 = lVar18 != -1;
                        lVar18 = lVar18 + 1;
                        uVar15 = uVar15 + 4;
                        *(undefined4 *)(&stack0x00000460 + uVar12) = 0xffffffff;
                      } while (bVar4);
                    }
                    else {
                      uVar15 = 0;
                      puVar24 = (undefined4 *)&stack0x0000047c;
                      do {
                        iVar9 = FUN_0592e6d4(unaff_x19 + 8,0);
                        iVar21 = (iVar8 - iVar23) + 0x3ff + (int)uVar15;
                        if (iVar9 + -1 <= iVar21) {
                          iVar21 = iVar9 + -1;
                        }
                        uVar12 = FUN_0592e874(unaff_x19 + 8,iVar21,&stack0x000001c0,0);
                        if ((uVar12 & 1) == 0) break;
                        *puVar24 = uStack00000000000001c0;
                        puVar24[-7] = uStack00000000000001c4;
                        fVar28 = (float)FUN_059610a0();
                        uVar15 = uVar15 + 1;
                        puVar24 = puVar24 + 1;
                        fVar29 = param_4 * (float)unaff_x19[1];
                        fVar32 = auVar30._0_4_ * (float)unaff_x19[1];
                        param_3 = param_3 * (float)*unaff_x19;
                        fVar28 = fVar28 * (float)*unaff_x19;
                        uVar12 = (long)(int)fVar29 << 0x20;
                        uVar33 = (long)(int)fVar32 << 0x20;
                        param_4 = INFINITY;
                        auVar30._0_8_ =
                             (uVar12 ^ (uVar12 ^ 0x8000000000000000) &
                                       (long)(int)-(uint)(fVar29 == INFINITY)) +
                             (uVar33 ^ (uVar33 ^ 0x8000000000000000) &
                                       (long)(int)-(uint)(fVar32 == INFINITY));
                        auVar30._8_8_ = 0;
                        iVar21 = -0x80000000;
                        if (param_3 != INFINITY) {
                          iVar21 = (int)param_3;
                        }
                        iVar9 = -0x80000000;
                        if (fVar28 != INFINITY) {
                          iVar9 = (int)fVar28;
                        }
                        if (iVar11 <= iVar9 + iVar21) {
                          iVar11 = iVar9 + iVar21;
                        }
                        iVar21 = (int)(auVar30._0_8_ >> 0x20);
                        if (iVar26 <= iVar21) {
                          iVar26 = iVar21;
                        }
                      } while ((long)uVar15 < (long)iVar7);
                      unaff_x29 = (undefined8 *)PTR_DAT_0631fb70;
                      uVar12 = uVar15 & 0xffffffff;
                      if ((int)uVar15 < iVar7) {
                        if (*(long *)(unaff_x19 + 0x14) != 0) {
                          uVar10 = FUN_0444eba4(*(long *)(unaff_x19 + 0x14),uVar6,
                                                *(undefined8 *)
                                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<bool>_ReadBoolValue__
                                               );
                          if (*(long *)(unaff_x19 + 0x14) != 0) {
                            FUN_0444e9a4(*(long *)(unaff_x19 + 0x14),uVar6,in_stack_00000078,
                                         *(undefined8 *)PTR_DAT_0631fcc8);
                            puVar24 = (undefined4 *)&stack0x0000047c;
                            for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                              FUN_0592e38c(&stack0x000002a0,*puVar24,puVar24[-7],0);
                              FUN_0592ea80(unaff_x19 + 8,0,0);
                              puVar24 = puVar24 + 1;
                            }
                            lVar18 = 0;
                            uStack0000000000000044 = uVar10 ^ 1 | uStack0000000000000044;
                            do {
                              *(undefined4 *)(&stack0x00000460 + lVar18) = 0xffffffff;
                              lVar18 = lVar18 + 4;
                            } while (lVar18 != 0x1c);
                            goto LAB_059602d0;
                          }
                        }
                        goto LAB_05960c98;
                      }
                      if (uVar12 < 7) goto LAB_0596013c;
                    }
                    bVar4 = true;
                  }
                  else {
                    if (plVar14 == (long *)0x0) goto LAB_05960c98;
                    iVar7 = FUN_05c687f0(plVar14,0);
                    bVar4 = in_stack_00000440 != iVar7;
                  }
                  fVar28 = (float)FUN_05ccbc24(&stack0x000001cc,0);
                  fVar29 = in_stack_000004a8 - auVar30._0_4_;
                  in_stack_000004ac = in_stack_000004ac - param_3;
                  in_stack_000004b0 = in_stack_000004b0 - param_4;
                  auVar30 = ZEXT416((uint)(in_stack_000004b0 * in_stack_000004b0));
                  if (fVar34 <= in_stack_000004b0 * in_stack_000004b0 +
                                in_stack_000004ac * in_stack_000004ac +
                                (in_stack_000004a4 - fVar28) * (in_stack_000004a4 - fVar28) +
                                fVar29 * fVar29) {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    if (plVar14 == (long *)0x0) goto LAB_05960c98;
                    in_stack_00000440 = FUN_05c687f0(plVar14,0);
                    lVar18 = *(long *)(unaff_x19 + 0x16);
                    if (lVar18 == 0) goto LAB_05960c98;
                    lVar20 = *(long *)(lVar18 + 0x10);
                    lVar22 = *(long *)PTR_DAT_06316c50;
                    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                    if (lVar20 == 0) goto LAB_05960c98;
                    uVar10 = *(uint *)(lVar18 + 0x18);
                    if (uVar10 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(lVar18 + 0x18) = uVar10 + 1;
                      *(undefined4 *)(lVar20 + (long)(int)uVar10 * 4 + 0x20) = uVar6;
                    }
                    else {
                      FUN_03753114(lVar18,uVar6,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  lVar18 = FUN_05ccbb68(&stack0x000001cc,0);
                  if (lVar18 == 0) goto LAB_05960c98;
                  iVar7 = FUN_05c43670(lVar18,0);
                  if (iVar7 == 1) {
                    lVar18 = FUN_05ccbb68(&stack0x000001cc,0);
                    if (lVar18 == 0) goto LAB_05960c98;
                    FUN_05c43748(lVar18,0);
                  }
                  in_stack_000004a4 = (float)FUN_05ccbc24(&stack0x000001cc,0);
                  lVar18 = *(long *)(unaff_x19 + 0x12);
                  in_stack_000004a8 = auVar30._0_4_;
                  if (lVar18 == 0) goto LAB_05960c98;
                  param_3 = in_stack_000004ac;
                  param_4 = in_stack_000004b0;
                  memcpy(&stack0x000002a0,&stack0x00000440,0x78);
                  FUN_0449b444(lVar18,uVar6,&stack0x000002a0,
                               *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<Quaternion>_TryReadQuaternionValue__
                              );
                }
LAB_059602d0:
                lVar13 = lVar13 + 1;
              } while (lVar13 != unaff_x27);
            }
            iVar8 = *unaff_x19;
            iVar7 = unaff_x19[1];
            if (CONCAT11(iVar7 < iVar26,iVar8 < iVar11) == 0) {
LAB_05960554:
              if (iVar5 < 1) {
                iVar11 = 0;
              }
              else {
                iVar26 = 0;
                lVar13 = 0;
                iVar11 = 0;
                do {
                  memmove(&stack0x00000138,(void *)(in_stack_00000058 + lVar13 * 0x88),0x88);
                  lVar18 = FUN_05ccbb68(&stack0x00000138,0);
                  if (lVar18 == 0) goto LAB_05960c98;
                  uVar6 = FUN_05c91f88(lVar18,0);
                  if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_05960c98;
                  uVar12 = FUN_0449d43c(*(long *)(unaff_x19 + 0x12),uVar6,&stack0x000003c0,
                                        *(undefined8 *)
                                         Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<Quaternion>__ctor__
                                       );
                  if ((uVar12 & 1) == 0) {
LAB_05960828:
                    iVar11 = iVar11 + 1;
                  }
                  else {
                    uVar17 = FUN_05ccbac0(&stack0x00000138,0);
                    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
                    }
                    uVar12 = FUN_05c921ac(uVar17,0);
                    if ((uVar12 & 1) == 0) goto LAB_05960828;
                    lVar18 = *(long *)(unaff_x19 + 0x1a);
                    FUN_05ccbbf4(&stack0x000002a0,&stack0x00000138,0);
                    fVar34 = (float)((ulong)&stack0x00000280 >> 0x20);
                    FUN_05ccbbf4(&stack0x000002a0,&stack0x00000138,0);
                    FUN_05ccbbf4(&stack0x000002a0,&stack0x00000138,0);
                    param_3 = SUB84(&stack0x00000280,0);
                    uVar6 = FUN_05ccbc30(&stack0x00000138,0);
                    if (lVar18 == 0) goto LAB_05960c98;
                    uVar10 = (int)lVar13 - iVar11;
                    if (*(uint *)(lVar18 + 0x18) <= uVar10) {
LAB_05960cb0:
                      if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cacc();
                      }
                      goto LAB_05961098;
                    }
                    lVar20 = (long)(int)uVar10;
                    lVar18 = lVar18 + lVar20 * 0x10;
                    *(float *)(lVar18 + 0x20) = fVar34 + 0.0;
                    *(float *)(lVar18 + 0x24) = in_stack_000002b0 + 0.0;
                    *(float *)(lVar18 + 0x28) = param_3 + in_stack_000002b4;
                    *(undefined4 *)(lVar18 + 0x2c) = uVar6;
                    lVar18 = *(long *)(unaff_x19 + 0x1c);
                    FUN_05ccbbf4(&stack0x000002a0,&stack0x00000138,0);
                    FUN_05ccbbf4(&stack0x000002a0,&stack0x00000138,0);
                    FUN_05ccbbf4(&stack0x000002a0,&stack0x00000138,0);
                    iVar7 = FUN_05ccbc38(&stack0x00000138,0);
                    if (lVar18 == 0) goto LAB_05960c98;
                    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_05960cb0;
                    auVar30 = ZEXT416((uint)(0.0 - in_stack_000002b0));
                    lVar18 = lVar18 + lVar20 * 0x10;
                    param_3 = param_3 - in_stack_000002b4;
                    param_4 = (float)iVar7;
                    *(float *)(lVar18 + 0x20) = 0.0 - fVar34;
                    *(float *)(lVar18 + 0x24) = 0.0 - in_stack_000002b0;
                    *(float *)(lVar18 + 0x28) = param_3;
                    *(float *)(lVar18 + 0x2c) = param_4;
                    lVar18 = *(long *)(unaff_x19 + 0x1e);
                    UnityEngine_UIElements_Background__get_sprite
                              (&stack0x000002a0,&stack0x00000138,0);
                    UnityEngine_UIElements_Background__get_sprite
                              (&stack0x000002a0,&stack0x00000138,0);
                    UnityEngine_UIElements_Background__get_sprite
                              (&stack0x000002a0,&stack0x00000138,0);
                    uVar12 = FUN_05ccbc40(&stack0x00000138,0);
                    iVar7 = -in_stack_000003dc;
                    if ((uVar12 & 1) != 0) {
                      iVar7 = in_stack_000003dc;
                    }
                    if (lVar18 == 0) goto LAB_05960c98;
                    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_05960cb0;
                    lVar18 = lVar18 + lVar20 * 0x10;
                    *(undefined4 *)(lVar18 + 0x20) = in_stack_000002d0;
                    *(undefined4 *)(lVar18 + 0x24) = in_stack_000002d4;
                    *(undefined4 *)(lVar18 + 0x28) = in_stack_000002d8;
                    *(float *)(lVar18 + 0x2c) = (float)iVar7;
                    if (0 < in_stack_000003dc) {
                      lVar18 = 0;
                      uVar12 = (ulong)(uint)(iVar26 + iVar11 * -7);
                      lVar20 = uVar12 << 0x20;
                      do {
                        lVar22 = *(long *)(unaff_x19 + 0x20);
                        FUN_059610a0();
                        uVar6 = FUN_057e40e4(0);
                        if (lVar22 == 0) goto LAB_05960c98;
                        if ((ulong)*(uint *)(lVar22 + 0x18) <= uVar12 + lVar18) goto LAB_05960cb0;
                        lVar22 = lVar22 + (lVar20 >> 0x1c);
                        lVar18 = lVar18 + 1;
                        lVar20 = lVar20 + 0x100000000;
                        *(undefined4 *)(lVar22 + 0x20) = uVar6;
                        *(int *)(lVar22 + 0x24) = auVar30._0_4_;
                        *(float *)(lVar22 + 0x28) = param_3;
                        *(float *)(lVar22 + 0x2c) = param_4;
                        unaff_x29 = (undefined8 *)PTR_DAT_0631fb70;
                      } while (lVar18 < in_stack_000003dc);
                    }
                  }
                  lVar13 = lVar13 + 1;
                  iVar26 = iVar26 + 7;
                } while (lVar13 != unaff_x27);
              }
              if ((uStack0000000000000044 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_05c41e34(*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<int>_ReadValue__
                             ,0);
              }
              FUN_032b1148(9,*(undefined8 *)
                              Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__
                          );
              FUN_05814ccc(&stack0x00000134);
              uVar17 = *(undefined8 *)(unaff_x19 + 2);
              in_stack_00000120 = 0;
              in_stack_00000128 = &stack0x00000134;
              if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05cac20c(&stack0x000000f8,uVar17,0);
              if (unaff_x20 == 0) {
                if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05961098;
              }
              auVar31._8_8_ = in_stack_00000110;
              auVar31._0_8_ = in_stack_00000108;
              FUN_05cb7eb4();
              if (*(long *)(unaff_x19 + 0x16) == 0) {
                if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05961098;
              }
              FUN_03753b90(&stack0x000000f8,*(long *)(unaff_x19 + 0x16),
                           *(undefined8 *)PTR_DAT_0631fb80);
              uVar12 = in_stack_00000108;
              in_stack_00000100 = &stack0x00000280;
              in_stack_000000f8 = 0;
              while (uVar15 = FUN_0471d8c0(&stack0x00000280,*unaff_x29), (uVar15 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x12) == 0) {
                  if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  goto LAB_05961098;
                }
                FUN_0449b388(&stack0x000002a0,*(long *)(unaff_x19 + 0x12),uVar12 & 0xffffffff,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<Quaternion>_ReadQuaternionValue__
                            );
                memcpy(&stack0x00000340,&stack0x000002a0,0x78);
                if (0 < in_stack_0000035c) {
                  lVar13 = 0;
                  piVar27 = (int *)&stack0x0000037c;
                  do {
                    iVar26 = *piVar27;
                    FUN_05c972ec(0);
                    uVar6 = FUN_059610a0();
                    iVar7 = FUN_0592e6d4(unaff_x19 + 8,0);
                    auVar30 = ZEXT416(auVar31._0_4_);
                    param_3 = (float)FUN_057e40e4(uVar6,auVar30,param_3,param_4,0);
                    param_4 = auVar30._0_4_;
                    FUN_03adedd4(in_stack_000003a4,in_stack_000003a8,in_stack_000003ac,
                                 in_stack_000003b0,&stack0x000002a0,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<Vector3>_TryReadVector3Value__
                                );
                    if (*(int *)(*(long *)
                                  Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__
                                + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    auVar31 = ZEXT416((uint)(float)((1 << (ulong)((iVar7 - iVar26) + 1U & 0x1f)) +
                                                   -2));
                    FUN_05866558();
                    lVar13 = lVar13 + 1;
                    piVar27 = piVar27 + 1;
                  } while (lVar13 < in_stack_0000035c);
                }
              }
              FUN_0471d8bc(&stack0x00000280,*(undefined8 *)PTR_DAT_0631fb68);
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<int>__ctor__
                          + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05cb67f0();
              FUN_05cb67f0();
              FUN_05cb67f0();
              FUN_05cb67f0();
              FUN_05cb4ff8((float)(iVar5 - iVar11));
              uVar17 = *(undefined8 *)(unaff_x19 + 2);
              if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05cac20c(&stack0x000002a0,uVar17,0);
              FUN_05cbe6f8();
              lVar13 = in_stack_00000120;
              FUN_05814cd4(in_stack_00000128,0);
              if (lVar13 != 0) {
                if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cabc(lVar13);
                }
                goto LAB_05961098;
              }
              lVar13 = *(long *)(unaff_x19 + 0x16);
              if (lVar13 != 0) {
                *(undefined4 *)(lVar13 + 0x18) = 0;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                  return;
                }
                goto LAB_05961098;
              }
            }
            else {
              uVar10 = iVar26 - 1U | (int)(iVar26 - 1U) >> 1;
              plVar14 = (long *)(unaff_x19 + 2);
              uVar12 = CONCAT44(uVar10,(int)(iVar11 - 1U) >> 1) | (ulong)(iVar11 - 1U);
              uVar12 = CONCAT44((int)uVar10 >> 2,(int)uVar12 >> 2) | uVar12;
              uVar12 = CONCAT44((int)((long)uVar12 >> 0x24),(int)uVar12 >> 4) | uVar12;
              uVar12 = CONCAT44((int)((long)uVar12 >> 0x28),(int)uVar12 >> 8) | uVar12;
              uVar12 = CONCAT44((int)((long)uVar12 >> 0x30),(int)uVar12 >> 0x10) | uVar12;
              iVar11 = (int)uVar12;
              if (iVar8 <= iVar11 + 1) {
                iVar8 = iVar11 + 1;
              }
              iVar11 = (int)(uVar12 + 0x100000000 >> 0x20);
              if (iVar7 <= iVar11) {
                iVar7 = iVar11;
              }
              if (*plVar14 != 0) {
                FUN_05c715a4(&stack0x000002a0,*plVar14,0);
                plVar25 = (long *)(unaff_x19 + 4);
                plVar16 = (long *)*plVar25;
                if (plVar16 != (long *)0x0) {
                  (**(code **)(*plVar16 + 0x198))(plVar16,iVar8,*(undefined8 *)(*plVar16 + 0x1a0));
                  plVar16 = (long *)*plVar25;
                  if (plVar16 != (long *)0x0) {
                    (**(code **)(*plVar16 + 0x1b8))(plVar16,iVar7,*(undefined8 *)(*plVar16 + 0x1c0))
                    ;
                    if (*plVar25 != 0) {
                      FUN_05c7091c(*plVar25,0);
                      plVar16 = (long *)*plVar14;
                      if (plVar16 != (long *)0x0) {
                        iVar11 = (**(code **)(*plVar16 + 0x188))
                                           (plVar16,*(undefined8 *)(*plVar16 + 400));
                        if (iVar11 != 1) {
                          iVar11 = FUN_05c97544(0);
                          lVar13 = *plVar14;
                          if (iVar11 == 0) {
                            uVar17 = *(undefined8 *)(unaff_x19 + 4);
                            auVar30 = ZEXT416((uint)((float)unaff_x19[1] / (float)iVar7));
                            uVar6 = FUN_057e2724((float)*unaff_x19 / (float)iVar8,auVar30,
                                                 (float)iVar7,0);
                            if (DAT_066c1e96 == '\0') {
                              FUN_02b3c81c(PTR_DAT_063132f8);
                              DAT_066c1e96 = '\x01';
                            }
                            param_3 = **(float **)(*(long *)PTR_DAT_063132f8 + 0xb8);
                            param_4 = (*(float **)(*(long *)PTR_DAT_063132f8 + 0xb8))[1];
                            if (*(int *)(*(long *)PTR_DAT_06313cc8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                            }
                            FUN_05c507dc(uVar6,auVar30._0_4_,param_3,param_4,lVar13,uVar17,0);
                          }
                          else {
                            uVar17 = *(undefined8 *)(unaff_x19 + 4);
                            iVar11 = *unaff_x19;
                            iVar26 = unaff_x19[1];
                            if (*(int *)(*(long *)PTR_DAT_06313cc8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                            }
                            FUN_05c4f700(lVar13,0,0,0,0,iVar11,iVar26,uVar17);
                          }
                        }
                        if (*plVar14 != 0) {
                          FUN_05c709d0(*plVar14,0);
                          uVar17 = *(undefined8 *)(unaff_x19 + 2);
                          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 4);
                          thunk_FUN_02bb0e9c(plVar14);
                          *(undefined8 *)(unaff_x19 + 4) = uVar17;
                          thunk_FUN_02bb0e9c(plVar25,uVar17);
                          *unaff_x19 = iVar8;
                          unaff_x19[1] = iVar7;
                          goto LAB_05960554;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05960c98:
  if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05961098:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0595fad0:
  iVar5 = (**(code **)(*in_stack_00000618 + 0x188))
                    (in_stack_00000618,*(undefined8 *)(*in_stack_00000618 + 400));
  if (in_stack_000005d8 != iVar5) {
LAB_0595fae8:
    lVar13 = *(long *)(unaff_x19 + 0x18);
    if (lVar13 != 0) {
      lVar18 = *(long *)(lVar13 + 0x10);
      lVar20 = *(long *)PTR_DAT_06316c50;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar18 != 0) {
        uVar10 = *(uint *)(lVar13 + 0x18);
        if (uVar10 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar10 + 1;
          *(undefined4 *)(lVar18 + (long)(int)uVar10 * 4 + 0x20) = in_stack_0000029c;
        }
        else {
          FUN_03753114(lVar13,in_stack_0000029c,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = -0x1c;
        do {
          if (*(int *)(&stack0x000005fc + lVar13) != -1) {
            in_stack_000000f8 = 0;
            FUN_0592e38c(&stack0x000000f8,*(undefined4 *)(&stack0x00000618 + lVar13),
                         *(int *)(&stack0x000005fc + lVar13),0);
            FUN_0592ea80(unaff_x19 + 8,in_stack_000000f8,0);
          }
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0);
        goto LAB_0595fa2c;
      }
    }
    if (*(long *)(in_stack_00000030 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05961098;
  }
  goto LAB_0595fa2c;
}


