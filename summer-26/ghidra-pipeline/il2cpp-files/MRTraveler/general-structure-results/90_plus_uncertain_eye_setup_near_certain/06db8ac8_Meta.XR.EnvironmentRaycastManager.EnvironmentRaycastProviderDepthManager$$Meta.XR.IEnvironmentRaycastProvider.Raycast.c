/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.Raycast
ENTRY_POINT: 06db8ac8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_Raycast
          (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
    }
    uVar4 = FUN_06dfdedc(unaff_x28,param_1,0,0);
    uVar6 = unaff_x26;
    do {
      unaff_x26 = uVar6 + 1;
      if (unaff_x26 == unaff_x25) {
        uVar5 = FUN_06db8c7c(uVar4,in_stack_00000008,in_stack_00000018);
        uVar6 = FUN_0702dcc0(uVar5,0,0);
        if ((uVar6 & 1) == 0) {
          uVar5 = FUN_0481ccb4(uVar5,in_stack_00000008,*(undefined8 *)PTR_DAT_08e904c8);
          return uVar5;
        }
        plVar7 = (long *)thunk_FUN_03d12a58();
        if (plVar7 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
          lVar8 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) != 0) {
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_08e904d0;
              thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x20));
              if (1 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x28) = in_stack_00000010;
                thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x28),in_stack_00000010);
                puVar1 = PTR_DAT_08e71968;
                if (2 < *(uint *)(lVar8 + 0x18)) {
                  *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_08e71968;
                  thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x30));
                  if (3 < *(uint *)(lVar8 + 0x18)) {
                    *(undefined8 *)(lVar8 + 0x38) = in_stack_00000018;
                    thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x38),in_stack_00000018);
                    if (4 < *(uint *)(lVar8 + 0x18)) {
                      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar1;
                      thunk_FUN_03d233cc();
                      uVar9 = FUN_06f74f38(lVar8,0);
                      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
                        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
                      }
                      FUN_06dfdedc(uVar5,uVar9,0,0);
                      return 0;
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
        goto LAB_06db8c68;
      }
      lVar8 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_06db89b8;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06db89b8:
      lVar8 = (*(code *)*puVar2)();
      if ((lVar8 == 0) ||
         (lVar8 = FUN_05212a24(lVar8,unaff_x26 & 0xffffffff,*unaff_x23), lVar8 == 0))
      goto LAB_06db8c68;
      uVar5 = FUN_06f7465c(*(undefined8 *)(lVar8 + 0x30),*unaff_x22,*(undefined8 *)(lVar8 + 0x28),0)
      ;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
      }
      lVar8 = FUN_03c8fd28(uVar5,*(undefined8 *)PTR_DAT_08e80318,*(undefined8 *)PTR_DAT_08e904c0);
      if (unaff_x24 == (long *)0x0) goto LAB_06db8c68;
      if ((lVar8 != 0) &&
         (lVar3 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0)) {
        uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar5,0);
      }
      if (*(uint *)(unaff_x24 + 3) <= unaff_x26) goto LAB_06db8c6c;
      plVar7 = unaff_x24 + uVar6 + 5;
      *plVar7 = lVar8;
      thunk_FUN_03d233cc(plVar7,lVar8);
      if (*(uint *)(unaff_x24 + 3) <= unaff_x26) goto LAB_06db8c6c;
      uVar4 = FUN_07119344(*plVar7,0,0);
      uVar6 = unaff_x26;
    } while ((uVar4 & 1) == 0);
    plVar7 = (long *)thunk_FUN_03d12a58();
    if (plVar7 == (long *)0x0) {
LAB_06db8c68:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_x28 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    param_1 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,uVar5,0);
  } while( true );
}


