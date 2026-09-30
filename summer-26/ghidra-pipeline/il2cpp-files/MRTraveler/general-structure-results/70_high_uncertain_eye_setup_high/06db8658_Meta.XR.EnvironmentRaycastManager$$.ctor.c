/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$.ctor
ENTRY_POINT: 06db8658
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


undefined8 Meta_XR_EnvironmentRaycastManager___ctor(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x26;
  
  lVar4 = (*(code *)*param_1)();
  if (lVar4 == 0) {
    uVar6 = *(undefined8 *)PTR_DAT_08e69460;
  }
  else {
    lVar4 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar15 + 4) * 0x10 + 0x138);
          goto LAB_06db877c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06db877c:
    uVar6 = (*(code *)*puVar5)();
    uVar6 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e7cd00,uVar6,0);
  }
  uVar6 = FUN_06f683f8(unaff_x26,uVar6,0);
  uVar7 = FUN_06f78754();
  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
  }
  uVar8 = FUN_03c8fd28(uVar6,*(undefined8 *)PTR_DAT_08e80318,*(undefined8 *)PTR_DAT_08e904c0);
  uVar13 = FUN_07119344(uVar8,0,0);
  if ((uVar13 & 1) == 0) {
    lVar4 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_06db889c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06db889c:
    lVar4 = (*(code *)*puVar5)();
    if (lVar4 == 0) {
      plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,0);
      plVar9 = plVar10;
    }
    else {
      lVar4 = *unaff_x20;
      uVar13 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06db8918;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06db8918:
      lVar4 = (*(code *)*puVar5)();
      if (lVar4 == 0) goto LAB_06db8c68;
      uVar1 = *(uint *)(lVar4 + 0x18);
      plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,(ulong)uVar1);
      puVar3 = PTR_DAT_08e904b8;
      puVar2 = PTR_DAT_08e7cd00;
      plVar9 = plVar10;
      if (0 < (int)uVar1) {
        uVar13 = 0;
        do {
          lVar4 = *unaff_x20;
          uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *unaff_x21) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_06db89b8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06db89b8:
          lVar4 = (*(code *)*puVar5)();
          if ((lVar4 == 0) ||
             (lVar4 = FUN_05212a24(lVar4,uVar13 & 0xffffffff,*(undefined8 *)puVar3), lVar4 == 0))
          goto LAB_06db8c68;
          uVar6 = FUN_06f7465c(*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)puVar2,
                               *(undefined8 *)(lVar4 + 0x28),0);
          if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
          }
          lVar4 = FUN_03c8fd28(uVar6,*(undefined8 *)PTR_DAT_08e80318,*(undefined8 *)PTR_DAT_08e904c0
                              );
          if (plVar10 == (long *)0x0) goto LAB_06db8c68;
          if ((lVar4 != 0) &&
             (lVar11 = thunk_FUN_03cf5138(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar6 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar6,0);
          }
          if (*(uint *)(plVar10 + 3) <= uVar13) goto LAB_06db8c6c;
          plVar9 = plVar10 + uVar13 + 4;
          *plVar9 = lVar4;
          thunk_FUN_03d233cc(plVar9,lVar4);
          if (*(uint *)(plVar10 + 3) <= uVar13) goto LAB_06db8c6c;
          plVar9 = (long *)FUN_07119344(*plVar9,0,0);
          if (((ulong)plVar9 & 1) != 0) {
            plVar9 = (long *)thunk_FUN_03d12a58();
            if (plVar9 == (long *)0x0) goto LAB_06db8c68;
            uVar12 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
            uVar6 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,uVar6,0);
            if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
            }
            plVar9 = (long *)FUN_06dfdedc(uVar12,uVar6,0,0);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar1);
      }
    }
    uVar6 = FUN_06db8c7c(plVar9,uVar8,uVar7,plVar10);
    uVar13 = FUN_0702dcc0(uVar6,0,0);
    if ((uVar13 & 1) == 0) {
      uVar6 = FUN_0481ccb4(uVar6,uVar8,*(undefined8 *)PTR_DAT_08e904c8);
      return uVar6;
    }
    plVar9 = (long *)thunk_FUN_03d12a58();
    if (plVar9 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      lVar4 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_08e904d0;
          thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20));
          if (1 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x28) = unaff_x26;
            thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x28),unaff_x26);
            puVar2 = PTR_DAT_08e71968;
            if (2 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_08e71968;
              thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x30));
              if (3 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x38) = uVar7;
                thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x38),uVar7);
                if (4 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)puVar2;
                  thunk_FUN_03d233cc();
                  uVar6 = FUN_06f74f38(lVar4,0);
                  goto LAB_06db8698;
                }
              }
            }
          }
        }
LAB_06db8c6c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
    }
  }
  else {
    plVar9 = (long *)thunk_FUN_03d12a58();
    if (plVar9 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      uVar6 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,uVar6,0);
LAB_06db8698:
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
      }
      FUN_06dfdedc(uVar8,uVar6,0,0);
      return 0;
    }
  }
LAB_06db8c68:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


