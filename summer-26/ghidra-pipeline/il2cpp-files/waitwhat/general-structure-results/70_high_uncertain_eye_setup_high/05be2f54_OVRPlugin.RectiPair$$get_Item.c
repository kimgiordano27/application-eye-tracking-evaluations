/*
FUNCTION_NAME: OVRPlugin.RectiPair$$get_Item
ENTRY_POINT: 05be2f54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_RectiPair__get_Item(void)

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
  
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_07114768);
  *(undefined1 *)(unaff_x21 + 0xce5) = 1;
  iVar9 = unaff_x20[4];
  iVar1 = *unaff_x20;
  iVar5 = unaff_x20[1];
  iVar2 = unaff_x20[2];
  iVar6 = unaff_x20[3];
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
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
      thunk_FUN_031e5338();
    }
    if (iVar15 < 2) {
      iVar17 = iVar3;
      if ((iVar15 == 0) || (iVar17 = iVar7, iVar15 == 1)) goto LAB_05be300c;
LAB_05be3060:
      if ((((iVar1 != 2 && iVar5 != 2) && iVar2 != 2) && iVar6 != 2) && iVar9 != 2) {
        iVar17 = unaff_x20[4];
        iVar3 = *unaff_x20;
        iVar7 = unaff_x20[1];
        iVar4 = unaff_x20[2];
        iVar8 = unaff_x20[3];
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        if (iVar15 < 2) {
          iVar17 = iVar3;
          if ((iVar15 == 0) || (iVar17 = iVar7, iVar15 == 1)) goto LAB_05be315c;
        }
        else if ((iVar15 == 4) || ((iVar17 = iVar8, iVar15 == 3 || (iVar17 = iVar4, iVar15 == 2))))
        {
LAB_05be315c:
          if (iVar17 == 1) {
            if (unaff_x19 == (long *)0x0) {
LAB_05be3214:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar12 = *unaff_x19;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07114768) {
                  puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_05be31c0;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar11 = (undefined8 *)FUN_031c0d08();
LAB_05be31c0:
            uVar13 = (*(code *)*puVar11)();
            if ((uVar13 & 1) != 0) {
              uVar16 = 1;
              goto LAB_05be31f4;
            }
          }
        }
      }
    }
    else {
      if ((iVar15 != 4) && ((iVar17 = iVar8, iVar15 != 3 && (iVar17 = iVar4, iVar15 != 2))))
      goto LAB_05be3060;
LAB_05be300c:
      if (iVar17 != 2) goto LAB_05be3060;
      if (unaff_x19 == (long *)0x0) goto LAB_05be3214;
      lVar12 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07114768) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05be30b8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08();
LAB_05be30b8:
      uVar13 = (*(code *)*puVar11)();
      if ((uVar13 & 1) == 0) {
        uVar16 = 0;
        goto LAB_05be31f4;
      }
      lVar12 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07114768) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_05be3124;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08();
LAB_05be3124:
      uVar10 = (*(code *)*puVar11)();
      uVar16 = uVar10 | uVar16;
    }
    iVar15 = iVar15 + 1;
    if (iVar15 == 5) {
LAB_05be31f4:
      return uVar16 & 1;
    }
  } while( true );
}


