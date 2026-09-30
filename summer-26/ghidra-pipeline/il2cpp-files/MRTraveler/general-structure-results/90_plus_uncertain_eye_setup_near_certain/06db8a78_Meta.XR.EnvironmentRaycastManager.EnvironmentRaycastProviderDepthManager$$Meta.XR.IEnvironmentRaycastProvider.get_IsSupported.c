/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsSupported
ENTRY_POINT: 06db8a78
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
          (void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar5 = FUN_07119344(*unaff_x29,0,0);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_03d12a58();
      if (plVar6 == (long *)0x0) goto LAB_06db8c68;
      uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      uVar8 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,unaff_x27,0);
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
      }
      uVar5 = FUN_06dfdedc(uVar7,uVar8,0,0);
    }
    uVar1 = unaff_x26 + 1;
    if (uVar1 == unaff_x25) {
      uVar7 = FUN_06db8c7c(uVar5,in_stack_00000008,in_stack_00000018);
      uVar5 = FUN_0702dcc0(uVar7,0,0);
      if ((uVar5 & 1) == 0) {
        uVar7 = FUN_0481ccb4(uVar7,in_stack_00000008,*(undefined8 *)PTR_DAT_08e904c8);
        return uVar7;
      }
      plVar6 = (long *)thunk_FUN_03d12a58();
      if (plVar6 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        lVar9 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) != 0) {
            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_08e904d0;
            thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x20));
            if (1 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x28) = in_stack_00000010;
              thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x28),in_stack_00000010);
              puVar2 = PTR_DAT_08e71968;
              if (2 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_08e71968;
                thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x30));
                if (3 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x38) = in_stack_00000018;
                  thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x38),in_stack_00000018);
                  if (4 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
                    thunk_FUN_03d233cc();
                    uVar8 = FUN_06f74f38(lVar9,0);
                    if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
                      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
                    }
                    FUN_06dfdedc(uVar7,uVar8,0,0);
                    return 0;
                  }
                }
              }
            }
          }
          break;
        }
      }
LAB_06db8c68:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar9 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_06db89b8;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06db89b8:
    lVar9 = (*(code *)*puVar3)();
    if ((lVar9 == 0) || (lVar9 = FUN_05212a24(lVar9,uVar1 & 0xffffffff,*unaff_x23), lVar9 == 0))
    goto LAB_06db8c68;
    unaff_x27 = FUN_06f7465c(*(undefined8 *)(lVar9 + 0x30),*unaff_x22,*(undefined8 *)(lVar9 + 0x28),
                             0);
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
    }
    lVar9 = FUN_03c8fd28(unaff_x27,*(undefined8 *)PTR_DAT_08e80318,*(undefined8 *)PTR_DAT_08e904c0);
    if (unaff_x24 == (long *)0x0) goto LAB_06db8c68;
    if ((lVar9 != 0) &&
       (lVar4 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*unaff_x24 + 0x40)), lVar4 == 0)) {
      uVar7 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar7,0);
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar1) break;
    unaff_x29 = unaff_x24 + unaff_x26 + 5;
    *unaff_x29 = lVar9;
    thunk_FUN_03d233cc(unaff_x29,lVar9);
    unaff_x26 = uVar1;
  } while (uVar1 < *(uint *)(unaff_x24 + 3));
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


