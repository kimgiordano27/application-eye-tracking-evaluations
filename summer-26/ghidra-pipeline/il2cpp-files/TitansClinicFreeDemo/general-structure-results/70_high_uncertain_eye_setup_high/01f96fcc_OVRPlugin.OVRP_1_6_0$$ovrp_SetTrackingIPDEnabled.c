/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 01f96fcc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(void)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *unaff_x20;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  if (unaff_x19 != (long *)0x0) {
    lVar4 = (**(code **)(*unaff_x19 + 0x378))();
    if (unaff_x20 != (long *)0x0) {
      lVar5 = (**(code **)(*unaff_x20 + 0x378))();
      puVar1 = PTR_DAT_027b32e0;
      if ((lVar4 != 0) && (lVar5 != 0)) {
        uVar10 = (uint)*(undefined8 *)(lVar4 + 0x18);
        if (uVar10 == *(uint *)(lVar5 + 0x18)) {
          if (0 < (int)uVar10) {
            if (uVar10 != 0) {
              lVar9 = 0;
              uVar11 = 1;
              do {
                plVar6 = *(long **)(lVar4 + lVar9 * 8 + 0x20);
                if (plVar6 == (long *)0x0) goto LAB_01f970f8;
                uVar7 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                if (*(uint *)(lVar5 + 0x18) <= uVar11 - 1) break;
                plVar6 = *(long **)(lVar5 + lVar9 * 8 + 0x20);
                if (plVar6 == (long *)0x0) goto LAB_01f970f8;
                uVar8 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01220628(*(long *)puVar1);
                }
                uVar3 = FUN_01f801dc(uVar7,uVar8,0);
                if (((uVar3 & 1) != 0) || (uVar10 == uVar11)) {
                  uVar3 = uVar3 ^ 1;
                  goto LAB_01f970e0;
                }
                lVar9 = (long)(int)uVar11;
                bVar2 = uVar11 < *(uint *)(lVar4 + 0x18);
                uVar11 = uVar11 + 1;
              } while (bVar2);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
LAB_01f970e0:
        return uVar3 & 1;
      }
    }
  }
LAB_01f970f8:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


