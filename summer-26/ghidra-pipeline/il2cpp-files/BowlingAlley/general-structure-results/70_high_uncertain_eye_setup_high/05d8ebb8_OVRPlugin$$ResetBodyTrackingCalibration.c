/*
FUNCTION_NAME: OVRPlugin$$ResetBodyTrackingCalibration
ENTRY_POINT: 05d8ebb8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ResetBodyTrackingCalibration(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  do {
    thunk_FUN_032cd7c0(param_1);
    do {
      uVar1 = FUN_06c2346c(unaff_s13 * (float)(int)unaff_w22 + unaff_s11,
                           unaff_s12 * (float)(int)unaff_w22 + unaff_s10,unaff_x21,0);
      if ((uVar1 & 1) != 0) {
        FUN_05d8e710();
        lVar2 = FUN_06ba66ec(0);
        if (lVar2 == 0) goto LAB_05d8ec58;
        if (*(uint *)(lVar2 + 0x18) <= unaff_w22) goto LAB_05d8ec5c;
        plVar3 = *(long **)(lVar2 + unaff_x25 * 8 + 0x20);
        if (plVar3 == (long *)0x0) goto LAB_05d8ec58;
        uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
        thunk_FUN_0333a630();
        *(undefined1 *)(unaff_x19 + 0x48) = unaff_w24;
        FUN_05d8e4c8();
        FUN_05d8e84c();
      }
      unaff_w22 = unaff_w22 + 1;
      lVar2 = FUN_06ba66ec(0);
      if (lVar2 == 0) {
LAB_05d8ec58:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(int *)(lVar2 + 0x18) <= (int)unaff_w22) {
        return;
      }
      lVar2 = FUN_06ba66ec(0);
      if (lVar2 == 0) goto LAB_05d8ec58;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
LAB_05d8ec5c:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      unaff_x25 = (long)(int)unaff_w22;
      plVar3 = *(long **)(lVar2 + unaff_x25 * 8 + 0x20);
      if (plVar3 == (long *)0x0) goto LAB_05d8ec58;
      unaff_x21 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      param_1 = *unaff_x23;
    } while (*(int *)(param_1 + 0xe0) != 0);
  } while( true );
}


