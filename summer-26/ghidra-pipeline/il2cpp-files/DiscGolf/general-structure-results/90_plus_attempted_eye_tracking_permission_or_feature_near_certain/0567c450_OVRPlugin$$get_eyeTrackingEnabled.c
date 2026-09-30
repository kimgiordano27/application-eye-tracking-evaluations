/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 0567c450
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x19 + 0x20);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0567c508;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02dd004c(plVar6,*(long *)
                                System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo
                        ,0);
LAB_0567c508:
  uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  *(undefined4 *)(unaff_x19 + 0x14) = uVar1;
  return;
}


