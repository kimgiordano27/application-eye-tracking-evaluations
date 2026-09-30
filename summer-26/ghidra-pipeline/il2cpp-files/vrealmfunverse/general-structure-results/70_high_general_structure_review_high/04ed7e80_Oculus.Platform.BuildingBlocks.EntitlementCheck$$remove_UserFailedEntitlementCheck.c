/*
FUNCTION_NAME: Oculus.Platform.BuildingBlocks.EntitlementCheck$$remove_UserFailedEntitlementCheck
ENTRY_POINT: 04ed7e80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ed85e8) */
/* WARNING: Removing unreachable block (ram,0x04ed8a98) */
/* WARNING: Removing unreachable block (ram,0x04ed8a90) */

long Oculus_Platform_BuildingBlocks_EntitlementCheck__remove_UserFailedEntitlementCheck
               (undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  int *piVar16;
  long unaff_x19;
  long lVar17;
  long *unaff_x20;
  long *plVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  long lVar22;
  undefined8 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fStack0000000000000014;
  float fStack0000000000000018;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  long lStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  long lStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long lStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  long lStack0000000000000100;
  undefined8 uStack0000000000000108;
  long lStack0000000000000110;
  undefined8 uStack0000000000000118;
  long lStack0000000000000120;
  undefined8 uStack0000000000000128;
  long lStack0000000000000130;
  undefined8 uStack0000000000000138;
  long lStack0000000000000140;
  undefined8 uStack0000000000000148;
  long lStack0000000000000150;
  undefined8 uStack0000000000000158;
  long lStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined8 uStack0000000000000180;
  undefined4 uStack0000000000000188;
  long lStack0000000000000190;
  long lStack0000000000000198;
  long lStack00000000000001a0;
  undefined4 uStack00000000000001a8;
  float fStack00000000000001b8;
  float fStack00000000000001bc;
  float fStack00000000000001c0;
  float fStack00000000000001c4;
  undefined8 uStack00000000000001c8;
  float in_stack_000001d0;
  float fStack00000000000001d8;
  float fStack00000000000001dc;
  float fStack00000000000001e0;
  float fStack00000000000001e4;
  float fStack00000000000001e8;
  float fStack00000000000001ec;
  float fVar34;
  float fVar35;
  float fVar36;
  
  puVar5 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var;
  puVar4 = UnityEngine_UIElements_WorldSpaceInput_PickResult_var;
  puVar3 = UnityEngine_SpatialTracking_TrackedPoseDriverDataDescription_PoseData_var;
  puVar2 = System_Text_UTF32Encoding_var;
  uVar23 = param_1._8_8_;
  lVar22 = param_1._0_8_;
  fVar34 = param_1._8_4_;
  fVar35 = param_1._12_4_;
  fVar36 = param_1._4_4_;
  uStack00000000000001c8 = 0;
  lStack0000000000000190 = 0;
  lStack0000000000000198 = 0;
  uStack00000000000001a8 = 0;
  lStack00000000000001a0 = 0;
  uStack0000000000000170 = 0;
  uStack0000000000000174 = 0;
  uStack0000000000000178 = 0;
  uStack000000000000017c = 0;
  uStack0000000000000188 = 0;
  uStack0000000000000180 = 0;
  lStack00000000000000b0 = lVar22;
  lStack00000000000000c0 = lVar22;
  lStack00000000000000f0 = lVar22;
  uStack00000000000000f8 = uVar23;
  lStack0000000000000100 = lVar22;
  uStack0000000000000108 = uVar23;
  lStack0000000000000110 = lVar22;
  uStack0000000000000118 = uVar23;
  lStack0000000000000120 = lVar22;
  uStack0000000000000128 = uVar23;
  lStack0000000000000130 = lVar22;
  lStack0000000000000140 = lVar22;
  lStack0000000000000150 = lVar22;
  lStack0000000000000160 = lVar22;
  if (unaff_x19 != 0) {
    uStack00000000000000b8 = uVar23;
    uStack00000000000000c8 = uVar23;
    uStack0000000000000138 = uVar23;
    uStack0000000000000148 = uVar23;
    uStack0000000000000158 = uVar23;
    uStack0000000000000168 = uVar23;
    FUN_03939f50(&stack0x00000060);
    memcpy(&stack0x00000230,&stack0x00000060,0x50);
    puVar1 = PTR_DAT_06312c90;
    fVar30 = DAT_01032864;
    fStack0000000000000018 = 3.4028235e+38;
    fStack0000000000000014 = 3.4028235e+38;
    lVar17 = 0;
    fVar6 = fStack0000000000000014;
    fVar7 = fStack0000000000000018;
LAB_04ed7f44:
    fStack0000000000000018 = fVar7;
    fStack0000000000000014 = fVar6;
    uVar11 = FUN_0476d0f8(&stack0x00000230,*(undefined8 *)puVar5);
    if ((uVar11 & 1) != 0) {
      if (unaff_x20[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar11 = FUN_0452a68c(unaff_x20[0x41],lVar22,*(undefined8 *)puVar4);
      if ((uVar11 & 1) == 0) {
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        plVar18 = *(long **)(lVar22 + 0xd0);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar14 = *plVar18;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_04ed800c;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar3,0);
LAB_04ed800c:
        plVar18 = (long *)(*(code *)*puVar12)(plVar18,puVar12[1]);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar14 = *plVar18;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_04ed806c;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar2,0);
LAB_04ed806c:
        lVar14 = (*(code *)*puVar12)(plVar18,puVar12[1]);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05c9cbb4(&stack0x00000060,lVar14,0);
      }
      else {
        if (unaff_x20[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_0452a300(&stack0x00000060,unaff_x20[0x41],lVar22,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
                    );
      }
      uStack00000000000000f8 = in_stack_00000068;
      lStack00000000000000f0 = in_stack_00000060;
      uStack0000000000000108 = in_stack_00000078;
      lStack0000000000000100 = in_stack_00000070;
      uStack0000000000000118 = in_stack_00000088;
      lStack0000000000000110 = in_stack_00000080;
      uStack0000000000000128 = in_stack_00000098;
      lStack0000000000000120 = in_stack_00000090;
      fVar26 = *(float *)((long)unaff_x20 + 0x164);
      fVar24 = *(float *)(unaff_x20 + 0x2c);
      uVar19 = FUN_05c79210(*(undefined4 *)((long)unaff_x20 + 0x15c),&stack0x000001f0,0);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar18 = *(long **)(lVar22 + 0xd0);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar14 = *plVar18;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_04ed8124;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar3,0);
LAB_04ed8124:
      plVar18 = (long *)(*(code *)*puVar12)(plVar18,puVar12[1]);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar14 = *plVar18;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_04ed8184;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar2,0);
LAB_04ed8184:
      lVar14 = (*(code *)*puVar12)(plVar18,puVar12[1]);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      fVar20 = (float)FUN_05c9a068(uVar19,lVar14,0);
      uVar11 = FUN_04ed91e8();
      fVar6 = fStack0000000000000014;
      fVar7 = fStack0000000000000018;
      if ((uVar11 & 1) != 0) {
        fVar29 = *(float *)(unaff_x20 + 0x2a);
        fVar31 = *(float *)((long)unaff_x20 + 0x154);
        fVar32 = *(float *)(unaff_x20 + 0x2b);
        if (DAT_066c1d9c == '\0') {
          FUN_02b3c81c(puVar1);
          DAT_066c1d9c = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar29 = fVar29 - fVar20;
        fVar31 = fVar31 - fVar24;
        fVar32 = fVar32 - fVar26;
        fVar33 = SQRT(fVar29 * fVar29 + fVar31 * fVar31 + fVar32 * fVar32);
        if (fVar33 != 0.0) {
          fStack00000000000001d8 = fVar20;
          fStack00000000000001dc = fVar24;
          fStack00000000000001e0 = fVar26;
          if (DAT_066c1d9d == '\0') {
            FUN_02b3c81c(puVar1);
            DAT_066c1d9d = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          fVar29 = fVar29 / fVar33;
          fVar31 = fVar31 / fVar33;
          fVar32 = fVar32 / fVar33;
          fVar27 = SQRT(fVar32 * fVar32 + fVar29 * fVar29 + fVar31 * fVar31);
          if (fVar27 <= fVar30) {
            if (DAT_066c1d97 == '\0') {
              FUN_02b3c81c(PTR_DAT_06312438);
              DAT_066c1d97 = '\x01';
            }
            pfVar15 = *(float **)(*(long *)PTR_DAT_06312438 + 0xb8);
            fStack00000000000001e4 = *pfVar15;
            fStack00000000000001e8 = pfVar15[1];
            fStack00000000000001ec = pfVar15[2];
          }
          else {
            fStack00000000000001e4 = fVar29 / fVar27;
            fStack00000000000001e8 = fVar31 / fVar27;
            fStack00000000000001ec = fVar32 / fVar27;
          }
          if (fVar35 * fVar32 + fVar36 * fVar29 + fVar34 * fVar31 < 0.0) {
            plVar18 = *(long **)(lVar22 + 0xd0);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar14 = *plVar18;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_04ed835c;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar3,0);
LAB_04ed835c:
            plVar18 = (long *)(*(code *)*puVar12)(plVar18,puVar12[1]);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar14 = *plVar18;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_04ed83c0;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar2,1);
LAB_04ed83c0:
            bVar9 = (*(code *)*puVar12)(0,plVar18,&stack0x000001d8,&stack0x000001b8,puVar12[1]);
            fVar29 = fStack00000000000001b8;
            fVar31 = fStack00000000000001bc;
            fVar32 = fStack00000000000001c0;
            fVar27 = fStack00000000000001c4;
            uVar8 = uStack00000000000001c8;
            fVar21 = in_stack_000001d0;
            if (((bVar9 & in_stack_000001d0 <= fVar33) == 1) ||
               (fVar21 = (float)FUN_04ed92d8((int)unaff_x20[0x2a],
                                             *(undefined4 *)((long)unaff_x20 + 0x154),
                                             (int)unaff_x20[0x2b]), fVar29 = fVar34, fVar31 = fVar35
               , fVar32 = param_1._0_4_, fVar27 = fVar36, uVar8 = uVar23, fVar21 <= 0.0)) {
              in_stack_000001d0 = fVar21;
              uStack00000000000001c8 = uVar8;
              fStack00000000000001c4 = fVar27;
              fStack00000000000001c0 = fVar32;
              fStack00000000000001bc = fVar31;
              fStack00000000000001b8 = fVar29;
              fVar29 = (float)FUN_04ed92f8(fStack00000000000001b8,fStack00000000000001bc,
                                           fStack00000000000001c0);
              lVar14 = unaff_x20[0x2d];
              if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar11 = FUN_05c8c45c(lVar22,lVar14,0);
              lVar14 = 0xdc;
              if ((uVar11 & 1) == 0) {
                lVar14 = 0xe4;
              }
              if (fVar29 <= *(float *)(lVar22 + lVar14)) {
                fVar24 = (fVar26 - fStack00000000000001c0) *
                         (float)((ulong)uStack00000000000001c8 >> 0x20) +
                         (fVar20 - fStack00000000000001b8) * fStack00000000000001c4 +
                         (fVar24 - fStack00000000000001bc) * (float)uStack00000000000001c8;
                lVar14 = lVar17;
                if (ABS(fVar24 - fStack0000000000000014) < *(float *)(unaff_x20 + 0x25)) {
                  iVar10 = (**(code **)(*unaff_x20 + 0x548))();
                  if (0 < iVar10) {
                    fStack0000000000000018 = fVar29;
                    lVar14 = lVar22;
                    fStack0000000000000014 = fVar24;
                  }
                  lVar17 = lVar14;
                  fVar6 = fStack0000000000000014;
                  fVar7 = fStack0000000000000018;
                  if (iVar10 != 0) goto LAB_04ed7f44;
                }
                lVar17 = lVar14;
                fVar6 = fStack0000000000000014;
                fVar7 = fStack0000000000000018;
                if (fVar24 <= fStack0000000000000014 + *(float *)(lVar22 + 0x110)) {
                  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar11 = FUN_05c8e378(lVar14,0,0);
                  lVar17 = lVar22;
                  fVar6 = fVar24;
                  fVar7 = fVar29;
                  if ((uVar11 & 1) == 0) {
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    if ((fStack0000000000000014 - *(float *)(lVar14 + 0x110) <= fVar24) &&
                       (lVar17 = lVar14, fVar6 = fStack0000000000000014,
                       fVar7 = fStack0000000000000018, fVar29 < fStack0000000000000018)) {
                      lVar17 = lVar22;
                      fVar6 = fVar24;
                      fVar7 = fVar29;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_04ed7f44;
    }
    FUN_0476d0f4(&stack0x00000230,
                 *(undefined8 *)UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar11 = FUN_05c8c45c(lVar17,0,0);
    if ((uVar11 & 1) == 0) {
      return lVar17;
    }
    if (unaff_x20[0x40] != 0) {
      FUN_04edad9c(unaff_x20[0x40],lVar17,&stack0x00000190,0);
      if (unaff_x20[0x40] != 0) {
        FUN_04edab84(unaff_x20[0x40],lVar17,&stack0x00000170,0);
        *(undefined4 *)((long)unaff_x20 + 300) = uStack0000000000000170;
        unaff_x20[0x27] = lStack0000000000000190;
        unaff_x20[0x26] = CONCAT44(uStack0000000000000178,uStack0000000000000174);
        unaff_x20[0x29] = lStack00000000000001a0;
        unaff_x20[0x28] = lStack0000000000000198;
        if (unaff_x20[0x43] != 0) {
          FUN_03939f50(&stack0x00000060,unaff_x20[0x43],
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredTouch_var);
          memcpy(&stack0x00000230,&stack0x00000060,0x50);
Oculus_Platform_BuildingBlocks_EntitlementCheck___ctor:
          do {
            do {
              uVar11 = FUN_0476d0f8(&stack0x00000230,*(undefined8 *)puVar5);
              if ((uVar11 & 1) == 0) goto LAB_04ed89dc;
              if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar13 = FUN_05c8e378(lVar22,lVar17,0);
            } while ((uVar13 & 1) != 0);
            if (unaff_x20[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar13 = FUN_0452a68c(unaff_x20[0x41],lVar22,*(undefined8 *)puVar4);
            if ((uVar13 & 1) == 0) {
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              plVar18 = *(long **)(lVar22 + 0xd0);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar14 = *plVar18;
              uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar13 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                    puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_04ed878c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar13 != 0);
              }
              puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar3,0);
LAB_04ed878c:
              plVar18 = (long *)(*(code *)*puVar12)(plVar18,puVar12[1]);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar14 = *plVar18;
              uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar13 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                    puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_04ed87ec;
                  }
                  uVar13 = uVar13 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar13 != 0);
              }
              puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar2,0);
LAB_04ed87ec:
              lVar14 = (*(code *)*puVar12)(plVar18,puVar12[1]);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_05c9cbb4(&stack0x00000060,lVar14,0);
            }
            else {
              if (unaff_x20[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_0452a300(&stack0x00000060,unaff_x20[0x41],lVar22,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
                          );
            }
            uStack00000000000000b8 = in_stack_00000068;
            lStack00000000000000b0 = in_stack_00000060;
            uStack00000000000000c8 = in_stack_00000078;
            lStack00000000000000c0 = in_stack_00000070;
            in_stack_000000d8 = in_stack_00000088;
            in_stack_000000d0 = in_stack_00000080;
            in_stack_000000e8 = in_stack_00000098;
            in_stack_000000e0 = in_stack_00000090;
            uVar28 = *(undefined4 *)((long)unaff_x20 + 0x164);
            uStack0000000000000138 = in_stack_00000068;
            lStack0000000000000130 = in_stack_00000060;
            uStack0000000000000148 = in_stack_00000078;
            lStack0000000000000140 = in_stack_00000070;
            uVar25 = (undefined4)unaff_x20[0x2c];
            uStack0000000000000158 = in_stack_00000088;
            lStack0000000000000150 = in_stack_00000080;
            uStack0000000000000168 = in_stack_00000098;
            lStack0000000000000160 = in_stack_00000090;
            uVar19 = FUN_05c79210(*(undefined4 *)((long)unaff_x20 + 0x15c),uVar25,uVar28,
                                  &stack0x00000130,0);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            plVar18 = *(long **)(lVar22 + 0xd0);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar14 = *plVar18;
            uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_04ed88a4;
                }
                uVar13 = uVar13 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar13 != 0);
            }
            puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar3,0);
LAB_04ed88a4:
            plVar18 = (long *)(*(code *)*puVar12)(plVar18,puVar12[1]);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar14 = *plVar18;
            uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_04ed8904;
                }
                uVar13 = uVar13 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar13 != 0);
            }
            puVar12 = (undefined8 *)FUN_02b7654c(plVar18,*(long *)puVar2,0);
LAB_04ed8904:
            lVar14 = (*(code *)*puVar12)(plVar18,puVar12[1]);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            FUN_05c9a068(uVar19,uVar25,uVar28,lVar14,0);
            uVar13 = FUN_04ed91e8();
          } while ((uVar13 & 1) == 0);
          fVar30 = fVar35 * ((float)((ulong)*(undefined8 *)((long)unaff_x20 + 0x13c) >> 0x20) -
                            param_1._0_4_) +
                   fVar36 * (*(float *)(unaff_x20 + 0x27) - fVar34) +
                   fVar34 * ((float)*(undefined8 *)((long)unaff_x20 + 0x13c) - fVar35);
          if (*(float *)(unaff_x20 + 0x25) <= ABS(fVar30)) {
            if (fVar30 <= 0.0) goto Oculus_Platform_BuildingBlocks_EntitlementCheck___ctor;
          }
          else {
            iVar10 = (**(code **)(*unaff_x20 + 0x548))();
            if (fVar30 <= 0.0 || 0 < iVar10)
            goto Oculus_Platform_BuildingBlocks_EntitlementCheck___ctor;
          }
          if (((fVar30 <= *(float *)(lVar22 + 0x110)) &&
              (fVar30 = (float)FUN_04ed92f8((int)unaff_x20[0x27],
                                            *(undefined4 *)((long)unaff_x20 + 0x13c),
                                            (int)unaff_x20[0x28]),
              fVar30 <= *(float *)(lVar22 + 0xdc))) && (fVar30 <= fStack0000000000000018)) {
LAB_04ed89dc:
            FUN_0476d0f4(&stack0x00000230,
                         *(undefined8 *)
                          UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
            if ((uVar11 & 1) != 0) {
              return 0;
            }
            return lVar17;
          }
          goto Oculus_Platform_BuildingBlocks_EntitlementCheck___ctor;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


