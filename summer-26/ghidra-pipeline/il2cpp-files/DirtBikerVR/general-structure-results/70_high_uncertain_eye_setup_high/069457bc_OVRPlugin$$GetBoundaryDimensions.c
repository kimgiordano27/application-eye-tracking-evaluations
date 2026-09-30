/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 069457bc
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

void OVRPlugin__GetBoundaryDimensions(undefined8 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int iVar13;
  long unaff_x22;
  long *plVar14;
  long lVar15;
  int unaff_w29;
  float fVar16;
  long *in_stack_00000018;
  
  lVar6 = thunk_FUN_03ac74bc(*param_1);
  FUN_04de7d48(lVar6,*(undefined8 *)PTR_DAT_084b5fc0);
  plVar14 = in_stack_00000018 + 7;
  *plVar14 = lVar6;
  thunk_FUN_03afed3c(plVar14,lVar6);
  if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6478,0);
  lVar15 = *plVar14;
  lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
  uVar9 = _UNK_015c8078;
  uVar8 = _DAT_015c8070;
  *(undefined8 *)(lVar6 + 0x78) = _UNK_015c8078;
  *(undefined8 *)(lVar6 + 0x70) = uVar8;
  FUN_06942668();
  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084b64c8;
  thunk_FUN_03afed3c();
  if (lVar15 != 0) {
    lVar11 = *(long *)(lVar15 + 0x10);
    lVar12 = *(long *)PTR_DAT_084b6408;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar15 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = lVar6;
        thunk_FUN_03afed3c(plVar7,lVar6);
      }
      else {
        FUN_04de85b0(lVar15,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b64b8,0);
      lVar15 = *plVar14;
      lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
      *(undefined8 *)(lVar6 + 0x78) = uVar9;
      *(undefined8 *)(lVar6 + 0x70) = uVar8;
      FUN_06942668();
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084b6460;
      thunk_FUN_03afed3c();
      if (lVar15 != 0) {
        lVar11 = *(long *)(lVar15 + 0x10);
        lVar12 = *(long *)PTR_DAT_084b6408;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar15 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = lVar6;
            thunk_FUN_03afed3c(plVar7,lVar6);
          }
          else {
            FUN_04de85b0(lVar15,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6490,0);
          lVar15 = *plVar14;
          lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
          *(undefined8 *)(lVar6 + 0x78) = uVar9;
          *(undefined8 *)(lVar6 + 0x70) = uVar8;
          FUN_06942668();
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084b64a0;
          thunk_FUN_03afed3c();
          if (lVar15 != 0) {
            lVar11 = *(long *)(lVar15 + 0x10);
            lVar12 = *(long *)PTR_DAT_084b6408;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar15 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *plVar7 = lVar6;
                thunk_FUN_03afed3c(plVar7,lVar6);
              }
              else {
                FUN_04de85b0(lVar15,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              puVar4 = PTR_DAT_084b6410;
              if (*plVar14 != 0) {
                lVar6 = FUN_04de82e0(*plVar14,2,*(undefined8 *)PTR_DAT_084b6410);
                if ((*plVar14 != 0) &&
                   (uVar8 = FUN_04de82e0(*plVar14,0,*(undefined8 *)puVar4), lVar6 != 0)) {
                  FUN_06941ffc(lVar6,uVar8);
                  puVar4 = PTR_DAT_084b6410;
                  if (*plVar14 != 0) {
                    lVar6 = FUN_04de82e0(*plVar14,2,*(undefined8 *)PTR_DAT_084b6410);
                    if ((*plVar14 != 0) &&
                       (uVar8 = FUN_04de82e0(*plVar14,1,*(undefined8 *)puVar4), lVar6 != 0)) {
                      FUN_069426d0(lVar6,uVar8);
                      if ((*plVar14 != 0) &&
                         (lVar6 = FUN_04de82e0(*plVar14,2,*(undefined8 *)PTR_DAT_084b6410),
                         lVar6 != 0)) {
                        uVar8 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64a8,
                                             *(undefined8 *)(lVar6 + 0x28),
                                             *(undefined8 *)PTR_DAT_0848f320,0);
                        FUN_07c4f4f4(uVar8,0);
                        if (in_stack_00000018[7] != 0) {
                          lVar6 = in_stack_00000018[9];
                          uVar8 = FUN_04de82e0(in_stack_00000018[7],2,
                                               *(undefined8 *)PTR_DAT_084b6410);
                          if (lVar6 != 0) {
                            FUN_06941ffc(lVar6,uVar8);
                            lVar6 = *unaff_x20;
                            if (lVar6 != 0) {
                              iVar10 = 0;
                              while (puVar4 = PTR_DAT_084b6480, fVar3 = DAT_015c5994,
                                    fVar2 = DAT_015c56e4, iVar10 < *(int *)(lVar6 + 0x18)) {
                                if (unaff_x22 == 0) goto LAB_069460ac;
                                uVar5 = FUN_04d8be94();
                                if (*unaff_x20 == 0) goto LAB_069460ac;
                                lVar6 = FUN_04de82e0(*unaff_x20,iVar10,*unaff_x19);
                                lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6438);
                                FUN_0694d12c(lVar15,0);
                                if ((lVar15 == 0) ||
                                   (*(undefined4 *)(lVar15 + 0x10) = uVar5, lVar6 == 0))
                                goto LAB_069460ac;
                                *(long *)(lVar6 + 0x88) = lVar15;
                                thunk_FUN_03afed3c((long *)(lVar6 + 0x88),lVar15);
                                lVar6 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
                                if (lVar6 == 0) goto LAB_069460ac;
                                if (*(int *)(lVar6 + 0x18) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_084b64d8;
                                thunk_FUN_03afed3c();
                                if ((*unaff_x20 == 0) ||
                                   (lVar15 = FUN_04de82e0(*unaff_x20,iVar10,*unaff_x19), lVar15 == 0
                                   )) goto LAB_069460ac;
                                if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
                                thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x28));
                                if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
                                thunk_FUN_03afed3c();
                                if ((*unaff_x21 == 0) ||
                                   (lVar15 = FUN_04de82e0(*unaff_x21,uVar5,
                                                          *(undefined8 *)PTR_DAT_084b63c8),
                                   lVar15 == 0)) goto LAB_069460ac;
                                if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar15 + 0x10);
                                thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x38));
                                if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_069460ec;
                                *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
                                thunk_FUN_03afed3c();
                                uVar8 = FUN_065ce45c(lVar6,0);
                                if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
                                }
                                FUN_07c4f4f4(uVar8,0);
                                lVar6 = *unaff_x20;
                                iVar10 = iVar10 + 1;
                                if (lVar6 == 0) goto LAB_069460ac;
                              }
                              lVar6 = *unaff_x21;
                              if (lVar6 != 0) {
                                iVar10 = unaff_w29;
                                if (1 < unaff_w29) {
                                  iVar10 = 2;
                                }
                                if (unaff_w29 < 1) goto LAB_069460b0;
                                iVar13 = 0;
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
    lVar6 = FUN_04de82e0(lVar6,iVar13,*(undefined8 *)PTR_DAT_084b63c8);
    if ((lVar6 == 0) || (lVar6 = FUN_0694d834(), lVar6 == 0)) break;
    if (*(int *)(lVar6 + 0x18) == 2) {
      lVar15 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
      if (lVar15 == 0) break;
      if (*(int *)(lVar15 + 0x18) == 0) {
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)puVar4;
      thunk_FUN_03afed3c();
      if ((*plVar14 == 0) ||
         (lVar11 = FUN_04de82e0(*plVar14,iVar13,*(undefined8 *)PTR_DAT_084b6410), lVar11 == 0))
      break;
      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar15 + 0x28));
      if (*(uint *)(lVar15 + 0x18) < 3) goto LAB_069460ec;
      *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
      thunk_FUN_03afed3c();
      lVar11 = FUN_04de82e0(lVar6,0,*unaff_x19);
      if (lVar11 == 0) break;
      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(lVar11 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar15 + 0x38));
      if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_069460ec;
      *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
      thunk_FUN_03afed3c();
      uVar8 = FUN_065ce45c(lVar15,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar8,0);
      lVar15 = FUN_04de82e0(lVar6,0,*unaff_x19);
      if (((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
         (lVar15 = FUN_07c98f88(*(long *)(lVar15 + 0x80),0), lVar15 == 0)) break;
      fVar16 = (float)FUN_07cac280(lVar15,0);
      if (fVar2 <= fVar16) {
        lVar15 = FUN_04de82e0(lVar6,0,*unaff_x19);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
           (lVar15 = FUN_07c98f88(*(long *)(lVar15 + 0x80),0), lVar15 == 0)) break;
        fVar16 = (float)FUN_07cac280(lVar15,0);
        if (fVar16 <= fVar3) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
          goto LAB_06946098;
        }
        if (*plVar14 == 0) break;
        lVar15 = FUN_04de82e0(*plVar14,iVar13,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = FUN_04de82e0(lVar6,1,*unaff_x19);
        if (lVar15 == 0) break;
        FUN_06941ffc(lVar15,uVar8);
        if (*plVar14 == 0) break;
        lVar15 = FUN_04de82e0(*plVar14,iVar13,*(undefined8 *)PTR_DAT_084b6410);
        uVar9 = *unaff_x19;
        uVar8 = 0;
      }
      else {
        if (*plVar14 == 0) break;
        lVar15 = FUN_04de82e0(*plVar14,iVar13,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = FUN_04de82e0(lVar6,0,*unaff_x19);
        if (lVar15 == 0) break;
        FUN_06941ffc(lVar15,uVar8);
        if (*plVar14 == 0) break;
        lVar15 = FUN_04de82e0(*plVar14,iVar13,*(undefined8 *)PTR_DAT_084b6410);
        uVar9 = *unaff_x19;
        uVar8 = 1;
      }
      uVar8 = FUN_04de82e0(lVar6,uVar8,uVar9);
      if (lVar15 == 0) break;
      FUN_069426d0(lVar15,uVar8);
    }
LAB_06946098:
    if (iVar10 + -1 == iVar13) {
LAB_069460b0:
      (**(code **)(*in_stack_00000018 + 0x248))
                (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x250));
      return;
    }
    lVar6 = *unaff_x21;
    iVar13 = iVar13 + 1;
  } while (lVar6 != 0);
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


