/*
FUNCTION_NAME: OVRPlugin$$CreateInsightTriangleMesh
ENTRY_POINT: 01f739c4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__CreateInsightTriangleMesh(void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint *unaff_x19;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  long unaff_x21;
  uint unaff_w22;
  uint uVar13;
  uint uVar14;
  ulong unaff_x23;
  uint uVar15;
  uint uVar16;
  long unaff_x25;
  uint uVar17;
  long *unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  uVar13 = (uint)unaff_x23;
  if (unaff_w28 == 0x20) {
    if (1 < uVar13) {
      uVar15 = 1;
      do {
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
        unaff_w28 = (uint)uVar3;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_01f73864;
        uVar15 = uVar15 + 1;
      } while (uVar13 != uVar15);
    }
    goto LAB_01f73d50;
  }
  uVar15 = 0;
LAB_01f73864:
  uVar10 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) goto LAB_01f7386c;
  if (unaff_x25 == 0) goto LAB_01f73d94;
  lVar1 = *(long *)(unaff_x25 + 0x28);
  lVar2 = *(long *)(unaff_x25 + 0x30);
  uVar6 = thunk_FUN_01e683d8(lVar1,*(undefined8 *)PTR_DAT_027bb7e8,0);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = thunk_FUN_01e683d8(lVar2,*(undefined8 *)PTR_DAT_027b1e10,0), (uVar6 & 1) == 0)) {
    lVar11 = *(long *)PTR_DAT_027ba9f8;
    if (uVar13 < uVar15) {
      FUN_01f877a8(0);
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    uVar13 = uVar13 - uVar15;
    unaff_x23 = (ulong)uVar13;
    unaff_x21 = unaff_x21 + (long)(int)uVar15 * 2;
    uVar10 = FUN_01e59d10(lVar1,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_0293bfb6 == '\0') {
        thunk_FUN_01279b34(PTR_DAT_027b5200);
        DAT_0293bfb6 = '\x01';
      }
      if (lVar1 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = System_Int32__TryParse(lVar1,0);
        uVar8 = *(undefined4 *)(lVar1 + 0x10);
      }
      uVar10 = FUN_01f78b90(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_027c0e30);
      if ((uVar10 & 1) == 0) goto LAB_01f73a14;
      if (lVar1 == 0) goto LAB_01f73d94;
      uVar15 = *(uint *)(lVar1 + 0x10);
      if (uVar13 <= uVar15) goto LAB_01f73d50;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
    }
    else {
LAB_01f73a14:
      uVar10 = FUN_01e59d10(lVar2,0);
      if ((uVar10 & 1) == 0) {
        if (DAT_0293bfb6 == '\0') {
          thunk_FUN_01279b34(PTR_DAT_027b5200);
          DAT_0293bfb6 = '\x01';
        }
        if (lVar2 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = System_Int32__TryParse(lVar2,0);
          uVar8 = *(undefined4 *)(lVar2 + 0x10);
        }
        uVar10 = FUN_01f78b90(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_027c0e30);
        if ((uVar10 & 1) != 0) {
          if (lVar2 == 0) {
LAB_01f73d94:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          uVar15 = *(uint *)(lVar2 + 0x10);
          if (uVar13 <= uVar15) goto LAB_01f73d50;
          unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
          uVar10 = 0;
          uVar13 = 0;
          goto LAB_01f73ab4;
        }
      }
      uVar15 = 0;
    }
    uVar10 = 0;
    uVar13 = 1;
LAB_01f73ab4:
    puVar4 = PTR_DAT_027ba7e8;
    if (*(int *)(*(long *)PTR_DAT_027ba7e8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar17 = unaff_w28 - 0x30;
    if (uVar17 < 10) {
      uVar14 = (uint)unaff_x23;
      uStack000000000000001c = uVar13;
      if (unaff_w28 != 0x30) {
LAB_01f73b14:
        uVar13 = uVar15 + 1;
        uVar16 = uVar15 + 9;
        iVar9 = -8;
        do {
          if (uVar14 <= uVar13) goto LAB_01f73d34;
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)(uVar15 + iVar9 + 9) * 2);
          uVar13 = (uint)uVar3;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          if (9 < uVar3 - 0x30) {
            bVar5 = false;
            uVar16 = uVar15 + iVar9 + 9;
            goto LAB_01f73c70;
          }
          uVar13 = uVar15 + iVar9 + 10;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          uVar17 = ((uint)uVar3 + uVar17 * 10) - 0x30;
        } while (bVar5);
        if (uVar13 < uVar14) {
          uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar13 = uVar3 - 0x30;
          if (9 < uVar13) goto LAB_01f73c6c;
          uVar16 = uVar15 + 10;
          if ((0x19999999 < uVar17) || ((bVar5 = false, uVar17 == 0x19999999 && (0x35 < uVar3)))) {
            bVar5 = true;
          }
          uVar17 = uVar13 + uVar17 * 10;
          if (uVar14 <= uVar16) goto LAB_01f73d30;
          do {
            uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
            uVar13 = (uint)uVar3;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            if (9 < uVar3 - 0x30) goto LAB_01f73c70;
            uVar16 = uVar16 + 1;
            bVar5 = true;
          } while (uVar14 != uVar16);
        }
        else {
LAB_01f73d34:
          if ((uStack000000000000001c & 1) != 0 || uVar17 == 0) {
LAB_01f73d48:
            uVar7 = 1;
            goto LAB_01f73d58;
          }
        }
LAB_01f73d7c:
        uVar17 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_01f73d58;
      }
      do {
        uVar15 = uVar15 + 1;
        if (uVar14 <= uVar15) {
          uVar17 = 0;
          goto LAB_01f73d48;
        }
        uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
        uVar17 = uVar3 - 0x30;
      } while (uVar17 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if (uVar17 < 10) goto LAB_01f73b14;
      uVar17 = 0;
      uVar16 = uVar15;
LAB_01f73c6c:
      uVar13 = (uint)uVar3;
      bVar5 = false;
LAB_01f73c70:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar16 = uVar16 + 1;
          if ((int)uVar16 < (int)uVar14) {
            puVar12 = (ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
            do {
              if (uVar14 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_01230ca8();
              }
              uVar3 = *puVar12;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_01f73cec;
              uVar16 = uVar16 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar14 != uVar16);
          }
          else {
LAB_01f73cec:
            if (uVar16 < uVar14) goto LAB_01f73d00;
          }
          goto LAB_01f73d30;
        }
      }
      else {
LAB_01f73d00:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar10 = FUN_01f74de0(unaff_x21,unaff_x23 & 0xffffffff | uVar10 << 0x20,uVar16);
        if ((uVar10 & 1) != 0) {
LAB_01f73d30:
          if (!bVar5) goto LAB_01f73d34;
          goto LAB_01f73d7c;
        }
      }
    }
  }
  else {
    if (unaff_w28 != 0x2d) {
      if (unaff_w28 == 0x2b) {
        uVar15 = uVar15 + 1;
        if (uVar13 <= uVar15) goto LAB_01f73d50;
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
      }
LAB_01f7386c:
      uVar13 = 1;
      goto LAB_01f73ab4;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 < uVar13) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar15 * 2);
      uVar13 = 0;
      goto LAB_01f73ab4;
    }
  }
LAB_01f73d50:
  uVar17 = 0;
  uVar7 = 0;
LAB_01f73d58:
  *unaff_x19 = uVar17;
  return uVar7;
}


