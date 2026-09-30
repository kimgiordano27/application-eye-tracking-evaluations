/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler.<>c$$.cctor
ENTRY_POINT: 03e2a034
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


void Unity_VisualScripting_InequalityHandler_<>c___cctor(float param_1)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  char cVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  float *pfVar17;
  ulong uVar18;
  int *piVar19;
  float *pfVar20;
  float *pfVar21;
  long unaff_x19;
  undefined1 *__src;
  int iVar22;
  uint uVar23;
  long *unaff_x27;
  long *plVar24;
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
  undefined4 uVar36;
  undefined8 uVar37;
  float fVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  float fVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  float fVar46;
  float fVar47;
  float fStack0000000000000010;
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
  
  fStack0000000000000010 = fStack000000000000001c / param_1;
  FUN_03e2c054();
  puVar5 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  puVar4 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
  fVar3 = DAT_00c92a2c;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    iStack0000000000000018 = 0;
    iStack0000000000000020 = 0;
    fVar25 = fStack000000000000001c + DAT_00c92a2c;
    while (plVar9 = (long *)FUN_03e18b6c(),
          plVar24 = (long *)
                    Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
          , puVar6 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__,
          plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*unaff_x27,0);
Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1:
      iVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (iVar8 <= iStack0000000000000020) {
        *(undefined1 *)(unaff_x19 + 0xf8) = 0;
        return;
      }
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (plVar9 = (long *)FUN_03e18b6c(), plVar9 == (long *)0x0)) break;
      lVar14 = *plVar9;
      uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03e2a18c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01ecb238(plVar9,*(long *)
                                     Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0)
      ;
LAB_03e2a18c:
      uVar11 = (*(code *)*puVar10)(plVar9,iStack0000000000000020,puVar10[1]);
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar14 = FUN_04070398(*(long *)(unaff_x19 + 0x28),0), lVar14 == 0)) break;
      FUN_0407cee0(&stack0x00000098,lVar14,0);
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
                (&stack0x000002a0,uVar11,&stack0x000000e0,3);
      if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      fVar26 = (float)FUN_0314b598(*(long *)(unaff_x19 + 0x110),iStack0000000000000020,
                                   *(undefined8 *)
                                    Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                  );
      fVar47 = fVar26 + fVar3;
      if (*(int *)(unaff_x19 + 0x38) == 0) {
        bVar7 = in_stack_00000068._4_4_ <= fVar25;
        bVar2 = bVar7 && fVar47 < in_stack_00000068._4_4_;
        if (bVar7 && fVar47 < in_stack_00000068._4_4_) {
          in_stack_00000068._4_4_ = in_stack_00000068._4_4_ - fVar26;
        }
      }
      else {
        bVar2 = false;
        in_stack_00000068._4_4_ = 0.0;
      }
      lVar14 = *(long *)(unaff_x19 + 0x108);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      iVar8 = iStack0000000000000018;
      if (!bVar2 && in_stack_00000068._4_4_ <= fVar47) {
        while (uVar18 = FUN_03e2c8c8(), (uVar18 & 1) != 0) {
          lVar14 = *(long *)(unaff_x19 + 0x108);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *(long *)(lVar14 + 0x10);
          lVar15 = *plVar24;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(float *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = in_stack_00000068._4_4_ / fVar26;
          }
          else {
            FUN_0314b890(lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          iVar22 = *(int *)(unaff_x19 + 0x38);
          if (iVar22 == 0) {
            fVar27 = fStack000000000000001c;
            if (fStack0000000000000024 <= 1.0) goto LAB_03e2b708;
            bVar7 = in_stack_00000068._4_4_ < fVar26;
            fVar27 = fStack0000000000000010 + in_stack_00000068._4_4_;
            bVar2 = bVar7 && fVar47 < fVar27;
            in_stack_00000068._4_4_ = fVar27 - fVar26;
            if (!bVar7 || fVar47 >= fVar27) {
              in_stack_00000068._4_4_ = fVar27;
            }
          }
          else if (iVar22 == 1) {
            fStack0000000000000024 =
                 (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),
                                     *(undefined4 *)(unaff_x19 + 0x44),0);
            fVar27 = fStack0000000000000024;
LAB_03e2b708:
            bVar2 = false;
            in_stack_00000068._4_4_ = in_stack_00000068._4_4_ + fVar27;
          }
          else if (iVar22 == 2) {
            if ((*(uint *)(unaff_x19 + 0x44) & 0x7fffffff) < 0x7f800001) {
              fStack0000000000000024 = (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),0);
            }
            else {
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar14 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar8,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                   );
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar14 = FUN_023361c8(lVar14,*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Count__
                                   );
              if (DAT_0482ee18 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee18 = '\x01';
              }
              lVar12 = *(long *)puVar4;
              iVar22 = *(int *)(unaff_x19 + 0x4c);
              lVar15 = *(long *)(lVar12 + 0xb8);
              if ((iVar22 == 2) || (iVar22 == 5)) {
                if (DAT_0482ee1d == '\0') {
                  thunk_FUN_01efb3a4(puVar4);
                  lVar12 = *(long *)puVar4;
                  DAT_0482ee1d = '\x01';
                  iVar22 = *(int *)(unaff_x19 + 0x4c);
                  lVar15 = *(long *)(lVar12 + 0xb8);
                }
                pfVar17 = (float *)(lVar15 + 0x48);
                pfVar20 = (float *)(lVar15 + 0x4c);
                pfVar21 = (float *)(lVar15 + 0x50);
              }
              else {
                pfVar17 = (float *)(lVar15 + 0x3c);
                pfVar20 = (float *)(lVar15 + 0x40);
                pfVar21 = (float *)(lVar15 + 0x44);
              }
              if ((iVar22 == 1) || (iVar22 == 4)) {
                if (DAT_0482ee19 == '\0') {
                  thunk_FUN_01efb3a4(puVar4);
                  lVar12 = *(long *)puVar4;
                  DAT_0482ee19 = '\x01';
                }
                lVar12 = *(long *)(lVar12 + 0xb8);
                pfVar17 = (float *)(lVar12 + 0x18);
                pfVar20 = (float *)(lVar12 + 0x1c);
                pfVar21 = (float *)(lVar12 + 0x20);
              }
              fVar42 = *pfVar21;
              fVar46 = *pfVar20;
              fVar27 = *pfVar17;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar18 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                                 (lVar14,0,0);
              if ((uVar18 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar14 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar8,
                                      *(undefined8 *)
                                       Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                     );
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar14 = FUN_0233642c(lVar14,*(undefined8 *)PTR_DAT_04579bb8);
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar18 = FUN_04073094(lVar14,0,0);
                if ((uVar18 & 1) != 0) {
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar12 = FUN_04070398(lVar14,0);
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
                  lVar15 = FUN_04073258(lVar15,0);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  FUN_0407e3a8(fVar27,lVar15,0);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  fVar27 = (float)FUN_0407e758(lVar12,0);
                  fVar28 = fVar46;
                  fVar29 = fVar42;
                  lVar12 = FUN_04070398(lVar14,0);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  fVar30 = (float)FUN_0407ec3c(lVar12,0);
                  fVar27 = fVar27 * fVar30;
                  fVar46 = fVar46 * fVar28;
                  fVar42 = fVar42 * fVar29;
                }
              }
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar18 = FUN_04073094(lVar14,0,0);
              plVar24 = (long *)
                        Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
              ;
              if ((uVar18 & 1) != 0) {
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar12 = FUN_04050c14(lVar14,0);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                FUN_04051ba0(&stack0x00000098,lVar12,0);
                fVar30 = fStack00000000000000ac;
                fVar29 = fStack00000000000000a8;
                fVar28 = fStack00000000000000a4;
                lVar14 = FUN_022c6694(lVar14,*(undefined8 *)
                                              Method_UnityEngine_UIElements_StyleDataRef<RareData>_Write__
                                     );
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar1 = *(uint *)(lVar14 + 0x18);
                if (0 < (int)uVar1) {
                  uVar23 = 0;
                  fVar29 = fVar30;
                  do {
                    if (uVar1 <= uVar23) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    lVar12 = *(long *)(lVar14 + (long)(int)uVar23 * 8 + 0x20);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar12 = FUN_04050c14(lVar12,0);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_04051ba0(&stack0x00000098,lVar12,0);
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    fVar30 = fVar28 + fVar28;
                    if (fVar28 + fVar28 <= fStack00000000000000a4 + fStack00000000000000a4) {
                      fVar30 = fStack00000000000000a4 + fStack00000000000000a4;
                    }
                    fVar28 = fVar29 + fVar29;
                    if (fVar29 + fVar29 <= fStack00000000000000ac + fStack00000000000000ac) {
                      fVar28 = fStack00000000000000ac + fStack00000000000000ac;
                    }
                    uVar23 = uVar23 + 1;
                    fVar29 = fVar28 * 0.5;
                    fVar28 = fVar30 * 0.5;
                    fVar30 = fVar29;
                  } while ((int)uVar23 < (int)uVar1);
                }
                plVar24 = (long *)
                          Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                ;
                if (DAT_0482f03e == '\0') {
                  thunk_FUN_01efb3a4(puVar5);
                  DAT_0482f03e = '\x01';
                }
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                fVar27 = fVar27 * (fVar28 + fVar28);
                fVar46 = fVar46 * (fVar29 + fVar29);
                fVar42 = fVar42 * (fVar30 + fVar30);
                fStack0000000000000024 = SQRT(fVar42 * fVar42 + fVar46 * fVar46 + fVar27 * fVar27);
              }
            }
            memcpy(&stack0x00000098,&stack0x000002a0,0x48);
            if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar37 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar8,
                                  *(undefined8 *)
                                   Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                 );
            uVar11 = *(undefined8 *)PTR_DAT_04579bd0;
            memcpy(&stack0x000002e8,&stack0x00000098,0x48);
            FUN_0240e31c(uVar37,fStack0000000000000024,&stack0x000002e8,&stack0x0000029c,uVar11);
            bVar2 = false;
            in_stack_00000068._4_4_ = fVar26 + 1.0;
            if (in_stack_0000029c < 1.0) {
              in_stack_00000068._4_4_ = fVar26 * in_stack_0000029c;
            }
          }
          else {
            bVar2 = false;
          }
          iVar8 = iVar8 + 1;
          if ((bVar2) || (fVar47 < in_stack_00000068._4_4_)) break;
        }
      }
      lVar14 = *(long *)(unaff_x19 + 0xd0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar22 = *(int *)(lVar14 + 0x18) + -1;
      if (iVar8 <= iVar22) {
        while( true ) {
          uVar11 = FUN_030f28e4(lVar14,iVar22,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                               );
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar18 = FUN_04073094(uVar11,0,0);
          if ((uVar18 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar11 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar22,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                 );
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_040770d0(uVar11,0);
            if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_030f42ac(*(long *)(unaff_x19 + 0xd0),iVar22,*(undefined8 *)PTR_DAT_04579bc0);
          }
          iVar22 = iVar22 + -1;
          if (iVar22 < iVar8) break;
          lVar14 = *(long *)(unaff_x19 + 0xd0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
      }
      if (iStack0000000000000018 < iVar8) {
        iVar22 = 0;
        do {
          if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar14 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iStack0000000000000018,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                               );
          if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar37 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar22,
                                *(undefined8 *)
                                 Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                               );
          uVar11 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_IsModified__;
          memcpy(&stack0x00000330,&stack0x000002a0,0x48);
          FUN_02409430(uVar37,&stack0x00000330,&stack0x00000290,&stack0x00000280,&stack0x00000270,
                       uVar11);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = FUN_04073258(lVar14,0);
          fVar26 = in_stack_00000294;
          fVar47 = in_stack_00000298;
          FUN_03c7c6bc(in_stack_00000290,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0407d468(lVar12,0);
          if (*(int *)(unaff_x19 + 0x38) == 2) {
            memcpy(&stack0x00000330,&stack0x000002a0,0x48);
            if (iStack0000000000000018 + 1 < iVar8) {
              memcpy(&stack0x00000200,&stack0x00000330,0x48);
              if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar11 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar22 + 1,
                                    *(undefined8 *)
                                     Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                   );
              __src = &stack0x00000200;
            }
            else {
              __src = &stack0x000001b0;
              memcpy(&stack0x000001b0,&stack0x00000330,0x48);
              uVar11 = 0x3f800000;
            }
            memcpy(&stack0x00000160,__src,0x48);
            uVar37 = *(undefined8 *)
                      Method_System_Configuration_ConfigurationSection_SerializeSection__;
            memcpy(&stack0x00000378,&stack0x00000160,0x48);
            fVar27 = (float)FUN_0240a9dc(uVar11,&stack0x00000378,uVar37);
            in_stack_00000280 = CONCAT44(fVar26 - in_stack_00000294,fVar27 - in_stack_00000290);
            in_stack_00000288 = fVar47 - in_stack_00000298;
          }
          if (DAT_0482ee1a == '\0') {
            thunk_FUN_01efb3a4(puVar5);
            DAT_0482ee1a = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            cVar13 = DAT_0482ee1a;
          }
          else {
            cVar13 = '\x01';
          }
          fVar26 = in_stack_00000278 * in_stack_00000278 +
                   in_stack_00000270 * in_stack_00000270 + in_stack_00000274 * in_stack_00000274;
          fVar47 = 1.0 / SQRT(fVar26);
          fVar27 = (float)in_stack_00000280;
          fVar46 = (float)(in_stack_00000280 >> 0x20);
          fStack0000000000000094 = in_stack_00000270 * fVar47;
          fStack0000000000000090 = in_stack_00000274 * fVar47;
          fStack000000000000008c = in_stack_00000278 * fVar47;
          if (fVar26 <= 1.1754944e-38) {
            fStack0000000000000090 = 0.0;
            fStack0000000000000094 = 0.0;
            fStack000000000000008c = 0.0;
          }
          if (cVar13 == '\0') {
            thunk_FUN_01efb3a4(puVar5);
            DAT_0482ee1a = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar26 = in_stack_00000288 * in_stack_00000288 + fVar27 * fVar27 + fVar46 * fVar46;
          fVar47 = 1.0 / SQRT(fVar26);
          fVar27 = fVar27 * fVar47;
          fVar42 = fVar46 * fVar47;
          fStack0000000000000088 = fVar27;
          fStack0000000000000084 = fVar42;
          fStack0000000000000080 = in_stack_00000288 * fVar47;
          if (fVar26 <= 1.1754944e-38) {
            fStack0000000000000084 = 0.0;
            fStack0000000000000088 = 0.0;
            fStack0000000000000080 = 0.0;
          }
          if (*(int *)(unaff_x19 + 0x3c) == 1) {
            lVar12 = FUN_04070398();
            if (DAT_0482ee19 == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0482ee19 = '\x01';
            }
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
            fStack0000000000000090 = *(float *)(lVar15 + 0x1c);
            fStack000000000000008c = *(float *)(lVar15 + 0x20);
            FUN_0407e3a8(*(undefined4 *)(lVar15 + 0x18),lVar12,0);
            fStack0000000000000094 = (float)FUN_03c7c6c0(0);
            lVar12 = FUN_04070398();
            if (DAT_0482ee1d == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0482ee1d = '\x01';
            }
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
            fVar27 = *(float *)(lVar15 + 0x4c);
            fVar42 = *(float *)(lVar15 + 0x50);
            FUN_0407e3a8(*(undefined4 *)(lVar15 + 0x48),lVar12,0);
            fStack0000000000000088 = (float)FUN_03c7c6c0(0);
            fStack0000000000000080 = fVar42;
            fStack0000000000000084 = fVar27;
          }
          else if (*(int *)(unaff_x19 + 0x3c) == 2) {
            if (DAT_0482ee19 == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0482ee19 = '\x01';
            }
            lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
            fStack0000000000000090 = *(float *)(lVar12 + 0x1c);
            fStack000000000000008c = *(float *)(lVar12 + 0x20);
            fStack0000000000000094 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar12 + 0x18),0);
            if (DAT_0482ee1d == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0482ee1d = '\x01';
            }
            lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
            fVar27 = *(float *)(lVar12 + 0x4c);
            fVar42 = *(float *)(lVar12 + 0x50);
            fStack0000000000000088 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar12 + 0x48),0);
            fStack0000000000000080 = fVar42;
            fStack0000000000000084 = fVar27;
          }
          fVar26 = (float)FUN_03e23f04();
          if (DAT_0482ee1a == '\0') {
            thunk_FUN_01efb3a4(puVar5);
            DAT_0482ee1a = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar28 = fVar42 * fVar42 + fVar26 * fVar26 + fVar27 * fVar27;
          fVar29 = 1.0 / SQRT(fVar28);
          fVar26 = fVar26 * fVar29;
          fVar27 = fVar27 * fVar29;
          fVar30 = 0.0;
          fVar47 = fVar26;
          fStack0000000000000078 = fVar27;
          fStack0000000000000074 = fVar42 * fVar29;
          if (fVar28 <= 1.1754944e-38) {
            fVar47 = fVar30;
            fStack0000000000000078 = fVar30;
            fStack0000000000000074 = fVar30;
          }
          fVar42 = (float)FUN_03e23f04();
          if (DAT_0482ee1a == '\0') {
            thunk_FUN_01efb3a4(puVar5);
            DAT_0482ee1a = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar26 = fVar27 * fVar27 + fVar42 * fVar42 + fVar26 * fVar26;
          fStack0000000000000070 = fVar42 * (1.0 / SQRT(fVar26));
          if (fVar26 <= 1.1754944e-38) {
            fStack0000000000000070 = 0.0;
          }
          FUN_03cb4cf0(fVar47,0);
          FUN_03cb3880(0);
          fStack000000000000007c = (float)FUN_04066fb8(0);
          lVar12 = FUN_04073258(lVar14,0);
          fVar26 = fStack0000000000000094;
          fVar47 = fStack0000000000000084;
          fVar27 = fStack0000000000000080;
          FUN_03cb4cf0(fStack0000000000000088,0);
          fVar42 = (float)FUN_03cb3880(0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar28 = (fStack0000000000000078 * fVar42 +
                   fStack0000000000000074 * fVar26 + fStack0000000000000070 * fVar27) -
                   fStack000000000000007c * fVar47;
          uVar18 = (ulong)(uint)((fStack000000000000007c * fVar27 +
                                 fStack0000000000000078 * fVar26 + fStack0000000000000070 * fVar47)
                                - fStack0000000000000074 * fVar42);
          FUN_0407d5e8((fStack0000000000000074 * fVar47 +
                       fStack000000000000007c * fVar26 + fStack0000000000000070 * fVar42) -
                       fStack0000000000000078 * fVar27,uVar18,fVar28,
                       ((fStack0000000000000070 * fVar26 - fStack000000000000007c * fVar42) -
                       fStack0000000000000078 * fVar47) - fStack0000000000000074 * fVar27,lVar12,0);
          uVar1 = *(uint *)(unaff_x19 + 0x50);
          if ((uVar1 & 1) != 0) {
            if ((uVar1 >> 1 & 1) != 0) {
              uVar18 = (ulong)(uint)in_stack_00000274;
              FUN_04073258(lVar14,0);
              fVar28 = in_stack_00000278;
              FUN_03e2cbdc(in_stack_00000270,uVar18,in_stack_00000278,in_stack_00000280 & 0xffffffff
                           ,fVar46,in_stack_00000288);
            }
            fVar38 = (float)uVar18;
            fVar29 = (float)FUN_03e2ce3c((uint *)(unaff_x19 + 0x50));
            fVar47 = fStack0000000000000090;
            fVar27 = fStack000000000000008c;
            fVar30 = (float)FUN_03c7c6bc(0);
            fVar26 = fStack0000000000000080;
            fVar42 = fStack0000000000000084;
            fVar31 = (float)FUN_03c7c6bc(fStack0000000000000088,0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fStack0000000000000030 = fVar47 * fVar26 - fVar27 * fVar42;
            fVar26 = fVar27 * fVar31 - fVar30 * fVar26;
            fVar27 = fVar30 * fVar42 - fVar47 * fVar31;
            fVar47 = SQRT(fVar27 * fVar27 +
                          fStack0000000000000030 * fStack0000000000000030 + fVar26 * fVar26);
            if (fVar47 <= DAT_00c926ac) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar17 = *(float **)(*(long *)puVar4 + 0xb8);
              fStack0000000000000030 = *pfVar17;
              fStack000000000000002c = pfVar17[1];
              fVar47 = pfVar17[2];
              fVar26 = fStack0000000000000030;
            }
            else {
              fStack0000000000000030 = fStack0000000000000030 / fVar47;
              fStack000000000000002c = fVar26 / fVar47;
              fVar47 = fVar27 / fVar47;
            }
            lVar12 = FUN_04073258(lVar14,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar32 = (float)FUN_0407d3c8(lVar12,0);
            fVar42 = fStack000000000000008c;
            fVar30 = fStack0000000000000090;
            fVar33 = (float)FUN_03c7c6bc(fStack0000000000000094,fStack0000000000000090,0);
            fVar31 = fStack0000000000000084;
            fVar35 = fStack0000000000000080;
            fVar34 = (float)FUN_03c7c6bc(fStack0000000000000088,fStack0000000000000084,0);
            fVar34 = fVar28 * fVar34;
            uVar18 = (ulong)(uint)(fVar26 + fVar29 * fStack000000000000002c + fVar38 * fVar30 +
                                            fVar28 * fVar31);
            fVar28 = fVar27 + fVar29 * fVar47 + fVar38 * fVar42 + fVar28 * fVar35;
            FUN_0407d468(fVar32 + fVar29 * fStack0000000000000030 + fVar38 * fVar33 + fVar34,uVar18,
                         lVar12,0);
          }
          uVar1 = *(uint *)(unaff_x19 + 0x98);
          if ((uVar1 & 1) != 0) {
            if ((uVar1 >> 1 & 1) != 0) {
              FUN_04073258(lVar14,0);
              FUN_03e2cbdc(in_stack_00000270,in_stack_00000274,in_stack_00000278,
                           in_stack_00000280 & 0xffffffff,fVar46,in_stack_00000288);
            }
            lVar12 = FUN_04073258(lVar14,0);
            fVar26 = fStack0000000000000090;
            fVar47 = fStack000000000000008c;
            FUN_03c7c6bc(fStack0000000000000094,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar27 = (float)FUN_0407e758(lVar12,0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar42 = DAT_00c926ac;
            fVar28 = SQRT(fVar47 * fVar47 + fVar27 * fVar27 + fVar26 * fVar26);
            if (fVar28 <= DAT_00c926ac) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar17 = *(float **)(*(long *)puVar4 + 0xb8);
              fVar27 = *pfVar17;
              fVar26 = pfVar17[1];
              fVar47 = pfVar17[2];
            }
            else {
              fVar27 = fVar27 / fVar28;
              fVar26 = fVar26 / fVar28;
              fVar47 = fVar47 / fVar28;
            }
            uVar39 = (ulong)(uint)fVar26;
            uVar18 = FUN_03c7c6c0(fVar27,0);
            fVar29 = (float)uVar39;
            lVar12 = FUN_04073258(lVar14,0);
            fVar26 = fStack0000000000000084;
            fVar27 = fStack0000000000000080;
            FUN_03c7c6bc(fStack0000000000000088,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar28 = (float)FUN_0407e758(lVar12,0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar30 = SQRT(fVar27 * fVar27 + fVar28 * fVar28 + fVar26 * fVar26);
            if (fVar30 <= fVar42) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar17 = *(float **)(*(long *)puVar4 + 0xb8);
              fVar28 = *pfVar17;
              fVar26 = pfVar17[1];
              fVar27 = pfVar17[2];
            }
            else {
              fVar28 = fVar28 / fVar30;
              fVar26 = fVar26 / fVar30;
              fVar27 = fVar27 / fVar30;
            }
            uVar40 = (ulong)(uint)fVar26;
            uVar11 = FUN_03c7c6c0(fVar28,0);
            uVar41 = uVar40;
            fVar26 = fVar27;
            fVar35 = (float)FUN_03e2ce3c((uint *)(unaff_x19 + 0x98));
            fVar34 = (float)uVar41;
            fVar31 = fVar29;
            fVar38 = fVar47;
            fVar32 = (float)FUN_03c7c6bc(uVar18,0);
            uVar41 = uVar40;
            fVar30 = fVar27;
            fVar33 = (float)FUN_03c7c6bc(uVar11,0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar28 = fVar31 * fVar30 - fVar38 * (float)uVar41;
            fVar38 = fVar38 * fVar33 - fVar32 * fVar30;
            fVar30 = fVar32 * (float)uVar41 - fVar31 * fVar33;
            fVar31 = SQRT(fVar30 * fVar30 + fVar28 * fVar28 + fVar38 * fVar38);
            if (fVar31 <= fVar42) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar17 = *(float **)(*(long *)puVar4 + 0xb8);
              fStack000000000000004c = *pfVar17;
              fStack000000000000002c = pfVar17[1];
              fVar30 = pfVar17[2];
            }
            else {
              fVar28 = fVar28 / fVar31;
              fVar38 = fVar38 / fVar31;
              fVar30 = fVar30 / fVar31;
              fStack000000000000002c = fVar38;
              fStack000000000000004c = fVar28;
            }
            lVar12 = FUN_04073258(lVar14,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar42 = (float)FUN_0407d9e8(lVar12,0);
            fVar31 = (float)FUN_03c7c6bc(uVar18 & 0xffffffff,uVar39 & 0xffffffff,0);
            fVar32 = (float)FUN_03c7c6bc(uVar11,uVar40,0);
            uVar18 = (ulong)(uint)(fVar38 + fVar35 * fStack000000000000002c + fVar34 * fVar29 +
                                            fVar26 * (float)uVar40);
            fVar28 = fVar28 + fVar35 * fVar30 + fVar34 * fVar47 + fVar26 * fVar27;
            FUN_0407da88(fVar42 + fVar35 * fStack000000000000004c + fVar34 * fVar31 +
                                  fVar26 * fVar32,uVar18,lVar12,0);
          }
          uVar1 = *(uint *)(unaff_x19 + 0x74);
          if ((uVar1 & 1) != 0) {
            if ((uVar1 >> 1 & 1) != 0) {
              uVar18 = (ulong)(uint)in_stack_00000274;
              FUN_04073258(lVar14,0);
              fVar28 = in_stack_00000278;
              FUN_03e2cbdc(in_stack_00000270,uVar18,in_stack_00000278,in_stack_00000280 & 0xffffffff
                           ,fVar46,in_stack_00000288);
              if (*(int *)(unaff_x19 + 0x94) == 3) {
                puVar16 = *(undefined4 **)
                           (*(long *)
                             Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                           + 0xb8);
                uVar18 = (ulong)(uint)puVar16[1];
                fVar28 = (float)puVar16[2];
                fStack0000000000000070 = (float)puVar16[3];
                fStack000000000000007c = (float)FUN_03cb3880(*puVar16,0);
                fStack0000000000000078 = (float)uVar18;
                fStack0000000000000074 = fVar28;
              }
            }
            uVar36 = FUN_03e2ce3c((uint *)(unaff_x19 + 0x74));
            fVar26 = fStack0000000000000090;
            fVar27 = fStack000000000000008c;
            fVar42 = (float)FUN_03c7c6bc(0);
            fVar47 = fStack0000000000000080;
            fVar46 = fStack0000000000000084;
            fVar29 = (float)FUN_03c7c6bc(0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar5);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar30 = fVar26 * fVar47 - fVar27 * fVar46;
            fVar47 = fVar27 * fVar29 - fVar42 * fVar47;
            fVar26 = fVar42 * fVar46 - fVar26 * fVar29;
            fVar27 = SQRT(fVar26 * fVar26 + fVar30 * fVar30 + fVar47 * fVar47);
            if (fVar27 <= DAT_00c926ac) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(puVar4);
                DAT_0482ee12 = '\x01';
              }
              pfVar17 = *(float **)(*(long *)puVar4 + 0xb8);
              fVar30 = *pfVar17;
              fVar47 = pfVar17[1];
              fVar26 = pfVar17[2];
            }
            else {
              fVar30 = fVar30 / fVar27;
              fVar47 = fVar47 / fVar27;
              fVar26 = fVar26 / fVar27;
            }
            fVar29 = fStack000000000000008c;
            fVar31 = fStack0000000000000090;
            fVar38 = (float)FUN_03c7c6bc(fStack0000000000000094,0);
            fVar35 = (float)FUN_040674b0(uVar18,0);
            fVar27 = fVar26;
            fVar46 = fVar47;
            fVar42 = fVar30;
            fVar32 = (float)FUN_040674b0(uVar36,0);
            uVar18 = (ulong)(uint)fStack0000000000000084;
            uVar41 = (ulong)(uint)fStack0000000000000080;
            uVar11 = FUN_03c7c6bc(fStack0000000000000088,uVar18,uVar41,0);
            uVar43 = (ulong)(uint)((fVar35 * fVar42 + fVar29 * fVar46 + fVar31 * fVar27) -
                                  fVar38 * fVar32);
            uVar39 = (ulong)(uint)((fVar31 * fVar32 + fVar29 * fVar42 + fVar38 * fVar27) -
                                  fVar35 * fVar46);
            FUN_040677e4((fVar38 * fVar46 + fVar29 * fVar32 + fVar35 * fVar27) - fVar31 * fVar42,
                         uVar39,uVar43,
                         ((fVar29 * fVar27 - fVar35 * fVar32) - fVar38 * fVar42) - fVar31 * fVar46,
                         uVar11,uVar18,uVar41,0);
            uVar18 = FUN_03c7c6c0(0);
            fVar31 = (float)uVar39;
            fVar38 = (float)uVar43;
            fVar42 = (float)FUN_040674b0(uVar36,0);
            fVar27 = fVar38;
            fVar46 = fVar31;
            fVar29 = (float)FUN_03c7c6bc(uVar18,0);
            fVar28 = (float)FUN_040674b0(fVar28,0);
            uVar41 = (ulong)(uint)fStack0000000000000090;
            uVar44 = (ulong)(uint)fStack000000000000008c;
            uVar11 = FUN_03c7c6bc(fStack0000000000000094,uVar41,uVar44,0);
            uVar45 = (ulong)(uint)((fVar42 * fVar29 + fVar26 * fVar46 + fVar47 * fVar27) -
                                  fVar30 * fVar28);
            uVar40 = (ulong)(uint)((fVar47 * fVar28 + fVar26 * fVar29 + fVar30 * fVar27) -
                                  fVar42 * fVar46);
            FUN_040677e4((fVar30 * fVar46 + fVar26 * fVar28 + fVar42 * fVar27) - fVar47 * fVar29,
                         uVar40,uVar45,
                         ((fVar26 * fVar27 - fVar42 * fVar28) - fVar30 * fVar29) - fVar47 * fVar46,
                         uVar11,uVar41,uVar44,0);
            uVar11 = FUN_03c7c6c0(0);
            lVar14 = FUN_04073258(lVar14,0);
            FUN_03cb4cf0(uVar18 & 0xffffffff,uVar39 & 0xffffffff,uVar43 & 0xffffffff,uVar11,uVar40,
                         uVar45,0);
            fVar47 = (float)uVar11;
            fVar26 = (float)FUN_03cb3880(0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_0407d5e8((fStack0000000000000074 * fVar31 +
                         fStack000000000000007c * fVar47 + fStack0000000000000070 * fVar26) -
                         fStack0000000000000078 * fVar38,
                         (fStack000000000000007c * fVar38 +
                         fStack0000000000000078 * fVar47 + fStack0000000000000070 * fVar31) -
                         fStack0000000000000074 * fVar26,
                         (fStack0000000000000078 * fVar26 +
                         fStack0000000000000074 * fVar47 + fStack0000000000000070 * fVar38) -
                         fStack000000000000007c * fVar31,
                         ((fStack0000000000000070 * fVar47 - fStack000000000000007c * fVar26) -
                         fStack0000000000000078 * fVar31) - fStack0000000000000074 * fVar38,lVar14,0
                        );
          }
          iStack0000000000000018 = iStack0000000000000018 + 1;
          iVar22 = iVar22 + 1;
        } while (iVar8 != iStack0000000000000018);
      }
      FUN_03e1c250(&stack0x000002a0);
      iStack0000000000000020 = iStack0000000000000020 + 1;
      unaff_x27 = (long *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__;
      iStack0000000000000018 = iVar8;
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


