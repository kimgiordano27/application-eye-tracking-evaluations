/*
FUNCTION_NAME: OVRPlugin$$CreateSpaceUser
ENTRY_POINT: 076d4908
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

void OVRPlugin__CreateSpaceUser(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  
  puVar1 = PTR_DAT_08fadff8;
  if ((DAT_09548246 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fadf28);
    FUN_0403162c(PTR_DAT_08fadf30);
    FUN_0403162c(PTR_DAT_08fadf38);
    FUN_0403162c(PTR_DAT_08fadf40);
    FUN_0403162c(PTR_DAT_08fae000);
    FUN_0403162c(PTR_DAT_08f65868);
    FUN_0403162c(PTR_DAT_08fadf58);
    FUN_0403162c(PTR_DAT_08fadd00);
    FUN_0403162c(PTR_DAT_08fadf70);
    FUN_0403162c(PTR_DAT_08fadd08);
    FUN_0403162c(PTR_DAT_08f65880);
    FUN_0403162c(PTR_DAT_08f67d08);
    FUN_0403162c(PTR_DAT_08f65598);
    FUN_0403162c(PTR_DAT_08fae008);
    FUN_0403162c(PTR_DAT_08fae010);
    FUN_0403162c(PTR_DAT_08fadff8);
    FUN_0403162c(PTR_DAT_08fadf90);
    FUN_0403162c(PTR_DAT_08fadf98);
    DAT_09548246 = 1;
  }
  uVar4 = FUN_076d5164(param_1);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar6);
    lVar6 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_08fadf28;
  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
  lVar12 = puVar9[1];
  if (lVar12 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar6);
      puVar9 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar13 = *puVar9;
    lVar12 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fadf40);
    FUN_0531d664(lVar12,uVar13,*(undefined8 *)PTR_DAT_08fae008,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar12;
  }
  uVar4 = FUN_04aed04c(uVar4,lVar12,*(undefined8 *)puVar2);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar6);
    lVar6 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_08fadf30;
  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
  lVar12 = puVar9[3];
  if (lVar12 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar6);
      puVar9 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar13 = *puVar9;
    lVar12 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fadf38);
    FUN_05345534(lVar12,uVar13,*(undefined8 *)PTR_DAT_08fae010,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar12;
  }
  plVar5 = (long *)FUN_04afa5dc(uVar4,lVar12,*(undefined8 *)puVar2);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar6 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadf58) {
        puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_076d4b90;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08fadf58,0);
LAB_076d4b90:
  plVar5 = (long *)(*(code *)*puVar9)(plVar5,puVar9[1]);
  puVar3 = PTR_DAT_08f67f40;
  puVar2 = PTR_DAT_08f65880;
  puVar1 = PTR_DAT_08f65568;
joined_r0x076d4ba8:
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar12 = *plVar5;
  lVar6 = *(long *)puVar2;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar6) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_076d4c24;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_0406ae20(plVar5,lVar6,0);
LAB_076d4c24:
  uVar10 = (*(code *)*puVar9)(plVar5,puVar9[1]);
  if ((uVar10 & 1) != 0) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadf70) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d4c90;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08fadf70,0);
LAB_076d4c90:
    lVar6 = (*(code *)*puVar9)(plVar5,puVar9[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar14 = *(long **)(lVar6 + 0x18);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar12 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadd00) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d4d00;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08fadd00,0);
LAB_076d4d00:
    plVar14 = (long *)(*(code *)*puVar9)(plVar14,puVar9[1]);
    do {
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = *plVar14;
      lVar12 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d4d6c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar14,lVar12,0);
LAB_076d4d6c:
      uVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      if ((uVar10 & 1) == 0) goto LAB_076d4f20;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar12 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fadd08) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d4dd8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08fadd08,0);
LAB_076d4dd8:
      uVar4 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar12 = FUN_04c2777c(uVar13,*(undefined8 *)PTR_DAT_08f67d08);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = FUN_04b60dd0(lVar12,*(undefined8 *)PTR_DAT_08fae000);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_076d2b14(lVar7,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
                   *(undefined4 *)(lVar6 + 0x10),uVar4);
      lVar12 = FUN_085883f0(lVar12,0);
      uVar4 = FUN_085849e0(param_1,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c(uVar4,uVar4);
      }
      FUN_085991ec(lVar12,uVar4,0);
      if (DAT_09539c0f == '\0') {
        FUN_0403162c(puVar1);
        DAT_09539c0f = '\x01';
      }
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      UnityEngine_UI_Dropdown__OnSubmit
                (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                 *(undefined4 *)(lVar7 + 0x14),lVar12,0);
      if (DAT_09539e1a == '\0') {
        FUN_0403162c(puVar3);
        DAT_09539e1a = '\x01';
      }
      puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      FUN_08598c90(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar12,0);
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(puVar1);
        DAT_09539c10 = '\x01';
      }
      puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_08597db0(*puVar8,puVar8[1],puVar8[2],lVar12,0);
    } while( true );
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 == 0) goto LAB_076d50f8;
  piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
  goto LAB_076d50e0;
LAB_076d4f20:
  if (plVar14 != (long *)0x0) {
    lVar6 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d4f84;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08f65868,0);
LAB_076d4f84:
    (*(code *)*puVar9)(plVar14,puVar9[1]);
  }
  goto joined_r0x076d4ba8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_076d50e0:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076d5114;
    }
  }
LAB_076d50f8:
  puVar9 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f65868,0);
LAB_076d5114:
  (*(code *)*puVar9)(plVar5,puVar9[1]);
  return;
}


