/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 0768f9b8
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Start(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_0406ae20();
LAB_0768f9dc:
      (*(code *)*puVar1)();
      uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar2 = FUN_0858df34(uVar3,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar2 = FUN_0858816c(uVar3,0,0);
        if ((uVar2 & 1) != 0) {
          lVar4 = *(long *)(unaff_x19 + 0x48);
          uVar3 = FUN_0768f300();
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          FUN_054b4d04(lVar4,uVar3,*(undefined8 *)PTR_DAT_08fab608);
        }
        *(undefined8 *)(unaff_x19 + 0x48) = 0;
        FUN_0768fa94();
        return;
      }
      return;
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_0768f9dc;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


