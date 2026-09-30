/*
FUNCTION_NAME: OVRManager$$remove_HMDUnmounted
ENTRY_POINT: 02bff434
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__remove_HMDUnmounted(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar4 = (**(code **)(param_1 + 0x398))(param_2,*(undefined8 *)(param_1 + 0x3a0));
  puVar1 = PTR_DAT_037f2c78;
  if ((unaff_x19 == 0) || (lVar4 == 0)) {
LAB_02bff538:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
  if (uVar9 == *(uint *)(lVar4 + 0x18)) {
    if (0 < (int)uVar9) {
      if (uVar9 != 0) {
        lVar8 = 0;
        uVar10 = 1;
        do {
          plVar5 = *(long **)(unaff_x19 + lVar8 * 8 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_02bff538;
          uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          if (*(uint *)(lVar4 + 0x18) <= uVar10 - 1) break;
          plVar5 = *(long **)(lVar4 + lVar8 * 8 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_02bff538;
          uVar7 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc(*(long *)puVar1);
          }
          uVar3 = FUN_02be74a8(uVar6,uVar7,0);
          if (((uVar3 & 1) != 0) || (uVar9 == uVar10)) {
            uVar3 = uVar3 ^ 1;
            goto FUN_02bff520;
          }
          lVar8 = (long)(int)uVar10;
          bVar2 = uVar10 < *(uint *)(unaff_x19 + 0x18);
          uVar10 = uVar10 + 1;
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
FUN_02bff520:
  return uVar3 & 1;
}


