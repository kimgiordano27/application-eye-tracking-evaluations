/*
FUNCTION_NAME: OVRPlugin$$DestroyDynamicObjectTracker
ENTRY_POINT: 07a4bcd4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__DestroyDynamicObjectTracker(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 in_w8;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  int *unaff_x20;
  int iVar15;
  long unaff_x21;
  long *unaff_x22;
  uint uVar16;
  int iVar17;
  
  *(undefined1 *)(unaff_x21 + 0x405) = in_w8;
  iVar9 = unaff_x20[4];
  iVar1 = *unaff_x20;
  iVar5 = unaff_x20[1];
  iVar2 = unaff_x20[2];
  iVar6 = unaff_x20[3];
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar16 = 0;
  iVar15 = 0;
  do {
    iVar17 = unaff_x20[4];
    iVar3 = *unaff_x20;
    iVar7 = unaff_x20[1];
    iVar4 = unaff_x20[2];
    iVar8 = unaff_x20[3];
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (iVar15 < 2) {
      iVar17 = iVar3;
      if ((iVar15 == 0) || (iVar17 = iVar7, iVar15 == 1)) goto LAB_07a4bd78;
LAB_07a4bdcc:
      if ((((iVar1 != 2 && iVar5 != 2) && iVar2 != 2) && iVar6 != 2) && iVar9 != 2) {
        iVar17 = unaff_x20[4];
        iVar3 = *unaff_x20;
        iVar7 = unaff_x20[1];
        iVar4 = unaff_x20[2];
        iVar8 = unaff_x20[3];
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (iVar15 < 2) {
          iVar17 = iVar3;
          if ((iVar15 == 0) || (iVar17 = iVar7, iVar15 == 1)) goto LAB_07a4bec8;
        }
        else if ((iVar15 == 4) || ((iVar17 = iVar8, iVar15 == 3 || (iVar17 = iVar4, iVar15 == 2))))
        {
LAB_07a4bec8:
          if (iVar17 == 1) {
            if (unaff_x19 == (long *)0x0) {
LAB_07a4bf80:
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar12 = *unaff_x19;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092ee658) {
                  puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_07a4bf2c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar11 = (undefined8 *)FUN_040b1e00();
LAB_07a4bf2c:
            uVar13 = (*(code *)*puVar11)();
            if ((uVar13 & 1) != 0) {
              uVar16 = 1;
              goto LAB_07a4bf60;
            }
          }
        }
      }
    }
    else {
      if ((iVar15 != 4) && ((iVar17 = iVar8, iVar15 != 3 && (iVar17 = iVar4, iVar15 != 2))))
      goto LAB_07a4bdcc;
LAB_07a4bd78:
      if (iVar17 != 2) goto LAB_07a4bdcc;
      if (unaff_x19 == (long *)0x0) goto LAB_07a4bf80;
      lVar12 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092ee658) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_07a4be24;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_040b1e00();
LAB_07a4be24:
      uVar13 = (*(code *)*puVar11)();
      if ((uVar13 & 1) == 0) {
        uVar16 = 0;
        goto LAB_07a4bf60;
      }
      lVar12 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092ee658) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_07a4be90;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_040b1e00();
LAB_07a4be90:
      uVar10 = (*(code *)*puVar11)();
      uVar16 = uVar10 | uVar16;
    }
    iVar15 = iVar15 + 1;
    if (iVar15 == 5) {
LAB_07a4bf60:
      return uVar16 & 1;
    }
  } while( true );
}


