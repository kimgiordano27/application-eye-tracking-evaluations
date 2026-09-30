/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$EnsureDepthManagerIsPresent
ENTRY_POINT: 06db8778
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__EnsureDepthManagerIsPresent
          (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x26;
  
  uVar4 = (**(code **)(param_1 + 0x138))();
  FUN_06f683f8(*(undefined8 *)PTR_DAT_08e7cd00,uVar4,0);
  uVar4 = FUN_06f683f8();
  uVar5 = FUN_06f78754();
  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
  }
  uVar6 = FUN_03c8fd28(uVar4,*(undefined8 *)PTR_DAT_08e80318,*(undefined8 *)PTR_DAT_08e904c0);
  uVar7 = FUN_07119344(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    lVar13 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x21) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_06db889c;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348();
LAB_06db889c:
    lVar13 = (*(code *)*puVar9)();
    if (lVar13 == 0) {
      plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,0);
      plVar8 = plVar10;
    }
    else {
      lVar13 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *unaff_x21) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06db8918;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348();
LAB_06db8918:
      lVar13 = (*(code *)*puVar9)();
      if (lVar13 == 0) goto LAB_06db8c68;
      uVar1 = *(uint *)(lVar13 + 0x18);
      plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,(ulong)uVar1);
      puVar3 = PTR_DAT_08e904b8;
      puVar2 = PTR_DAT_08e7cd00;
      plVar8 = plVar10;
      if (0 < (int)uVar1) {
        uVar7 = 0;
        do {
          lVar13 = *unaff_x20;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *unaff_x21) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_06db89b8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348();
LAB_06db89b8:
          lVar13 = (*(code *)*puVar9)();
          if ((lVar13 == 0) ||
             (lVar13 = FUN_05212a24(lVar13,uVar7 & 0xffffffff,*(undefined8 *)puVar3), lVar13 == 0))
          goto LAB_06db8c68;
          uVar4 = FUN_06f7465c(*(undefined8 *)(lVar13 + 0x30),*(undefined8 *)puVar2,
                               *(undefined8 *)(lVar13 + 0x28),0);
          if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
          }
          lVar13 = FUN_03c8fd28(uVar4,*(undefined8 *)PTR_DAT_08e80318,
                                *(undefined8 *)PTR_DAT_08e904c0);
          if (plVar10 == (long *)0x0) goto LAB_06db8c68;
          if ((lVar13 != 0) &&
             (lVar11 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar4,0);
          }
          if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_06db8c6c;
          plVar8 = plVar10 + uVar7 + 4;
          *plVar8 = lVar13;
          thunk_FUN_03d233cc(plVar8,lVar13);
          if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_06db8c6c;
          plVar8 = (long *)FUN_07119344(*plVar8,0,0);
          if (((ulong)plVar8 & 1) != 0) {
            plVar8 = (long *)thunk_FUN_03d12a58();
            if (plVar8 == (long *)0x0) goto LAB_06db8c68;
            uVar12 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            uVar4 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,uVar4,0);
            if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
            }
            plVar8 = (long *)FUN_06dfdedc(uVar12,uVar4,0,0);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar1);
      }
    }
    uVar4 = FUN_06db8c7c(plVar8,uVar6,uVar5,plVar10);
    uVar7 = FUN_0702dcc0(uVar4,0,0);
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_0481ccb4(uVar4,uVar6,*(undefined8 *)PTR_DAT_08e904c8);
      return uVar4;
    }
    plVar8 = (long *)thunk_FUN_03d12a58();
    if (plVar8 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      lVar13 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) != 0) {
          *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)PTR_DAT_08e904d0;
          thunk_FUN_03d233cc((undefined8 *)(lVar13 + 0x20));
          if (1 < *(uint *)(lVar13 + 0x18)) {
            *(undefined8 *)(lVar13 + 0x28) = unaff_x26;
            thunk_FUN_03d233cc((undefined8 *)(lVar13 + 0x28),unaff_x26);
            puVar2 = PTR_DAT_08e71968;
            if (2 < *(uint *)(lVar13 + 0x18)) {
              *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)PTR_DAT_08e71968;
              thunk_FUN_03d233cc((undefined8 *)(lVar13 + 0x30));
              if (3 < *(uint *)(lVar13 + 0x18)) {
                *(undefined8 *)(lVar13 + 0x38) = uVar5;
                thunk_FUN_03d233cc((undefined8 *)(lVar13 + 0x38),uVar5);
                if (4 < *(uint *)(lVar13 + 0x18)) {
                  *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar2;
                  thunk_FUN_03d233cc();
                  uVar4 = FUN_06f74f38(lVar13,0);
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
    plVar8 = (long *)thunk_FUN_03d12a58();
    if (plVar8 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      uVar4 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,uVar4,0);
LAB_06db8698:
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
      }
      FUN_06dfdedc(uVar6,uVar4,0,0);
      return 0;
    }
  }
LAB_06db8c68:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


