/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CheckBox
ENTRY_POINT: 06db855c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__CheckBox(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *unaff_x20;
  long *unaff_x21;
  
  puVar5 = (undefined8 *)FUN_03cf1348();
  lVar6 = (*(code *)*puVar5)();
  uVar7 = FUN_06f74e14(lVar6,0);
  if ((uVar7 & 1) == 0) {
    if (lVar6 == 0) goto LAB_06db8c68;
    iVar4 = FUN_06f79940(lVar6,0x2e,0);
    if (iVar4 < 1) goto LAB_06db865c;
    uVar8 = FUN_06f764fc(lVar6,0,iVar4,0);
    lVar15 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
          goto FUN_06db8700;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
FUN_06db8700:
    lVar15 = (*(code *)*puVar5)();
    if (lVar15 == 0) {
      uVar9 = *(undefined8 *)PTR_DAT_08e69460;
    }
    else {
      lVar15 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar7 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
            goto LAB_06db877c;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06db877c:
      uVar9 = (*(code *)*puVar5)();
      uVar9 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e7cd00,uVar9,0);
    }
    lVar15 = FUN_06f683f8(uVar8,uVar9,0);
    uVar10 = FUN_06f78754(lVar6,iVar4 + 1,0);
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
    }
    uVar9 = FUN_03c8fd28(lVar15,*(undefined8 *)PTR_DAT_08e80318,*(undefined8 *)PTR_DAT_08e904c0);
    uVar7 = FUN_07119344(uVar9,0,0);
    if ((uVar7 & 1) == 0) {
      lVar6 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_06db889c;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06db889c:
      lVar6 = (*(code *)*puVar5)();
      if (lVar6 == 0) {
        plVar12 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,0);
        plVar11 = plVar12;
      }
      else {
        lVar6 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x21) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_06db8918;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06db8918:
        lVar6 = (*(code *)*puVar5)();
        if (lVar6 == 0) goto LAB_06db8c68;
        uVar1 = *(uint *)(lVar6 + 0x18);
        plVar12 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,(ulong)uVar1);
        puVar3 = PTR_DAT_08e904b8;
        puVar2 = PTR_DAT_08e7cd00;
        plVar11 = plVar12;
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            lVar6 = *unaff_x20;
            uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *unaff_x21) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_06db89b8;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06db89b8:
            lVar6 = (*(code *)*puVar5)();
            if ((lVar6 == 0) ||
               (lVar6 = FUN_05212a24(lVar6,uVar7 & 0xffffffff,*(undefined8 *)puVar3), lVar6 == 0))
            goto LAB_06db8c68;
            uVar13 = FUN_06f7465c(*(undefined8 *)(lVar6 + 0x30),*(undefined8 *)puVar2,
                                  *(undefined8 *)(lVar6 + 0x28),0);
            if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
            }
            lVar6 = FUN_03c8fd28(uVar13,*(undefined8 *)PTR_DAT_08e80318,
                                 *(undefined8 *)PTR_DAT_08e904c0);
            if (plVar12 == (long *)0x0) goto LAB_06db8c68;
            if ((lVar6 != 0) &&
               (lVar15 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar12 + 0x40)), lVar15 == 0)) {
              uVar9 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
              FUN_03c8f9fc(uVar9,0);
            }
            if (*(uint *)(plVar12 + 3) <= uVar7) goto LAB_06db8c6c;
            plVar11 = plVar12 + uVar7 + 4;
            *plVar11 = lVar6;
            thunk_FUN_03d233cc(plVar11,lVar6);
            if (*(uint *)(plVar12 + 3) <= uVar7) goto LAB_06db8c6c;
            plVar11 = (long *)FUN_07119344(*plVar11,0,0);
            if (((ulong)plVar11 & 1) != 0) {
              plVar11 = (long *)thunk_FUN_03d12a58();
              if (plVar11 == (long *)0x0) goto LAB_06db8c68;
              uVar14 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              uVar13 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,uVar13,0);
              if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
              }
              plVar11 = (long *)FUN_06dfdedc(uVar14,uVar13,0,0);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar1);
        }
      }
      uVar13 = FUN_06db8c7c(plVar11,uVar9,uVar10,plVar12);
      uVar7 = FUN_0702dcc0(uVar13,0,0);
      if ((uVar7 & 1) == 0) {
        uVar9 = FUN_0481ccb4(uVar13,uVar9,*(undefined8 *)PTR_DAT_08e904c8);
        return uVar9;
      }
      plVar11 = (long *)thunk_FUN_03d12a58();
      if (plVar11 == (long *)0x0) goto LAB_06db8c68;
      uVar9 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      lVar6 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
      if (lVar6 == 0) goto LAB_06db8c68;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_06db8c6c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_08e904d0;
      thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x20));
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06db8c6c;
      *(undefined8 *)(lVar6 + 0x28) = uVar8;
      thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x28),uVar8);
      puVar2 = PTR_DAT_08e71968;
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06db8c6c;
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_08e71968;
      thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x30));
      if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_06db8c6c;
      *(undefined8 *)(lVar6 + 0x38) = uVar10;
      thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x38),uVar10);
      if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_06db8c6c;
      *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)puVar2;
      thunk_FUN_03d233cc();
      uVar8 = FUN_06f74f38(lVar6,0);
      goto LAB_06db8698;
    }
    plVar11 = (long *)thunk_FUN_03d12a58();
    if (plVar11 == (long *)0x0) goto LAB_06db8c68;
    uVar9 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    lVar6 = lVar15;
    puVar5 = (undefined8 *)PTR_DAT_08e904a0;
  }
  else {
LAB_06db865c:
    plVar11 = (long *)thunk_FUN_03d12a58();
    if (plVar11 == (long *)0x0) {
LAB_06db8c68:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar9 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    puVar5 = (undefined8 *)PTR_DAT_08e904e0;
  }
  uVar8 = FUN_06f683f8(*puVar5,lVar6,0);
LAB_06db8698:
  if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
  }
  FUN_06dfdedc(uVar9,uVar8,0,0);
  return 0;
}


