/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler$$BothNullHandling
ENTRY_POINT: 03e29f24
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


void Unity_VisualScripting_InequalityHandler__BothNullHandling
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  float *pfVar18;
  long in_x9;
  ulong uVar19;
  int *in_x10;
  int *piVar20;
  float *pfVar21;
  float *pfVar22;
  long unaff_x19;
  undefined1 *__src;
  int iVar23;
  uint uVar24;
  long *unaff_x27;
  float fVar25;
  float fVar26;
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
  undefined4 uVar37;
  undefined8 uVar38;
  float fVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  float fVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
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
  
  do {
    in_x9 = in_x9 + -1;
    piVar20 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar9 = (undefined8 *)FUN_01ecb238();
      goto LAB_03e29f4c;
    }
    plVar10 = (long *)(in_x10 + 2);
    in_x10 = piVar20;
  } while (*plVar10 != param_3);
  puVar9 = (undefined8 *)(param_1 + (long)*piVar20 * 0x10 + 0x138);
LAB_03e29f4c:
  iVar8 = (*(code *)*puVar9)();
  if (iVar8 == 1) {
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (plVar10 = (long *)FUN_03e18b6c(), plVar10 == (long *)0x0)) goto LAB_03e29e84;
    lVar15 = *plVar10;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_03e29ff4;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0);
LAB_03e29ff4:
    lVar15 = (*(code *)*puVar9)(plVar10,0,puVar9[1]);
    if (lVar15 == 0) goto LAB_03e29e84;
    iVar8 = -0x80000000;
    if (fStack0000000000000024 != INFINITY) {
      iVar8 = (int)fStack0000000000000024;
    }
    fVar25 = (float)(*(char *)(lVar15 + 0x30) + iVar8 + -1);
  }
  else {
    fVar25 = 2.1474836e+09;
    if (fStack0000000000000024 != INFINITY) {
      fVar25 = (float)((int)fStack0000000000000024 + -1);
    }
  }
  FUN_03e2c054();
  puVar5 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  puVar4 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
  fVar3 = DAT_00c92a2c;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    iStack0000000000000018 = 0;
    iStack0000000000000020 = 0;
    fVar26 = fStack000000000000001c + DAT_00c92a2c;
    while (plVar11 = (long *)FUN_03e18b6c(),
          plVar10 = (long *)
                    Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
          , puVar6 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__,
          plVar11 != (long *)0x0) {
      lVar15 = *plVar11;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x27) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
            goto Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x27,0);
Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1:
      iVar8 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if (iVar8 <= iStack0000000000000020) {
        *(undefined1 *)(unaff_x19 + 0xf8) = 0;
        return;
      }
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (plVar11 = (long *)FUN_03e18b6c(), plVar11 == (long *)0x0)) break;
      lVar15 = *plVar11;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) ==
              *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03e2a18c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)
                                     Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0)
      ;
LAB_03e2a18c:
      uVar12 = (*(code *)*puVar9)(plVar11,iStack0000000000000020,puVar9[1]);
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar15 = FUN_04070398(*(long *)(unaff_x19 + 0x28),0), lVar15 == 0)) break;
      FUN_0407cee0(&stack0x00000098,lVar15,0);
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
                (&stack0x000002a0,uVar12,&stack0x000000e0,3);
      if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      fVar27 = (float)FUN_0314b598(*(long *)(unaff_x19 + 0x110),iStack0000000000000020,
                                   *(undefined8 *)
                                    Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                  );
      fVar48 = fVar27 + fVar3;
      if (*(int *)(unaff_x19 + 0x38) == 0) {
        bVar7 = in_stack_00000068._4_4_ <= fVar26;
        bVar2 = bVar7 && fVar48 < in_stack_00000068._4_4_;
        if (bVar7 && fVar48 < in_stack_00000068._4_4_) {
          in_stack_00000068._4_4_ = in_stack_00000068._4_4_ - fVar27;
        }
      }
      else {
        bVar2 = false;
        in_stack_00000068._4_4_ = 0.0;
      }
      lVar15 = *(long *)(unaff_x19 + 0x108);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(undefined4 *)(lVar15 + 0x18) = 0;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      iVar8 = iStack0000000000000018;
      if (!bVar2 && in_stack_00000068._4_4_ <= fVar48) {
        while (uVar19 = FUN_03e2c8c8(), (uVar19 & 1) != 0) {
          lVar15 = *(long *)(unaff_x19 + 0x108);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = *(long *)(lVar15 + 0x10);
          lVar16 = *plVar10;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar15 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
            *(float *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = in_stack_00000068._4_4_ / fVar27;
          }
          else {
            FUN_0314b890(lVar15,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          iVar23 = *(int *)(unaff_x19 + 0x38);
          if (iVar23 == 0) {
            fVar28 = fStack000000000000001c;
            if (fStack0000000000000024 <= 1.0) goto LAB_03e2b708;
            bVar7 = in_stack_00000068._4_4_ < fVar27;
            fVar28 = fStack000000000000001c / fVar25 + in_stack_00000068._4_4_;
            bVar2 = bVar7 && fVar48 < fVar28;
            in_stack_00000068._4_4_ = fVar28 - fVar27;
            if (!bVar7 || fVar48 >= fVar28) {
              in_stack_00000068._4_4_ = fVar28;
            }
          }
          else if (iVar23 == 1) {
            fStack0000000000000024 =
                 (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),
                                     *(undefined4 *)(unaff_x19 + 0x44),0);
            fVar28 = fStack0000000000000024;
LAB_03e2b708:
            bVar2 = false;
            in_stack_00000068._4_4_ = in_stack_00000068._4_4_ + fVar28;
          }
          else if (iVar23 == 2) {
            if ((*(uint *)(unaff_x19 + 0x44) & 0x7fffffff) < 0x7f800001) {
              fStack0000000000000024 = (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),0);
            }
            else {
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar15 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar8,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                   );
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar15 = FUN_023361c8(lVar15,*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Count__
                                   );
              if (DAT_0482ee18 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee18 = '\x01';
              }
              lVar13 = *(long *)puVar4;
              iVar23 = *(int *)(unaff_x19 + 0x4c);
              lVar16 = *(long *)(lVar13 + 0xb8);
              if ((iVar23 == 2) || (iVar23 == 5)) {
                if (DAT_0482ee1d == '\0') {
                  thunk_FUN_01efb3a4(puVar4);
                  lVar13 = *(long *)puVar4;
                  DAT_0482ee1d = '\x01';
                  iVar23 = *(int *)(unaff_x19 + 0x4c);
                  lVar16 = *(long *)(lVar13 + 0xb8);
                }
                pfVar18 = (float *)(lVar16 + 0x48);
                pfVar21 = (float *)(lVar16 + 0x4c);
                pfVar22 = (float *)(lVar16 + 0x50);
              }
              else {
                pfVar18 = (float *)(lVar16 + 0x3c);
                pfVar21 = (float *)(lVar16 + 0x40);
                pfVar22 = (float *)(lVar16 + 0x44);
              }
              if ((iVar23 == 1) || (iVar23 == 4)) {
                if (DAT_0482ee19 == '\0') {
                  thunk_FUN_01efb3a4(puVar4);
                  lVar13 = *(long *)puVar4;
                  DAT_0482ee19 = '\x01';
                }
                lVar13 = *(long *)(lVar13 + 0xb8);
                pfVar18 = (float *)(lVar13 + 0x18);
                pfVar21 = (float *)(lVar13 + 0x1c);
                pfVar22 = (float *)(lVar13 + 0x20);
              }
              fVar43 = *pfVar22;
              fVar47 = *pfVar21;
              fVar28 = *pfVar18;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar19 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                                 (lVar15,0,0);
              if ((uVar19 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar15 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar8,
                                      *(undefined8 *)
                                       Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                     );
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar15 = FUN_0233642c(lVar15,*(undefined8 *)PTR_DAT_04579bb8);
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar19 = FUN_04073094(lVar15,0,0);
                if ((uVar19 & 1) != 0) {
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar13 = FUN_04070398(lVar15,0);
                  if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar16 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar8,
                                        *(undefined8 *)
                                         Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                       );
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar16 = FUN_04073258(lVar16,0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  FUN_0407e3a8(fVar28,lVar16,0);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  fVar28 = (float)FUN_0407e758(lVar13,0);
                  fVar29 = fVar47;
                  fVar30 = fVar43;
                  lVar13 = FUN_04070398(lVar15,0);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  fVar31 = (float)FUN_0407ec3c(lVar13,0);
                  fVar28 = fVar28 * fVar31;
                  fVar47 = fVar47 * fVar29;
                  fVar43 = fVar43 * fVar30;
                }
              }
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar19 = FUN_04073094(lVar15,0,0);
              plVar10 = (long *)
                        Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
              ;
              if ((uVar19 & 1) != 0) {
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar13 = FUN_04050c14(lVar15,0);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                FUN_04051ba0(&stack0x00000098,lVar13,0);
                fVar31 = fStack00000000000000ac;
                fVar30 = fStack00000000000000a8;
                fVar29 = fStack00000000000000a4;
                lVar15 = FUN_022c6694(lVar15,*(undefined8 *)
                                              Method_UnityEngine_UIElements_StyleDataRef<RareData>_Write__
                                     );
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar1 = *(uint *)(lVar15 + 0x18);
                if (0 < (int)uVar1) {
                  uVar24 = 0;
                  fVar30 = fVar31;
                  do {
                    if (uVar1 <= uVar24) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    lVar13 = *(long *)(lVar15 + (long)(int)uVar24 * 8 + 0x20);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar13 = FUN_04050c14(lVar13,0);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_04051ba0(&stack0x00000098,lVar13,0);
                    uVar1 = *(uint *)(lVar15 + 0x18);
                    fVar31 = fVar29 + fVar29;
                    if (fVar29 + fVar29 <= fStack00000000000000a4 + fStack00000000000000a4) {
                      fVar31 = fStack00000000000000a4 + fStack00000000000000a4;
                    }
                    fVar29 = fVar30 + fVar30;
                    if (fVar30 + fVar30 <= fStack00000000000000ac + fStack00000000000000ac) {
                      fVar29 = fStack00000000000000ac + fStack00000000000000ac;
                    }
                    uVar24 = uVar24 + 1;
                    fVar30 = fVar29 * 0.5;
                    fVar29 = fVar31 * 0.5;
                    fVar31 = fVar30;
                  } while ((int)uVar24 < (int)uVar1);
                }
                plVar10 = (long *)
                          Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                ;
                if (DAT_0482f03e == '\0') {
                  thunk_FUN_01efb3a4(puVar5);
                  DAT_0482f03e = '\x01';
                }
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                fVar28 = fVar28 * (fVar29 + fVar29);
                fVar47 = fVar47 * (fVar30 + fVar30);
                fVar43 = fVar43 * (fVar31 + fVar31);
                fStack0000000000000024 = SQRT(fVar43 * fVar43 + fVar47 * fVar47 + fVar28 * fVar28);
              }
            }
            memcpy(&stack0x00000098,&stack0x000002a0,0x48);
            if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar38 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar8,
                                  *(undefined8 *)
                                   Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                 );
            uVar12 = *(undefined8 *)PTR_DAT_04579bd0;
            memcpy(&stack0x000002e8,&stack0x00000098,0x48);
            FUN_0240e31c(uVar38,fStack0000000000000024,&stack0x000002e8,&stack0x0000029c,uVar12);
            bVar2 = false;
            in_stack_00000068._4_4_ = fVar27 + 1.0;
            if (in_stack_0000029c < 1.0) {
              in_stack_00000068._4_4_ = fVar27 * in_stack_0000029c;
            }
          }
          else {
            bVar2 = false;
          }
          iVar8 = iVar8 + 1;
          if ((bVar2) || (fVar48 < in_stack_00000068._4_4_)) break;
        }
      }
      lVar15 = *(long *)(unaff_x19 + 0xd0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar23 = *(int *)(lVar15 + 0x18) + -1;
      if (iVar8 <= iVar23) {
        while( true ) {
          uVar12 = FUN_030f28e4(lVar15,iVar23,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                               );
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar19 = FUN_04073094(uVar12,0,0);
          if ((uVar19 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar12 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar23,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                 );
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_040770d0(uVar12,0);
            if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_030f42ac(*(long *)(unaff_x19 + 0xd0),iVar23,*(undefined8 *)PTR_DAT_04579bc0);
          }
          iVar23 = iVar23 + -1;
          if (iVar23 < iVar8) break;
          lVar15 = *(long *)(unaff_x19 + 0xd0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
      }
      if (iStack0000000000000018 < iVar8) {
        iVar23 = 0;
        do {
          if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar15 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iStack0000000000000018,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                               );
          if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar38 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar23,
                                *(undefined8 *)
                                 Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                               );
          uVar12 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_IsModified__;
          memcpy(&stack0x00000330,&stack0x000002a0,0x48);
          FUN_02409430(uVar38,&stack0x00000330,&stack0x00000290,&stack0x00000280,&stack0x00000270,
                       uVar12);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = FUN_04073258(lVar15,0);
          fVar27 = in_stack_00000294;
          fVar48 = in_stack_00000298;
          FUN_03c7c6bc(in_stack_00000290,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0407d468(lVar13,0);
          if (*(int *)(unaff_x19 + 0x38) == 2) {
            memcpy(&stack0x00000330,&stack0x000002a0,0x48);
            if (iStack0000000000000018 + 1 < iVar8) {
              memcpy(&stack0x00000200,&stack0x00000330,0x48);
              if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar12 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar23 + 1,
                                    *(undefined8 *)
                                     Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                   );
              __src = &stack0x00000200;
            }
            else {
              __src = &stack0x000001b0;
              memcpy(&stack0x000001b0,&stack0x00000330,0x48);
              uVar12 = 0x3f800000;
            }
            memcpy(&stack0x00000160,__src,0x48);
            uVar38 = *(undefined8 *)
                      Method_System_Configuration_ConfigurationSection_SerializeSection__;
            memcpy(&stack0x00000378,&stack0x00000160,0x48);
            fVar28 = (float)FUN_0240a9dc(uVar12,&stack0x00000378,uVar38);
            in_stack_00000280 = CONCAT44(fVar27 - in_stack_00000294,fVar28 - in_stack_00000290);
            in_stack_00000288 = fVar48 - in_stack_00000298;
          }
          if (DAT_0482ee1a == '\0') {
            thunk_FUN_01efb3a4(puVar5);
            DAT_0482ee1a = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            cVar14 = DAT_0482ee1a;
          }
          else {
            cVar14 = '\x01';
          }
          fVar27 = in_stack_00000278 * in_stack_00000278 +
                   in_stack_00000270 * in_stack_00000270 + in_stack_00000274 * in_stack_00000274;
          fVar48 = 1.0 / SQRT(fVar27);
          fVar28 = (float)in_stack_00000280;
          fVar47 = (float)(in_stack_00000280 >> 0x20);
          fStack0000000000000094 = in_stack_00000270 * fVar48;
          fStack0000000000000090 = in_stack_00000274 * fVar48;
          fStack000000000000008c = in_stack_00000278 * fVar48;
          if (fVar27 <= 1.1754944e-38) {
            fStack0000000000000090 = 0.0;
            fStack0000000000000094 = 0.0;
            fStack000000000000008c = 0.0;
          }
          if (cVar14 == '\0') {
            thunk_FUN_01efb3a4(puVar5);
            DAT_0482ee1a = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar27 = in_stack_00000288 * in_stack_00000288 + fVar28 * fVar28 + fVar47 * fVar47;
          fVar48 = 1.0 / SQRT(fVar27);
          fVar28 = fVar28 * fVar48;
          fVar43 = fVar47 * fVar48;
          fStack0000000000000088 = fVar28;
          fStack0000000000000084 = fVar43;
          fStack0000000000000080 = in_stack_00000288 * fVar48;
          if (fVar27 <= 1.1754944e-38) {
            fStack0000000000000084 = 0.0;
            fStack0000000000000088 = 0.0;
            fStack0000000000000080 = 0.0;
          }
          if (*(int *)(unaff_x19 + 0x3c) == 1) {
            lVar13 = FUN_04070398();
            if (DAT_0482ee19 == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0482ee19 = '\x01';
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
            fStack0000000000000090 = *(float *)(lVar16 + 0x1c);
            fStack000000000000008c = *(float *)(lVar16 + 0x20);
            FUN_0407e3a8(*(undefined4 *)(lVar16 + 0x18),lVar13,0);
            fStack0000000000000094 = (float)FUN_03c7c6c0(0);
            lVar13 = FUN_04070398();
            if (DAT_0482ee1d == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0482ee1d = '\x01';
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
            fVar28 = *(float *)(lVar16 + 0x4c);
            fVar43 = *(float *)(lVar16 + 0x50);
            FUN_0407e3a8(*(undefined4 *)(lVar16 + 0x48),lVar13,0);
            fStack0000000000000088 = (float)FUN_03c7c6c0(0);
            fStack0000000000000080 = fVar43;
            fStack0000000000000084 = fVar28;
          }
          else if (*(int *)(unaff_x19 + 0x3c) == 2) {
            if (DAT_0482ee19 == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0482ee19 = '\x01';
            }
            lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
            fStack0000000000000090 = *(float *)(lVar13 + 0x1c);
            fStack000000000000008c = *(float *)(lVar13 + 0x20);
            fStack0000000000000094 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar13 + 0x18),0);
            if (DAT_0482ee1d == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0482ee1d = '\x01';
            }
            lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
            fVar28 = *(float *)(lVar13 + 0x4c);
            fVar43 = *(float *)(lVar13 + 0x50);
            fStack0000000000000088 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar13 + 0x48),0);
            fStack0000000000000080 = fVar43;
            fStack0000000000000084 = fVar28;
          }
          fVar27 = (float)FUN_03e23f04();
          if (DAT_0482ee1a == '\0') {
            thunk_FUN_01efb3a4(puVar5);
            DAT_0482ee1a = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar29 = fVar43 * fVar43 + fVar27 * fVar27 + fVar28 * fVar28;
          fVar30 = 1.0 / SQRT(fVar29);
          fVar27 = fVar27 * fVar30;
          fVar28 = fVar28 * fVar30;
          fVar31 = 0.0;
          fVar48 = fVar27;
          fStack0000000000000078 = fVar28;
          fStack0000000000000074 = fVar43 * fVar30;
          if (fVar29 <= 1.1754944e-38) {
            fVar48 = fVar31;
            fStack0000000000000078 = fVar31;
            fStack0000000000000074 = fVar31;
          }
          fVar43 = (float)FUN_03e23f04();
          if (DAT_0482ee1a == '\0') {
            thunk_FUN_01efb3a4(puVar5);
            DAT_0482ee1a = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar27 = fVar28 * fVar28 + fVar43 * fVar43 + fVar27 * fVar27;
          fStack0000000000000070 = fVar43 * (1.0 / SQRT(fVar27));
          if (fVar27 <= 1.1754944e-38) {
            fStack0000000000000070 = 0.0;
          }
          FUN_03cb4cf0(fVar48,0);
          FUN_03cb3880(0);
          fStack000000000000007c = (float)FUN_04066fb8(0);
          lVar13 = FUN_04073258(lVar15,0);
          fVar27 = fStack0000000000000094;
          fVar48 = fStack0000000000000084;
          fVar28 = fStack0000000000000080;
          FUN_03cb4cf0(fStack0000000000000088,0);
          fVar43 = (float)FUN_03cb3880(0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar29 = (fStack0000000000000078 * fVar43 +
                   fStack0000000000000074 * fVar27 + fStack0000000000000070 * fVar28) -
                   fStack000000000000007c * fVar48;
          uVar19 = (ulong)(uint)((fStack000000000000007c * fVar28 +
                                 fStack0000000000000078 * fVar27 + fStack0000000000000070 * fVar48)
                                - fStack0000000000000074 * fVar43);
          FUN_0407d5e8((fStack0000000000000074 * fVar48 +
                       fStack000000000000007c * fVar27 + fStack0000000000000070 * fVar43) -
                       fStack0000000000000078 * fVar28,uVar19,fVar29,
                       ((fStack0000000000000070 * fVar27 - fStack000000000000007c * fVar43) -
                       fStack0000000000000078 * fVar48) - fStack0000000000000074 * fVar28,lVar13,0);
          uVar1 = *(uint *)(unaff_x19 + 0x50);
          if ((uVar1 & 1) != 0) {
            if ((uVar1 >> 1 & 1) != 0) {
              uVar19 = (ulong)(uint)in_stack_00000274;
              FUN_04073258(lVar15,0);
              fVar29 = in_stack_00000278;
              FUN_03e2cbdc(in_stack_00000270,uVar19,in_stack_00000278,in_stack_00000280 & 0xffffffff
                           ,fVar47,in_stack_00000288);
            }
            fVar39 = (float)uVar19;
            fVar30 = (float)FUN_03e2ce3c((uint *)(unaff_x19 + 0x50));
            fVar48 = fStack0000000000000090;
            fVar28 = fStack000000000000008c;
            fVar31 = (float)FUN_03c7c6bc(0);
            fVar27 = fStack0000000000000080;
            fVar43 = fStack0000000000000084;
            fVar32 = (float)FUN_03c7c6bc(fStack0000000000000088,0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fStack0000000000000030 = fVar48 * fVar27 - fVar28 * fVar43;
            fVar27 = fVar28 * fVar32 - fVar31 * fVar27;
            fVar28 = fVar31 * fVar43 - fVar48 * fVar32;
            fVar48 = SQRT(fVar28 * fVar28 +
                          fStack0000000000000030 * fStack0000000000000030 + fVar27 * fVar27);
            if (fVar48 <= DAT_00c926ac) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar18 = *(float **)(*(long *)puVar4 + 0xb8);
              fStack0000000000000030 = *pfVar18;
              fStack000000000000002c = pfVar18[1];
              fVar48 = pfVar18[2];
              fVar27 = fStack0000000000000030;
            }
            else {
              fStack0000000000000030 = fStack0000000000000030 / fVar48;
              fStack000000000000002c = fVar27 / fVar48;
              fVar48 = fVar28 / fVar48;
            }
            lVar13 = FUN_04073258(lVar15,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar33 = (float)FUN_0407d3c8(lVar13,0);
            fVar43 = fStack000000000000008c;
            fVar31 = fStack0000000000000090;
            fVar34 = (float)FUN_03c7c6bc(fStack0000000000000094,fStack0000000000000090,0);
            fVar32 = fStack0000000000000084;
            fVar36 = fStack0000000000000080;
            fVar35 = (float)FUN_03c7c6bc(fStack0000000000000088,fStack0000000000000084,0);
            fVar35 = fVar29 * fVar35;
            uVar19 = (ulong)(uint)(fVar27 + fVar30 * fStack000000000000002c + fVar39 * fVar31 +
                                            fVar29 * fVar32);
            fVar29 = fVar28 + fVar30 * fVar48 + fVar39 * fVar43 + fVar29 * fVar36;
            FUN_0407d468(fVar33 + fVar30 * fStack0000000000000030 + fVar39 * fVar34 + fVar35,uVar19,
                         lVar13,0);
          }
          uVar1 = *(uint *)(unaff_x19 + 0x98);
          if ((uVar1 & 1) != 0) {
            if ((uVar1 >> 1 & 1) != 0) {
              FUN_04073258(lVar15,0);
              FUN_03e2cbdc(in_stack_00000270,in_stack_00000274,in_stack_00000278,
                           in_stack_00000280 & 0xffffffff,fVar47,in_stack_00000288);
            }
            lVar13 = FUN_04073258(lVar15,0);
            fVar27 = fStack0000000000000090;
            fVar48 = fStack000000000000008c;
            FUN_03c7c6bc(fStack0000000000000094,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar28 = (float)FUN_0407e758(lVar13,0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar43 = DAT_00c926ac;
            fVar29 = SQRT(fVar48 * fVar48 + fVar28 * fVar28 + fVar27 * fVar27);
            if (fVar29 <= DAT_00c926ac) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar18 = *(float **)(*(long *)puVar4 + 0xb8);
              fVar28 = *pfVar18;
              fVar27 = pfVar18[1];
              fVar48 = pfVar18[2];
            }
            else {
              fVar28 = fVar28 / fVar29;
              fVar27 = fVar27 / fVar29;
              fVar48 = fVar48 / fVar29;
            }
            uVar40 = (ulong)(uint)fVar27;
            uVar19 = FUN_03c7c6c0(fVar28,0);
            fVar30 = (float)uVar40;
            lVar13 = FUN_04073258(lVar15,0);
            fVar27 = fStack0000000000000084;
            fVar28 = fStack0000000000000080;
            FUN_03c7c6bc(fStack0000000000000088,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar29 = (float)FUN_0407e758(lVar13,0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar31 = SQRT(fVar28 * fVar28 + fVar29 * fVar29 + fVar27 * fVar27);
            if (fVar31 <= fVar43) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar18 = *(float **)(*(long *)puVar4 + 0xb8);
              fVar29 = *pfVar18;
              fVar27 = pfVar18[1];
              fVar28 = pfVar18[2];
            }
            else {
              fVar29 = fVar29 / fVar31;
              fVar27 = fVar27 / fVar31;
              fVar28 = fVar28 / fVar31;
            }
            uVar41 = (ulong)(uint)fVar27;
            uVar12 = FUN_03c7c6c0(fVar29,0);
            uVar42 = uVar41;
            fVar27 = fVar28;
            fVar36 = (float)FUN_03e2ce3c((uint *)(unaff_x19 + 0x98));
            fVar35 = (float)uVar42;
            fVar32 = fVar30;
            fVar39 = fVar48;
            fVar33 = (float)FUN_03c7c6bc(uVar19,0);
            uVar42 = uVar41;
            fVar31 = fVar28;
            fVar34 = (float)FUN_03c7c6bc(uVar12,0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar29 = fVar32 * fVar31 - fVar39 * (float)uVar42;
            fVar39 = fVar39 * fVar34 - fVar33 * fVar31;
            fVar31 = fVar33 * (float)uVar42 - fVar32 * fVar34;
            fVar32 = SQRT(fVar31 * fVar31 + fVar29 * fVar29 + fVar39 * fVar39);
            if (fVar32 <= fVar43) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar18 = *(float **)(*(long *)puVar4 + 0xb8);
              fStack000000000000004c = *pfVar18;
              fStack000000000000002c = pfVar18[1];
              fVar31 = pfVar18[2];
            }
            else {
              fVar29 = fVar29 / fVar32;
              fVar39 = fVar39 / fVar32;
              fVar31 = fVar31 / fVar32;
              fStack000000000000002c = fVar39;
              fStack000000000000004c = fVar29;
            }
            lVar13 = FUN_04073258(lVar15,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar43 = (float)FUN_0407d9e8(lVar13,0);
            fVar32 = (float)FUN_03c7c6bc(uVar19 & 0xffffffff,uVar40 & 0xffffffff,0);
            fVar33 = (float)FUN_03c7c6bc(uVar12,uVar41,0);
            uVar19 = (ulong)(uint)(fVar39 + fVar36 * fStack000000000000002c + fVar35 * fVar30 +
                                            fVar27 * (float)uVar41);
            fVar29 = fVar29 + fVar36 * fVar31 + fVar35 * fVar48 + fVar27 * fVar28;
            FUN_0407da88(fVar43 + fVar36 * fStack000000000000004c + fVar35 * fVar32 +
                                  fVar27 * fVar33,uVar19,lVar13,0);
          }
          uVar1 = *(uint *)(unaff_x19 + 0x74);
          if ((uVar1 & 1) != 0) {
            if ((uVar1 >> 1 & 1) != 0) {
              uVar19 = (ulong)(uint)in_stack_00000274;
              FUN_04073258(lVar15,0);
              fVar29 = in_stack_00000278;
              FUN_03e2cbdc(in_stack_00000270,uVar19,in_stack_00000278,in_stack_00000280 & 0xffffffff
                           ,fVar47,in_stack_00000288);
              if (*(int *)(unaff_x19 + 0x94) == 3) {
                puVar17 = *(undefined4 **)
                           (*(long *)
                             Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                           + 0xb8);
                uVar19 = (ulong)(uint)puVar17[1];
                fVar29 = (float)puVar17[2];
                fStack0000000000000070 = (float)puVar17[3];
                fStack000000000000007c = (float)FUN_03cb3880(*puVar17,0);
                fStack0000000000000078 = (float)uVar19;
                fStack0000000000000074 = fVar29;
              }
            }
            uVar37 = FUN_03e2ce3c((uint *)(unaff_x19 + 0x74));
            fVar27 = fStack0000000000000090;
            fVar28 = fStack000000000000008c;
            fVar43 = (float)FUN_03c7c6bc(0);
            fVar48 = fStack0000000000000080;
            fVar47 = fStack0000000000000084;
            fVar30 = (float)FUN_03c7c6bc(0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar31 = fVar27 * fVar48 - fVar28 * fVar47;
            fVar48 = fVar28 * fVar30 - fVar43 * fVar48;
            fVar27 = fVar43 * fVar47 - fVar27 * fVar30;
            fVar28 = SQRT(fVar27 * fVar27 + fVar31 * fVar31 + fVar48 * fVar48);
            if (fVar28 <= DAT_00c926ac) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar18 = *(float **)(*(long *)puVar4 + 0xb8);
              fVar31 = *pfVar18;
              fVar48 = pfVar18[1];
              fVar27 = pfVar18[2];
            }
            else {
              fVar31 = fVar31 / fVar28;
              fVar48 = fVar48 / fVar28;
              fVar27 = fVar27 / fVar28;
            }
            fVar30 = fStack000000000000008c;
            fVar32 = fStack0000000000000090;
            fVar39 = (float)FUN_03c7c6bc(fStack0000000000000094,0);
            fVar36 = (float)FUN_040674b0(uVar19,0);
            fVar28 = fVar27;
            fVar47 = fVar48;
            fVar43 = fVar31;
            fVar33 = (float)FUN_040674b0(uVar37,0);
            uVar19 = (ulong)(uint)fStack0000000000000084;
            uVar42 = (ulong)(uint)fStack0000000000000080;
            uVar12 = FUN_03c7c6bc(fStack0000000000000088,uVar19,uVar42,0);
            uVar44 = (ulong)(uint)((fVar36 * fVar43 + fVar30 * fVar47 + fVar32 * fVar28) -
                                  fVar39 * fVar33);
            uVar40 = (ulong)(uint)((fVar32 * fVar33 + fVar30 * fVar43 + fVar39 * fVar28) -
                                  fVar36 * fVar47);
            FUN_040677e4((fVar39 * fVar47 + fVar30 * fVar33 + fVar36 * fVar28) - fVar32 * fVar43,
                         uVar40,uVar44,
                         ((fVar30 * fVar28 - fVar36 * fVar33) - fVar39 * fVar43) - fVar32 * fVar47,
                         uVar12,uVar19,uVar42,0);
            uVar19 = FUN_03c7c6c0(0);
            fVar32 = (float)uVar40;
            fVar39 = (float)uVar44;
            fVar43 = (float)FUN_040674b0(uVar37,0);
            fVar28 = fVar39;
            fVar47 = fVar32;
            fVar30 = (float)FUN_03c7c6bc(uVar19,0);
            fVar29 = (float)FUN_040674b0(fVar29,0);
            uVar42 = (ulong)(uint)fStack0000000000000090;
            uVar45 = (ulong)(uint)fStack000000000000008c;
            uVar12 = FUN_03c7c6bc(fStack0000000000000094,uVar42,uVar45,0);
            uVar46 = (ulong)(uint)((fVar43 * fVar30 + fVar27 * fVar47 + fVar48 * fVar28) -
                                  fVar31 * fVar29);
            uVar41 = (ulong)(uint)((fVar48 * fVar29 + fVar27 * fVar30 + fVar31 * fVar28) -
                                  fVar43 * fVar47);
            FUN_040677e4((fVar31 * fVar47 + fVar27 * fVar29 + fVar43 * fVar28) - fVar48 * fVar30,
                         uVar41,uVar46,
                         ((fVar27 * fVar28 - fVar43 * fVar29) - fVar31 * fVar30) - fVar48 * fVar47,
                         uVar12,uVar42,uVar45,0);
            uVar12 = FUN_03c7c6c0(0);
            lVar15 = FUN_04073258(lVar15,0);
            FUN_03cb4cf0(uVar19 & 0xffffffff,uVar40 & 0xffffffff,uVar44 & 0xffffffff,uVar12,uVar41,
                         uVar46,0);
            fVar48 = (float)uVar12;
            fVar27 = (float)FUN_03cb3880(0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_0407d5e8((fStack0000000000000074 * fVar32 +
                         fStack000000000000007c * fVar48 + fStack0000000000000070 * fVar27) -
                         fStack0000000000000078 * fVar39,
                         (fStack000000000000007c * fVar39 +
                         fStack0000000000000078 * fVar48 + fStack0000000000000070 * fVar32) -
                         fStack0000000000000074 * fVar27,
                         (fStack0000000000000078 * fVar27 +
                         fStack0000000000000074 * fVar48 + fStack0000000000000070 * fVar39) -
                         fStack000000000000007c * fVar32,
                         ((fStack0000000000000070 * fVar48 - fStack000000000000007c * fVar27) -
                         fStack0000000000000078 * fVar32) - fStack0000000000000074 * fVar39,lVar15,0
                        );
          }
          iStack0000000000000018 = iStack0000000000000018 + 1;
          iVar23 = iVar23 + 1;
        } while (iVar8 != iStack0000000000000018);
      }
      FUN_03e1c250(&stack0x000002a0);
      iStack0000000000000020 = iStack0000000000000020 + 1;
      unaff_x27 = (long *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__;
      iStack0000000000000018 = iVar8;
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
    }
  }
LAB_03e29e84:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


