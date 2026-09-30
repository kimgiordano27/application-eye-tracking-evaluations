/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 02bff5ec
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__remove_VrFocusAcquired(ulong param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f2c78);
    *(undefined1 *)(unaff_x21 + 0xdb1) = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x398))(param_2,*(undefined8 *)(*param_2 + 0x3a0));
    if (unaff_x20 != (long *)0x0) {
      lVar5 = (**(code **)(*unaff_x20 + 0x398))();
      puVar1 = PTR_DAT_037f2c78;
      if ((lVar4 != 0) && (lVar5 != 0)) {
        uVar10 = (uint)*(undefined8 *)(lVar4 + 0x18);
        if (uVar10 == *(uint *)(lVar5 + 0x18)) {
          if (0 < (int)uVar10) {
            if (uVar10 != 0) {
              lVar9 = 0;
              uVar11 = 1;
              do {
                plVar6 = *(long **)(lVar4 + lVar9 * 8 + 0x20);
                if (plVar6 == (long *)0x0) goto LAB_02bff734;
                uVar7 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                if (*(uint *)(lVar5 + 0x18) <= uVar11 - 1) break;
                plVar6 = *(long **)(lVar5 + lVar9 * 8 + 0x20);
                if (plVar6 == (long *)0x0) goto LAB_02bff734;
                uVar8 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)puVar1);
                }
                uVar3 = FUN_02be74a8(uVar7,uVar8,0);
                if (((uVar3 & 1) != 0) || (uVar10 == uVar11)) {
                  uVar3 = uVar3 ^ 1;
                  goto LAB_02bff71c;
                }
                lVar9 = (long)(int)uVar11;
                bVar2 = uVar11 < *(uint *)(lVar4 + 0x18);
                uVar11 = uVar11 + 1;
              } while (bVar2);
            }
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
LAB_02bff71c:
        return uVar3 & 1;
      }
    }
  }
LAB_02bff734:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


