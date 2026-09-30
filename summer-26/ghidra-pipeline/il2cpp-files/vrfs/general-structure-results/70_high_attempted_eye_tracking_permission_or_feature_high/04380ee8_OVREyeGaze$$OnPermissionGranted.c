/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 04380ee8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVREyeGaze__OnPermissionGranted(ulong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 & 1) == 0) {
    return 0xffffffff;
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar4 + 0x30);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + 0xa0) + 8);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_015c2790(lVar3);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar3 + 0x40)) {
      puVar1 = (undefined4 *)thunk_FUN_015d06c4();
                    /* WARNING: Could not recover jumptable at 0x04380f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


