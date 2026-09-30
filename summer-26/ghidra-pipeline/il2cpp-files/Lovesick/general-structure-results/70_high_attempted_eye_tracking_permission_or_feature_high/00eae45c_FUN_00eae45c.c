/*
FUNCTION_NAME: FUN_00eae45c
ENTRY_POINT: 00eae45c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_00eae45c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  float local_24;
  
  if ((DAT_0377511b & 1) == 0) {
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    DAT_0377511b = 1;
  }
  lVar3 = FUN_0268fd10(param_1,0);
  puVar1 = OVREyeGaze_TypeInfo;
  if (lVar3 != 0) {
    iVar4 = 0;
    while( true ) {
      iVar2 = FUN_026a103c(lVar3,0);
      if (iVar2 <= iVar4) {
        return;
      }
      lVar3 = FUN_0268fd10(param_1,0);
      if (((lVar3 == 0) || (lVar3 = FUN_026a145c(lVar3,iVar4,0), lVar3 == 0)) ||
         (lVar3 = FUN_0268fd4c(lVar3,0), lVar3 == 0)) break;
      lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar3,0);
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (FUN_0132138c(*(long *)(param_1 + 0x18),iVar4,&local_24,*(undefined8 *)puVar1), lVar3 == 0)
         ) break;
      FUN_0269f968(0,local_24 + *(float *)(param_1 + 0x20),0,lVar3,0);
      iVar4 = iVar4 + 1;
      lVar3 = FUN_0268fd10(param_1,0);
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


