/*
FUNCTION_NAME: MetaXRAcousticMaterial$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 01413394
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 MetaXRAcousticMaterial__Meta_XR_Acoustics_IMaterialDataProvider_get_name(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  ulong uVar13;
  long *in_x10;
  int *piVar14;
  long lVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long lVar17;
  long unaff_x22;
  int unaff_w23;
  long lVar18;
  int unaff_w26;
  long unaff_x27;
  undefined8 uVar19;
  long *unaff_x28;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long *in_stack_00000088;
  long *in_stack_00000090;
  int iStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 in_stack_000000e8;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000180;
  
  puVar16 = *(undefined8 **)(unaff_x20 + 0x50);
  if (in_x9 != 0) {
    piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *in_x10) {
        puVar6 = (undefined8 *)(param_1 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
        goto LAB_014133f0;
      }
      in_x9 = in_x9 + -1;
      piVar14 = piVar14 + 4;
    } while (in_x9 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724(in_stack_00000088,*in_x10,0x24);
LAB_014133f0:
  iVar5 = (*(code *)*puVar6)(in_stack_00000088,puVar6[1]);
  uVar4 = in_stack_000000e8;
  if (iVar5 == 1) {
    lVar10 = *in_stack_00000090;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
           ) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 4) * 0x10 + 0x138);
          goto MetaXRAcousticMaterialProperties__set_Preset;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_00d59724(in_stack_00000090,
                          *(long *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                          ,4);
MetaXRAcousticMaterialProperties__set_Preset:
    (*(code *)*puVar6)(in_stack_00000090,uVar4,puVar6[1]);
  }
  iVar5 = *(int *)(unaff_x27 + 0x18);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    FUN_0132138c();
    if (CONCAT44(uStack000000000000009c,iStack0000000000000098) == 0) goto LAB_01414028;
    if (*(char *)(CONCAT44(uStack000000000000009c,iStack0000000000000098) + 0xb9) != '\0') {
      FUN_0132138c();
      if ((CONCAT44(uStack000000000000009c,iStack0000000000000098) == 0) ||
         (FUN_01411d4c(&stack0x000000d0,
                       *(undefined8 *)
                        (CONCAT44(uStack000000000000009c,iStack0000000000000098) + 0x18)),
         in_stack_00000068 == 0)) goto LAB_01414028;
      FUN_01324ac8(in_stack_00000068,iVar5,*puVar16);
      FUN_01324ac8();
    }
  }
  if (*(long *)(in_stack_00000048 + 0xd0) != 0) {
    FUN_02040968(*(long *)(in_stack_00000048 + 0xd0),0);
    if (*(long *)(in_stack_00000048 + 0xd8) != 0) {
      FUN_02040900(*(long *)(in_stack_00000048 + 0xd8),0);
      lVar10 = *in_stack_00000088;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
            puVar16 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
            goto LAB_0141358c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)
                FUN_00d59724(in_stack_00000088,
                             *(long *)
                              Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__,
                             0x24);
LAB_0141358c:
      iVar5 = (*(code *)*puVar16)(in_stack_00000088,puVar16[1]);
      if (iVar5 == 1) {
        lVar10 = *in_stack_00000090;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
               ) {
              puVar16 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
              goto LAB_01413600;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar16 = (undefined8 *)
                  FUN_00d59724(in_stack_00000090,
                               *(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                               ,5);
LAB_01413600:
        (*(code *)*puVar16)(in_stack_00000090,puVar16[1]);
      }
      lVar10 = in_stack_00000168;
      if (unaff_x22 != 0) {
        if (0 < *(int *)(unaff_x22 + 0x18)) {
          uVar12 = 0;
          do {
            FUN_0132138c();
            if (lVar10 == 0) goto LAB_01414028;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_01414024;
            lVar15 = CONCAT44(uStack000000000000009c,iStack0000000000000098);
            if (lVar15 == 0) goto LAB_01414028;
            lVar11 = *unaff_x28;
            uVar19 = *(undefined8 *)(lVar10 + uVar12 * 8 + 0x20);
            lVar17 = *(long *)(lVar15 + 0xc0);
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)Method_EventTriggerTypes_GetSelectedType__)
                {
                  puVar16 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_014136bc;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar16 = (undefined8 *)FUN_00d59724();
LAB_014136bc:
            (*(code *)*puVar16)();
            lVar11 = *unaff_x28;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)Method_EventTriggerTypes_GetSelectedType__)
                {
                  puVar16 = (undefined8 *)(lVar11 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                  goto LAB_01413724;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar16 = (undefined8 *)FUN_00d59724();
LAB_01413724:
            (*(code *)*puVar16)();
            if (lVar17 == 0) goto LAB_01414028;
            iVar5 = FUN_02666048(lVar17,0);
            if (*(long *)(lVar15 + 0x88) == 0) goto LAB_01414028;
            iVar1 = *(int *)(*(long *)(lVar15 + 0x88) + 0x18);
            if (iVar1 < iVar5) {
              if (3 < unaff_w23) {
                uVar7 = FUN_01600424(*(undefined8 *)
                                      Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>__ctor__,
                                     *(undefined8 *)(lVar15 + 0x20),
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<List<Vertex>>_Dispose__
                                     ,0);
                lVar18 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                lVar11 = *(long *)(lVar18 + 0x38);
                if (lVar11 == 0) {
                  FUN_00d59478(lVar18);
                  lVar11 = *(long *)(lVar18 + 0x38);
                }
                lVar11 = *(long *)(lVar11 + 0x10);
                if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                  lVar11 = FUN_00d5941c();
                }
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar11 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
                if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                  lVar11 = FUN_00d5941c();
                }
                FUN_013f38b0(uVar7,**(undefined8 **)(lVar11 + 0xb8),0);
                unaff_w23 = in_stack_00000080._4_4_;
              }
            }
            else if ((1 < unaff_w23) && (iVar5 < iVar1)) {
              uVar7 = FUN_01600424(*(undefined8 *)
                                    Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>__ctor__,
                                   *(undefined8 *)(lVar15 + 0x20),*(undefined8 *)StringLiteral_1472,
                                   0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661754(uVar7,0);
              unaff_w23 = in_stack_00000080._4_4_;
            }
            lVar11 = *in_stack_00000088;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) ==
                    *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
                  puVar16 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_014138e4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar16 = (undefined8 *)
                      FUN_00d59724(in_stack_00000088,
                                   *(long *)
                                    Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                   ,0);
LAB_014138e4:
            uVar13 = (*(code *)*puVar16)(in_stack_00000088,puVar16[1]);
            if ((uVar13 & 1) != 0) {
              FUN_01406984(in_stack_00000050,&stack0x000000c4,lVar15,lVar17,in_stack_00000078,0);
            }
            lVar11 = *in_stack_00000088;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) ==
                    *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
                  puVar16 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
                  goto LAB_01413968;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar16 = (undefined8 *)
                      FUN_00d59724(in_stack_00000088,
                                   *(long *)
                                    Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                   ,0x24);
LAB_01413968:
            iVar5 = (*(code *)*puVar16)(in_stack_00000088,puVar16[1]);
            if (iVar5 == 1) {
              lVar11 = *in_stack_00000090;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                     ) {
                    puVar16 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_014139dc;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar16 = (undefined8 *)
                        FUN_00d59724(in_stack_00000090,
                                     *(long *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                                     ,1);
LAB_014139dc:
              (*(code *)*puVar16)(in_stack_00000090,lVar15,unaff_w26,puVar16[1]);
            }
            *(int *)(lVar15 + 0x28) = unaff_w26;
            FUN_01411ce4(&stack0x000000d0,uVar19,lVar15);
            if (in_stack_00000068 == 0) goto LAB_01414028;
            FUN_00ac8520(in_stack_00000068,uVar19,*(undefined8 *)StringLiteral_1415);
            FUN_00bbdb6c(in_stack_00000070,lVar15,
                         *(undefined8 *)
                          Method_TokenMachine_<BillPlacedAnimation>d__26_System_Collections_IEnumerator_Reset__
                        );
            lVar11 = *(long *)(lVar15 + 0xd0);
            if (lVar11 == 0) goto LAB_01414028;
            uVar13 = 0;
            unaff_w26 = *(int *)(lVar15 + 0x30) + unaff_w26;
            while ((long)uVar13 < (long)(int)*(uint *)(lVar11 + 0x18)) {
              if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_01414024;
              *(undefined8 *)(lVar11 + uVar13 * 8 + 0x20) = 0;
              lVar11 = *(long *)(lVar15 + 0xd0);
              uVar13 = uVar13 + 1;
              if (lVar11 == 0) goto LAB_01414028;
            }
            *(undefined8 *)(lVar15 + 0xd0) = 0;
            if (3 < unaff_w23) {
              plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
              if (plVar8 == (long *)0x0) goto LAB_01414028;
              if ((*(long *)Method_System_Net_WebCompletionSource<object>_ThrowOnError__ != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(*(long *)
                                               Method_System_Net_WebCompletionSource<object>_ThrowOnError__
                                              ,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              goto LAB_0141402c;
              uVar9 = *(uint *)(plVar8 + 3);
              if (uVar9 == 0) goto LAB_01414024;
              plVar8[4] = *(long *)Method_System_Net_WebCompletionSource<object>_ThrowOnError__;
              lVar15 = *(long *)(lVar15 + 0x20);
              if (lVar15 != 0) {
                lVar11 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar11 == 0) goto LAB_0141402c;
                uVar9 = *(uint *)(plVar8 + 3);
              }
              if (uVar9 < 2) goto LAB_01414024;
              plVar8[5] = lVar15;
              if (*(long *)Method_System_Nullable<RegexOptions>_GetValueOrDefault__ != 0) {
                lVar15 = thunk_FUN_00d6225c(*(long *)
                                             Method_System_Nullable<RegexOptions>_GetValueOrDefault__
                                            ,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar15 == 0) goto LAB_0141402c;
                uVar9 = *(uint *)(plVar8 + 3);
              }
              if (uVar9 < 3) goto LAB_01414024;
              plVar8[6] = *(long *)Method_System_Nullable<RegexOptions>_GetValueOrDefault__;
              lVar15 = *unaff_x28;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)Method_EventTriggerTypes_GetSelectedType__
                     ) {
                    puVar16 = (undefined8 *)(lVar15 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                    goto LAB_01413b9c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar16 = (undefined8 *)FUN_00d59724();
LAB_01413b9c:
              in_stack_000000b8._4_4_ = (*(code *)*puVar16)();
              lVar15 = FUN_0176eb1c((long)&stack0x000000b8 + 4,0);
              if ((lVar15 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              goto LAB_0141402c;
              uVar9 = *(uint *)(plVar8 + 3);
              if (uVar9 < 4) goto LAB_01414024;
              plVar8[7] = lVar15;
              if (*(long *)StringLiteral_12439 != 0) {
                lVar15 = thunk_FUN_00d6225c(*(long *)StringLiteral_12439,
                                            *(undefined8 *)(*plVar8 + 0x40));
                if (lVar15 == 0) goto LAB_0141402c;
                uVar9 = *(uint *)(plVar8 + 3);
              }
              if (uVar9 < 5) goto LAB_01414024;
              plVar8[8] = *(long *)StringLiteral_12439;
              lVar15 = *in_stack_00000090;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                     ) {
                    puVar16 = (undefined8 *)(lVar15 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                    goto LAB_01413c80;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar16 = (undefined8 *)
                        FUN_00d59724(in_stack_00000090,
                                     *(long *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                                     ,6);
LAB_01413c80:
              in_stack_000000b8._4_4_ = (*(code *)*puVar16)(in_stack_00000090,puVar16[1]);
              lVar15 = FUN_0176eb1c((long)&stack0x000000b8 + 4,0);
              if ((lVar15 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              goto LAB_0141402c;
              if (*(uint *)(plVar8 + 3) < 6) goto LAB_01414024;
              plVar8[9] = lVar15;
              uVar19 = FUN_01600844(plVar8,0);
              plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
              iStack0000000000000098 = unaff_w23;
              lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_13287,&stack0x00000098);
              if (plVar8 == (long *)0x0) goto LAB_01414028;
              if ((lVar15 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              goto LAB_0141402c;
              if ((int)plVar8[3] == 0) goto LAB_01414024;
              plVar8[4] = lVar15;
              FUN_013f38b0(uVar19,plVar8,0);
              unaff_w23 = in_stack_00000080._4_4_;
            }
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)*(int *)(unaff_x22 + 0x18));
        }
        lVar10 = *in_stack_00000088;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
              puVar16 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
              goto LAB_01413dbc;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar16 = (undefined8 *)
                  FUN_00d59724(in_stack_00000088,
                               *(long *)
                                Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__,
                               0x16);
LAB_01413dbc:
        iVar5 = (*(code *)*puVar16)(in_stack_00000088,puVar16[1]);
        if (iVar5 == 4) {
          lVar10 = *in_stack_00000088;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) ==
                  *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
                puVar16 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x1a) * 0x10 + 0x138);
                goto LAB_01413e28;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)
                    FUN_00d59724(in_stack_00000088,
                                 *(long *)
                                  Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                 ,0x1a);
LAB_01413e28:
          uVar19 = (*(code *)*puVar16)(in_stack_00000088,puVar16[1]);
          lVar10 = *unaff_x28;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)Method_EventTriggerTypes_GetSelectedType__) {
                puVar16 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_01413e90;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)FUN_00d59724();
LAB_01413e90:
          (*(code *)*puVar16)(uVar19);
        }
        lVar10 = in_stack_00000180;
        if (3 < unaff_w23) {
          lVar15 = *unaff_x28;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)Method_EventTriggerTypes_GetSelectedType__) {
                puVar16 = (undefined8 *)(lVar15 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                goto LAB_01413f08;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)FUN_00d59724();
LAB_01413f08:
          in_stack_000000b8._4_4_ = (*(code *)*puVar16)();
          uVar19 = FUN_0176eb1c((long)&stack0x000000b8 + 4,0);
          puVar3 = Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__;
          puVar2 = 
          Method_System_Collections_Generic_List_Enumerator<SongItem_MidiNote>_get_Current__;
          if (lVar10 == 0) goto LAB_01414028;
          in_stack_000000b0 = FUN_020407b0(lVar10,0);
          uVar7 = FUN_0176fc30(&stack0x000000b0,0);
          uVar19 = FUN_0160073c(*(undefined8 *)puVar3,uVar19,*(undefined8 *)puVar2,uVar7,0);
          plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
          iStack0000000000000098 = unaff_w23;
          lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_13287,&stack0x00000098);
          if (plVar8 == (long *)0x0) goto LAB_01414028;
          if ((lVar10 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
LAB_0141402c:
            uVar19 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar19,0);
          }
          if ((int)plVar8[3] == 0) {
LAB_01414024:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar8[4] = lVar10;
          FUN_013f38b0(uVar19,plVar8,0);
        }
        if (*(long *)(in_stack_00000048 + 0xd8) != 0) {
          FUN_02040968(*(long *)(in_stack_00000048 + 0xd8),0);
          return 1;
        }
      }
    }
  }
LAB_01414028:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


