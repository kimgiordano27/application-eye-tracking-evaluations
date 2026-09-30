/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionHook$$.ctor
ENTRY_POINT: 076f0a94
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_ActionHook___ctor(ulong param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  long unaff_x20;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f2f718);
    FUN_04447ba8(PTR_DAT_09f2f720);
    FUN_04447ba8(PTR_DAT_09f2f728);
    FUN_04447ba8(PTR_DAT_09f2f730);
    FUN_04447ba8(PTR_DAT_09f2f738);
    FUN_04447ba8(PTR_DAT_09f2f740);
    FUN_04447ba8(PTR_DAT_09f2f748);
    *(undefined1 *)(unaff_x20 + 0xf05) = 1;
  }
  puVar4 = PTR_DAT_09f2f730;
  if (*(long *)(param_2 + 0x10) == 0) {
    FUN_076f1130(*(undefined8 *)PTR_DAT_09f2f748);
    return 0;
  }
  iVar9 = *(int *)(param_2 + 0x68);
  plVar2 = (long *)PTR_DAT_09f2f718;
  while (PTR_DAT_09f2f718 = (undefined *)plVar2, 0 < iVar9) {
    lVar5 = *(long *)(param_2 + 0x20);
    if (lVar5 == 0) goto LAB_076f0ed4;
    if (iVar9 <= *(int *)(lVar5 + 0x20)) break;
    FUN_06392bdc(0,lVar5,*(undefined8 *)puVar4);
    iVar9 = *(int *)(param_2 + 0x68) + -1;
    *(int *)(param_2 + 0x68) = iVar9;
    plVar2 = (long *)PTR_DAT_09f2f718;
  }
  lVar5 = *(long *)(param_2 + 0x50);
  if (lVar5 != 0) {
    iVar9 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar9) {
        iVar9 = *(int *)(param_2 + 0x68);
        if (-1 < iVar9) goto LAB_076f0c64;
        if (DAT_0a51c29c == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e748);
          DAT_0a51c29c = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        puVar3 = PTR_DAT_09f2f728;
        lVar5 = *(long *)(param_2 + 0x20);
        iVar10 = -iVar9;
        if (-1 < iVar9) {
          iVar10 = iVar9;
        }
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x20) <= iVar10) {
            iVar10 = *(int *)(lVar5 + 0x20);
          }
          iVar9 = iVar10;
          if (iVar10 < 1) goto LAB_076f0c58;
          goto LAB_076f0c24;
        }
        break;
      }
      lVar12 = *(long *)(param_2 + 0x20);
      fVar13 = (float)FUN_076f11b0(lVar5,iVar9);
      if (lVar12 == 0) break;
      fVar14 = 1.0;
      if (*(char *)(param_2 + 0x18) != '\0') {
        fVar14 = 0.0;
      }
      FUN_06392bdc(fVar13 * *(float *)(param_2 + 0x1c) * fVar14,lVar12,*(undefined8 *)puVar4);
      lVar5 = *(long *)(param_2 + 0x50);
      iVar9 = iVar9 + 1;
    } while (lVar5 != 0);
  }
  goto LAB_076f0ed4;
LAB_076f0c58:
  *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + iVar10;
LAB_076f0c64:
  if (*(long *)(param_2 + 0x20) != 0) {
    iVar10 = *(int *)(*(long *)(param_2 + 0x20) + 0x20);
    plVar11 = *(long **)(param_2 + 0x28);
    iVar9 = iVar10 + 0x3ff;
    if (-1 < iVar10) {
      iVar9 = iVar10;
    }
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *plVar2) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_076f0cd4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_044822ac(plVar11,*plVar2,3);
LAB_076f0cd4:
      iVar9 = iVar9 >> 10;
      uVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(param_2 + 0x38) == 0) goto LAB_076f0ed4;
        FUN_063928ec(*(long *)(param_2 + 0x38),*(undefined8 *)PTR_DAT_09f2f720);
      }
      else {
        lVar5 = *(long *)(param_2 + 0x40);
        if (lVar5 != 0) {
          iVar10 = 0;
          do {
            if (*(int *)(lVar5 + 0x18) <= iVar10) goto LAB_076f0d68;
            lVar12 = *(long *)(param_2 + 0x38);
            fVar13 = (float)FUN_076f11b0(lVar5,iVar10);
            if (lVar12 == 0) break;
            fVar14 = 1.0;
            if (*(char *)(param_2 + 0x30) != '\0') {
              fVar14 = 0.0;
            }
            FUN_06392bdc(fVar13 * *(float *)(param_2 + 0x34) * fVar14,lVar12,*(undefined8 *)puVar4);
            lVar5 = *(long *)(param_2 + 0x40);
            iVar10 = iVar10 + 1;
          } while (lVar5 != 0);
          goto LAB_076f0ed4;
        }
LAB_076f0d68:
        if (*(long *)(param_2 + 0x38) == 0) goto LAB_076f0ed4;
        iVar1 = *(int *)(*(long *)(param_2 + 0x38) + 0x20);
        iVar10 = iVar1 + 0x3ff;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar10 >> 10 <= iVar9) {
          iVar9 = iVar10 >> 10;
        }
      }
      if (*(long *)(param_2 + 0x60) != 0) {
        *(undefined4 *)(*(long *)(param_2 + 0x60) + 0x18) = 0;
        plVar11 = *(long **)(param_2 + 0x28);
        if (plVar11 != (long *)0x0) {
          lVar5 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *plVar2) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_076f0df0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(plVar11,*plVar2,3);
LAB_076f0df0:
          iVar10 = iVar9 * 0x400;
          uVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
          puVar4 = PTR_DAT_09f2f728;
          if ((uVar7 & 1) == 0) {
            if (0 < iVar9) {
              if (iVar10 < 2) {
                iVar10 = 1;
              }
              do {
                if (*(long *)(param_2 + 0x20) == 0) goto LAB_076f0ed4;
                FUN_06392d54(*(long *)(param_2 + 0x20),*(undefined8 *)puVar4);
                FUN_076f11e0();
                if (*(long *)(param_2 + 0x60) == 0) goto LAB_076f0ed4;
                uVar7 = FUN_076f1228();
                if ((uVar7 & 1) == 0) goto LAB_076f0ea8;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
          }
          else if (0 < iVar9) {
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            do {
              if (*(long *)(param_2 + 0x38) == 0) goto LAB_076f0ed4;
              fVar13 = (float)FUN_06392d54(*(long *)(param_2 + 0x38),*(undefined8 *)puVar4);
              if (*(long *)(param_2 + 0x20) == 0) goto LAB_076f0ed4;
              fVar14 = (float)FUN_06392d54(*(long *)(param_2 + 0x20),*(undefined8 *)puVar4);
              FUN_076f11e0(fVar13 + fVar14);
              if (*(long *)(param_2 + 0x60) == 0) goto LAB_076f0ed4;
              uVar7 = FUN_076f1228();
              if ((uVar7 & 1) == 0) goto LAB_076f0ea8;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          goto LAB_076f0eb8;
        }
      }
    }
  }
  goto LAB_076f0ed4;
LAB_076f0ea8:
  FUN_076efc9c(*(undefined8 *)PTR_DAT_09f2f740);
LAB_076f0eb8:
  return *(undefined8 *)(param_2 + 0x60);
  while (lVar5 = *(long *)(param_2 + 0x20), iVar9 = iVar9 + -1, lVar5 != 0) {
LAB_076f0c24:
    FUN_06392d54(lVar5,*(undefined8 *)puVar3);
    if (iVar9 + -1 == 0) goto LAB_076f0c58;
  }
LAB_076f0ed4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


