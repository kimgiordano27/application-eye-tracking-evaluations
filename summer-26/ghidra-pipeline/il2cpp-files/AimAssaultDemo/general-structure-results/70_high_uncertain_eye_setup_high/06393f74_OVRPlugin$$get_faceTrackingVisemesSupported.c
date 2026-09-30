/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingVisemesSupported
ENTRY_POINT: 06393f74
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_faceTrackingVisemesSupported(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int in_w8;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack0000000000000028;
  int iStack000000000000002c;
  undefined *puVar11;
  
LAB_06393f94:
  *(int *)(unaff_x19 + 0x20) = in_w8 + 1;
  FUN_06392df8();
  iVar2 = *(int *)(unaff_x19 + 0x20);
  _cStack0000000000000028 = 0;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    iVar3 = iVar2;
    if (iVar2 < *(int *)(lVar8 + 0x10)) {
      do {
        uVar4 = FUN_060bb390(lVar8,iVar3,0);
        in_stack_00000008._4_2_ = (short)uVar4;
        if ((uVar4 & 0xffff) == 0x20) {
          FUN_04e5efe4(&stack0x00000028,*(undefined4 *)(unaff_x19 + 0x20),*unaff_x24);
          FUN_06392df8();
        }
        else {
          if ((uVar4 & 0xffff) == (unaff_w21 & 0xffff)) {
            iVar3 = iStack000000000000002c;
            if (cStack0000000000000028 == '\0') {
              iVar3 = *(int *)(unaff_x19 + 0x20);
            }
            iVar3 = iVar3 - iVar2;
            if (unaff_x20 == 0) {
              if (unaff_w26 < 1) {
                if (iVar3 == 0) goto LAB_06394360;
                if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
                uVar9 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar2,iVar3,0);
                if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                  thunk_FUN_03798b70(*unaff_x27);
                }
                uVar10 = FUN_061d52c8(0);
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_03798b70(*unaff_x25);
                }
                FUN_061b3e60(uVar9,uVar10,0);
                lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6640);
                FUN_062855bc(lVar8,0);
                FUN_04e5efe4();
                if (lVar8 == 0) goto LAB_063942a8;
                *(undefined8 *)(lVar8 + 0x10) = 0;
              }
              else {
                if (0 < iVar3) {
                  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
                  uVar9 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar2,iVar3,0);
                  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                    thunk_FUN_03798b70(*unaff_x27);
                  }
                  uVar10 = FUN_061d52c8(0);
                  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    thunk_FUN_03798b70(*unaff_x25);
                  }
                  uVar5 = FUN_061b3e60(uVar9,uVar10,0);
                  puVar7 = &stack0x00000018;
                  if (unaff_w26 != 1) {
                    puVar7 = &stack0x00000010;
                  }
                  FUN_04e5efe4(puVar7,uVar5,*unaff_x24);
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
              if (iVar3 == 0) goto LAB_06394360;
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
              uVar9 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar2,iVar3,0);
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03798b70(*unaff_x27);
              }
              uVar10 = FUN_061d52c8(0);
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_03798b70(*unaff_x25);
              }
              uVar5 = FUN_061b3e60(uVar9,uVar10,0);
              lVar8 = *(long *)(unaff_x20 + 0x10);
              lVar12 = *unaff_x28;
              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_063942a8;
              uVar4 = *(uint *)(unaff_x20 + 0x18);
              if (uVar4 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
                *(undefined4 *)(lVar8 + (long)(int)uVar4 * 4 + 0x20) = uVar5;
              }
              else {
                FUN_04976584(unaff_x20,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6648);
              FUN_062855bc(lVar8,0);
              *(long *)(lVar8 + 0x10) = unaff_x20;
              thunk_FUN_037aeb94((long *)(lVar8 + 0x10),unaff_x20);
            }
            return lVar8;
          }
          uVar1 = uVar4 & 0xffff;
          if (uVar1 == 0x2a) {
            *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
            FUN_06393620();
            FUN_06392df8();
            if (*(long *)(unaff_x19 + 0x10) != 0) {
              uVar4 = FUN_060bb390(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x19 + 0x20),0);
              if ((uVar4 & 0xffff) == (unaff_w21 & 0xffff)) {
                lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6640);
                FUN_062855bc(lVar8,0);
                return lVar8;
              }
LAB_063942f4:
              FUN_031ae340(*(undefined8 *)(unaff_x29 + 0x88));
              uVar9 = FUN_0619e108((long)&stack0x00000008 + 4,0);
              uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6620);
              uVar9 = System_Convert__ToInt32(uVar10,uVar9,0);
              thunk_FUN_037a15ac(PTR_DAT_07d967c8);
              uVar10 = thunk_FUN_037788cc();
              FUN_062d6d20(uVar10,uVar9,0);
              uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6658);
                    /* WARNING: Subroutine does not return */
              FUN_0373b680(uVar10,uVar9);
            }
            goto LAB_063942a8;
          }
          if (uVar1 == 0x3a) {
            iVar3 = iStack000000000000002c;
            if (cStack0000000000000028 == '\0') {
              iVar3 = *(int *)(unaff_x19 + 0x20);
            }
            if (0 < iVar3 - iVar2) {
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
              uVar9 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar2,iVar3 - iVar2,0);
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03798b70(*unaff_x27);
              }
              uVar10 = FUN_061d52c8(0);
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_03798b70(*unaff_x25);
              }
              uVar5 = FUN_061b3e60(uVar9,uVar10,0);
              if (unaff_w26 == 0) {
                puVar7 = &stack0x00000020;
              }
              else if (unaff_w26 == 1) {
                puVar7 = &stack0x00000018;
              }
              else {
                puVar7 = &stack0x00000010;
              }
              FUN_04e5efe4(puVar7,uVar5,*unaff_x24);
            }
            in_w8 = *(int *)(unaff_x19 + 0x20);
            unaff_w26 = unaff_w26 + 1;
            goto LAB_06393f94;
          }
          if (uVar1 == 0x2c) goto LAB_06393df0;
          if (*(int *)(*(long *)(unaff_x29 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar6 = FUN_061a7b10(uVar4,0);
          if ((((uVar6 & 1) == 0) && (in_stack_00000008._4_2_ != 0x2d)) ||
             (cStack0000000000000028 != '\0')) goto LAB_063942f4;
          *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
        }
        lVar8 = *(long *)(unaff_x19 + 0x10);
        if (lVar8 == 0) goto LAB_063942a8;
        iVar3 = *(int *)(unaff_x19 + 0x20);
        if (*(int *)(lVar8 + 0x10) <= *(int *)(unaff_x19 + 0x20)) break;
      } while( true );
    }
    thunk_FUN_037a15ac(PTR_DAT_07d967c8);
    uVar9 = thunk_FUN_037788cc();
    puVar11 = PTR_DAT_07db65f8;
    goto LAB_063942c8;
  }
LAB_063942a8:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_06393df0:
  iVar3 = iStack000000000000002c;
  if (cStack0000000000000028 == '\0') {
    iVar3 = *(int *)(unaff_x19 + 0x20);
  }
  if (iVar3 - iVar2 == 0) {
LAB_06394360:
    thunk_FUN_037a15ac(PTR_DAT_07d967c8);
    uVar9 = thunk_FUN_037788cc();
    puVar11 = PTR_DAT_07db6660;
LAB_063942c8:
    uVar10 = thunk_FUN_037a15ac(puVar11);
    FUN_062d6d20(uVar9,uVar10,0);
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6658);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar9,uVar10);
  }
  if (unaff_x20 == 0) {
    unaff_x20 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c68);
    FUN_04975d30(unaff_x20,*(undefined8 *)PTR_DAT_07d86c70);
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
  uVar9 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),iVar2,iVar3 - iVar2,0);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x27);
  }
  uVar10 = FUN_061d52c8(0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x25);
  }
  uVar5 = FUN_061b3e60(uVar9,uVar10,0);
  if (unaff_x20 == 0) goto LAB_063942a8;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar12 = *unaff_x28;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar8 == 0) goto LAB_063942a8;
  uVar4 = *(uint *)(unaff_x20 + 0x18);
  if (uVar4 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
    *(undefined4 *)(lVar8 + (long)(int)uVar4 * 4 + 0x20) = uVar5;
  }
  else {
    FUN_04976584(unaff_x20,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
    ;
  }
  in_w8 = *(int *)(unaff_x19 + 0x20);
  goto LAB_06393f94;
}


