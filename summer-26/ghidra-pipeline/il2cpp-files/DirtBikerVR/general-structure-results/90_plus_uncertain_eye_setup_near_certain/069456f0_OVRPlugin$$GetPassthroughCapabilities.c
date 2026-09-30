/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilities
ENTRY_POINT: 069456f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__GetPassthroughCapabilities(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  int iVar17;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  int unaff_w28;
  uint unaff_w29;
  undefined4 uVar18;
  float fVar19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  long *in_stack_00000018;
  undefined8 in_stack_00000028;
  
  while (unaff_x24 != 0) {
    lVar13 = *(long *)(unaff_x24 + 0x10);
    lVar15 = *(long *)PTR_DAT_084b63f8;
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar12 = *(uint *)(unaff_x24 + 0x18);
    if (uVar12 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(unaff_x24 + 0x18) = uVar12 + 1;
      plVar7 = (long *)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
      *plVar7 = unaff_x25;
      thunk_FUN_03afed3c(plVar7,unaff_x25);
    }
    else {
      FUN_04de85b0(unaff_x24,unaff_x25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    uVar8 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64c0,unaff_x23,*(undefined8 *)PTR_DAT_0848f320,0
                        );
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4f4f4(uVar8,0);
    unaff_w26 = unaff_w26 + 1;
    if (unaff_w28 + unaff_w26 == 0) {
      lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5fb8);
      FUN_04de7d48(lVar13,*(undefined8 *)PTR_DAT_084b5fc0);
      plVar7 = in_stack_00000018 + 7;
      *plVar7 = lVar13;
      thunk_FUN_03afed3c(plVar7,lVar13);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6478,0);
      lVar15 = *plVar7;
      lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
      uVar10 = _UNK_015c8078;
      uVar8 = _DAT_015c8070;
      *(undefined8 *)(lVar13 + 0x78) = _UNK_015c8078;
      *(undefined8 *)(lVar13 + 0x70) = uVar8;
      FUN_06942668();
      *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)PTR_DAT_084b64c8;
      thunk_FUN_03afed3c();
      if (lVar15 != 0) {
        lVar14 = *(long *)(lVar15 + 0x10);
        lVar16 = *(long *)PTR_DAT_084b6408;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar12 = *(uint *)(lVar15 + 0x18);
          if (uVar12 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar12 + 1;
            plVar9 = (long *)(lVar14 + (long)(int)uVar12 * 8 + 0x20);
            *plVar9 = lVar13;
            thunk_FUN_03afed3c(plVar9,lVar13);
          }
          else {
            FUN_04de85b0(lVar15,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b64b8,0);
          lVar15 = *plVar7;
          lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
          *(undefined8 *)(lVar13 + 0x78) = uVar10;
          *(undefined8 *)(lVar13 + 0x70) = uVar8;
          FUN_06942668();
          *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)PTR_DAT_084b6460;
          thunk_FUN_03afed3c();
          if (lVar15 != 0) {
            lVar14 = *(long *)(lVar15 + 0x10);
            lVar16 = *(long *)PTR_DAT_084b6408;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar12 = *(uint *)(lVar15 + 0x18);
              if (uVar12 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar12 + 1;
                plVar9 = (long *)(lVar14 + (long)(int)uVar12 * 8 + 0x20);
                *plVar9 = lVar13;
                thunk_FUN_03afed3c(plVar9,lVar13);
              }
              else {
                FUN_04de85b0(lVar15,lVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6490,0);
              lVar15 = *plVar7;
              lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
              *(undefined8 *)(lVar13 + 0x78) = uVar10;
              *(undefined8 *)(lVar13 + 0x70) = uVar8;
              FUN_06942668();
              *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)PTR_DAT_084b64a0;
              thunk_FUN_03afed3c();
              if (lVar15 != 0) {
                lVar14 = *(long *)(lVar15 + 0x10);
                lVar16 = *(long *)PTR_DAT_084b6408;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar14 != 0) {
                  uVar12 = *(uint *)(lVar15 + 0x18);
                  if (uVar12 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar12 + 1;
                    plVar9 = (long *)(lVar14 + (long)(int)uVar12 * 8 + 0x20);
                    *plVar9 = lVar13;
                    thunk_FUN_03afed3c(plVar9,lVar13);
                  }
                  else {
                    FUN_04de85b0(lVar15,lVar13,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  puVar5 = PTR_DAT_084b6410;
                  if (*plVar7 != 0) {
                    lVar13 = FUN_04de82e0(*plVar7,2,*(undefined8 *)PTR_DAT_084b6410);
                    if ((*plVar7 != 0) &&
                       (uVar8 = FUN_04de82e0(*plVar7,0,*(undefined8 *)puVar5), lVar13 != 0)) {
                      FUN_06941ffc(lVar13,uVar8);
                      puVar5 = PTR_DAT_084b6410;
                      if (*plVar7 != 0) {
                        lVar13 = FUN_04de82e0(*plVar7,2,*(undefined8 *)PTR_DAT_084b6410);
                        if ((*plVar7 != 0) &&
                           (uVar8 = FUN_04de82e0(*plVar7,1,*(undefined8 *)puVar5), lVar13 != 0)) {
                          FUN_069426d0(lVar13,uVar8);
                          if ((*plVar7 != 0) &&
                             (lVar13 = FUN_04de82e0(*plVar7,2,*(undefined8 *)PTR_DAT_084b6410),
                             lVar13 != 0)) {
                            uVar8 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64a8,
                                                 *(undefined8 *)(lVar13 + 0x28),
                                                 *(undefined8 *)PTR_DAT_0848f320,0);
                            FUN_07c4f4f4(uVar8,0);
                            if (in_stack_00000018[7] != 0) {
                              lVar13 = in_stack_00000018[9];
                              uVar8 = FUN_04de82e0(in_stack_00000018[7],2,
                                                   *(undefined8 *)PTR_DAT_084b6410);
                              if (lVar13 != 0) {
                                FUN_06941ffc(lVar13,uVar8);
                                lVar13 = *unaff_x20;
                                if (lVar13 != 0) {
                                  iVar17 = 0;
                                  goto LAB_06945ba0;
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
      break;
    }
    iVar17 = unaff_w28 + unaff_w26;
    puVar1 = (undefined8 *)PTR_DAT_084b64b0;
    if (iVar17 != -1) {
      puVar1 = (undefined8 *)PTR_DAT_08498a60;
    }
    puVar2 = (undefined8 *)PTR_DAT_084b6458;
    if (unaff_w26 != 0) {
      puVar2 = puVar1;
    }
    uVar10 = *puVar2;
    in_stack_00000028._4_4_ = unaff_w26;
    uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),(long)&stack0x00000028 + 4);
    unaff_x23 = FUN_065ce754(*(undefined8 *)PTR_DAT_084b6498,uVar10,uVar8,0);
    unaff_x24 = *unaff_x21;
    unaff_x25 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6440);
    FUN_0694e06c(unaff_x25,0);
    if (unaff_x25 == 0) break;
    *(undefined8 *)(unaff_x25 + 0x10) = unaff_x23;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x25 + 0x10),unaff_x23);
    if (unaff_w26 == 0) {
      uVar6 = 0x3f800000;
      uVar18 = 0x3f800000;
      if (iVar17 != -1) {
        uVar6 = unaff_s8;
      }
LAB_069456c4:
      uVar11 = 0x3f800000;
    }
    else {
      uVar6 = unaff_s9;
      if (iVar17 != -1) {
        uVar6 = unaff_s8;
      }
      if (2 < unaff_w29) {
        uVar18 = unaff_s10;
        if (unaff_w26 != 1) {
          uVar18 = unaff_s8;
        }
        goto LAB_069456c4;
      }
      uVar18 = 0;
      uVar11 = 0x3f333333;
    }
    *(undefined4 *)(unaff_x25 + 0x20) = uVar11;
    *(undefined4 *)(unaff_x25 + 0x24) = uVar6;
    *(undefined4 *)(unaff_x25 + 0x30) = uVar18;
    *(undefined1 *)(unaff_x25 + 0x18) = 1;
    *(undefined1 *)(unaff_x25 + 0x28) = 0;
  }
  goto LAB_069460ac;
LAB_06945ba0:
  puVar5 = PTR_DAT_084b6480;
  fVar4 = DAT_015c5994;
  fVar3 = DAT_015c56e4;
  if (*(int *)(lVar13 + 0x18) <= iVar17) {
    lVar13 = *unaff_x21;
    if (lVar13 != 0) {
      uVar12 = unaff_w29;
      if (1 < (int)unaff_w29) {
        uVar12 = 2;
      }
      if ((int)unaff_w29 < 1) goto LAB_069460b0;
      iVar17 = 0;
      goto LAB_06945da4;
    }
    goto LAB_069460ac;
  }
  if (unaff_x22 == 0) goto LAB_069460ac;
  uVar6 = FUN_04d8be94();
  if (*unaff_x20 == 0) goto LAB_069460ac;
  lVar13 = FUN_04de82e0(*unaff_x20,iVar17,*unaff_x19);
  lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6438);
  FUN_0694d12c(lVar15,0);
  if ((lVar15 == 0) || (*(undefined4 *)(lVar15 + 0x10) = uVar6, lVar13 == 0)) goto LAB_069460ac;
  *(long *)(lVar13 + 0x88) = lVar15;
  thunk_FUN_03afed3c((long *)(lVar13 + 0x88),lVar15);
  lVar13 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
  if (lVar13 == 0) goto LAB_069460ac;
  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_069460ec;
  *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)PTR_DAT_084b64d8;
  thunk_FUN_03afed3c();
  if ((*unaff_x20 == 0) || (lVar15 = FUN_04de82e0(*unaff_x20,iVar17,*unaff_x19), lVar15 == 0))
  goto LAB_069460ac;
  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
  *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
  thunk_FUN_03afed3c((undefined8 *)(lVar13 + 0x28));
  if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_069460ec;
  *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
  thunk_FUN_03afed3c();
  if ((*unaff_x21 == 0) ||
     (lVar15 = FUN_04de82e0(*unaff_x21,uVar6,*(undefined8 *)PTR_DAT_084b63c8), lVar15 == 0))
  goto LAB_069460ac;
  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
  *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar15 + 0x10);
  thunk_FUN_03afed3c((undefined8 *)(lVar13 + 0x38));
  if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_069460ec;
  *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
  thunk_FUN_03afed3c();
  uVar8 = FUN_065ce45c(lVar13,0);
  if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
  }
  FUN_07c4f4f4(uVar8,0);
  lVar13 = *unaff_x20;
  iVar17 = iVar17 + 1;
  if (lVar13 == 0) goto LAB_069460ac;
  goto LAB_06945ba0;
LAB_06945da4:
  do {
    lVar13 = FUN_04de82e0(lVar13,iVar17,*(undefined8 *)PTR_DAT_084b63c8);
    if ((lVar13 == 0) || (lVar13 = FUN_0694d834(), lVar13 == 0)) break;
    if (*(int *)(lVar13 + 0x18) == 2) {
      lVar15 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
      if (lVar15 == 0) break;
      if (*(int *)(lVar15 + 0x18) == 0) {
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)puVar5;
      thunk_FUN_03afed3c();
      if ((*plVar7 == 0) ||
         (lVar14 = FUN_04de82e0(*plVar7,iVar17,*(undefined8 *)PTR_DAT_084b6410), lVar14 == 0))
      break;
      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar15 + 0x28));
      if (*(uint *)(lVar15 + 0x18) < 3) goto LAB_069460ec;
      *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
      thunk_FUN_03afed3c();
      lVar14 = FUN_04de82e0(lVar13,0,*unaff_x19);
      if (lVar14 == 0) break;
      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(lVar14 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar15 + 0x38));
      if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_069460ec;
      *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
      thunk_FUN_03afed3c();
      uVar8 = FUN_065ce45c(lVar15,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar8,0);
      lVar15 = FUN_04de82e0(lVar13,0,*unaff_x19);
      if (((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
         (lVar15 = FUN_07c98f88(*(long *)(lVar15 + 0x80),0), lVar15 == 0)) break;
      fVar19 = (float)FUN_07cac280(lVar15,0);
      if (fVar3 <= fVar19) {
        lVar15 = FUN_04de82e0(lVar13,0,*unaff_x19);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
           (lVar15 = FUN_07c98f88(*(long *)(lVar15 + 0x80),0), lVar15 == 0)) break;
        fVar19 = (float)FUN_07cac280(lVar15,0);
        if (fVar19 <= fVar4) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
          goto LAB_06946098;
        }
        if (*plVar7 == 0) break;
        lVar15 = FUN_04de82e0(*plVar7,iVar17,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = FUN_04de82e0(lVar13,1,*unaff_x19);
        if (lVar15 == 0) break;
        FUN_06941ffc(lVar15,uVar8);
        if (*plVar7 == 0) break;
        lVar15 = FUN_04de82e0(*plVar7,iVar17,*(undefined8 *)PTR_DAT_084b6410);
        uVar10 = *unaff_x19;
        uVar8 = 0;
      }
      else {
        if (*plVar7 == 0) break;
        lVar15 = FUN_04de82e0(*plVar7,iVar17,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = FUN_04de82e0(lVar13,0,*unaff_x19);
        if (lVar15 == 0) break;
        FUN_06941ffc(lVar15,uVar8);
        if (*plVar7 == 0) break;
        lVar15 = FUN_04de82e0(*plVar7,iVar17,*(undefined8 *)PTR_DAT_084b6410);
        uVar10 = *unaff_x19;
        uVar8 = 1;
      }
      uVar8 = FUN_04de82e0(lVar13,uVar8,uVar10);
      if (lVar15 == 0) break;
      FUN_069426d0(lVar15,uVar8);
    }
LAB_06946098:
    if (uVar12 - 1 == iVar17) {
LAB_069460b0:
      (**(code **)(*in_stack_00000018 + 0x248))
                (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x250));
      return;
    }
    lVar13 = *unaff_x21;
    iVar17 = iVar17 + 1;
  } while (lVar13 != 0);
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


