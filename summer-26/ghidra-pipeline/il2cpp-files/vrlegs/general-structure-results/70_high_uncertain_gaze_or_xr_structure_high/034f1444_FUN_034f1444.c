/*
FUNCTION_NAME: FUN_034f1444
ENTRY_POINT: 034f1444
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x034f1548) */

void FUN_034f1444(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_38;
  char local_2c [4];
  undefined8 local_28;
  
  if ((DAT_0412dc9a & 1) == 0) {
    FUN_01ab69ac(
                UnityEngine_ResourceManagement_Diagnostics_DiagnosticEventCollectorSingleton_<>c_TypeInfo
                );
    FUN_01ab69ac(Animancer_DirectionalAnimationSet_Direction_TypeInfo);
    FUN_01ab69ac(Animancer_DirectionalAnimationSet8_Direction_TypeInfo);
    DAT_0412dc9a = 1;
  }
  local_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  local_2c[0] = '\0';
  FUN_027e0bd8(uVar2,local_2c,0);
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  local_28 = param_2;
  uVar1 = FUN_0219f8b8(*(long *)(param_1 + 0x50),&local_28,&local_38,
                       *(undefined8 *)Animancer_DirectionalAnimationSet_Direction_TypeInfo);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02225b40(*(long *)(param_1 + 0x48),local_38,
                 *(undefined8 *)Animancer_DirectionalAnimationSet8_Direction_TypeInfo);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_28 = *(undefined8 *)(local_38 + 0x20);
    FUN_0219eaf8(*(long *)(param_1 + 0x50),&local_28,
                 *(undefined8 *)
                  UnityEngine_ResourceManagement_Diagnostics_DiagnosticEventCollectorSingleton_<>c_TypeInfo
                );
  }
  if (local_2c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
  }
  return;
}


