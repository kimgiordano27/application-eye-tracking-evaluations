/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler.<>c$$<.ctor>b__0_49
ENTRY_POINT: 03e2b590
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_17;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_49
               (long param_1,float param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 in_CY;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  undefined4 *puVar11;
  float *pfVar12;
  long lVar13;
  long in_x9;
  int *piVar14;
  long in_x10;
  float *pfVar15;
  long lVar16;
  float *pfVar17;
  long unaff_x19;
  int unaff_w20;
  undefined1 *__src;
  undefined8 uVar18;
  long unaff_x22;
  char unaff_w23;
  float unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  uint uVar19;
  long *unaff_x27;
  long *unaff_x28;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  float unaff_s8;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float unaff_s13;
  float unaff_s14;
  float fVar41;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  int iStack0000000000000018;
  float fStack000000000000001c;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack000000000000004c;
  uint *in_stack_00000050;
  uint *in_stack_00000058;
  uint *in_stack_00000060;
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
    if ((bool)in_CY) {
      FUN_0314b890(param_3,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    else {
      *(int *)(param_3 + 0x18) = (int)in_x10 + 1;
      *(float *)(param_1 + in_x10 * 4 + 0x20) = param_2 / unaff_s8;
    }
    iVar5 = *(int *)(unaff_x19 + 0x38);
    if (iVar5 == 0) {
      fVar39 = fStack000000000000001c;
      if (fStack0000000000000024 <= 1.0) goto LAB_03e2b708;
      bVar4 = in_stack_00000068._4_4_ < unaff_s8;
      fVar39 = fStack0000000000000010 + in_stack_00000068._4_4_;
      bVar2 = bVar4 && unaff_s13 < fVar39;
      in_stack_00000068._4_4_ = fVar39 - unaff_s8;
      if (!bVar4 || unaff_s13 >= fVar39) {
        in_stack_00000068._4_4_ = fVar39;
      }
    }
    else if (iVar5 == 1) {
      fStack0000000000000024 =
           (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44),0
                              );
      fVar39 = fStack0000000000000024;
LAB_03e2b708:
      bVar2 = false;
      in_stack_00000068._4_4_ = in_stack_00000068._4_4_ + fVar39;
    }
    else if (iVar5 == 2) {
      if ((*(uint *)(unaff_x19 + 0x44) & 0x7fffffff) < 0x7f800001) {
        fStack0000000000000024 = (float)FUN_0406df58(*(undefined4 *)(unaff_x19 + 0x40),0);
      }
      else {
        if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w20,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                            );
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = FUN_023361c8(lVar8,*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Count__
                            );
        if (DAT_0482ee18 == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee18 = unaff_w23;
        }
        lVar13 = *unaff_x26;
        iVar5 = *(int *)(unaff_x19 + 0x4c);
        lVar16 = *(long *)(lVar13 + 0xb8);
        if ((iVar5 == 2) || (iVar5 == 5)) {
          if (DAT_0482ee1d == '\0') {
            thunk_FUN_01efb3a4();
            lVar13 = *unaff_x26;
            iVar5 = *(int *)(unaff_x19 + 0x4c);
            lVar16 = *(long *)(lVar13 + 0xb8);
            DAT_0482ee1d = unaff_w23;
          }
          pfVar12 = (float *)(lVar16 + 0x48);
          pfVar15 = (float *)(lVar16 + 0x4c);
          pfVar17 = (float *)(lVar16 + 0x50);
        }
        else {
          pfVar12 = (float *)(lVar16 + 0x3c);
          pfVar15 = (float *)(lVar16 + 0x40);
          pfVar17 = (float *)(lVar16 + 0x44);
        }
        if ((iVar5 == 1) || (iVar5 == 4)) {
          if (DAT_0482ee19 == '\0') {
            thunk_FUN_01efb3a4();
            lVar13 = *unaff_x26;
            DAT_0482ee19 = unaff_w23;
          }
          lVar13 = *(long *)(lVar13 + 0xb8);
          pfVar12 = (float *)(lVar13 + 0x18);
          pfVar15 = (float *)(lVar13 + 0x1c);
          pfVar17 = (float *)(lVar13 + 0x20);
        }
        fVar37 = *pfVar17;
        fVar38 = *pfVar15;
        fVar39 = *pfVar12;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                          (lVar8,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w20,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                              );
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = FUN_0233642c(lVar8,*(undefined8 *)PTR_DAT_04579bb8);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_04073094(lVar8,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar13 = FUN_04070398(lVar8,0);
            if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar16 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),unaff_w20,
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
            FUN_0407e3a8(fVar39,lVar16,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar39 = (float)FUN_0407e758(lVar13,0);
            fVar40 = fVar38;
            fVar41 = fVar37;
            lVar13 = FUN_04070398(lVar8,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar28 = (float)FUN_0407ec3c(lVar13,0);
            fVar39 = fVar39 * fVar28;
            fVar38 = fVar38 * fVar40;
            fVar37 = fVar37 * fVar41;
          }
        }
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_04073094(lVar8,0,0);
        unaff_x27 = (long *)
                    Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
        ;
        if ((uVar9 & 1) != 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = FUN_04050c14(lVar8,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_04051ba0(&stack0x00000098,lVar13,0);
          fVar28 = fStack00000000000000ac;
          fVar41 = fStack00000000000000a8;
          fVar40 = fStack00000000000000a4;
          lVar8 = FUN_022c6694(lVar8,*(undefined8 *)
                                      Method_UnityEngine_UIElements_StyleDataRef<RareData>_Write__);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar1) {
            uVar19 = 0;
            fVar41 = fVar28;
            do {
              if (uVar1 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar13 = *(long *)(lVar8 + (long)(int)uVar19 * 8 + 0x20);
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
              uVar1 = *(uint *)(lVar8 + 0x18);
              fVar28 = fVar40 + fVar40;
              if (fVar40 + fVar40 <= fStack00000000000000a4 + fStack00000000000000a4) {
                fVar28 = fStack00000000000000a4 + fStack00000000000000a4;
              }
              fVar40 = fVar41 + fVar41;
              if (fVar41 + fVar41 <= fStack00000000000000ac + fStack00000000000000ac) {
                fVar40 = fStack00000000000000ac + fStack00000000000000ac;
              }
              uVar19 = uVar19 + 1;
              fVar41 = fVar40 * 0.5;
              fVar40 = fVar28 * 0.5;
              fVar28 = fVar41;
            } while ((int)uVar19 < (int)uVar1);
          }
          unaff_x27 = (long *)
                      Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
          ;
          if (DAT_0482f03e == '\0') {
            thunk_FUN_01efb3a4();
            DAT_0482f03e = unaff_w23;
          }
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar39 = fVar39 * (fVar40 + fVar40);
          fVar38 = fVar38 * (fVar41 + fVar41);
          fVar37 = fVar37 * (fVar28 + fVar28);
          fStack0000000000000024 = SQRT(fVar37 * fVar37 + fVar38 * fVar38 + fVar39 * fVar39);
        }
      }
      memcpy(&stack0x00000098,&stack0x000002a0,0x48);
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar29 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),unaff_w20,
                            *(undefined8 *)
                             Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                           );
      uVar18 = *(undefined8 *)PTR_DAT_04579bd0;
      memcpy(&stack0x000002e8,&stack0x00000098,0x48);
      FUN_0240e31c(uVar29,fStack0000000000000024,&stack0x000002e8,&stack0x0000029c,uVar18);
      bVar2 = false;
      in_stack_00000068._4_4_ = unaff_s14;
      if (in_stack_0000029c < 1.0) {
        in_stack_00000068._4_4_ = unaff_s8 * in_stack_0000029c;
      }
    }
    else {
      bVar2 = false;
    }
    unaff_w20 = unaff_w20 + 1;
    if ((!bVar2) && (in_stack_00000068._4_4_ <= unaff_s13)) goto LAB_03e2b550;
    do {
      do {
        lVar8 = *(long *)(unaff_x19 + 0xd0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar5 = *(int *)(lVar8 + 0x18) + -1;
        if (unaff_w20 <= iVar5) {
          while( true ) {
            uVar18 = FUN_030f28e4(lVar8,iVar5,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                 );
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_04073094(uVar18,0,0);
            if ((uVar9 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar18 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iVar5,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                   );
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_040770d0(uVar18,0);
              if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_030f42ac(*(long *)(unaff_x19 + 0xd0),iVar5,*(undefined8 *)PTR_DAT_04579bc0);
            }
            iVar5 = iVar5 + -1;
            if (iVar5 < unaff_w20) break;
            lVar8 = *(long *)(unaff_x19 + 0xd0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
          }
        }
        if (iStack0000000000000018 < unaff_w20) {
          iVar5 = 0;
          do {
            if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar8 = FUN_030f28e4(*(long *)(unaff_x19 + 0xd0),iStack0000000000000018,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerOverLinkTagEvent>_Init__
                                );
            if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar29 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar5,
                                  *(undefined8 *)
                                   Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                 );
            uVar18 = *(undefined8 *)Method_System_Configuration_ConfigurationSection_IsModified__;
            memcpy(&stack0x00000330,&stack0x000002a0,0x48);
            FUN_02409430(uVar29,&stack0x00000330,&stack0x00000290,&stack0x00000280,&stack0x00000270,
                         uVar18);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar13 = FUN_04073258(lVar8,0);
            fVar39 = in_stack_00000294;
            fVar38 = in_stack_00000298;
            FUN_03c7c6bc(in_stack_00000290,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_0407d468(lVar13,0);
            if (*(int *)(unaff_x19 + 0x38) == 2) {
              memcpy(&stack0x00000330,&stack0x000002a0,0x48);
              if (iStack0000000000000018 + 1 < unaff_w20) {
                memcpy(&stack0x00000200,&stack0x00000330,0x48);
                if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar18 = FUN_0314b598(*(long *)(unaff_x19 + 0x108),iVar5 + 1,
                                      *(undefined8 *)
                                       Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                     );
                __src = &stack0x00000200;
              }
              else {
                __src = &stack0x000001b0;
                memcpy(&stack0x000001b0,&stack0x00000330,0x48);
                uVar18 = 0x3f800000;
              }
              memcpy(&stack0x00000160,__src,0x48);
              uVar29 = *(undefined8 *)
                        Method_System_Configuration_ConfigurationSection_SerializeSection__;
              memcpy(&stack0x00000378,&stack0x00000160,0x48);
              fVar37 = (float)FUN_0240a9dc(uVar18,&stack0x00000378,uVar29);
              in_stack_00000280 = CONCAT44(fVar39 - in_stack_00000294,fVar37 - in_stack_00000290);
              in_stack_00000288 = fVar38 - in_stack_00000298;
            }
            if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
              thunk_FUN_01efb3a4();
              *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
            }
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              cVar10 = *(char *)(unaff_x22 + 0xe1a);
            }
            else {
              cVar10 = '\x01';
            }
            fVar39 = in_stack_00000278 * in_stack_00000278 +
                     in_stack_00000270 * in_stack_00000270 + in_stack_00000274 * in_stack_00000274;
            fVar38 = 1.0 / SQRT(fVar39);
            fVar37 = (float)in_stack_00000280;
            fVar40 = (float)(in_stack_00000280 >> 0x20);
            fStack0000000000000094 = in_stack_00000270 * fVar38;
            fStack0000000000000090 = in_stack_00000274 * fVar38;
            fStack000000000000008c = in_stack_00000278 * fVar38;
            if (fVar39 <= unaff_w24) {
              fStack0000000000000090 = 0.0;
              fStack0000000000000094 = 0.0;
              fStack000000000000008c = 0.0;
            }
            if (cVar10 == '\0') {
              thunk_FUN_01efb3a4();
              *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
            }
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar39 = in_stack_00000288 * in_stack_00000288 + fVar37 * fVar37 + fVar40 * fVar40;
            fVar38 = 1.0 / SQRT(fVar39);
            fVar37 = fVar37 * fVar38;
            fVar41 = fVar40 * fVar38;
            fStack0000000000000088 = fVar37;
            fStack0000000000000084 = fVar41;
            fStack0000000000000080 = in_stack_00000288 * fVar38;
            if (fVar39 <= unaff_w24) {
              fStack0000000000000084 = 0.0;
              fStack0000000000000088 = 0.0;
              fStack0000000000000080 = 0.0;
            }
            if (*(int *)(unaff_x19 + 0x3c) == 1) {
              lVar13 = FUN_04070398();
              if (DAT_0482ee19 == '\0') {
                thunk_FUN_01efb3a4();
                DAT_0482ee19 = unaff_w23;
              }
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar16 = *(long *)(*unaff_x26 + 0xb8);
              fStack0000000000000090 = *(float *)(lVar16 + 0x1c);
              fStack000000000000008c = *(float *)(lVar16 + 0x20);
              FUN_0407e3a8(*(undefined4 *)(lVar16 + 0x18),lVar13,0);
              fStack0000000000000094 = (float)FUN_03c7c6c0(0);
              lVar13 = FUN_04070398();
              if (DAT_0482ee1d == '\0') {
                thunk_FUN_01efb3a4();
                DAT_0482ee1d = unaff_w23;
              }
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar16 = *(long *)(*unaff_x26 + 0xb8);
              fVar37 = *(float *)(lVar16 + 0x4c);
              fVar41 = *(float *)(lVar16 + 0x50);
              FUN_0407e3a8(*(undefined4 *)(lVar16 + 0x48),lVar13,0);
              fStack0000000000000088 = (float)FUN_03c7c6c0(0);
              fStack0000000000000080 = fVar41;
              fStack0000000000000084 = fVar37;
            }
            else if (*(int *)(unaff_x19 + 0x3c) == 2) {
              if (DAT_0482ee19 == '\0') {
                thunk_FUN_01efb3a4();
                DAT_0482ee19 = unaff_w23;
              }
              lVar13 = *(long *)(*unaff_x26 + 0xb8);
              fStack0000000000000090 = *(float *)(lVar13 + 0x1c);
              fStack000000000000008c = *(float *)(lVar13 + 0x20);
              fStack0000000000000094 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar13 + 0x18),0);
              if (DAT_0482ee1d == '\0') {
                thunk_FUN_01efb3a4();
                DAT_0482ee1d = unaff_w23;
              }
              lVar13 = *(long *)(*unaff_x26 + 0xb8);
              fVar37 = *(float *)(lVar13 + 0x4c);
              fVar41 = *(float *)(lVar13 + 0x50);
              fStack0000000000000088 = (float)FUN_03c7c6c0(*(undefined4 *)(lVar13 + 0x48),0);
              fStack0000000000000080 = fVar41;
              fStack0000000000000084 = fVar37;
            }
            fVar39 = (float)FUN_03e23f04();
            if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
              thunk_FUN_01efb3a4();
              *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
            }
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar28 = fVar41 * fVar41 + fVar39 * fVar39 + fVar37 * fVar37;
            fVar20 = 1.0 / SQRT(fVar28);
            fVar39 = fVar39 * fVar20;
            fVar37 = fVar37 * fVar20;
            fVar21 = 0.0;
            fVar38 = fVar39;
            fStack0000000000000078 = fVar37;
            fStack0000000000000074 = fVar41 * fVar20;
            if (fVar28 <= unaff_w24) {
              fVar38 = fVar21;
              fStack0000000000000078 = fVar21;
              fStack0000000000000074 = fVar21;
            }
            fVar41 = (float)FUN_03e23f04();
            if (*(char *)(unaff_x22 + 0xe1a) == '\0') {
              thunk_FUN_01efb3a4();
              *(char *)(unaff_x22 + 0xe1a) = unaff_w23;
            }
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar39 = fVar37 * fVar37 + fVar41 * fVar41 + fVar39 * fVar39;
            fStack0000000000000070 = fVar41 * (1.0 / SQRT(fVar39));
            if (fVar39 <= unaff_w24) {
              fStack0000000000000070 = 0.0;
            }
            FUN_03cb4cf0(fVar38,0);
            FUN_03cb3880(0);
            fStack000000000000007c = (float)FUN_04066fb8(0);
            lVar13 = FUN_04073258(lVar8,0);
            fVar39 = fStack0000000000000094;
            fVar38 = fStack0000000000000084;
            fVar37 = fStack0000000000000080;
            FUN_03cb4cf0(fStack0000000000000088,0);
            fVar41 = (float)FUN_03cb3880(0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar28 = (fStack0000000000000078 * fVar41 +
                     fStack0000000000000074 * fVar39 + fStack0000000000000070 * fVar37) -
                     fStack000000000000007c * fVar38;
            uVar9 = (ulong)(uint)((fStack000000000000007c * fVar37 +
                                  fStack0000000000000078 * fVar39 + fStack0000000000000070 * fVar38)
                                 - fStack0000000000000074 * fVar41);
            FUN_0407d5e8((fStack0000000000000074 * fVar38 +
                         fStack000000000000007c * fVar39 + fStack0000000000000070 * fVar41) -
                         fStack0000000000000078 * fVar37,uVar9,fVar28,
                         ((fStack0000000000000070 * fVar39 - fStack000000000000007c * fVar41) -
                         fStack0000000000000078 * fVar38) - fStack0000000000000074 * fVar37,lVar13,0
                        );
            if ((*in_stack_00000060 & 1) != 0) {
              if ((*in_stack_00000060 >> 1 & 1) != 0) {
                uVar9 = (ulong)(uint)in_stack_00000274;
                FUN_04073258(lVar8,0);
                fVar28 = in_stack_00000278;
                FUN_03e2cbdc(in_stack_00000270,uVar9,in_stack_00000278,
                             in_stack_00000280 & 0xffffffff,fVar40,in_stack_00000288);
              }
              fVar30 = (float)uVar9;
              fVar20 = (float)FUN_03e2ce3c(in_stack_00000060);
              fVar38 = fStack0000000000000090;
              fVar37 = fStack000000000000008c;
              fVar21 = (float)FUN_03c7c6bc(0);
              fVar39 = fStack0000000000000080;
              fVar41 = fStack0000000000000084;
              fVar22 = (float)FUN_03c7c6bc(fStack0000000000000088,0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4();
                DAT_0482ee9b = unaff_w23;
              }
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fStack0000000000000030 = fVar38 * fVar39 - fVar37 * fVar41;
              fVar39 = fVar37 * fVar22 - fVar21 * fVar39;
              fVar37 = fVar21 * fVar41 - fVar38 * fVar22;
              fVar38 = SQRT(fVar37 * fVar37 +
                            fStack0000000000000030 * fStack0000000000000030 + fVar39 * fVar39);
              if (fVar38 <= DAT_00c926ac) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee12 = unaff_w23;
                }
                pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                fStack0000000000000030 = *pfVar12;
                fStack000000000000002c = pfVar12[1];
                fVar38 = pfVar12[2];
                fVar39 = fStack0000000000000030;
              }
              else {
                fStack0000000000000030 = fStack0000000000000030 / fVar38;
                fStack000000000000002c = fVar39 / fVar38;
                fVar38 = fVar37 / fVar38;
              }
              lVar13 = FUN_04073258(lVar8,0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar23 = (float)FUN_0407d3c8(lVar13,0);
              fVar41 = fStack000000000000008c;
              fVar21 = fStack0000000000000090;
              fVar24 = (float)FUN_03c7c6bc(fStack0000000000000094,fStack0000000000000090,0);
              fVar22 = fStack0000000000000084;
              fVar26 = fStack0000000000000080;
              fVar25 = (float)FUN_03c7c6bc(fStack0000000000000088,fStack0000000000000084,0);
              fVar25 = fVar28 * fVar25;
              uVar9 = (ulong)(uint)(fVar39 + fVar20 * fStack000000000000002c + fVar30 * fVar21 +
                                             fVar28 * fVar22);
              fVar28 = fVar37 + fVar20 * fVar38 + fVar30 * fVar41 + fVar28 * fVar26;
              FUN_0407d468(fVar23 + fVar20 * fStack0000000000000030 + fVar30 * fVar24 + fVar25,uVar9
                           ,lVar13,0);
            }
            if ((*in_stack_00000058 & 1) != 0) {
              if ((*in_stack_00000058 >> 1 & 1) != 0) {
                FUN_04073258(lVar8,0);
                FUN_03e2cbdc(in_stack_00000270,in_stack_00000274,in_stack_00000278,
                             in_stack_00000280 & 0xffffffff,fVar40,in_stack_00000288);
              }
              lVar13 = FUN_04073258(lVar8,0);
              fVar39 = fStack0000000000000090;
              fVar38 = fStack000000000000008c;
              FUN_03c7c6bc(fStack0000000000000094,0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar37 = (float)FUN_0407e758(lVar13,0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4();
                DAT_0482ee9b = unaff_w23;
              }
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar41 = DAT_00c926ac;
              fVar28 = SQRT(fVar38 * fVar38 + fVar37 * fVar37 + fVar39 * fVar39);
              if (fVar28 <= DAT_00c926ac) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee12 = unaff_w23;
                }
                pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                fVar37 = *pfVar12;
                fVar39 = pfVar12[1];
                fVar38 = pfVar12[2];
              }
              else {
                fVar37 = fVar37 / fVar28;
                fVar39 = fVar39 / fVar28;
                fVar38 = fVar38 / fVar28;
              }
              uVar31 = (ulong)(uint)fVar39;
              uVar9 = FUN_03c7c6c0(fVar37,0);
              fVar20 = (float)uVar31;
              lVar13 = FUN_04073258(lVar8,0);
              fVar39 = fStack0000000000000084;
              fVar37 = fStack0000000000000080;
              FUN_03c7c6bc(fStack0000000000000088,0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar28 = (float)FUN_0407e758(lVar13,0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4();
                DAT_0482ee9b = unaff_w23;
              }
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar21 = SQRT(fVar37 * fVar37 + fVar28 * fVar28 + fVar39 * fVar39);
              if (fVar21 <= fVar41) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee12 = unaff_w23;
                }
                pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                fVar28 = *pfVar12;
                fVar39 = pfVar12[1];
                fVar37 = pfVar12[2];
              }
              else {
                fVar28 = fVar28 / fVar21;
                fVar39 = fVar39 / fVar21;
                fVar37 = fVar37 / fVar21;
              }
              uVar32 = (ulong)(uint)fVar39;
              uVar18 = FUN_03c7c6c0(fVar28,0);
              uVar33 = uVar32;
              fVar39 = fVar37;
              fVar26 = (float)FUN_03e2ce3c(in_stack_00000058);
              fVar25 = (float)uVar33;
              fVar22 = fVar20;
              fVar30 = fVar38;
              fVar23 = (float)FUN_03c7c6bc(uVar9,0);
              uVar33 = uVar32;
              fVar21 = fVar37;
              fVar24 = (float)FUN_03c7c6bc(uVar18,0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4();
                DAT_0482ee9b = unaff_w23;
              }
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar28 = fVar22 * fVar21 - fVar30 * (float)uVar33;
              fVar30 = fVar30 * fVar24 - fVar23 * fVar21;
              fVar21 = fVar23 * (float)uVar33 - fVar22 * fVar24;
              fVar22 = SQRT(fVar21 * fVar21 + fVar28 * fVar28 + fVar30 * fVar30);
              if (fVar22 <= fVar41) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee12 = unaff_w23;
                }
                pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                fStack000000000000004c = *pfVar12;
                fStack000000000000002c = pfVar12[1];
                fVar21 = pfVar12[2];
              }
              else {
                fVar28 = fVar28 / fVar22;
                fVar30 = fVar30 / fVar22;
                fVar21 = fVar21 / fVar22;
                fStack000000000000002c = fVar30;
                fStack000000000000004c = fVar28;
              }
              lVar13 = FUN_04073258(lVar8,0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar41 = (float)FUN_0407d9e8(lVar13,0);
              fVar22 = (float)FUN_03c7c6bc(uVar9 & 0xffffffff,uVar31 & 0xffffffff,0);
              fVar23 = (float)FUN_03c7c6bc(uVar18,uVar32,0);
              uVar9 = (ulong)(uint)(fVar30 + fVar26 * fStack000000000000002c + fVar25 * fVar20 +
                                             fVar39 * (float)uVar32);
              fVar28 = fVar28 + fVar26 * fVar21 + fVar25 * fVar38 + fVar39 * fVar37;
              FUN_0407da88(fVar41 + fVar26 * fStack000000000000004c + fVar25 * fVar22 +
                                    fVar39 * fVar23,uVar9,lVar13,0);
            }
            if ((*in_stack_00000050 & 1) != 0) {
              if ((*in_stack_00000050 >> 1 & 1) != 0) {
                uVar9 = (ulong)(uint)in_stack_00000274;
                FUN_04073258(lVar8,0);
                fVar28 = in_stack_00000278;
                FUN_03e2cbdc(in_stack_00000270,uVar9,in_stack_00000278,
                             in_stack_00000280 & 0xffffffff,fVar40,in_stack_00000288);
                if (*(int *)(unaff_x19 + 0x94) == 3) {
                  puVar11 = *(undefined4 **)
                             (*(long *)
                               Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                             + 0xb8);
                  uVar9 = (ulong)(uint)puVar11[1];
                  fVar28 = (float)puVar11[2];
                  fStack0000000000000070 = (float)puVar11[3];
                  fStack000000000000007c = (float)FUN_03cb3880(*puVar11,0);
                  fStack0000000000000078 = (float)uVar9;
                  fStack0000000000000074 = fVar28;
                }
              }
              uVar27 = FUN_03e2ce3c(in_stack_00000050);
              fVar39 = fStack0000000000000090;
              fVar37 = fStack000000000000008c;
              fVar41 = (float)FUN_03c7c6bc(0);
              fVar38 = fStack0000000000000080;
              fVar40 = fStack0000000000000084;
              fVar20 = (float)FUN_03c7c6bc(0);
              if (DAT_0482ee9b == '\0') {
                thunk_FUN_01efb3a4();
                DAT_0482ee9b = unaff_w23;
              }
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar21 = fVar39 * fVar38 - fVar37 * fVar40;
              fVar38 = fVar37 * fVar20 - fVar41 * fVar38;
              fVar39 = fVar41 * fVar40 - fVar39 * fVar20;
              fVar37 = SQRT(fVar39 * fVar39 + fVar21 * fVar21 + fVar38 * fVar38);
              if (fVar37 <= DAT_00c926ac) {
                if (DAT_0482ee12 == '\0') {
                  thunk_FUN_01efb3a4();
                  DAT_0482ee12 = unaff_w23;
                }
                pfVar12 = *(float **)(*unaff_x26 + 0xb8);
                fVar21 = *pfVar12;
                fVar38 = pfVar12[1];
                fVar39 = pfVar12[2];
              }
              else {
                fVar21 = fVar21 / fVar37;
                fVar38 = fVar38 / fVar37;
                fVar39 = fVar39 / fVar37;
              }
              fVar20 = fStack000000000000008c;
              fVar22 = fStack0000000000000090;
              fVar30 = (float)FUN_03c7c6bc(fStack0000000000000094,0);
              fVar26 = (float)FUN_040674b0(uVar9,0);
              fVar37 = fVar39;
              fVar40 = fVar38;
              fVar41 = fVar21;
              fVar23 = (float)FUN_040674b0(uVar27,0);
              uVar9 = (ulong)(uint)fStack0000000000000084;
              uVar33 = (ulong)(uint)fStack0000000000000080;
              uVar18 = FUN_03c7c6bc(fStack0000000000000088,uVar9,uVar33,0);
              uVar34 = (ulong)(uint)((fVar26 * fVar41 + fVar20 * fVar40 + fVar22 * fVar37) -
                                    fVar30 * fVar23);
              uVar31 = (ulong)(uint)((fVar22 * fVar23 + fVar20 * fVar41 + fVar30 * fVar37) -
                                    fVar26 * fVar40);
              FUN_040677e4((fVar30 * fVar40 + fVar20 * fVar23 + fVar26 * fVar37) - fVar22 * fVar41,
                           uVar31,uVar34,
                           ((fVar20 * fVar37 - fVar26 * fVar23) - fVar30 * fVar41) - fVar22 * fVar40
                           ,uVar18,uVar9,uVar33,0);
              uVar9 = FUN_03c7c6c0(0);
              fVar22 = (float)uVar31;
              fVar30 = (float)uVar34;
              fVar41 = (float)FUN_040674b0(uVar27,0);
              fVar37 = fVar30;
              fVar40 = fVar22;
              fVar20 = (float)FUN_03c7c6bc(uVar9,0);
              fVar28 = (float)FUN_040674b0(fVar28,0);
              uVar33 = (ulong)(uint)fStack0000000000000090;
              uVar35 = (ulong)(uint)fStack000000000000008c;
              uVar18 = FUN_03c7c6bc(fStack0000000000000094,uVar33,uVar35,0);
              uVar36 = (ulong)(uint)((fVar41 * fVar20 + fVar39 * fVar40 + fVar38 * fVar37) -
                                    fVar21 * fVar28);
              uVar32 = (ulong)(uint)((fVar38 * fVar28 + fVar39 * fVar20 + fVar21 * fVar37) -
                                    fVar41 * fVar40);
              FUN_040677e4((fVar21 * fVar40 + fVar39 * fVar28 + fVar41 * fVar37) - fVar38 * fVar20,
                           uVar32,uVar36,
                           ((fVar39 * fVar37 - fVar41 * fVar28) - fVar21 * fVar20) - fVar38 * fVar40
                           ,uVar18,uVar33,uVar35,0);
              uVar18 = FUN_03c7c6c0(0);
              lVar8 = FUN_04073258(lVar8,0);
              FUN_03cb4cf0(uVar9 & 0xffffffff,uVar31 & 0xffffffff,uVar34 & 0xffffffff,uVar18,uVar32,
                           uVar36,0);
              fVar38 = (float)uVar18;
              fVar39 = (float)FUN_03cb3880(0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_0407d5e8((fStack0000000000000074 * fVar22 +
                           fStack000000000000007c * fVar38 + fStack0000000000000070 * fVar39) -
                           fStack0000000000000078 * fVar30,
                           (fStack000000000000007c * fVar30 +
                           fStack0000000000000078 * fVar38 + fStack0000000000000070 * fVar22) -
                           fStack0000000000000074 * fVar39,
                           (fStack0000000000000078 * fVar39 +
                           fStack0000000000000074 * fVar38 + fStack0000000000000070 * fVar30) -
                           fStack000000000000007c * fVar22,
                           ((fStack0000000000000070 * fVar38 - fStack000000000000007c * fVar39) -
                           fStack0000000000000078 * fVar22) - fStack0000000000000074 * fVar30,lVar8,
                           0);
            }
            iStack0000000000000018 = iStack0000000000000018 + 1;
            iVar5 = iVar5 + 1;
          } while (unaff_w20 != iStack0000000000000018);
        }
        FUN_03e1c250(&stack0x000002a0);
        puVar3 = Method_System_Reflection_Emit_ConstructorBuilder_Invoke__;
        iStack0000000000000020 = iStack0000000000000020 + 1;
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (plVar6 = (long *)FUN_03e18b6c(),
           unaff_x27 = (long *)
                       Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
           , unaff_x28 = (long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__,
           plVar6 == (long *)0x0)) {
LAB_03e29e84:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_1:
        iVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (iVar5 <= iStack0000000000000020) {
          *(undefined1 *)(unaff_x19 + 0xf8) = 0;
          return;
        }
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (plVar6 = (long *)FUN_03e18b6c(), plVar6 == (long *)0x0)) goto LAB_03e29e84;
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03e2a18c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0
                             );
LAB_03e2a18c:
        uVar18 = (*(code *)*puVar7)(plVar6,iStack0000000000000020,puVar7[1]);
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar8 = FUN_04070398(*(long *)(unaff_x19 + 0x28),0), lVar8 == 0)) goto LAB_03e29e84;
        FUN_0407cee0(&stack0x00000098,lVar8,0);
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
                  (&stack0x000002a0,uVar18,&stack0x000000e0,3);
        if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        unaff_s8 = (float)FUN_0314b598(*(long *)(unaff_x19 + 0x110),iStack0000000000000020,
                                       *(undefined8 *)
                                        Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
                                      );
        unaff_s13 = unaff_s8 + fStack0000000000000014;
        if (*(int *)(unaff_x19 + 0x38) == 0) {
          bVar2 = in_stack_00000068._4_4_ <= in_stack_00000008._4_4_ &&
                  unaff_s13 < in_stack_00000068._4_4_;
          if (in_stack_00000068._4_4_ <= in_stack_00000008._4_4_ &&
              unaff_s13 < in_stack_00000068._4_4_) {
            in_stack_00000068._4_4_ = in_stack_00000068._4_4_ - unaff_s8;
          }
        }
        else {
          bVar2 = false;
          in_stack_00000068._4_4_ = 0.0;
        }
        lVar8 = *(long *)(unaff_x19 + 0x108);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        iStack0000000000000018 = unaff_w20;
      } while (bVar2 || unaff_s13 < in_stack_00000068._4_4_);
      unaff_s14 = unaff_s8 + 1.0;
LAB_03e2b550:
      uVar9 = FUN_03e2c8c8();
    } while ((uVar9 & 1) == 0);
    param_3 = *(long *)(unaff_x19 + 0x108);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *(long *)(param_3 + 0x10);
    in_x9 = *unaff_x27;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    in_x10 = (long)(int)*(uint *)(param_3 + 0x18);
    in_CY = *(uint *)(param_1 + 0x18) <= *(uint *)(param_3 + 0x18);
    param_2 = in_stack_00000068._4_4_;
  } while( true );
}


