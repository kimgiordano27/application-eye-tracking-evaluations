/*
FUNCTION_NAME: FUN_026083d0
ENTRY_POINT: 026083d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_026083d0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_037833c5 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
    DAT_037833c5 = 1;
  }
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (*(long *)(param_5 + 0x28) == 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    uVar2 = thunk_FUN_00d6225c(uVar3,*(undefined8 *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                              );
    *(undefined8 *)(param_5 + 0x28) = uVar2;
                    /* try { // try from 02608428 to 0270844f has its CatchHandler @ 02608518 */
    thunk_FUN_00d6225c(uVar3,*(undefined8 *)puVar1);
  }
  if (*(long *)(param_5 + 0x18) != 0) {
    lVar4 = *(long *)(param_5 + 0x40);
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar2 = FUN_0269f578(*(long *)(param_5 + 0x18),0);
      if ((*(long *)(param_5 + 0x18) != 0) &&
         (uVar3 = param_2, uVar6 = param_3, uVar5 = FUN_0269f810(*(long *)(param_5 + 0x18),0),
         lVar4 != 0)) {
                    /* try { // try from 026084f8 to 027084fb has its CatchHandler @ 02608510 */
                    /* try { // try from 026084fc to 027084ff has its CatchHandler @ 02608298 */
        FUN_026a01f4(uVar2,param_2,param_3,uVar5,uVar3,uVar6,param_4,lVar4,0);
        return;
      }
    }
    else {
      FUN_0269f6b0();
      if (lVar4 != 0) {
                    /* try { // try from 02608454 to 02708457 has its CatchHandler @ 02608514 */
                    /* try { // try from 02608458 to 027084f7 has its CatchHandler @ 02608298 */
        FUN_0269f750(lVar4,0);
        if (*(long *)(param_5 + 0x18) != 0) {
          lVar4 = *(long *)(param_5 + 0x40);
          FUN_0269f910(*(long *)(param_5 + 0x18),0);
          if (lVar4 != 0) {
            FUN_0269f994(lVar4,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02608500 to 02708503 has its CatchHandler @ 0260850c */
  FUN_00da518c();
}


