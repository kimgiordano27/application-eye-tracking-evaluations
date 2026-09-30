/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 0694545c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__SetInsightPassthroughKeyboardHandsIntensity
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *plVar15;
  long unaff_x22;
  int iVar16;
  long lVar17;
  undefined8 *unaff_x28;
  uint unaff_w29;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float unaff_s8;
  float unaff_s10;
  long *in_stack_00000018;
  undefined8 in_stack_00000028;
  
  while ((((*unaff_x20 != 0 && (lVar6 = FUN_04de82e0(*unaff_x20,unaff_w21,*unaff_x19), lVar6 != 0))
          && (*(long *)(lVar6 + 0x80) != 0)) &&
         (lVar6 = FUN_07c98f88(*(long *)(lVar6 + 0x80),0), lVar6 != 0))) {
    fVar18 = (float)FUN_07cab758(lVar6,0);
    if (*unaff_x20 == 0) break;
    iVar16 = unaff_w21 + -1;
    lVar6 = FUN_04de82e0(*unaff_x20,iVar16,*unaff_x19);
    if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
       (lVar6 = FUN_07c98f88(*(long *)(lVar6 + 0x80),0), lVar6 == 0)) break;
    fVar19 = (float)FUN_07cab758(lVar6,0);
    if (fVar18 < fVar19) {
      lVar6 = *unaff_x20;
      if (lVar6 == 0) break;
      uVar7 = FUN_04de82e0(lVar6,unaff_w21,*unaff_x19);
      if (*unaff_x20 == 0) break;
      uVar8 = FUN_04de82e0(*unaff_x20,iVar16,*unaff_x19);
      FUN_04de8334(lVar6,iVar16,uVar7,*unaff_x28);
      FUN_04de8334(lVar6,unaff_w21,uVar8,*unaff_x28);
    }
    do {
      while( true ) {
        if (unaff_x22 == 0) goto LAB_069460ac;
        lVar6 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_069460ac;
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        if (uVar12 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
          *(uint *)(lVar6 + (long)(int)uVar12 * 4 + 0x20) = unaff_w29 - 1;
        }
        else {
          FUN_04d8c18c();
        }
        lVar6 = *unaff_x20;
        unaff_w21 = unaff_w21 + 1;
        if (lVar6 == 0) goto LAB_069460ac;
        if (*(int *)(lVar6 + 0x18) <= unaff_w21) {
          lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5fd8);
          FUN_04de7d48(lVar6,*(undefined8 *)PTR_DAT_084b5fe0);
          plVar15 = in_stack_00000018 + 10;
          *plVar15 = lVar6;
          thunk_FUN_03afed3c(plVar15,lVar6);
          if ((int)unaff_w29 < 1) goto LAB_069457b4;
          uVar12 = 0;
          goto LAB_069455f4;
        }
        lVar6 = FUN_04de82e0(lVar6,unaff_w21,*unaff_x19);
        if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
           (lVar6 = FUN_07c98f88(*(long *)(lVar6 + 0x80),0), lVar6 == 0)) goto LAB_069460ac;
        FUN_07cab758(lVar6,0);
        if (ABS(param_3 - unaff_s8) <= unaff_s10) break;
        unaff_w29 = unaff_w29 + 1;
        unaff_s8 = param_3;
      }
      unaff_s8 = param_3;
    } while (unaff_w21 == 0);
  }
  goto LAB_069460ac;
LAB_069455f4:
  do {
    iVar16 = uVar12 - unaff_w29;
    puVar1 = (undefined8 *)PTR_DAT_084b64b0;
    if (iVar16 != -1) {
      puVar1 = (undefined8 *)PTR_DAT_08498a60;
    }
    puVar2 = (undefined8 *)PTR_DAT_084b6458;
    if (uVar12 != 0) {
      puVar2 = puVar1;
    }
    uVar8 = *puVar2;
    in_stack_00000028._4_4_ = uVar12;
    uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),(long)&stack0x00000028 + 4);
    uVar7 = FUN_065ce754(*(undefined8 *)PTR_DAT_084b6498,uVar8,uVar7,0);
    lVar17 = *plVar15;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6440);
    FUN_0694e06c(lVar6,0);
    if (lVar6 == 0) goto LAB_069460ac;
    *(undefined8 *)(lVar6 + 0x10) = uVar7;
    thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x10),uVar7);
    if (uVar12 == 0) {
      uVar5 = 0x3f800000;
      uVar20 = 0x3f800000;
      if (iVar16 != -1) {
        uVar5 = 0;
      }
LAB_069456c4:
      uVar11 = 0x3f800000;
    }
    else {
      uVar5 = 0x3f800000;
      if (iVar16 != -1) {
        uVar5 = 0;
      }
      if (2 < unaff_w29) {
        uVar20 = 0x3f000000;
        if (uVar12 != 1) {
          uVar20 = 0;
        }
        goto LAB_069456c4;
      }
      uVar20 = 0;
      uVar11 = 0x3f333333;
    }
    *(undefined4 *)(lVar6 + 0x20) = uVar11;
    *(undefined4 *)(lVar6 + 0x24) = uVar5;
    *(undefined4 *)(lVar6 + 0x30) = uVar20;
    *(undefined1 *)(lVar6 + 0x18) = 1;
    *(undefined1 *)(lVar6 + 0x28) = 0;
    if (lVar17 == 0) goto LAB_069460ac;
    lVar13 = *(long *)(lVar17 + 0x10);
    lVar14 = *(long *)PTR_DAT_084b63f8;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_069460ac;
    uVar3 = *(uint *)(lVar17 + 0x18);
    if (uVar3 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar17 + 0x18) = uVar3 + 1;
      plVar9 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
      *plVar9 = lVar6;
      thunk_FUN_03afed3c(plVar9,lVar6);
    }
    else {
      FUN_04de85b0(lVar17,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    uVar7 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64c0,uVar7,*(undefined8 *)PTR_DAT_0848f320,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4f4f4(uVar7,0);
    uVar12 = uVar12 + 1;
  } while (uVar12 != unaff_w29);
LAB_069457b4:
  lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5fb8);
  FUN_04de7d48(lVar6,*(undefined8 *)PTR_DAT_084b5fc0);
  plVar9 = in_stack_00000018 + 7;
  *plVar9 = lVar6;
  thunk_FUN_03afed3c(plVar9,lVar6);
  if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6478,0);
  lVar17 = *plVar9;
  lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
  uVar8 = _UNK_015c8078;
  uVar7 = _DAT_015c8070;
  *(undefined8 *)(lVar6 + 0x78) = _UNK_015c8078;
  *(undefined8 *)(lVar6 + 0x70) = uVar7;
  FUN_06942668();
  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084b64c8;
  thunk_FUN_03afed3c();
  if (lVar17 != 0) {
    lVar13 = *(long *)(lVar17 + 0x10);
    lVar14 = *(long *)PTR_DAT_084b6408;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (lVar13 != 0) {
      uVar12 = *(uint *)(lVar17 + 0x18);
      if (uVar12 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar17 + 0x18) = uVar12 + 1;
        plVar10 = (long *)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
        *plVar10 = lVar6;
        thunk_FUN_03afed3c(plVar10,lVar6);
      }
      else {
        FUN_04de85b0(lVar17,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b64b8,0);
      lVar17 = *plVar9;
      lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
      *(undefined8 *)(lVar6 + 0x78) = uVar8;
      *(undefined8 *)(lVar6 + 0x70) = uVar7;
      FUN_06942668();
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084b6460;
      thunk_FUN_03afed3c();
      if (lVar17 != 0) {
        lVar13 = *(long *)(lVar17 + 0x10);
        lVar14 = *(long *)PTR_DAT_084b6408;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar13 != 0) {
          uVar12 = *(uint *)(lVar17 + 0x18);
          if (uVar12 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar17 + 0x18) = uVar12 + 1;
            plVar10 = (long *)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
            *plVar10 = lVar6;
            thunk_FUN_03afed3c(plVar10,lVar6);
          }
          else {
            FUN_04de85b0(lVar17,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6490,0);
          lVar17 = *plVar9;
          lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
          *(undefined8 *)(lVar6 + 0x78) = uVar8;
          *(undefined8 *)(lVar6 + 0x70) = uVar7;
          FUN_06942668();
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084b64a0;
          thunk_FUN_03afed3c();
          if (lVar17 != 0) {
            lVar13 = *(long *)(lVar17 + 0x10);
            lVar14 = *(long *)PTR_DAT_084b6408;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar12 = *(uint *)(lVar17 + 0x18);
              if (uVar12 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar12 + 1;
                plVar10 = (long *)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
                *plVar10 = lVar6;
                thunk_FUN_03afed3c(plVar10,lVar6);
              }
              else {
                FUN_04de85b0(lVar17,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              puVar4 = PTR_DAT_084b6410;
              if (*plVar9 != 0) {
                lVar6 = FUN_04de82e0(*plVar9,2,*(undefined8 *)PTR_DAT_084b6410);
                if ((*plVar9 != 0) &&
                   (uVar7 = FUN_04de82e0(*plVar9,0,*(undefined8 *)puVar4), lVar6 != 0)) {
                  FUN_06941ffc(lVar6,uVar7);
                  puVar4 = PTR_DAT_084b6410;
                  if (*plVar9 != 0) {
                    lVar6 = FUN_04de82e0(*plVar9,2,*(undefined8 *)PTR_DAT_084b6410);
                    if ((*plVar9 != 0) &&
                       (uVar7 = FUN_04de82e0(*plVar9,1,*(undefined8 *)puVar4), lVar6 != 0)) {
                      FUN_069426d0(lVar6,uVar7);
                      if ((*plVar9 != 0) &&
                         (lVar6 = FUN_04de82e0(*plVar9,2,*(undefined8 *)PTR_DAT_084b6410),
                         lVar6 != 0)) {
                        uVar7 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64a8,
                                             *(undefined8 *)(lVar6 + 0x28),
                                             *(undefined8 *)PTR_DAT_0848f320,0);
                        FUN_07c4f4f4(uVar7,0);
                        if (in_stack_00000018[7] != 0) {
                          lVar6 = in_stack_00000018[9];
                          uVar7 = FUN_04de82e0(in_stack_00000018[7],2,
                                               *(undefined8 *)PTR_DAT_084b6410);
                          if (lVar6 != 0) {
                            FUN_06941ffc(lVar6,uVar7);
                            lVar6 = *unaff_x20;
                            if (lVar6 != 0) {
                              iVar16 = 0;
                              while (puVar4 = PTR_DAT_084b6480, fVar19 = DAT_015c5994,
                                    fVar18 = DAT_015c56e4, iVar16 < *(int *)(lVar6 + 0x18)) {
                                if (unaff_x22 == 0) goto LAB_069460ac;
                                uVar5 = FUN_04d8be94();
                                if (*unaff_x20 == 0) goto LAB_069460ac;
                                lVar6 = FUN_04de82e0(*unaff_x20,iVar16,*unaff_x19);
                                lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6438);
                                FUN_0694d12c(lVar17,0);
                                if ((lVar17 == 0) ||
                                   (*(undefined4 *)(lVar17 + 0x10) = uVar5, lVar6 == 0))
                                goto LAB_069460ac;
                                *(long *)(lVar6 + 0x88) = lVar17;
                                thunk_FUN_03afed3c((long *)(lVar6 + 0x88),lVar17);
                                lVar6 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
                                if (lVar6 == 0) goto LAB_069460ac;
                                if (*(int *)(lVar6 + 0x18) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_084b64d8;
                                thunk_FUN_03afed3c();
                                if ((*unaff_x20 == 0) ||
                                   (lVar17 = FUN_04de82e0(*unaff_x20,iVar16,*unaff_x19), lVar17 == 0
                                   )) goto LAB_069460ac;
                                if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar17 + 0x28);
                                thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x28));
                                if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
                                thunk_FUN_03afed3c();
                                if ((*plVar15 == 0) ||
                                   (lVar17 = FUN_04de82e0(*plVar15,uVar5,
                                                          *(undefined8 *)PTR_DAT_084b63c8),
                                   lVar17 == 0)) goto LAB_069460ac;
                                if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar17 + 0x10);
                                thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x38));
                                if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
                                thunk_FUN_03afed3c();
                                uVar7 = FUN_065ce45c(lVar6,0);
                                if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
                                }
                                FUN_07c4f4f4(uVar7,0);
                                lVar6 = *unaff_x20;
                                iVar16 = iVar16 + 1;
                                if (lVar6 == 0) goto LAB_069460ac;
                              }
                              lVar6 = *plVar15;
                              if (lVar6 != 0) {
                                uVar12 = unaff_w29;
                                if (1 < (int)unaff_w29) {
                                  uVar12 = 2;
                                }
                                if ((int)unaff_w29 < 1) goto LAB_069460b0;
                                iVar16 = 0;
                                goto LAB_06945da4;
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
      }
    }
  }
  goto LAB_069460ac;
LAB_06945da4:
  do {
    lVar6 = FUN_04de82e0(lVar6,iVar16,*(undefined8 *)PTR_DAT_084b63c8);
    if ((lVar6 == 0) || (lVar6 = FUN_0694d834(), lVar6 == 0)) break;
    if (*(int *)(lVar6 + 0x18) == 2) {
      lVar17 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
      if (lVar17 == 0) break;
      if (*(int *)(lVar17 + 0x18) == 0) {
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)puVar4;
      thunk_FUN_03afed3c();
      if ((*plVar9 == 0) ||
         (lVar13 = FUN_04de82e0(*plVar9,iVar16,*(undefined8 *)PTR_DAT_084b6410), lVar13 == 0))
      break;
      if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar17 + 0x28));
      if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_069460ec;
      *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
      thunk_FUN_03afed3c();
      lVar13 = FUN_04de82e0(lVar6,0,*unaff_x19);
      if (lVar13 == 0) break;
      if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)(lVar13 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar17 + 0x38));
      if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_069460ec;
      *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
      thunk_FUN_03afed3c();
      uVar7 = FUN_065ce45c(lVar17,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar7,0);
      lVar17 = FUN_04de82e0(lVar6,0,*unaff_x19);
      if (((lVar17 == 0) || (*(long *)(lVar17 + 0x80) == 0)) ||
         (lVar17 = FUN_07c98f88(*(long *)(lVar17 + 0x80),0), lVar17 == 0)) break;
      fVar21 = (float)FUN_07cac280(lVar17,0);
      if (fVar18 <= fVar21) {
        lVar17 = FUN_04de82e0(lVar6,0,*unaff_x19);
        if (((lVar17 == 0) || (*(long *)(lVar17 + 0x80) == 0)) ||
           (lVar17 = FUN_07c98f88(*(long *)(lVar17 + 0x80),0), lVar17 == 0)) break;
        fVar21 = (float)FUN_07cac280(lVar17,0);
        if (fVar21 <= fVar19) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
          goto LAB_06946098;
        }
        if (*plVar9 == 0) break;
        lVar17 = FUN_04de82e0(*plVar9,iVar16,*(undefined8 *)PTR_DAT_084b6410);
        uVar7 = FUN_04de82e0(lVar6,1,*unaff_x19);
        if (lVar17 == 0) break;
        FUN_06941ffc(lVar17,uVar7);
        if (*plVar9 == 0) break;
        lVar17 = FUN_04de82e0(*plVar9,iVar16,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = *unaff_x19;
        uVar7 = 0;
      }
      else {
        if (*plVar9 == 0) break;
        lVar17 = FUN_04de82e0(*plVar9,iVar16,*(undefined8 *)PTR_DAT_084b6410);
        uVar7 = FUN_04de82e0(lVar6,0,*unaff_x19);
        if (lVar17 == 0) break;
        FUN_06941ffc(lVar17,uVar7);
        if (*plVar9 == 0) break;
        lVar17 = FUN_04de82e0(*plVar9,iVar16,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = *unaff_x19;
        uVar7 = 1;
      }
      uVar7 = FUN_04de82e0(lVar6,uVar7,uVar8);
      if (lVar17 == 0) break;
      FUN_069426d0(lVar17,uVar7);
    }
LAB_06946098:
    if (uVar12 - 1 == iVar16) {
LAB_069460b0:
      (**(code **)(*in_stack_00000018 + 0x248))
                (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x250));
      return;
    }
    lVar6 = *plVar15;
    iVar16 = iVar16 + 1;
  } while (lVar6 != 0);
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


