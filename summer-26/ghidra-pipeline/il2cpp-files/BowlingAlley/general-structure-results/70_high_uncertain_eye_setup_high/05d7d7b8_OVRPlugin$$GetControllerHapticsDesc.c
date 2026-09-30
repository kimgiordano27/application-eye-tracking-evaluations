/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsDesc
ENTRY_POINT: 05d7d7b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerHapticsDesc(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  uint uVar5;
  long unaff_x20;
  
  uVar2 = (**(code **)(param_1 + 0x138))();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  thunk_FUN_0333a630((undefined8 *)(unaff_x20 + 0x20),uVar2);
  if (*(char *)(unaff_x19 + 0x54) != '\0') {
    lVar3 = FUN_06be6b40();
    if ((lVar3 == 0) || (lVar3 = FUN_039f0944(lVar3,*(undefined8 *)PTR_DAT_072b1530), lVar3 == 0)) {
LAB_05d7d85c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        lVar4 = *(long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_05d7d85c;
        FUN_06bc1cdc(lVar4,0,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  return;
}


