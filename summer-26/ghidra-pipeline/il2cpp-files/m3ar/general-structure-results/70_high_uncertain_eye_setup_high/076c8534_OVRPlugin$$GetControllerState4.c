/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 076c8534
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076c8904) */

void OVRPlugin__GetControllerState4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x21;
  undefined8 *puVar13;
  long *plVar14;
  long unaff_x22;
  
  puVar1 = PTR_DAT_08fadb40;
  puVar13 = *(undefined8 **)(unaff_x21 + 0xad8);
  if ((*(byte *)(unaff_x22 + 0x1b8) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fadb48);
    FUN_0403162c(PTR_DAT_08fadb50);
    FUN_0403162c(PTR_DAT_08fadb58);
    FUN_0403162c(PTR_DAT_08f65868);
    FUN_0403162c(PTR_DAT_08fadb60);
    FUN_0403162c(PTR_DAT_08fadb68);
    FUN_0403162c(PTR_DAT_08f65880);
    FUN_0403162c(PTR_DAT_08fadb70);
    FUN_0403162c(PTR_DAT_08fadb40);
    FUN_0403162c(PTR_DAT_08fadad8);
    *(undefined1 *)(unaff_x22 + 0x1b8) = 1;
  }
  Oculus_Platform_Challenges__GetList(param_1,param_1 + 0x7e,0,0);
  plVar8 = (long *)thunk_FUN_0406deb8(*puVar13);
  FUN_0576891c(plVar8,*(undefined8 *)puVar1);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar14 = *(long **)(*(long *)(param_1 + 0x38) + 0x10), plVar14 != (long *)0x0)) {
    lVar9 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08fadb60) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076c865c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08fadb60,0);
LAB_076c865c:
    puVar6 = PTR_DAT_08fadb70;
    puVar5 = PTR_DAT_08fadb68;
    puVar4 = PTR_DAT_08fadb58;
    puVar3 = PTR_DAT_08fadb48;
    puVar2 = PTR_DAT_08f65880;
    puVar1 = PTR_DAT_08f65868;
    plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
    do {
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar9 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076c86f8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)puVar2,0);
LAB_076c86f8:
      uVar11 = (*(code *)*puVar13)(plVar14,puVar13[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar14 == (long *)0x0) goto LAB_076c8868;
        lVar9 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_076c8840;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_076c8828;
      }
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar9 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar13 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076c875c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)puVar5,0);
LAB_076c875c:
      lVar9 = (*(code *)*puVar13)(plVar14,puVar13[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *plVar8;
      uVar7 = *(undefined4 *)(lVar9 + 0x14);
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar13 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_076c87c8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar4,2);
LAB_076c87c8:
      (*(code *)*puVar13)(plVar8,uVar7,puVar13[1]);
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_07063c08(0,0,0,0,*(long *)(param_1 + 0x50),lVar9,*(undefined8 *)puVar3);
    } while( true );
  }
  goto LAB_076c8900;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_076c8828:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_076c885c;
    }
  }
LAB_076c8840:
  puVar13 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)puVar1,0);
LAB_076c885c:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_076c8868:
  uVar7 = FUN_0858dd10(param_1,0);
  lVar9 = thunk_FUN_0406deb8(*(undefined8 *)puVar6);
  FUN_075273c0(lVar9,0);
  lVar10 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(lVar9 + 0x10) = uVar7;
  *(long **)(lVar9 + 0x18) = plVar8;
  *(long *)(param_1 + 0x58) = lVar9;
  if (lVar10 != 0) {
    uVar7 = (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
    *(undefined4 *)(param_1 + 0x78) = uVar7;
    FUN_076515f0(param_1,param_1 + 0x7e,0);
    return;
  }
LAB_076c8900:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


