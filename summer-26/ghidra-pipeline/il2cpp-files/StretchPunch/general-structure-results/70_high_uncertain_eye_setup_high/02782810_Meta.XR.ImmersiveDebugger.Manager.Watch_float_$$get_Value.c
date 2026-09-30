/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$get_Value
ENTRY_POINT: 02782810
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>__get_Value
               (long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3);
  }
  if (((int)param_3 < 0) || (*(int *)(param_2 + 0x18) < (int)param_3)) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_02a7f9e0(*(long *)(param_1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(param_2 + 0x18) - param_3) < iVar3) {
      FUN_033b2d60(5,0);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x20);
      if (0 < (int)uVar2) {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02782908;
        uVar5 = 0;
        puVar6 = (undefined8 *)(lVar4 + 0x38);
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_027828f0:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < *(int *)(puVar6 + -3)) {
            if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_027828f0;
            lVar1 = (long)(int)param_3;
            param_3 = param_3 + 1;
            *(undefined8 *)(param_2 + lVar1 * 8 + 0x20) = *puVar6;
            thunk_FUN_01e10808();
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 4;
        } while (uVar2 != uVar5);
      }
      return;
    }
  }
LAB_02782908:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


