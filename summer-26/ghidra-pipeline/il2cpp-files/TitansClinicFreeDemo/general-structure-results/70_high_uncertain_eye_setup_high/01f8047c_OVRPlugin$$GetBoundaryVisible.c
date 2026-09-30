/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryVisible
ENTRY_POINT: 01f8047c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__GetBoundaryVisible(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar5;
  uint uVar6;
  
  plVar2 = (long *)(**(code **)(param_1 + 0x308))(param_2,*(undefined8 *)(param_1 + 0x310));
  if (plVar2 != (long *)0x0) {
    uVar3 = FUN_01f80150();
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01f804b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x288))(plVar2);
      return uVar3;
    }
    uVar3 = (**(code **)(*unaff_x19 + 0x278))();
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_01f805b8();
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_01f8067c();
        return uVar3;
      }
      uVar3 = (**(code **)(*unaff_x20 + 0x388))();
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        lVar4 = (**(code **)(*unaff_x20 + 0x478))();
        if (lVar4 == 0) goto LAB_01f805b0;
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = (uint)(0 < (int)uVar1);
        if (0 < (int)uVar1) {
          uVar6 = 0;
          uVar5 = (uint)(0 < (int)uVar1);
          do {
            if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_01230ca8();
            }
            plVar2 = *(long **)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
            if (plVar2 == (long *)0x0) goto LAB_01f805b0;
            uVar3 = (**(code **)(*plVar2 + 0x288))();
            if ((uVar3 & 1) == 0) break;
            uVar1 = *(uint *)(lVar4 + 0x18);
            uVar6 = uVar6 + 1;
            uVar5 = (uint)((int)uVar6 < (int)uVar1);
          } while ((int)uVar6 < (int)uVar1);
        }
        uVar5 = uVar5 ^ 1;
      }
    }
    else {
      uVar5 = 1;
    }
    return (ulong)uVar5;
  }
LAB_01f805b0:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


