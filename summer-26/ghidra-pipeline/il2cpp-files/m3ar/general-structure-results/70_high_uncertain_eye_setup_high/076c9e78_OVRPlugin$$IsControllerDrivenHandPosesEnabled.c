/*
FUNCTION_NAME: OVRPlugin$$IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 076c9e78
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


/* WARNING: Removing unreachable block (ram,0x076ca218) */

void OVRPlugin__IsControllerDrivenHandPosesEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar15;
  long unaff_x22;
  
  FUN_0403162c(PTR_DAT_08fadb58);
  FUN_0403162c(PTR_DAT_08f65868);
  FUN_0403162c(PTR_DAT_08fadbb0);
  FUN_0403162c(PTR_DAT_08fadbb8);
  FUN_0403162c(PTR_DAT_08f65880);
  FUN_0403162c(PTR_DAT_08fadb70);
  FUN_0403162c(PTR_DAT_08fadb40);
  FUN_0403162c(PTR_DAT_08fadad8);
  *(undefined1 *)(unaff_x22 + 0x1d0) = 1;
  Oculus_Platform_Challenges__GetList();
  plVar8 = (long *)thunk_FUN_0406deb8(*unaff_x21);
  FUN_0576891c(plVar8,*unaff_x20);
  if ((*(long *)(unaff_x19 + 0x50) != 0) &&
     (plVar15 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0x10), plVar15 != (long *)0x0)) {
    lVar11 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08fadbb0) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_076c9f70;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08fadbb0,0);
LAB_076c9f70:
    puVar6 = PTR_DAT_08fadbb8;
    puVar5 = PTR_DAT_08fadba8;
    puVar4 = PTR_DAT_08fadb70;
    puVar3 = PTR_DAT_08fadb58;
    puVar2 = PTR_DAT_08f65880;
    puVar1 = PTR_DAT_08f65868;
    plVar15 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
    do {
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar11 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_076ca00c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)puVar2,0);
LAB_076ca00c:
      uVar13 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar15 == (long *)0x0) goto LAB_076ca17c;
        lVar11 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_076ca154;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_076ca13c;
      }
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar11 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_076ca070;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)puVar6,0);
LAB_076ca070:
      lVar11 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar12 = *plVar8;
      uVar7 = *(undefined4 *)(lVar11 + 0x14);
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_076ca0dc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar3,2);
LAB_076ca0dc:
      (*(code *)*puVar9)(plVar8,uVar7,puVar9[1]);
      if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_07067250(0,0,0,0,*(long *)(unaff_x19 + 0x68),lVar11,*(undefined8 *)puVar5);
    } while( true );
  }
  goto LAB_076ca214;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_076ca13c:
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_076ca170;
    }
  }
LAB_076ca154:
  puVar9 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)puVar1,0);
LAB_076ca170:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
LAB_076ca17c:
  uVar7 = FUN_0858dd10();
  uVar10 = thunk_FUN_0406deb8(*(undefined8 *)puVar4);
  FUN_076c6a74(uVar10,uVar7,plVar8,0);
  lVar11 = *(long *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar10;
  if (lVar11 != 0) {
    uVar7 = (**(code **)(lVar11 + 0x18))
                      (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    *(undefined4 *)(unaff_x19 + 0x88) = uVar7;
    FUN_076515f0();
    return;
  }
LAB_076ca214:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


