/*
FUNCTION_NAME: OVRPlugin$$GetActiveController
ENTRY_POINT: 01f806dc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetActiveController(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  do {
    lVar3 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x820));
    if ((lVar3 != 0) && (uVar2 = *(uint *)(lVar3 + 0x18), 0 < (int)uVar2)) {
      lVar6 = 0;
      lVar1 = lVar3 + 0x20;
      do {
        uVar5 = (uint)lVar6;
        if (uVar2 <= uVar5) {
LAB_01f807b8:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        lVar7 = *(long *)(lVar1 + lVar6 * 8);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if (lVar7 == unaff_x19) goto LAB_01f8079c;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_01f807b8;
        lVar7 = *(long *)(lVar1 + lVar6 * 8);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if (lVar7 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_01f807b8;
          if (*(long *)(lVar1 + lVar6 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          uVar4 = FUN_01f8067c();
          if ((uVar4 & 1) != 0) goto LAB_01f8079c;
        }
        uVar2 = *(uint *)(lVar3 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar2);
    }
    param_2 = (long *)(**(code **)(*unaff_x20 + 0x7f8))
                                (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x800));
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    unaff_x20 = param_2;
    if (param_2 == (long *)0x0) {
LAB_01f8079c:
      return unaff_x20 != (long *)0x0;
    }
    param_1 = *param_2;
    in_x9 = *(code **)(param_1 + 0x818);
  } while( true );
}


