/*
FUNCTION_NAME: FUN_054976f0
ENTRY_POINT: 054976f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_054976f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  puVar1 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var;
  if ((DAT_06b7ea13 & 1) == 0) {
    FUN_02d6084c(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    DAT_06b7ea13 = 1;
  }
  FUN_0504920c(param_1,0);
  lVar2 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0504920c(lVar2,0);
  plVar4 = (long *)(param_1 + 0x48);
  *plVar4 = lVar2;
  thunk_FUN_02dd37b4(plVar4,lVar2);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x28) = 0;
    puVar1 = PTR_DAT_0675e258;
    FUN_054977bc(lVar2,**(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8));
    if (*plVar4 != 0) {
      *(undefined8 *)(*plVar4 + 0x18) = **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8);
      thunk_FUN_02dd37b4();
      if (*plVar4 != 0) {
                    /* try { // try from 054977a0 to 05597877 has its CatchHandler @ 054977a0
                       catch() { ... } // from try @ 054977a0 with catch @ 054977a0
                       catch() { ... } // from try @ 054979f8 with catch @ 054977a0
                       catch() { ... } // from try @ 05497a90 with catch @ 054977a0
                       catch() { ... } // from try @ 05497b20 with catch @ 054977a0 */
        puVar3 = (undefined8 *)(*plVar4 + 0x20);
        *puVar3 = 0;
        thunk_FUN_02dd37b4(puVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


