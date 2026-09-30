/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler$$SingleNullHandling
ENTRY_POINT: 03e29f70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_17;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_InequalityHandler__SingleNullHandling(long *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  char cVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  float *pfVar19;
  ulong uVar20;
  int *piVar21;
  float *pfVar22;
  float *pfVar23;
  long unaff_x19;
  undefined1 *__src;
  int iVar24;
  uint uVar25;
  long *unaff_x27;
  long *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  float fVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  float fVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  float fVar48;
  float fVar49;
  int iStack0000000000000018;
  float fStack000000000000001c;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack000000000000004c;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  float in_stack_00000270;
  float in_stack_00000274;
  float in_stack_00000278;
  ulong in_stack_00000280;
  float in_stack_00000288;
  float in_stack_00000290;
  float in_stack_00000294;
  float in_stack_00000298;
  float in_stack_0000029c;
  
  lVar16 = *param_1;
  uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) ==
          *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
        puVar11 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_03e29ff4;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_01ecb238(param_1,*(long *)
                                  Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0);
LAB_03e29ff4:
  lVar16 = (*(code *)*puVar11)(param_1,0,puVar11[1]);
  if (lVar16 != 0) {
    cVar3 = *(char *)(lVar16 + 0x30);
    iVar1 = -0x80000000;
    if (fStack0000000000000024 != INFINITY) {
      iVar1 = (int)fStack0000000000000024;
    }
    FUN_03e2c054();
    puVar7 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
    puVar6 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
    fVar5 = DAT_00c92a2c;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      iStack0000000000000018 = 0;
      iStack0000000000000020 = 0;
      fVar27 = fStack000000000000001c + DAT_00c92a2c;
      while (plVar12 = (long *)FUN_03e18b6c(),
            plVar26 = (long *)
                      Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
            , puVar8 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__,
            plVar12 != (long *)0x0) {
        lVar16 = *plVar12;
        uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x27) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
              goto Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x27,0);
Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1:
        iVar10 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        if (iVar10 <= iStack0000000000000020) {
          *(undefined1 *)(unaff_x19 + 0xf8) = 0;
          return;
        }
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (plVar12 = (long *)FUN_03e18b6c(), plVar12 == (long *)0x0)) break;
        lVar16 = *plVar12;
        uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) ==
                *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03e2a18c;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01ecb238(plVar12,*(long *)
                                        Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__
                               ,0);
LAB_03e2a18c:
        uVar13 = (*(code *)*puVar11)(plVar12,iStack0000000000000020,puVar11[1]);
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar16 = FUN_04070398(*(long *)(unaff_x19 + 0x28),0), lVar16 == 0)) break;
        FUN_0407cee0(&stack0x00000098,lVar16,0);
        in_stack_00000128 = CONCAT44(fStack00000000000000a4,uStack00000000000000a0);
        in_stack_00000130 = CONCAT44(fStack00000000000000ac,fStack00000000000000a8);
        in_stack_00000120 = in_stack_00000098;
        in_stack_00000138 = in_stack_000000b0;
        in_stack_00000148 = in_stack_000000c0;
        in_stack_00000140 = in_stack_000000b8;
        in_stack_00000158 = in_stack_000000d0;
        in_stack_00000150 = in_stack_000000c8;
        FUN_03c8e558(&stack0x00000098,&stack0x00000120,0);
        in_stack_000000e8 = CONCAT44(fStack00000000000000a4,uStack00000000000000a0);
        in_stack_000000f0 = CONCAT44(fStack00000000000000ac,fStack00000000000000a8);
        in_stack_000000e0 = in_stack_00000098;
        in_stack_000000f8 = in_stack_000000b0;
        in_stack_00000108 = in_stack_000000c0;
        in_stack_00000100 = in_stack_000000b8;
        in_stack_00000118 = in_stack_000000d0;
        in_stack_00000110 = in_stack_000000c8;
        Unity_VisualScripting_GreaterThanHandler_<>c__<_ctor>b__0_88
                  (&stack0x000002a0,uVar13,&stack0x000000e0,3);
        if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar28 = (float)FUN_0314b598(*(long *)(unaff_x19 + 0x110),iStack0000000000000020,
                                     *(undefined8 *)
                                      Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                    );
        fVar49 = fVar28 + fVar5;
        if (*(int *)(unaff_x19 + 0x38) == 0) {
          bVar9 = in_stack_00000068._4_4_ <= fVar27;
          bVar4 = bVar9 && fVar49 < in_stack_00000068._4_4_;
          if (bVar9 && fVar49 < in_stack_00000068._4_4_) {
            in_stack_00000068._4_4_ = in_stack_00000068._4_4_ - fVar28;
          }
        }
        else {
          bVar4 = false;
          in_stack_00000068._4_4_ = 0.0;
        }
        lVar16 = *(long *)(unaff_x19 + 0x108);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(undefined4 *)(lVar16 + 0x18) = 0;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        iVar10 = iStack0000000000000018;
        if (!bVar4 && in_stack_00000068._4_4_ <= fVar49) {
          while (uVar20 = FUN_03e2c8c8(), (uVar20 & 1) != 0) {
            lVar16 = *(long *)(unaff_x19 + 0x108);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = *(long *)(lVar16 + 0x10);
            lVar17 = *plVar26;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar2 = *(uint *)(lVar16 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              *(float *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = in_stack_00000068._4_4_ / fVar28;
            }
            else {
              FUN_0314b890(lVar16,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                          );
            }
            iVar24 = *(int *)(unaff_x19 + 0x38);
            if (iVar24 == 0) {
              fVar29 = fStack000000000000001c;
              if (fStack0000000000000024 <= 1.0) goto LAB_03e2b708;
              bVar9 = in_stack_00000068._4_4_ < fVar28;
              fVar29 = fStack000000000000001c / (float)(cVar3 + iVar1 + -1) +
                       in_stack_00000068._4_4_;
              bVar4 = bVar9 && fVar49 < fVar29;
              in_stack_00000068._4_4_ = fVar29 - fVar28;
              if (!bVar9 || fVar49 >= fVar29) {
                in_stack_00000068._4_4_ = fVar29;
              }
            }
            else if (iVar24 == 1) {
              fStack0000000000000024 =
                   (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),
                                       *(undefined4 *)(unaff_x19 + 0x44),0);
              fVar29 = fStack0000000000000024;
LAB_03e2b708:
              bVar4 = false;
              in_stack_00000068._4_4_ = in_stack_00000068._4_4_ + fVar29;
            }
            else if (iVar24 == 2) {
              if ((*(uint *)(unaff_x19 + 0x44) & 0x7fffffff) < 0x7f800001) {
                fStack0000000000000024 = (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),0);
              }
              else {
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar16 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar10,
                                      *(undefined8 *)
                                       Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                     );
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar16 = FUN_023361c8(lVar16,*(undefined8 *)
                                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Count__
                                     );
                if (DAT_0482ee18 == '\0') {
                  thunk_FUN_01efb3a4(puVar6);
                  DAT_0482ee18 = '\x01';
                }
                lVar14 = *(long *)puVar6;
                iVar24 = *(int *)(unaff_x19 + 0x4c);
                lVar17 = *(long *)(lVar14 + 0xb8);
                if ((iVar24 == 2) || (iVar24 == 5)) {
                  if (DAT_0482ee1d == '\0') {
                    thunk_FUN_01efb3a4(puVar6);
                    lVar14 = *(long *)puVar6;
                    DAT_0482ee1d = '\x01';
                    iVar24 = *(int *)(unaff_x19 + 0x4c);
                    lVar17 = *(long *)(lVar14 + 0xb8);
                  }
                  pfVar19 = (float *)(lVar17 + 0x48);
                  pfVar22 = (float *)(lVar17 + 0x4c);
                  pfVar23 = (float *)(lVar17 + 0x50);
                }
                else {
                  pfVar19 = (float *)(lVar17 + 0x3c);
                  pfVar22 = (float *)(lVar17 + 0x40);
                  pfVar23 = (float *)(lVar17 + 0x44);
                }
                if ((iVar24 == 1) || (iVar24 == 4)) {
                  if (DAT_0482ee19 == '\0') {
                    thunk_FUN_01efb3a4(puVar6);
                    lVar14 = *(long *)puVar6;
                    DAT_0482ee19 = '\x01';
                  }
                  lVar14 = *(long *)(lVar14 + 0xb8);
                  pfVar19 = (float *)(lVar14 + 0x18);
                  pfVar22 = (float *)(lVar14 + 0x1c);
                  pfVar23 = (float *)(lVar14 + 0x20);
                }
                fVar44 = *pfVar23;
                fVar48 = *pfVar22;
                fVar29 = *pfVar19;
                if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                                   (lVar16,0,0);
                if ((uVar20 & 1) != 0) {
                  if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar16 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar10,
                                        *(undefined8 *)
                                         Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                       );
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar16 = FUN_0233642c(lVar16,*(undefined8 *)PTR_DAT_04579bb8);
                  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar20 = FUN_04073094(lVar16,0,0);
                  if ((uVar20 & 1) != 0) {
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar14 = FUN_04070398(lVar16,0);
                    if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar17 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar10,
                                          *(undefined8 *)
                                           Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                         );
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar17 = FUN_04073258(lVar17,0);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_0407e3a8(fVar29,lVar17,0);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    fVar29 = (float)FUN_0407e758(lVar14,0);
                    fVar30 = fVar48;
                    fVar31 = fVar44;
                    lVar14 = FUN_04070398(lVar16,0);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    fVar32 = (float)FUN_0407ec3c(lVar14,0);
                    fVar29 = fVar29 * fVar32;
                    fVar48 = fVar48 * fVar30;
                    fVar44 = fVar44 * fVar31;
                  }
                }
                if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar20 = FUN_04073094(lVar16,0,0);
                plVar26 = (long *)
                          Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                ;
                if ((uVar20 & 1) != 0) {
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar14 = FUN_04050c14(lVar16,0);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  FUN_04051ba0(&stack0x00000098,lVar14,0);
                  fVar32 = fStack00000000000000ac;
                  fVar31 = fStack00000000000000a8;
                  fVar30 = fStack00000000000000a4;
                  lVar16 = FUN_022c6694(lVar16,*(undefined8 *)
                                                Method_UnityEngine_UIElements_StyleDataRef<RareData>_Write__
                                       );
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar2 = *(uint *)(lVar16 + 0x18);
                  if (0 < (int)uVar2) {
                    uVar25 = 0;
                    fVar31 = fVar32;
                    do {
                      if (uVar2 <= uVar25) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      lVar14 = *(long *)(lVar16 + (long)(int)uVar25 * 8 + 0x20);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      lVar14 = FUN_04050c14(lVar14,0);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      FUN_04051ba0(&stack0x00000098,lVar14,0);
                      uVar2 = *(uint *)(lVar16 + 0x18);
                      fVar32 = fVar30 + fVar30;
                      if (fVar30 + fVar30 <= fStack00000000000000a4 + fStack00000000000000a4) {
                        fVar32 = fStack00000000000000a4 + fStack00000000000000a4;
                      }
                      fVar30 = fVar31 + fVar31;
                      if (fVar31 + fVar31 <= fStack00000000000000ac + fStack00000000000000ac) {
                        fVar30 = fStack00000000000000ac + fStack00000000000000ac;
                      }
                      uVar25 = uVar25 + 1;
                      fVar31 = fVar30 * 0.5;
                      fVar30 = fVar32 * 0.5;
                      fVar32 = fVar31;
                    } while ((int)uVar25 < (int)uVar2);
                  }
                  plVar26 = (long *)
                            Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                  ;
                  if (DAT_0482f03e == '\0') {
                    thunk_FUN_01efb3a4(puVar7);
                    DAT_0482f03e = '\x01';
                  }
                  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  fVar29 = fVar29 * (fVar30 + fVar30);
                  fVar48 = fVar48 * (fVar31 + fVar31);
                  fVar44 = fVar44 * (fVar32 + fVar32);
                  fStack0000000000000024 = SQRT(fVar44 * fVar44 + fVar48 * fVar48 + fVar29 * fVar29)
                  ;
                }
              }
              memcpy(&stack0x00000098,&stack0x000002a0,0x48);
              if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar39 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar10,
                                    *(undefined8 *)
                                     Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                   );
              uVar13 = *(undefined8 *)PTR_DAT_04579bd0;
              memcpy(&stack0x000002e8,&stack0x00000098,0x48);
              FUN_0240e31c(uVar39,fStack0000000000000024,&stack0x000002e8,&stack0x0000029c,uVar13);
              bVar4 = false;
              in_stack_00000068._4_4_ = fVar28 + 1.0;
              if (in_stack_0000029c < 1.0) {
                in_stack_00000068._4_4_ = fVar28 * in_stack_0000029c;
              }
            }
            else {
              bVar4 = false;
            }
            iVar10 = iVar10 + 1;
            if ((bVar4) || (fVar49 < in_stack_00000068._4_4_)) break;
          }
        }
        lVar16 = *(long *)(unaff_x19 + 0xd0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar24 = *(int *)(lVar16 + 0x18) + -1;
        if (iVar10 <= iVar24) {
          while( true ) {
            uVar13 = FUN_030f28e4(lVar16,iVar24,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                 );
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar20 = FUN_04073094(uVar13,0,0);
            if ((uVar20 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar13 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar24,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                   );
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_040770d0(uVar13,0);
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_030f42ac(*(long *)(unaff_x19 + 0xd0),iVar24,*(undefined8 *)PTR_DAT_04579bc0);
            }
            iVar24 = iVar24 + -1;
            if (iVar24 < iVar10) break;
            lVar16 = *(long *)(unaff_x19 + 0xd0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
          }
        }
        if (iStack0000000000000018 < iVar10) {
          iVar24 = 0;
          do {
            if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar16 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iStack0000000000000018,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                 );
            if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar39 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar24,
                                  *(undefined8 *)
                                   Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                 );
            uVar13 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_IsModified__;
            memcpy(&stack0x00000330,&stack0x000002a0,0x48);
            FUN_02409430(uVar39,&stack0x00000330,&stack0x00000290,&stack0x00000280,&stack0x00000270,
                         uVar13);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = FUN_04073258(lVar16,0);
            fVar28 = in_stack_00000294;
            fVar49 = in_stack_00000298;
            FUN_03c7c6bc(in_stack_00000290,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_0407d468(lVar14,0);
            if (*(int *)(unaff_x19 + 0x38) == 2) {
              memcpy(&stack0x00000330,&stack0x000002a0,0x48);
              if (iStack0000000000000018 + 1 < iVar10) {
                memcpy(&stack0x00000200,&stack0x00000330,0x48);
                if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar13 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar24 + 1,
                                      *(undefined8 *)
                                       Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                     );
                __src = &stack0x00000200;
              }
              else {
                __src = &stack0x000001b0;
                memcpy(&stack0x000001b0,&stack0x00000330,0x48);
                uVar13 = 0x3f800000;
              }
              memcpy(&stack0x00000160,__src,0x48);
              uVar39 = *(undefined8 *)
                        Method_System_Configuration_ConfigurationSection_SerializeSection__;
              memcpy(&stack0x00000378,&stack0x00000160,0x48);
              fVar29 = (float)FUN_0240a9dc(uVar13,&stack0x00000378,uVar39);
              in_stack_00000280 = CONCAT44(fVar28 - in_stack_00000294,fVar29 - in_stack_00000290);
              in_stack_00000288 = fVar49 - in_stack_00000298;
            }
            if (DAT_0482ee1a == '\0') {
              thunk_FUN_01efb3a4(puVar7);
              DAT_0482ee1a = '\x01';
            }
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              cVar15 = DAT_0482ee1a;
            }
            else {
              cVar15 = '\x01';
            }
            fVar28 = in_stack_00000278 * in_stack_00000278 +
                     in_stack_00000270 * in_stack_00000270 + in_stack_00000274 * in_stack_00000274;
            fVar49 = 1.0 / SQRT(fVar28);
            fVar29 = (float)in_stack_00000280;
            fVar48 = (float)(in_stack_00000280 >> 0x20);
            fStack0000000000000094 = in_stack_00000270 * fVar49;
            fStack0000000000000090 = in_stack_00000274 * fVar49;
            fStack000000000000008c = in_stack_00000278 * fVar49;
            if (fVar28 <= 1.1754944e-38) {
              fStack0000000000000090 = 0.0;
              fStack0000000000000094 = 0.0;
              fStack000000000000008c = 0.0;
            }
            if (cVar15 == '\0') {
              thunk_FUN_01efb3a4(puVar7);
              DAT_0482ee1a = '\x01';
            }
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar28 = in_stack_00000288 * in_stack_00000288 + fVar29 * fVar29 + fVar48 * fVar48;
            fVar49 = 1.0 / SQRT(fVar28);
            fVar29 = fVar29 * fVar49;
            fVar44 = fVar48 * fVar49;
            fStack0000000000000088 = fVar29;
            fStack0000000000000084 = fVar44;
            fStack0000000000000080 = in_stack_00000288 * fVar49;
            if (fVar28 <= 1.1754944e-38) {
              fStack0000000000000084 = 0.0;
              fStack0000000000000088 = 0.0;
              fStack0000000000000080 = 0.0;
            }
            if (*(int *)(unaff_x19 + 0x3c) == 1) {
              lVar14 = FUN_04070398();
              if (DAT_0482ee19 == '\0') {
                thunk_FUN_01efb3a4(puVar6);
                DAT_0482ee19 = '\x01';
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar17 = *(long *)(*(long *)puVar6 + 0xb8);
              fStack0000000000000090 = *(float *)(lVar17 + 0x1c);
              fStack000000000000008c = *(float *)(lVar17 + 0x20);
              FUN_0407e3a8(*(undefined4 *)(lVar17 + 0x18),lVar14,0);
              fStack0000000000000094 = (float)FUN_03c7c6c0(0);
              lVar14 = FUN_04070398();
              if (DAT_0482ee1d == '\0') {
                thunk_FUN_01efb3a4(puVar6);
                DAT_0482ee1d = '\x01';
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar17 = *(long *)(*(long *)puVar6 + 0xb8);
              fVar29 = *(float *)(lVar17 + 0x4c);
              fVar44 = *(float *)(lVar17 + 0x50);
              FUN_0407e3a8(*(undefined4 *)(lVar17 + 0x48),lVar14,0);
              fStack0000000000000088 = (float)FUN_03c7c6c0(0);
              fStack0000000000000080 = fVar44;
              fStack0000000000000084 = fVar29;
            }
            else if (*(int *)(unaff_x19 + 0x3c) == 2) {
              if (DAT_0482ee19 == '\0') {
                thunk_FUN_01efb3a4(puVar6);
                DAT_0482ee19 = '\x01';
              }
              lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
              fStack0000000000000090 = *(float *)(lVar14 + 0x1c);
              fStack000000000000008c = *(float *)(lVar14 + 0x20);
              fStack0000000000000094 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar14 + 0x18),0);
              if (DAT_0482ee1d == '\0') {
                thunk_FUN_01efb3a4(puVar6);
                DAT_0482ee1d = '\x01';
              }
              lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
              fVar29 = *(float *)(lVar14 + 0x4c);
              fVar44 = *(float *)(lVar14 + 0x50);
              fStack0000000000000088 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar14 + 0x48),0);
              fStack0000000000000080 = fVar44;
              fStack0000000000000084 = fVar29;
            }
            fVar28 = (float)FUN_03e23f04();
            if (DAT_0482ee1a == '\0') {
              thunk_FUN_01efb3a4(puVar7);
              DAT_0482ee1a = '\x01';
            }
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar30 = fVar44 * fVar44 + fVar28 * fVar28 + fVar29 * fVar29;
            fVar31 = 1.0 / SQRT(fVar30);
            fVar28 = fVar28 * fVar31;
            fVar29 = fVar29 * fVar31;
            fVar32 = 0.0;
            fVar49 = fVar28;
            fStack0000000000000078 = fVar29;
            fStack0000000000000074 = fVar44 * fVar31;
            if (fVar30 <= 1.1754944e-38) {
              fVar49 = fVar32;
              fStack0000000000000078 = fVar32;
              fStack0000000000000074 = fVar32;
            }
            fVar44 = (float)FUN_03e23f04();
            if (DAT_0482ee1a == '\0') {
              thunk_FUN_01efb3a4(puVar7);
              DAT_0482ee1a = '\x01';
            }
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar28 = fVar29 * fVar29 + fVar44 * fVar44 + fVar28 * fVar28;
            fStack0000000000000070 = fVar44 * (1.0 / SQRT(fVar28));
            if (fVar28 <= 1.1754944e-38) {
              fStack0000000000000070 = 0.0;
            }
            FUN_03cb4cf0(fVar49,0);
            FUN_03cb3880(0);
            fStack000000000000007c = (float)FUN_04066fb8(0);
            lVar14 = FUN_04073258(lVar16,0);
            fVar28 = fStack0000000000000094;
            fVar49 = fStack0000000000000084;
            fVar29 = fStack0000000000000080;
            FUN_03cb4cf0(fStack0000000000000088,0);
            fVar44 = (float)FUN_03cb3880(0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar30 = (fStack0000000000000078 * fVar44 +
                     fStack0000000000000074 * fVar28 + fStack0000000000000070 * fVar29) -
                     fStack000000000000007c * fVar49;
            uVar20 = (ulong)(uint)((fStack000000000000007c * fVar29 +
                                   fStack0000000000000078 * fVar28 + fStack0000000000000070 * fVar49
                                   ) - fStack0000000000000074 * fVar44);
            FUN_0407d5e8((fStack0000000000000074 * fVar49 +
                         fStack000000000000007c * fVar28 + fStack0000000000000070 * fVar44) -
                         fStack0000000000000078 * fVar29,uVar20,fVar30,
                         ((fStack0000000000000070 * fVar28 - fStack000000000000007c * fVar44) -
                         fStack0000000000000078 * fVar49) - fStack0000000000000074 * fVar29,lVar14,0
                        );
            uVar2 = *(uint *)(unaff_x19 + 0x50);
            if ((uVar2 & 1) != 0) {
              if ((uVar2 >> 1 & 1) != 0) {
                uVar20 = (ulong)(uint)in_stack_00000274;
                FUN_04073258(lVar16,0);
                fVar30 = in_stack_00000278;
                FUN_03e2cbdc(in_stack_00000270,uVar20,in_stack_00000278,
                             in_stack_00000280 & 0xffffffff,fVar48,in_stack_00000288);
              }
              fVar40 = (float)uVar20;
              fVar31 = (float)FUN_03e2ce3c((uint *)(unaff_x19 + 0x50));
              fVar49 = fStack0000000000000090;
              fVar29 = fStack000000000000008c;
              fVar32 = (float)FUN_03c7c6bc(0);
              fVar28 = fStack0000000000000080;
              fVar44 = fStack0000000000000084;
              fVar33 = (float)FUN_03c7c6bc(fStack0000000000000088,0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4(puVar7);
                DAT_0482ee9b = '\x01';
              }
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fStack0000000000000030 = fVar49 * fVar28 - fVar29 * fVar44;
              fVar28 = fVar29 * fVar33 - fVar32 * fVar28;
              fVar29 = fVar32 * fVar44 - fVar49 * fVar33;
              fVar49 = SQRT(fVar29 * fVar29 +
                            fStack0000000000000030 * fStack0000000000000030 + fVar28 * fVar28);
              if (fVar49 <= DAT_00c926ac) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4(puVar6);
                  DAT_0482ee12 = '\x01';
                }
                pfVar19 = *(float **)(*(long *)puVar6 + 0xb8);
                fStack0000000000000030 = *pfVar19;
                fStack000000000000002c = pfVar19[1];
                fVar49 = pfVar19[2];
                fVar28 = fStack0000000000000030;
              }
              else {
                fStack0000000000000030 = fStack0000000000000030 / fVar49;
                fStack000000000000002c = fVar28 / fVar49;
                fVar49 = fVar29 / fVar49;
              }
              lVar14 = FUN_04073258(lVar16,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar34 = (float)FUN_0407d3c8(lVar14,0);
              fVar44 = fStack000000000000008c;
              fVar32 = fStack0000000000000090;
              fVar35 = (float)FUN_03c7c6bc(fStack0000000000000094,fStack0000000000000090,0);
              fVar33 = fStack0000000000000084;
              fVar37 = fStack0000000000000080;
              fVar36 = (float)FUN_03c7c6bc(fStack0000000000000088,fStack0000000000000084,0);
              fVar36 = fVar30 * fVar36;
              uVar20 = (ulong)(uint)(fVar28 + fVar31 * fStack000000000000002c + fVar40 * fVar32 +
                                              fVar30 * fVar33);
              fVar30 = fVar29 + fVar31 * fVar49 + fVar40 * fVar44 + fVar30 * fVar37;
              FUN_0407d468(fVar34 + fVar31 * fStack0000000000000030 + fVar40 * fVar35 + fVar36,
                           uVar20,lVar14,0);
            }
            uVar2 = *(uint *)(unaff_x19 + 0x98);
            if ((uVar2 & 1) != 0) {
              if ((uVar2 >> 1 & 1) != 0) {
                FUN_04073258(lVar16,0);
                FUN_03e2cbdc(in_stack_00000270,in_stack_00000274,in_stack_00000278,
                             in_stack_00000280 & 0xffffffff,fVar48,in_stack_00000288);
              }
              lVar14 = FUN_04073258(lVar16,0);
              fVar28 = fStack0000000000000090;
              fVar49 = fStack000000000000008c;
              FUN_03c7c6bc(fStack0000000000000094,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar29 = (float)FUN_0407e758(lVar14,0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4(puVar7);
                DAT_0482ee9b = '\x01';
              }
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar44 = DAT_00c926ac;
              fVar30 = SQRT(fVar49 * fVar49 + fVar29 * fVar29 + fVar28 * fVar28);
              if (fVar30 <= DAT_00c926ac) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4(puVar6);
                  DAT_0482ee12 = '\x01';
                }
                pfVar19 = *(float **)(*(long *)puVar6 + 0xb8);
                fVar29 = *pfVar19;
                fVar28 = pfVar19[1];
                fVar49 = pfVar19[2];
              }
              else {
                fVar29 = fVar29 / fVar30;
                fVar28 = fVar28 / fVar30;
                fVar49 = fVar49 / fVar30;
              }
              uVar41 = (ulong)(uint)fVar28;
              uVar20 = FUN_03c7c6c0(fVar29,0);
              fVar31 = (float)uVar41;
              lVar14 = FUN_04073258(lVar16,0);
              fVar28 = fStack0000000000000084;
              fVar29 = fStack0000000000000080;
              FUN_03c7c6bc(fStack0000000000000088,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar30 = (float)FUN_0407e758(lVar14,0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4(puVar7);
                DAT_0482ee9b = '\x01';
              }
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar32 = SQRT(fVar29 * fVar29 + fVar30 * fVar30 + fVar28 * fVar28);
              if (fVar32 <= fVar44) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4(puVar6);
                  DAT_0482ee12 = '\x01';
                }
                pfVar19 = *(float **)(*(long *)puVar6 + 0xb8);
                fVar30 = *pfVar19;
                fVar28 = pfVar19[1];
                fVar29 = pfVar19[2];
              }
              else {
                fVar30 = fVar30 / fVar32;
                fVar28 = fVar28 / fVar32;
                fVar29 = fVar29 / fVar32;
              }
              uVar42 = (ulong)(uint)fVar28;
              uVar13 = FUN_03c7c6c0(fVar30,0);
              uVar43 = uVar42;
              fVar28 = fVar29;
              fVar37 = (float)FUN_03e2ce3c((uint *)(unaff_x19 + 0x98));
              fVar36 = (float)uVar43;
              fVar33 = fVar31;
              fVar40 = fVar49;
              fVar34 = (float)FUN_03c7c6bc(uVar20,0);
              uVar43 = uVar42;
              fVar32 = fVar29;
              fVar35 = (float)FUN_03c7c6bc(uVar13,0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4(puVar7);
                DAT_0482ee9b = '\x01';
              }
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar30 = fVar33 * fVar32 - fVar40 * (float)uVar43;
              fVar40 = fVar40 * fVar35 - fVar34 * fVar32;
              fVar32 = fVar34 * (float)uVar43 - fVar33 * fVar35;
              fVar33 = SQRT(fVar32 * fVar32 + fVar30 * fVar30 + fVar40 * fVar40);
              if (fVar33 <= fVar44) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4(puVar6);
                  DAT_0482ee12 = '\x01';
                }
                pfVar19 = *(float **)(*(long *)puVar6 + 0xb8);
                fStack000000000000004c = *pfVar19;
                fStack000000000000002c = pfVar19[1];
                fVar32 = pfVar19[2];
              }
              else {
                fVar30 = fVar30 / fVar33;
                fVar40 = fVar40 / fVar33;
                fVar32 = fVar32 / fVar33;
                fStack000000000000002c = fVar40;
                fStack000000000000004c = fVar30;
              }
              lVar14 = FUN_04073258(lVar16,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar44 = (float)FUN_0407d9e8(lVar14,0);
              fVar33 = (float)FUN_03c7c6bc(uVar20 & 0xffffffff,uVar41 & 0xffffffff,0);
              fVar34 = (float)FUN_03c7c6bc(uVar13,uVar42,0);
              uVar20 = (ulong)(uint)(fVar40 + fVar37 * fStack000000000000002c + fVar36 * fVar31 +
                                              fVar28 * (float)uVar42);
              fVar30 = fVar30 + fVar37 * fVar32 + fVar36 * fVar49 + fVar28 * fVar29;
              FUN_0407da88(fVar44 + fVar37 * fStack000000000000004c + fVar36 * fVar33 +
                                    fVar28 * fVar34,uVar20,lVar14,0);
            }
            uVar2 = *(uint *)(unaff_x19 + 0x74);
            if ((uVar2 & 1) != 0) {
              if ((uVar2 >> 1 & 1) != 0) {
                uVar20 = (ulong)(uint)in_stack_00000274;
                FUN_04073258(lVar16,0);
                fVar30 = in_stack_00000278;
                FUN_03e2cbdc(in_stack_00000270,uVar20,in_stack_00000278,
                             in_stack_00000280 & 0xffffffff,fVar48,in_stack_00000288);
                if (*(int *)(unaff_x19 + 0x94) == 3) {
                  puVar18 = *(undefined4 **)
                             (*(long *)
                               Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                             + 0xb8);
                  uVar20 = (ulong)(uint)puVar18[1];
                  fVar30 = (float)puVar18[2];
                  fStack0000000000000070 = (float)puVar18[3];
                  fStack000000000000007c = (float)FUN_03cb3880(*puVar18,0);
                  fStack0000000000000078 = (float)uVar20;
                  fStack0000000000000074 = fVar30;
                }
              }
              uVar38 = FUN_03e2ce3c((uint *)(unaff_x19 + 0x74));
              fVar28 = fStack0000000000000090;
              fVar29 = fStack000000000000008c;
              fVar44 = (float)FUN_03c7c6bc(0);
              fVar49 = fStack0000000000000080;
              fVar48 = fStack0000000000000084;
              fVar31 = (float)FUN_03c7c6bc(0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4(puVar7);
                DAT_0482ee9b = '\x01';
              }
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar32 = fVar28 * fVar49 - fVar29 * fVar48;
              fVar49 = fVar29 * fVar31 - fVar44 * fVar49;
              fVar28 = fVar44 * fVar48 - fVar28 * fVar31;
              fVar29 = SQRT(fVar28 * fVar28 + fVar32 * fVar32 + fVar49 * fVar49);
              if (fVar29 <= DAT_00c926ac) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4(puVar6);
                  DAT_0482ee12 = '\x01';
                }
                pfVar19 = *(float **)(*(long *)puVar6 + 0xb8);
                fVar32 = *pfVar19;
                fVar49 = pfVar19[1];
                fVar28 = pfVar19[2];
              }
              else {
                fVar32 = fVar32 / fVar29;
                fVar49 = fVar49 / fVar29;
                fVar28 = fVar28 / fVar29;
              }
              fVar31 = fStack000000000000008c;
              fVar33 = fStack0000000000000090;
              fVar40 = (float)FUN_03c7c6bc(fStack0000000000000094,0);
              fVar37 = (float)FUN_040674b0(uVar20,0);
              fVar29 = fVar28;
              fVar48 = fVar49;
              fVar44 = fVar32;
              fVar34 = (float)FUN_040674b0(uVar38,0);
              uVar20 = (ulong)(uint)fStack0000000000000084;
              uVar43 = (ulong)(uint)fStack0000000000000080;
              uVar13 = FUN_03c7c6bc(fStack0000000000000088,uVar20,uVar43,0);
              uVar45 = (ulong)(uint)((fVar37 * fVar44 + fVar31 * fVar48 + fVar33 * fVar29) -
                                    fVar40 * fVar34);
              uVar41 = (ulong)(uint)((fVar33 * fVar34 + fVar31 * fVar44 + fVar40 * fVar29) -
                                    fVar37 * fVar48);
              FUN_040677e4((fVar40 * fVar48 + fVar31 * fVar34 + fVar37 * fVar29) - fVar33 * fVar44,
                           uVar41,uVar45,
                           ((fVar31 * fVar29 - fVar37 * fVar34) - fVar40 * fVar44) - fVar33 * fVar48
                           ,uVar13,uVar20,uVar43,0);
              uVar20 = FUN_03c7c6c0(0);
              fVar33 = (float)uVar41;
              fVar40 = (float)uVar45;
              fVar44 = (float)FUN_040674b0(uVar38,0);
              fVar29 = fVar40;
              fVar48 = fVar33;
              fVar31 = (float)FUN_03c7c6bc(uVar20,0);
              fVar30 = (float)FUN_040674b0(fVar30,0);
              uVar43 = (ulong)(uint)fStack0000000000000090;
              uVar46 = (ulong)(uint)fStack000000000000008c;
              uVar13 = FUN_03c7c6bc(fStack0000000000000094,uVar43,uVar46,0);
              uVar47 = (ulong)(uint)((fVar44 * fVar31 + fVar28 * fVar48 + fVar49 * fVar29) -
                                    fVar32 * fVar30);
              uVar42 = (ulong)(uint)((fVar49 * fVar30 + fVar28 * fVar31 + fVar32 * fVar29) -
                                    fVar44 * fVar48);
              FUN_040677e4((fVar32 * fVar48 + fVar28 * fVar30 + fVar44 * fVar29) - fVar49 * fVar31,
                           uVar42,uVar47,
                           ((fVar28 * fVar29 - fVar44 * fVar30) - fVar32 * fVar31) - fVar49 * fVar48
                           ,uVar13,uVar43,uVar46,0);
              uVar13 = FUN_03c7c6c0(0);
              lVar16 = FUN_04073258(lVar16,0);
              FUN_03cb4cf0(uVar20 & 0xffffffff,uVar41 & 0xffffffff,uVar45 & 0xffffffff,uVar13,uVar42
                           ,uVar47,0);
              fVar49 = (float)uVar13;
              fVar28 = (float)FUN_03cb3880(0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_0407d5e8((fStack0000000000000074 * fVar33 +
                           fStack000000000000007c * fVar49 + fStack0000000000000070 * fVar28) -
                           fStack0000000000000078 * fVar40,
                           (fStack000000000000007c * fVar40 +
                           fStack0000000000000078 * fVar49 + fStack0000000000000070 * fVar33) -
                           fStack0000000000000074 * fVar28,
                           (fStack0000000000000078 * fVar28 +
                           fStack0000000000000074 * fVar49 + fStack0000000000000070 * fVar40) -
                           fStack000000000000007c * fVar33,
                           ((fStack0000000000000070 * fVar49 - fStack000000000000007c * fVar28) -
                           fStack0000000000000078 * fVar33) - fStack0000000000000074 * fVar40,lVar16
                           ,0);
            }
            iStack0000000000000018 = iStack0000000000000018 + 1;
            iVar24 = iVar24 + 1;
          } while (iVar10 != iStack0000000000000018);
        }
        FUN_03e1c250(&stack0x000002a0);
        iStack0000000000000020 = iStack0000000000000020 + 1;
        unaff_x27 = (long *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__;
        iStack0000000000000018 = iVar10;
        if (*(long *)(unaff_x19 + 0x28) == 0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


