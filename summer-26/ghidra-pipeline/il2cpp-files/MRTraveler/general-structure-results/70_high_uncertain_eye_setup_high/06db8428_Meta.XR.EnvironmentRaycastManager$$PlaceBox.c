/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$PlaceBox
ENTRY_POINT: 06db8428
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__PlaceBox(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  
  if ((DAT_09419bc5 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e904a8);
    FUN_03c8f898(PTR_DAT_08e904b0);
    FUN_03c8f898(PTR_DAT_08e904b8);
    FUN_03c8f898(PTR_DAT_08e904c0);
    FUN_03c8f898(PTR_DAT_08e69770);
    FUN_03c8f898(PTR_DAT_08e904c8);
    FUN_03c8f898(PTR_DAT_08e79c00);
    FUN_03c8f898(PTR_DAT_08e80318);
    FUN_03c8f898(PTR_DAT_08e695f0);
    FUN_03c8f898(PTR_DAT_08e7e268);
    FUN_03c8f898(PTR_DAT_08e904d0);
    FUN_03c8f898(PTR_DAT_08e904d8);
    FUN_03c8f898(PTR_DAT_08e7cd00);
    FUN_03c8f898(PTR_DAT_08e904e0);
    FUN_03c8f898(PTR_DAT_08e904a0);
    FUN_03c8f898(PTR_DAT_08e69460);
    FUN_03c8f898(PTR_DAT_08e71968);
    DAT_09419bc5 = 1;
  }
  puVar2 = PTR_DAT_08e904a8;
  if (param_2 == (long *)0x0) {
    plVar10 = (long *)thunk_FUN_03d12a58(param_1,0);
    if (plVar10 == (long *)0x0) goto LAB_06db8c68;
    uVar8 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
    }
    uVar7 = *(undefined8 *)PTR_DAT_08e904d8;
    goto LAB_06db86c0;
  }
  lVar14 = *param_2;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08e904a8) {
        puVar6 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_06db85c8;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)PTR_DAT_08e904a8,0);
LAB_06db85c8:
  lVar14 = (*(code *)*puVar6)(param_2,puVar6[1]);
  uVar16 = FUN_06f74e14(lVar14,0);
  if ((uVar16 & 1) == 0) {
    if (lVar14 == 0) goto LAB_06db8c68;
    iVar5 = FUN_06f79940(lVar14,0x2e,0);
    if (iVar5 < 1) goto LAB_06db865c;
    uVar7 = FUN_06f764fc(lVar14,0,iVar5,0);
    lVar15 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
          goto FUN_06db8700;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)puVar2,4);
FUN_06db8700:
    lVar15 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (lVar15 == 0) {
      uVar8 = *(undefined8 *)PTR_DAT_08e69460;
    }
    else {
      lVar15 = *param_2;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_06db877c;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)puVar2,4);
LAB_06db877c:
      uVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
      uVar8 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e7cd00,uVar8,0);
    }
    lVar15 = FUN_06f683f8(uVar7,uVar8,0);
    uVar9 = FUN_06f78754(lVar14,iVar5 + 1,0);
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
    }
    uVar8 = FUN_03c8fd28(lVar15,*(undefined8 *)PTR_DAT_08e80318,*(undefined8 *)PTR_DAT_08e904c0);
    uVar16 = FUN_07119344(uVar8,0,0);
    if ((uVar16 & 1) != 0) {
      plVar10 = (long *)thunk_FUN_03d12a58(param_1,0);
      if (plVar10 == (long *)0x0) goto LAB_06db8c68;
      uVar8 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      lVar14 = lVar15;
      puVar6 = (undefined8 *)PTR_DAT_08e904a0;
      goto LAB_06db8688;
    }
    lVar14 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_06db889c;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)puVar2,2);
LAB_06db889c:
    lVar14 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (lVar14 == 0) {
      plVar11 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,0);
      plVar10 = plVar11;
    }
    else {
      lVar14 = *param_2;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_06db8918;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)puVar2,2);
LAB_06db8918:
      lVar14 = (*(code *)*puVar6)(param_2,puVar6[1]);
      if (lVar14 == 0) goto LAB_06db8c68;
      uVar1 = *(uint *)(lVar14 + 0x18);
      plVar11 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,(ulong)uVar1);
      puVar4 = PTR_DAT_08e904b8;
      puVar3 = PTR_DAT_08e7cd00;
      plVar10 = plVar11;
      if (0 < (int)uVar1) {
        uVar16 = 0;
        do {
          lVar14 = *param_2;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_06db89b8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)puVar2,2);
LAB_06db89b8:
          lVar14 = (*(code *)*puVar6)(param_2,puVar6[1]);
          if ((lVar14 == 0) ||
             (lVar14 = FUN_05212a24(lVar14,uVar16 & 0xffffffff,*(undefined8 *)puVar4), lVar14 == 0))
          goto LAB_06db8c68;
          uVar12 = FUN_06f7465c(*(undefined8 *)(lVar14 + 0x30),*(undefined8 *)puVar3,
                                *(undefined8 *)(lVar14 + 0x28),0);
          if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
          }
          lVar14 = FUN_03c8fd28(uVar12,*(undefined8 *)PTR_DAT_08e80318,
                                *(undefined8 *)PTR_DAT_08e904c0);
          if (plVar11 == (long *)0x0) goto LAB_06db8c68;
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_03cf5138(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0)) {
            uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar8,0);
          }
          if (*(uint *)(plVar11 + 3) <= uVar16) goto LAB_06db8c6c;
          plVar10 = plVar11 + uVar16 + 4;
          *plVar10 = lVar14;
          thunk_FUN_03d233cc(plVar10,lVar14);
          if (*(uint *)(plVar11 + 3) <= uVar16) goto LAB_06db8c6c;
          plVar10 = (long *)FUN_07119344(*plVar10,0,0);
          if (((ulong)plVar10 & 1) != 0) {
            plVar10 = (long *)thunk_FUN_03d12a58(param_1,0);
            if (plVar10 == (long *)0x0) goto LAB_06db8c68;
            uVar13 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            uVar12 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,uVar12,0);
            if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
            }
            plVar10 = (long *)FUN_06dfdedc(uVar13,uVar12,0,0);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar1);
      }
    }
    uVar12 = FUN_06db8c7c(plVar10,uVar8,uVar9,plVar11);
    uVar16 = FUN_0702dcc0(uVar12,0,0);
    if ((uVar16 & 1) == 0) {
      uVar8 = FUN_0481ccb4(uVar12,uVar8,*(undefined8 *)PTR_DAT_08e904c8);
      return uVar8;
    }
    plVar10 = (long *)thunk_FUN_03d12a58(param_1,0);
    if (plVar10 == (long *)0x0) goto LAB_06db8c68;
    uVar8 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    lVar14 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
    if (lVar14 == 0) goto LAB_06db8c68;
    if (*(int *)(lVar14 + 0x18) == 0) {
LAB_06db8c6c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_08e904d0;
    thunk_FUN_03d233cc((undefined8 *)(lVar14 + 0x20));
    if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_06db8c6c;
    *(undefined8 *)(lVar14 + 0x28) = uVar7;
    thunk_FUN_03d233cc((undefined8 *)(lVar14 + 0x28),uVar7);
    puVar2 = PTR_DAT_08e71968;
    if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06db8c6c;
    *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_08e71968;
    thunk_FUN_03d233cc((undefined8 *)(lVar14 + 0x30));
    if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_06db8c6c;
    *(undefined8 *)(lVar14 + 0x38) = uVar9;
    thunk_FUN_03d233cc((undefined8 *)(lVar14 + 0x38),uVar9);
    if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_06db8c6c;
    *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_03d233cc();
    uVar7 = FUN_06f74f38(lVar14,0);
  }
  else {
LAB_06db865c:
    plVar10 = (long *)thunk_FUN_03d12a58(param_1,0);
    if (plVar10 == (long *)0x0) {
LAB_06db8c68:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar8 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    puVar6 = (undefined8 *)PTR_DAT_08e904e0;
LAB_06db8688:
    uVar7 = FUN_06f683f8(*puVar6,lVar14,0);
  }
  if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
  }
LAB_06db86c0:
  FUN_06dfdedc(uVar8,uVar7,0,0);
  return 0;
}


