/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$.ctor
ENTRY_POINT: 05d6facc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager_InstantiateMrcCameraDelegate___ctor(void)

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
  uint uVar16;
  int iVar17;
  
  thunk_FUN_032e1da0(PTR_DAT_072af0a8);
  *(undefined1 *)(unaff_x21 + 0x74d) = 1;
  iVar1 = *unaff_x20;
  iVar4 = unaff_x20[1];
  iVar2 = unaff_x20[2];
  iVar5 = unaff_x20[3];
  iVar8 = unaff_x20[4];
  if (*(int *)(*(long *)PTR_DAT_072ad9a0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar16 = 0;
  iVar15 = 0;
  do {
    iVar17 = *unaff_x20;
    iVar6 = unaff_x20[1];
    iVar3 = unaff_x20[2];
    iVar7 = unaff_x20[3];
    iVar9 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_072ad9a0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    switch(iVar15) {
    case 0:
      break;
    case 1:
      iVar17 = iVar6;
      break;
    case 2:
      iVar17 = iVar3;
      break;
    case 3:
      iVar17 = iVar7;
      break;
    case 4:
      iVar17 = iVar9;
      break;
    default:
      goto switchD_05d6fb88_default;
    }
    if (iVar17 == 2) {
      if (unaff_x19 == (long *)0x0) goto LAB_05d6fdac;
      lVar12 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_072af0a8) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d6fc58;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_032937ac();
LAB_05d6fc58:
      uVar13 = (*(code *)*puVar11)();
      if ((uVar13 & 1) == 0) {
        uVar16 = 0;
        goto LAB_05d6fd8c;
      }
      lVar12 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_072af0a8) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_05d6fcc4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_032937ac();
LAB_05d6fcc4:
      uVar10 = (*(code *)*puVar11)();
      uVar16 = uVar16 | uVar10;
    }
    else {
switchD_05d6fb88_default:
      if (iVar8 != 2 && (((iVar1 != 2 && iVar4 != 2) && iVar2 != 2) && iVar5 != 2)) {
        iVar17 = *unaff_x20;
        iVar6 = unaff_x20[1];
        iVar3 = unaff_x20[2];
        iVar7 = unaff_x20[3];
        iVar9 = unaff_x20[4];
        if (*(int *)(*(long *)PTR_DAT_072ad9a0 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        switch(iVar15) {
        case 0:
          break;
        case 1:
          iVar17 = iVar6;
          break;
        case 2:
          iVar17 = iVar3;
          break;
        case 3:
          iVar17 = iVar7;
          break;
        case 4:
          iVar17 = iVar9;
          break;
        default:
          goto switchD_05d6fc40_default;
        }
        if (iVar17 == 1) {
          if (unaff_x19 == (long *)0x0) {
LAB_05d6fdac:
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar12 = *unaff_x19;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_072af0a8) {
                puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_05d6fd58;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar11 = (undefined8 *)FUN_032937ac();
LAB_05d6fd58:
          uVar13 = (*(code *)*puVar11)();
          if ((uVar13 & 1) != 0) {
            uVar16 = 1;
            goto LAB_05d6fd8c;
          }
        }
      }
    }
switchD_05d6fc40_default:
    iVar15 = iVar15 + 1;
    if (iVar15 == 5) {
LAB_05d6fd8c:
      return uVar16 & 1;
    }
  } while( true );
}


