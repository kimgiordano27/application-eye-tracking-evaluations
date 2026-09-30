/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 076d4aac
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d5050) */
/* WARNING: Removing unreachable block (ram,0x076d5148) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin__ShareSpaces(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  int in_w9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  long *unaff_x23;
  long *plVar14;
  
  if (in_w9 == 0) {
    thunk_FUN_0408f364(param_1);
    param_1 = *unaff_x23;
  }
  puVar10 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar10[3] == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_0408f364(param_1);
      puVar10 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar13 = *puVar10;
    uVar4 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fadf38);
    FUN_05345534(uVar4,uVar13,*(undefined8 *)PTR_DAT_08fae010,0);
    *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = uVar4;
  }
  plVar5 = (long *)FUN_04afa5dc();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar6 = *plVar5;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08fadf58) {
        puVar10 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_076d4b90;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar10 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08fadf58,0);
LAB_076d4b90:
  plVar5 = (long *)(*(code *)*puVar10)(plVar5,puVar10[1]);
  puVar3 = PTR_DAT_08f67f40;
  puVar2 = PTR_DAT_08f65880;
  puVar1 = PTR_DAT_08f65568;
joined_r0x076d4ba8:
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar7 = *plVar5;
  lVar6 = *(long *)puVar2;
  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar6) {
        puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_076d4c24;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar10 = (undefined8 *)FUN_0406ae20(plVar5,lVar6,0);
LAB_076d4c24:
  uVar11 = (*(code *)*puVar10)(plVar5,puVar10[1]);
  if ((uVar11 & 1) != 0) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08fadf70) {
          puVar10 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076d4c90;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08fadf70,0);
LAB_076d4c90:
    lVar6 = (*(code *)*puVar10)(plVar5,puVar10[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar14 = *(long **)(lVar6 + 0x18);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08fadd00) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076d4d00;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08fadd00,0);
LAB_076d4d00:
    plVar14 = (long *)(*(code *)*puVar10)(plVar14,puVar10[1]);
    do {
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = *plVar14;
      lVar7 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076d4d6c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar14,lVar7,0);
LAB_076d4d6c:
      uVar11 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      if ((uVar11 & 1) == 0) goto LAB_076d4f20;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08fadd08) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076d4dd8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08fadd08,0);
LAB_076d4dd8:
      uVar4 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar7 = FUN_04c2777c(uVar13,*(undefined8 *)PTR_DAT_08f67d08);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = FUN_04b60dd0(lVar7,*(undefined8 *)PTR_DAT_08fae000);
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_076d2b14(lVar8,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x28),
                   *(undefined4 *)(lVar6 + 0x10),uVar4);
      lVar7 = FUN_085883f0(lVar7,0);
      uVar4 = FUN_085849e0();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c(uVar4,uVar4);
      }
      FUN_085991ec(lVar7,uVar4,0);
      if (DAT_09539c0f == '\0') {
        FUN_0403162c(puVar1);
        DAT_09539c0f = '\x01';
      }
      lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
      UnityEngine_UI_Dropdown__OnSubmit
                (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                 *(undefined4 *)(lVar8 + 0x14),lVar7,0);
      if (DAT_09539e1a == '\0') {
        FUN_0403162c(puVar3);
        DAT_09539e1a = '\x01';
      }
      puVar9 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      FUN_08598c90(*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar7,0);
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(puVar1);
        DAT_09539c10 = '\x01';
      }
      puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_08597db0(*puVar9,puVar9[1],puVar9[2],lVar7,0);
    } while( true );
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar5;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 == 0) goto LAB_076d50f8;
  piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
  goto LAB_076d50e0;
LAB_076d4f20:
  if (plVar14 != (long *)0x0) {
    lVar6 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar10 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076d4f84;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08f65868,0);
LAB_076d4f84:
    (*(code *)*puVar10)(plVar14,puVar10[1]);
  }
  goto joined_r0x076d4ba8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_076d50e0:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar10 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_076d5114;
    }
  }
LAB_076d50f8:
  puVar10 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f65868,0);
LAB_076d5114:
  (*(code *)*puVar10)(plVar5,puVar10[1]);
  return;
}


