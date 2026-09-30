/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARRaycastManager$$ScreenPointToSessionSpaceRay
ENTRY_POINT: 05da439c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05da3f7c) */
/* WARNING: Removing unreachable block (ram,0x05da4214) */
/* WARNING: Removing unreachable block (ram,0x05da4228) */
/* WARNING: Removing unreachable block (ram,0x05da40b0) */

void UnityEngine_XR_ARFoundation_ARRaycastManager__ScreenPointToSessionSpaceRay
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar20;
  long *unaff_x21;
  undefined4 *puVar21;
  long unaff_x23;
  int iVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  int *piVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar30;
  ulong uVar31;
  undefined1 auVar29 [16];
  long in_stack_00000038;
  uint uStack000000000000004c;
  long in_stack_00000050;
  long in_stack_00000070;
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
  float fVar32;
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
  long in_stack_000006d8;
  
  FUN_04aed720(param_6,**(undefined8 **)(param_1 + 0xac0));
  puVar2 = Method_System_ComponentModel_PropertyDescriptorCollection_Remove__;
  puVar1 = Method_System_ComponentModel_PropertyDescriptor_GetTypeFromName__;
  puVar23 = (undefined8 *)PTR_DAT_067caac8;
  if (unaff_x23 != 0) {
    if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0();
    }
    goto LAB_05da4508;
  }
  lVar14 = *(long *)(unaff_x19 + 0x18);
  if (lVar14 != 0) {
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (*(long *)(unaff_x19 + 0x14) != 0) {
      FUN_0484f308(&stack0x000002a0,*(long *)(unaff_x19 + 0x14),
                   *(undefined8 *)Method_System_Reflection_Emit_PropertyBuilder_get_CanWrite__);
      auVar27._4_4_ = in_stack_000002b4;
      auVar27._0_4_ = in_stack_000002b0;
      auVar27._8_8_ = in_stack_000002b8;
LAB_05da3120:
      uVar11 = FUN_04b9dbc0(&stack0x00000260,*(undefined8 *)puVar1);
      if ((uVar11 & 1) != 0) {
        FUN_0393ccac(&stack0x00000258,&stack0x0000029c,&stack0x00000254,*(undefined8 *)puVar2);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        iVar10 = in_stack_00000254 - in_stack_00000078;
        iVar9 = -iVar10;
        if (-1 < iVar10) {
          iVar9 = iVar10;
        }
        if (1 < iVar9) {
          lVar14 = *(long *)(unaff_x19 + 0x18);
          if (lVar14 != 0) {
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar17 = *(long *)PTR_DAT_067cc9f8;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 != 0) {
              uVar8 = *(uint *)(lVar14 + 0x18);
              if (uVar8 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar8 + 1;
                *(undefined4 *)(lVar15 + (long)(int)uVar8 * 4 + 0x20) = in_stack_0000029c;
              }
              else {
                FUN_03a6c18c(lVar14,in_stack_0000029c,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_05da3120;
            }
          }
          if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_05da4508;
        }
        goto LAB_05da3120;
      }
      FUN_04b9dcc8(&stack0x00000260,
                   *(undefined8 *)Method_Unity_Properties_PropertyContainer_TryGetProperty<object>__
                  );
      puVar1 = Method_System_Reflection_Emit_PropertyBuilder_get_DeclaringType__;
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        FUN_03a6cc08(&stack0x000002a0,*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_067caad8);
        while (uVar11 = FUN_04aed724(&stack0x00000280,*puVar23), (uVar11 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x14) == 0) {
            if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_05da4508;
          }
          System_Collections_Generic_Dictionary<object,_DataBindingManager_BindingDataCollection>__GetObjectData
                    (*(long *)(unaff_x19 + 0x14),in_stack_000002b0,*(undefined8 *)puVar1);
        }
        FUN_04aed720(&stack0x00000280,*(undefined8 *)PTR_DAT_067caac0);
        lVar14 = *(long *)(unaff_x19 + 0x18);
        if (lVar14 != 0) {
          *(undefined4 *)(lVar14 + 0x18) = 0;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          fVar32 = DAT_011afbb8;
          if ((int)in_stack_00000050 < 1) {
            iVar10 = 0;
            iVar9 = 0;
            uStack000000000000004c = 0;
          }
          else {
            lVar14 = 0;
            iVar9 = 0;
            iVar10 = 0;
            uStack000000000000004c = 0;
            do {
              memmove(&stack0x000001cc,(void *)(in_stack_00000070 + lVar14 * 0x88),0x88);
              plVar12 = (long *)UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexGrowProperty__get_Name
                                          (&stack0x000001cc,0);
              lVar15 = FUN_0612c674(&stack0x000001cc,0);
              if (lVar15 == 0) goto LAB_05da4108;
              uVar4 = FUN_060f5e80(lVar15,0);
              if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_05da4108;
              uVar11 = FUN_04895bfc(*(long *)(unaff_x19 + 0x12),uVar4,&stack0x00000440,
                                    *(undefined8 *)
                                     Method_System_Reflection_Emit_PropertyBuilder_get_PropertyType__
                                   );
              if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
              }
              uVar13 = FUN_060f60a4(plVar12,0);
              if ((uVar13 & 1) != 0) {
                if ((uVar11 & 1) == 0) {
                  if (plVar12 == (long *)0x0) goto LAB_05da4108;
                  iVar5 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
                  dVar16 = (double)((ulong)(iVar5 * 4 - 1) | 0x4330000000000000);
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = (ulong)dVar16;
                  iVar6 = FUN_05d733c0(unaff_x19 + 8,0);
                  iVar22 = (int)((long)(dVar16 + -4503599627370496.0) >> 0x34);
                  iVar5 = iVar22;
                  if (0x403 < iVar22) {
                    iVar5 = 0x404;
                  }
                  if (iVar22 < 0x3fe) {
                    uVar11 = 0;
LAB_05da34f8:
                    uVar13 = uVar11 << 2;
                    lVar15 = uVar11 - 7;
                    do {
                      uVar11 = uVar13 & 0xfffffffc;
                      bVar3 = lVar15 != -1;
                      lVar15 = lVar15 + 1;
                      uVar13 = uVar13 + 4;
                      *(undefined4 *)(&stack0x00000460 + uVar11) = 0xffffffff;
                    } while (bVar3);
                  }
                  else {
                    uVar13 = 0;
                    puVar21 = (undefined4 *)&stack0x0000047c;
                    do {
                      iVar7 = FUN_05d733c0(unaff_x19 + 8,0);
                      iVar18 = (iVar6 - iVar22) + 0x3ff + (int)uVar13;
                      if (iVar7 + -1 <= iVar18) {
                        iVar18 = iVar7 + -1;
                      }
                      uVar11 = FUN_05d73560(unaff_x19 + 8,iVar18,&stack0x000001c0,0);
                      if ((uVar11 & 1) == 0) break;
                      *puVar21 = uStack00000000000001c0;
                      puVar21[-7] = uStack00000000000001c4;
                      fVar26 = (float)FUN_05da4510();
                      uVar13 = uVar13 + 1;
                      puVar21 = puVar21 + 1;
                      fVar28 = param_5 * (float)unaff_x19[1];
                      fVar30 = auVar27._0_4_ * (float)unaff_x19[1];
                      param_4 = param_4 * (float)*unaff_x19;
                      fVar26 = fVar26 * (float)*unaff_x19;
                      uVar11 = (long)(int)fVar28 << 0x20;
                      uVar31 = (long)(int)fVar30 << 0x20;
                      param_5 = INFINITY;
                      auVar27._0_8_ =
                           (uVar11 ^ (uVar11 ^ 0x8000000000000000) &
                                     (long)(int)-(uint)(fVar28 == INFINITY)) +
                           (uVar31 ^ (uVar31 ^ 0x8000000000000000) &
                                     (long)(int)-(uint)(fVar30 == INFINITY));
                      auVar27._8_8_ = 0;
                      iVar18 = -0x80000000;
                      if (param_4 != INFINITY) {
                        iVar18 = (int)param_4;
                      }
                      iVar7 = -0x80000000;
                      if (fVar26 != INFINITY) {
                        iVar7 = (int)fVar26;
                      }
                      if (iVar9 <= iVar7 + iVar18) {
                        iVar9 = iVar7 + iVar18;
                      }
                      iVar18 = (int)(auVar27._0_8_ >> 0x20);
                      if (iVar10 <= iVar18) {
                        iVar10 = iVar18;
                      }
                    } while ((long)uVar13 < (long)(iVar5 + -0x3fd));
                    puVar23 = (undefined8 *)PTR_DAT_067caac8;
                    uVar11 = uVar13 & 0xffffffff;
                    if ((int)uVar13 < iVar5 + -0x3fd) {
                      if (*(long *)(unaff_x19 + 0x14) != 0) {
                        uVar8 = FUN_0484f11c(*(long *)(unaff_x19 + 0x14),uVar4,
                                             *(undefined8 *)
                                              Method_System_Reflection_Emit_PropertyBuilder_SetValue__
                                            );
                        if (*(long *)(unaff_x19 + 0x14) != 0) {
                          FUN_0484ef1c(*(long *)(unaff_x19 + 0x14),uVar4,in_stack_00000078,
                                       *(undefined8 *)OVRVirtualKeyboard_HandInputSource_TypeInfo);
                          puVar21 = (undefined4 *)&stack0x0000047c;
                          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
                            TMPro_TMP_Settings__get_isTextObjectScaleStatic
                                      (&stack0x000002a0,*puVar21,puVar21[-7],0);
                            FUN_05d7376c(unaff_x19 + 8,0,0);
                            puVar21 = puVar21 + 1;
                          }
                          lVar15 = 0;
                          uStack000000000000004c = uVar8 ^ 1 | uStack000000000000004c;
                          do {
                            *(undefined4 *)(&stack0x00000460 + lVar15) = 0xffffffff;
                            lVar15 = lVar15 + 4;
                          } while (lVar15 != 0x1c);
                          goto LAB_05da368c;
                        }
                      }
                      goto LAB_05da4108;
                    }
                    if (uVar11 < 7) goto LAB_05da34f8;
                  }
                  bVar3 = true;
                }
                else {
                  if (plVar12 == (long *)0x0) goto LAB_05da4108;
                  iVar5 = FUN_060cc658(plVar12,0);
                  bVar3 = in_stack_00000440 != iVar5;
                }
                fVar26 = (float)FUN_0612c730(&stack0x000001cc,0);
                fVar28 = in_stack_000004a8 - auVar27._0_4_;
                in_stack_000004ac = in_stack_000004ac - param_4;
                in_stack_000004b0 = in_stack_000004b0 - param_5;
                auVar27 = ZEXT416((uint)(in_stack_000004b0 * in_stack_000004b0));
                if (fVar32 <= in_stack_000004b0 * in_stack_000004b0 +
                              in_stack_000004ac * in_stack_000004ac +
                              (in_stack_000004a4 - fVar26) * (in_stack_000004a4 - fVar26) +
                              fVar28 * fVar28) {
                  bVar3 = true;
                }
                if (bVar3) {
                  if (plVar12 == (long *)0x0) goto LAB_05da4108;
                  in_stack_00000440 = FUN_060cc658(plVar12,0);
                  lVar15 = *(long *)(unaff_x19 + 0x16);
                  if (lVar15 == 0) goto LAB_05da4108;
                  lVar17 = *(long *)(lVar15 + 0x10);
                  lVar19 = *(long *)PTR_DAT_067cc9f8;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_05da4108;
                  uVar8 = *(uint *)(lVar15 + 0x18);
                  if (uVar8 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar8 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar8 * 4 + 0x20) = uVar4;
                  }
                  else {
                    FUN_03a6c18c(lVar15,uVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                lVar15 = FUN_0612c674(&stack0x000001cc,0);
                if (lVar15 == 0) goto LAB_05da4108;
                iVar5 = FUN_060a8364(lVar15,0);
                if (iVar5 == 1) {
                  lVar15 = FUN_0612c674(&stack0x000001cc,0);
                  if (lVar15 == 0) goto LAB_05da4108;
                  FUN_060a852c(lVar15,0);
                }
                in_stack_000004a4 = (float)FUN_0612c730(&stack0x000001cc,0);
                lVar15 = *(long *)(unaff_x19 + 0x12);
                in_stack_000004a8 = auVar27._0_4_;
                if (lVar15 == 0) goto LAB_05da4108;
                param_4 = in_stack_000004ac;
                param_5 = in_stack_000004b0;
                memcpy(&stack0x000002a0,&stack0x00000440,0x78);
                FUN_04893cec(lVar15,uVar4,&stack0x000002a0,
                             *(undefined8 *)
                              Method_System_Linq_Expressions_Interpreter_PropertyByRefUpdater_Update__
                            );
              }
LAB_05da368c:
              lVar14 = lVar14 + 1;
            } while (lVar14 != in_stack_00000050);
          }
          iVar6 = *unaff_x19;
          iVar5 = unaff_x19[1];
          if (CONCAT11(iVar5 < iVar10,iVar6 < iVar9) == 0) {
LAB_05da39c4:
            if (0 < (int)in_stack_00000050) {
              iVar10 = 0;
              lVar14 = 0;
              iVar9 = 0;
              do {
                fVar26 = (float)((ulong)&stack0x00000280 >> 0x20);
                fVar32 = SUB84(&stack0x00000280,0);
                memmove(&stack0x00000138,(void *)(in_stack_00000070 + lVar14 * 0x88),0x88);
                lVar15 = FUN_0612c674(&stack0x00000138,0);
                if (lVar15 == 0) goto LAB_05da4108;
                uVar4 = FUN_060f5e80(lVar15,0);
                if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_05da4108;
                uVar11 = FUN_04895bfc(*(long *)(unaff_x19 + 0x12),uVar4,&stack0x000003c0,
                                      *(undefined8 *)
                                       Method_System_Reflection_Emit_PropertyBuilder_get_PropertyType__
                                     );
                if ((uVar11 & 1) == 0) {
LAB_05da3c98:
                  iVar9 = iVar9 + 1;
                }
                else {
                  uVar24 = UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexGrowProperty__get_Name
                                     (&stack0x00000138,0);
                  if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
                    thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
                  }
                  uVar11 = FUN_060f60a4(uVar24,0);
                  if ((uVar11 & 1) == 0) goto LAB_05da3c98;
                  lVar15 = *(long *)(unaff_x19 + 0x1a);
                  FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
                  FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
                  FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
                  uVar4 = FUN_0612c73c(&stack0x00000138,0);
                  if (lVar15 == 0) goto LAB_05da4108;
                  uVar8 = (int)lVar14 - iVar9;
                  if (*(uint *)(lVar15 + 0x18) <= uVar8) {
LAB_05da4120:
                    if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089d0();
                    }
                    goto LAB_05da4508;
                  }
                  lVar17 = (long)(int)uVar8;
                  lVar15 = lVar15 + lVar17 * 0x10;
                  *(float *)(lVar15 + 0x20) = fVar26 + 0.0;
                  *(float *)(lVar15 + 0x24) = in_stack_000002b0 + 0.0;
                  *(float *)(lVar15 + 0x28) = fVar32 + in_stack_000002b4;
                  *(undefined4 *)(lVar15 + 0x2c) = uVar4;
                  lVar15 = *(long *)(unaff_x19 + 0x1c);
                  FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
                  FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
                  FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
                  iVar5 = FUN_0612c744(&stack0x00000138,0);
                  if (lVar15 == 0) goto LAB_05da4108;
                  if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_05da4120;
                  auVar27 = ZEXT416((uint)(0.0 - in_stack_000002b0));
                  lVar15 = lVar15 + lVar17 * 0x10;
                  param_4 = fVar32 - in_stack_000002b4;
                  param_5 = (float)iVar5;
                  *(float *)(lVar15 + 0x20) = 0.0 - fVar26;
                  *(float *)(lVar15 + 0x24) = 0.0 - in_stack_000002b0;
                  *(float *)(lVar15 + 0x28) = param_4;
                  *(float *)(lVar15 + 0x2c) = param_5;
                  lVar15 = *(long *)(unaff_x19 + 0x1e);
                  FUN_0612c714(&stack0x000002a0,&stack0x00000138,0);
                  FUN_0612c714(&stack0x000002a0,&stack0x00000138,0);
                  FUN_0612c714(&stack0x000002a0,&stack0x00000138,0);
                  uVar11 = FUN_0612c74c(&stack0x00000138,0);
                  iVar5 = -in_stack_000003dc;
                  if ((uVar11 & 1) != 0) {
                    iVar5 = in_stack_000003dc;
                  }
                  if (lVar15 == 0) goto LAB_05da4108;
                  if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_05da4120;
                  lVar15 = lVar15 + lVar17 * 0x10;
                  *(undefined4 *)(lVar15 + 0x20) = in_stack_000002d0;
                  *(undefined4 *)(lVar15 + 0x24) = in_stack_000002d4;
                  *(undefined4 *)(lVar15 + 0x28) = in_stack_000002d8;
                  *(float *)(lVar15 + 0x2c) = (float)iVar5;
                  if (0 < in_stack_000003dc) {
                    lVar15 = 0;
                    uVar11 = (ulong)(uint)(iVar10 + iVar9 * -7);
                    lVar17 = uVar11 << 0x20;
                    do {
                      lVar19 = *(long *)(unaff_x19 + 0x20);
                      FUN_05da4510();
                      uVar4 = FUN_05bebc28(0);
                      if (lVar19 == 0) goto LAB_05da4108;
                      if ((ulong)*(uint *)(lVar19 + 0x18) <= uVar11 + lVar15) goto LAB_05da4120;
                      lVar19 = lVar19 + (lVar17 >> 0x1c);
                      lVar15 = lVar15 + 1;
                      lVar17 = lVar17 + 0x100000000;
                      *(undefined4 *)(lVar19 + 0x20) = uVar4;
                      *(int *)(lVar19 + 0x24) = auVar27._0_4_;
                      *(float *)(lVar19 + 0x28) = param_4;
                      *(float *)(lVar19 + 0x2c) = param_5;
                      puVar23 = (undefined8 *)PTR_DAT_067caac8;
                    } while (lVar15 < in_stack_000003dc);
                  }
                }
                lVar14 = lVar14 + 1;
                iVar10 = iVar10 + 7;
              } while (lVar14 != in_stack_00000050);
            }
            if ((uStack000000000000004c & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_060a6338(*(undefined8 *)
                            Method_System_ComponentModel_PropertyDescriptorCollection_System_Collections_IDictionary_set_Item__
                           ,0);
            }
            FUN_034dac00(9,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
            FUN_05c5cb48(&stack0x00000134);
            uVar24 = *(undefined8 *)(unaff_x19 + 2);
            in_stack_00000120 = 0;
            in_stack_00000128 = &stack0x00000134;
            if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_0610d1c0(&stack0x000000f8,uVar24,0);
            if (unaff_x20 == 0) {
              if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_05da4508;
            }
            auVar29._8_8_ = in_stack_00000110;
            auVar29._0_8_ = in_stack_00000108;
            FUN_06118de4();
            if (*(long *)(unaff_x19 + 0x16) == 0) {
              if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_05da4508;
            }
            FUN_03a6cc08(&stack0x000000f8,*(long *)(unaff_x19 + 0x16),
                         *(undefined8 *)PTR_DAT_067caad8);
            uVar11 = in_stack_00000108;
            in_stack_00000100 = &stack0x00000280;
            in_stack_000000f8 = 0;
            while (uVar13 = FUN_04aed724(&stack0x00000280,*puVar23), (uVar13 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x12) == 0) {
                if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05da4508;
              }
              FUN_04893c30(&stack0x000002a0,*(long *)(unaff_x19 + 0x12),uVar11 & 0xffffffff,
                           *(undefined8 *)
                            Method_System_Reflection_Emit_PropertyBuilder_get_ReflectedType__);
              memcpy(&stack0x00000340,&stack0x000002a0,0x78);
              if (0 < in_stack_0000035c) {
                lVar14 = 0;
                piVar25 = (int *)&stack0x0000037c;
                do {
                  iVar9 = *piVar25;
                  FUN_060fb088(0);
                  uVar4 = FUN_05da4510();
                  iVar10 = FUN_05d733c0(unaff_x19 + 8,0);
                  auVar27 = ZEXT416(auVar29._0_4_);
                  param_4 = (float)FUN_05bebc28(uVar4,auVar27,param_4,param_5,0);
                  param_5 = auVar27._0_4_;
                  FUN_03e2501c(in_stack_000003a4,in_stack_000003a8,in_stack_000003ac,
                               in_stack_000003b0,&stack0x000002a0,
                               *(undefined8 *)
                                Method_System_ComponentModel_PropertyDescriptorCollection_RemoveAt__
                              );
                  if (*(int *)(*(long *)
                                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                              + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  auVar29 = ZEXT416((uint)(float)((1 << (ulong)((iVar10 - iVar9) + 1U & 0x1f)) + -2)
                                   );
                  FUN_05cab958();
                  lVar14 = lVar14 + 1;
                  piVar25 = piVar25 + 1;
                } while (lVar14 < in_stack_0000035c);
              }
            }
            FUN_04aed720(&stack0x00000280,*(undefined8 *)PTR_DAT_067caac0);
            if (*(int *)(*(long *)
                          Method_System_ComponentModel_PropertyDescriptorCollection_System_Collections_IDictionary_Add__
                        + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_06117720();
            FUN_06117720();
            FUN_06117720();
            FUN_06117720();
            FUN_06115f28();
            uVar24 = *(undefined8 *)(unaff_x19 + 2);
            if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_0610d1c0(&stack0x000002a0,uVar24,0);
            FUN_0611f628();
            lVar14 = in_stack_00000120;
            FUN_05c5cb50(in_stack_00000128,0);
            if (lVar14 != 0) {
              if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c0(lVar14);
              }
              goto LAB_05da4508;
            }
            lVar14 = *(long *)(unaff_x19 + 0x16);
            if (lVar14 != 0) {
              *(undefined4 *)(lVar14 + 0x18) = 0;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                return;
              }
              goto LAB_05da4508;
            }
          }
          else {
            uVar8 = iVar10 - 1U | (int)(iVar10 - 1U) >> 1;
            uVar11 = CONCAT44(uVar8,(int)(iVar9 - 1U) >> 1) | (ulong)(iVar9 - 1U);
            uVar11 = CONCAT44((int)uVar8 >> 2,(int)uVar11 >> 2) | uVar11;
            uVar11 = CONCAT44((int)((long)uVar11 >> 0x24),(int)uVar11 >> 4) | uVar11;
            uVar11 = CONCAT44((int)((long)uVar11 >> 0x28),(int)uVar11 >> 8) | uVar11;
            uVar11 = CONCAT44((int)((long)uVar11 >> 0x30),(int)uVar11 >> 0x10) | uVar11;
            iVar9 = (int)uVar11;
            if (iVar6 <= iVar9 + 1) {
              iVar6 = iVar9 + 1;
            }
            iVar9 = (int)(uVar11 + 0x100000000 >> 0x20);
            if (iVar5 <= iVar9) {
              iVar5 = iVar9;
            }
            if (*(long *)(unaff_x19 + 2) != 0) {
              FUN_060d597c(&stack0x000002a0,*(long *)(unaff_x19 + 2),0);
              plVar12 = *(long **)(unaff_x19 + 4);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x198))(plVar12,iVar6,*(undefined8 *)(*plVar12 + 0x1a0));
                plVar12 = *(long **)(unaff_x19 + 4);
                if (plVar12 != (long *)0x0) {
                  (**(code **)(*plVar12 + 0x1b8))(plVar12,iVar5,*(undefined8 *)(*plVar12 + 0x1c0));
                  if (*(long *)(unaff_x19 + 4) != 0) {
                    FUN_060d4cf4(*(long *)(unaff_x19 + 4),0);
                    plVar12 = *(long **)(unaff_x19 + 2);
                    if (plVar12 != (long *)0x0) {
                      iVar9 = (**(code **)(*plVar12 + 0x188))
                                        (plVar12,*(undefined8 *)(*plVar12 + 400));
                      if (iVar9 != 1) {
                        iVar9 = FUN_060fb2e0(0);
                        uVar24 = *(undefined8 *)(unaff_x19 + 2);
                        if (iVar9 == 0) {
                          uVar20 = *(undefined8 *)(unaff_x19 + 4);
                          auVar27 = ZEXT416((uint)((float)unaff_x19[1] / (float)iVar5));
                          uVar4 = FUN_05bdbd7c((float)*unaff_x19 / (float)iVar6,auVar27,(float)iVar5
                                               ,0);
                          if (DAT_06bb435f == '\0') {
                            FUN_02f08768(PTR_DAT_067c9848);
                            DAT_06bb435f = '\x01';
                          }
                          param_4 = **(float **)(*(long *)PTR_DAT_067c9848 + 0xb8);
                          param_5 = (*(float **)(*(long *)PTR_DAT_067c9848 + 0xb8))[1];
                          if (*(int *)(*(long *)PTR_DAT_067cb238 + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                          }
                          FUN_060b5358(uVar4,auVar27._0_4_,param_4,param_5,uVar24,uVar20,0);
                        }
                        else {
                          uVar20 = *(undefined8 *)(unaff_x19 + 4);
                          iVar9 = *unaff_x19;
                          iVar10 = unaff_x19[1];
                          if (*(int *)(*(long *)PTR_DAT_067cb238 + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                          }
                          FUN_060b4640(uVar24,0,0,0,0,iVar9,iVar10,uVar20);
                        }
                      }
                      if (*(long *)(unaff_x19 + 2) != 0) {
                        FUN_060d4da8(*(long *)(unaff_x19 + 2),0);
                        *unaff_x19 = iVar6;
                        unaff_x19[1] = iVar5;
                        auVar27 = NEON_ext(*(undefined1 (*) [16])(unaff_x19 + 2),
                                           *(undefined1 (*) [16])(unaff_x19 + 2),8,1);
                        *(long *)(unaff_x19 + 4) = auVar27._8_8_;
                        *(long *)(unaff_x19 + 2) = auVar27._0_8_;
                        goto LAB_05da39c4;
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
LAB_05da4108:
  if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05da4508:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


