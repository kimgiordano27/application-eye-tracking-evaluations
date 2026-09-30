/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserPresent
ENTRY_POINT: 01f967a4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetUserPresent(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  
  plVar1 = (long *)FUN_01230af8(**(undefined8 **)(param_1 + 0xbd8),*(undefined4 *)(unaff_x20 + 0x18)
                               );
  uVar11 = *(uint *)(unaff_x20 + 0x18);
  if (0 < (int)uVar11) {
    uVar8 = 0;
    uVar9 = 0;
    do {
      if (uVar11 <= uVar9) goto LAB_01f96964;
      plVar10 = (long *)(unaff_x20 + (long)(int)uVar9 * 8 + 0x20);
      plVar2 = (long *)*plVar10;
      if ((plVar2 == (long *)0x0) ||
         (lVar3 = (**(code **)(*plVar2 + 0x378))(plVar2,*(undefined8 *)(*plVar2 + 0x380)),
         lVar3 == 0)) goto LAB_01f96960;
      if (*(long *)(lVar3 + 0x18) != 0) {
        if (unaff_x19 == 0) goto LAB_01f96960;
        iVar7 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        if (iVar7 < 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            if (*(uint *)(lVar3 + 0x18) <= uVar11) goto LAB_01f96964;
            plVar2 = *(long **)(lVar3 + (long)(int)uVar11 * 8 + 0x20);
            if (plVar2 == (long *)0x0) goto LAB_01f96960;
            plVar2 = (long *)(**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0))
            ;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar11) goto LAB_01f96964;
            if (plVar2 == (long *)0x0) goto LAB_01f96960;
            uVar4 = (**(code **)(*plVar2 + 0x8b8))
                              (plVar2,*(undefined8 *)(unaff_x19 + (long)(int)uVar11 * 8 + 0x20),
                               *(undefined8 *)(*plVar2 + 0x8c0));
            if ((uVar4 & 1) == 0) {
              iVar7 = (int)*(undefined8 *)(unaff_x19 + 0x18);
              break;
            }
            uVar11 = uVar11 + 1;
            iVar7 = (int)*(undefined8 *)(unaff_x19 + 0x18);
          } while ((int)uVar11 < iVar7);
        }
        if (iVar7 <= (int)uVar11) {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_01f96964;
          if (plVar1 == (long *)0x0) goto LAB_01f96960;
          lVar3 = *plVar10;
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_0124baac(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar6,0);
          }
          if (*(uint *)(plVar1 + 3) <= uVar8) goto LAB_01f96964;
          plVar1[(long)(int)uVar8 + 4] = lVar3;
          thunk_FUN_01286abc(plVar1 + (long)(int)uVar8 + 4,lVar3);
          uVar8 = uVar8 + 1;
        }
      }
      uVar11 = *(uint *)(unaff_x20 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar11);
    if (uVar8 != 0) {
      if (uVar8 != 1) {
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar3 = FUN_01f969bc(plVar1,uVar8);
        return lVar3;
      }
      if (plVar1 == (long *)0x0) {
LAB_01f96960:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if ((int)plVar1[3] != 0) {
        return plVar1[4];
      }
LAB_01f96964:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
  }
  return 0;
}


