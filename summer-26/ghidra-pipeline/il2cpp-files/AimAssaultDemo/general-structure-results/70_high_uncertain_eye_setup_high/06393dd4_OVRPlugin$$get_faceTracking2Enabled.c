/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 06393dd4
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


long OVRPlugin__get_faceTracking2Enabled(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_w8;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar12;
  ulong unaff_x22;
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
  undefined *puVar9;
  
  while ((int)param_2 < in_w8) {
    while( true ) {
      uVar3 = FUN_060bb390(param_1,param_2,0);
      in_stack_00000008._4_2_ = (short)uVar3;
      if ((uVar3 & 0xffff) == 0x20) break;
      iVar12 = (int)unaff_x22;
      if ((uVar3 & 0xffff) == (unaff_w21 & 0xffff)) {
        iVar2 = iStack000000000000002c;
        if (cStack0000000000000028 == '\0') {
          iVar2 = *(int *)(unaff_x19 + 0x20);
        }
        iVar2 = iVar2 - iVar12;
        if (unaff_x20 == 0) {
          if (0 < unaff_w26) {
            if (0 < iVar2) {
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
              uVar7 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),unaff_x22 & 0xffffffff,iVar2,0);
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03798b70(*unaff_x27);
              }
              uVar8 = FUN_061d52c8(0);
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_03798b70(*unaff_x25);
              }
              uVar4 = FUN_061b3e60(uVar7,uVar8,0);
              puVar6 = &stack0x00000018;
              if (unaff_w26 != 1) {
                puVar6 = &stack0x00000010;
              }
              FUN_04e5efe4(puVar6,uVar4,*unaff_x24);
            }
            lVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6650);
            FUN_062855bc(lVar10,0);
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0x10) = in_stack_00000020;
              *(undefined8 *)(lVar10 + 0x18) = in_stack_00000018;
              *(undefined8 *)(lVar10 + 0x20) = in_stack_00000010;
              return lVar10;
            }
            goto LAB_063942a8;
          }
          if (iVar2 != 0) {
            if (*(long *)(unaff_x19 + 0x10) != 0) {
              uVar7 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),unaff_x22 & 0xffffffff,iVar2,0);
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03798b70(*unaff_x27);
              }
              uVar8 = FUN_061d52c8(0);
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_03798b70(*unaff_x25);
              }
              FUN_061b3e60(uVar7,uVar8,0);
              lVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6640);
              FUN_062855bc(lVar10,0);
              FUN_04e5efe4();
              if (lVar10 != 0) {
                *(undefined8 *)(lVar10 + 0x10) = 0;
                return lVar10;
              }
            }
            goto LAB_063942a8;
          }
        }
        else if (iVar2 != 0) {
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            uVar7 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),unaff_x22 & 0xffffffff,iVar2,0);
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_03798b70(*unaff_x27);
            }
            uVar8 = FUN_061d52c8(0);
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_03798b70(*unaff_x25);
            }
            uVar4 = FUN_061b3e60(uVar7,uVar8,0);
            lVar10 = *(long *)(unaff_x20 + 0x10);
            lVar11 = *unaff_x28;
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar3 = *(uint *)(unaff_x20 + 0x18);
              if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
                *(undefined4 *)(lVar10 + (long)(int)uVar3 * 4 + 0x20) = uVar4;
              }
              else {
                FUN_04976584(unaff_x20,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6648);
              FUN_062855bc(lVar10,0);
              *(long *)(lVar10 + 0x10) = unaff_x20;
              thunk_FUN_037aeb94((long *)(lVar10 + 0x10),unaff_x20);
              return lVar10;
            }
          }
          goto LAB_063942a8;
        }
LAB_06394360:
        thunk_FUN_037a15ac(PTR_DAT_07d967c8);
        uVar7 = thunk_FUN_037788cc();
        puVar9 = PTR_DAT_07db6660;
        goto LAB_063942c8;
      }
      uVar1 = uVar3 & 0xffff;
      if (uVar1 == 0x2a) {
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
        FUN_06393620();
        FUN_06392df8();
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          uVar3 = FUN_060bb390(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x19 + 0x20),0);
          if ((uVar3 & 0xffff) == (unaff_w21 & 0xffff)) {
            lVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6640);
            FUN_062855bc(lVar10,0);
            return lVar10;
          }
LAB_063942f4:
          FUN_031ae340(*(undefined8 *)(unaff_x29 + 0x88));
          uVar7 = FUN_0619e108((long)&stack0x00000008 + 4,0);
          uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6620);
          uVar7 = System_Convert__ToInt32(uVar8,uVar7,0);
          thunk_FUN_037a15ac(PTR_DAT_07d967c8);
          uVar8 = thunk_FUN_037788cc();
          FUN_062d6d20(uVar8,uVar7,0);
          uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6658);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar8,uVar7);
        }
        goto LAB_063942a8;
      }
      if (uVar1 == 0x3a) {
        iVar2 = iStack000000000000002c;
        if (cStack0000000000000028 == '\0') {
          iVar2 = *(int *)(unaff_x19 + 0x20);
        }
        if (0 < iVar2 - iVar12) {
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
          uVar7 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),unaff_x22 & 0xffffffff,iVar2 - iVar12,0);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_03798b70(*unaff_x27);
          }
          uVar8 = FUN_061d52c8(0);
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_03798b70(*unaff_x25);
          }
          uVar4 = FUN_061b3e60(uVar7,uVar8,0);
          if (unaff_w26 == 0) {
            puVar6 = &stack0x00000020;
          }
          else if (unaff_w26 == 1) {
            puVar6 = &stack0x00000018;
          }
          else {
            puVar6 = &stack0x00000010;
          }
          FUN_04e5efe4(puVar6,uVar4,*unaff_x24);
        }
        iVar12 = *(int *)(unaff_x19 + 0x20);
        unaff_w26 = unaff_w26 + 1;
      }
      else {
        if (uVar1 != 0x2c) {
          if (*(int *)(*(long *)(unaff_x29 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar5 = FUN_061a7b10(uVar3,0);
          if ((((uVar5 & 1) == 0) && (in_stack_00000008._4_2_ != 0x2d)) ||
             (cStack0000000000000028 != '\0')) goto LAB_063942f4;
          *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
          goto LAB_06393dc4;
        }
        iVar2 = iStack000000000000002c;
        if (cStack0000000000000028 == '\0') {
          iVar2 = *(int *)(unaff_x19 + 0x20);
        }
        if (iVar2 - iVar12 == 0) goto LAB_06394360;
        if (unaff_x20 == 0) {
          unaff_x20 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c68);
          FUN_04975d30(unaff_x20,*(undefined8 *)PTR_DAT_07d86c70);
        }
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_063942a8;
        uVar7 = FUN_060c316c(*(long *)(unaff_x19 + 0x10),unaff_x22 & 0xffffffff,iVar2 - iVar12,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03798b70(*unaff_x27);
        }
        uVar8 = FUN_061d52c8(0);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_03798b70(*unaff_x25);
        }
        uVar4 = FUN_061b3e60(uVar7,uVar8,0);
        if (unaff_x20 == 0) goto LAB_063942a8;
        lVar10 = *(long *)(unaff_x20 + 0x10);
        lVar11 = *unaff_x28;
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_063942a8;
        uVar3 = *(uint *)(unaff_x20 + 0x18);
        if (uVar3 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar3 * 4 + 0x20) = uVar4;
        }
        else {
          FUN_04976584(unaff_x20,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar12 = *(int *)(unaff_x19 + 0x20);
      }
      *(int *)(unaff_x19 + 0x20) = iVar12 + 1;
      FUN_06392df8();
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x20);
      _cStack0000000000000028 = 0;
      param_1 = *(long *)(unaff_x19 + 0x10);
      if (param_1 == 0) goto LAB_063942a8;
      unaff_x22 = param_2;
      if (*(int *)(param_1 + 0x10) <= (int)*(uint *)(unaff_x19 + 0x20)) goto LAB_063942ac;
    }
    FUN_04e5efe4(&stack0x00000028,*(undefined4 *)(unaff_x19 + 0x20),*unaff_x24);
    FUN_06392df8();
LAB_06393dc4:
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_063942a8:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    in_w8 = *(int *)(param_1 + 0x10);
    param_2 = (ulong)*(uint *)(unaff_x19 + 0x20);
  }
LAB_063942ac:
  thunk_FUN_037a15ac(PTR_DAT_07d967c8);
  uVar7 = thunk_FUN_037788cc();
  puVar9 = PTR_DAT_07db65f8;
LAB_063942c8:
  uVar8 = thunk_FUN_037a15ac(puVar9);
  FUN_062d6d20(uVar7,uVar8,0);
  uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6658);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar7,uVar8);
}


