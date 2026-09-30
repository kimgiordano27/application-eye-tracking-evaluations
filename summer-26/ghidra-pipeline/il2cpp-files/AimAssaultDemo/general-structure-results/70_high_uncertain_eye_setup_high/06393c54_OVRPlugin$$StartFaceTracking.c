/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 06393c54
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__StartFaceTracking(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long lVar16;
  uint unaff_w21;
  int iVar17;
  int iVar18;
  short sStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack0000000000000028;
  int iStack000000000000002c;
  undefined *puVar13;
  
  FUN_0373b518(PTR_DAT_07d89e28);
  FUN_0373b518(PTR_DAT_07d88078);
  FUN_0373b518(PTR_DAT_07d86c78);
  FUN_0373b518(PTR_DAT_07d86c70);
  FUN_0373b518(PTR_DAT_07d86c68);
  FUN_0373b518(PTR_DAT_07d95cc0);
  FUN_0373b518(PTR_DAT_07d95cc8);
  FUN_0373b518(PTR_DAT_07d95cd0);
  FUN_0373b518(PTR_DAT_07db65f8);
  *(undefined1 *)(unaff_x20 + 0x603) = 1;
  puVar5 = PTR_DAT_07d95cc8;
  puVar4 = PTR_DAT_07d89e28;
  puVar3 = PTR_DAT_07d88078;
  puVar2 = PTR_DAT_07d86c78;
  puVar13 = PTR_DAT_07d86548;
  sStack000000000000000c = 0;
  iVar17 = *(int *)(unaff_x19 + 0x20);
  in_stack_00000020 = 0;
  _cStack0000000000000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 == 0) {
LAB_063942a8:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar16 = 0;
  iVar18 = 0;
LAB_06393d18:
  _cStack0000000000000028 = 0;
  iVar14 = iVar17;
  if (iVar17 < *(int *)(lVar8 + 0x10)) {
    do {
      uVar6 = FUN_060bb390(lVar8,iVar14,0);
      sStack000000000000000c = (short)uVar6;
      if ((uVar6 & 0xffff) == 0x20) {
        FUN_04e5efe4(&stack0x00000028,*(undefined4 *)(unaff_x19 + 0x20),*(undefined8 *)puVar5);
        FUN_06392df8();
      }
      else {
        if ((uVar6 & 0xffff) == (unaff_w21 & 0xffff)) {
          iVar14 = iStack000000000000002c;
          if (cStack0000000000000028 == '\0') {
            iVar14 = *(int *)(unaff_x19 + 0x20);
          }
          iVar14 = iVar14 - iVar17;
          if (lVar16 == 0) {
            if (iVar18 < 1) {
              if (iVar14 == 0) goto LAB_06394360;
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
              uVar11 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar17,iVar14,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03798b70(*(long *)puVar3);
              }
              uVar12 = FUN_061d52c8(0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_03798b70(*(long *)puVar4);
              }
              FUN_061b3e60(uVar11,uVar12,0);
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6640);
              FUN_062855bc(lVar8,0);
              FUN_04e5efe4();
              if (lVar8 == 0) goto LAB_063942a8;
              *(undefined8 *)(lVar8 + 0x10) = 0;
            }
            else {
              if (0 < iVar14) {
                if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
                uVar11 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar17,iVar14,0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03798b70(*(long *)puVar3);
                }
                uVar12 = FUN_061d52c8(0);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_03798b70(*(long *)puVar4);
                }
                uVar7 = FUN_061b3e60(uVar11,uVar12,0);
                puVar10 = &stack0x00000018;
                if (iVar18 != 1) {
                  puVar10 = &stack0x00000010;
                }
                FUN_04e5efe4(puVar10,uVar7,*(undefined8 *)puVar5);
              }
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6650);
              FUN_062855bc(lVar8,0);
              if (lVar8 == 0) goto LAB_063942a8;
              *(undefined8 *)(lVar8 + 0x10) = in_stack_00000020;
              *(undefined8 *)(lVar8 + 0x18) = in_stack_00000018;
              *(undefined8 *)(lVar8 + 0x20) = in_stack_00000010;
            }
          }
          else {
            if (iVar14 == 0) goto LAB_06394360;
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
            uVar11 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar17,iVar14,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03798b70(*(long *)puVar3);
            }
            uVar12 = FUN_061d52c8(0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03798b70(*(long *)puVar4);
            }
            uVar7 = FUN_061b3e60(uVar11,uVar12,0);
            lVar8 = *(long *)(lVar16 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_063942a8;
            uVar6 = *(uint *)(lVar16 + 0x18);
            if (uVar6 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar6 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar6 * 4 + 0x20) = uVar7;
            }
            else {
              FUN_04976584(lVar16,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6648);
            FUN_062855bc(lVar8,0);
            *(long *)(lVar8 + 0x10) = lVar16;
            thunk_FUN_037aeb94((long *)(lVar8 + 0x10),lVar16);
          }
          return lVar8;
        }
        uVar1 = uVar6 & 0xffff;
        if (uVar1 == 0x2a) {
          *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
          FUN_06393620();
          FUN_06392df8();
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            uVar6 = FUN_060bb390(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x19 + 0x20),0);
            if ((uVar6 & 0xffff) == (unaff_w21 & 0xffff)) {
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6640);
              FUN_062855bc(lVar8,0);
              return lVar8;
            }
LAB_063942f4:
            FUN_031ae340(*(undefined8 *)(puVar13 + 0x88));
            uVar11 = FUN_0619e108(&stack0x0000000c,0);
            uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db6620);
            uVar11 = System_Convert__ToInt32(uVar12,uVar11,0);
            thunk_FUN_037a15ac(PTR_DAT_07d967c8);
            uVar12 = thunk_FUN_037788cc();
            FUN_062d6d20(uVar12,uVar11,0);
            uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db6658);
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar12,uVar11);
          }
          goto LAB_063942a8;
        }
        if (uVar1 == 0x3a) {
          iVar14 = iStack000000000000002c;
          if (cStack0000000000000028 == '\0') {
            iVar14 = *(int *)(unaff_x19 + 0x20);
          }
          if (0 < iVar14 - iVar17) {
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
            uVar11 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar17,iVar14 - iVar17,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03798b70(*(long *)puVar3);
            }
            uVar12 = FUN_061d52c8(0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03798b70(*(long *)puVar4);
            }
            uVar7 = FUN_061b3e60(uVar11,uVar12,0);
            if (iVar18 == 0) {
              puVar10 = &stack0x00000020;
            }
            else if (iVar18 == 1) {
              puVar10 = &stack0x00000018;
            }
            else {
              puVar10 = &stack0x00000010;
            }
            FUN_04e5efe4(puVar10,uVar7,*(undefined8 *)puVar5);
          }
          iVar17 = *(int *)(unaff_x19 + 0x20);
          iVar18 = iVar18 + 1;
          goto LAB_06393f94;
        }
        if (uVar1 == 0x2c) goto LAB_06393df0;
        if (*(int *)(*(long *)(puVar13 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar9 = FUN_061a7b10(uVar6,0);
        if ((((uVar9 & 1) == 0) && (sStack000000000000000c != 0x2d)) ||
           (cStack0000000000000028 != '\0')) goto LAB_063942f4;
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      }
      lVar8 = *(long *)(unaff_x19 + 0x10);
      if (lVar8 == 0) goto LAB_063942a8;
      iVar14 = *(int *)(unaff_x19 + 0x20);
      if (*(int *)(lVar8 + 0x10) <= *(int *)(unaff_x19 + 0x20)) break;
    } while( true );
  }
  thunk_FUN_037a15ac(PTR_DAT_07d967c8);
  uVar11 = thunk_FUN_037788cc();
  puVar13 = PTR_DAT_07db65f8;
  goto LAB_063942c8;
LAB_06393df0:
  iVar14 = iStack000000000000002c;
  if (cStack0000000000000028 == '\0') {
    iVar14 = *(int *)(unaff_x19 + 0x20);
  }
  if (iVar14 - iVar17 == 0) {
LAB_06394360:
    thunk_FUN_037a15ac(PTR_DAT_07d967c8);
    uVar11 = thunk_FUN_037788cc();
    puVar13 = PTR_DAT_07db6660;
LAB_063942c8:
    uVar12 = thunk_FUN_037a15ac(puVar13);
    FUN_062d6d20(uVar11,uVar12,0);
    uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db6658);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar11,uVar12);
  }
  if (lVar16 == 0) {
    lVar16 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c68);
    FUN_04975d30(lVar16,*(undefined8 *)PTR_DAT_07d86c70);
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
  uVar11 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar17,iVar14 - iVar17,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar3);
  }
  uVar12 = FUN_061d52c8(0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar4);
  }
  uVar7 = FUN_061b3e60(uVar11,uVar12,0);
  if (lVar16 == 0) goto LAB_063942a8;
  lVar8 = *(long *)(lVar16 + 0x10);
  lVar15 = *(long *)puVar2;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
  if (lVar8 == 0) goto LAB_063942a8;
  uVar6 = *(uint *)(lVar16 + 0x18);
  if (uVar6 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(lVar16 + 0x18) = uVar6 + 1;
    *(undefined4 *)(lVar8 + (long)(int)uVar6 * 4 + 0x20) = uVar7;
  }
  else {
    FUN_04976584(lVar16,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
  }
  iVar17 = *(int *)(unaff_x19 + 0x20);
LAB_06393f94:
  *(int *)(unaff_x19 + 0x20) = iVar17 + 1;
  FUN_06392df8();
  iVar17 = *(int *)(unaff_x19 + 0x20);
  _cStack0000000000000028 = 0;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 == 0) goto LAB_063942a8;
  goto LAB_06393d18;
}


