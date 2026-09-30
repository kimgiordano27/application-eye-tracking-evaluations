/*
FUNCTION_NAME: Nakama.UnityWebRequestAdapter.<SendRequest>d__13$$System.IDisposable.Dispose
ENTRY_POINT: 08d5c26c
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined4
Nakama_UnityWebRequestAdapter_<SendRequest>d__13__System_IDisposable_Dispose(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong in_x9;
  undefined4 unaff_w20;
  long *unaff_x21;
  
  if (param_1 < in_x9) {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    return unaff_w20;
  }
  thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
  uVar1 = thunk_FUN_04983f60();
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac201c0);
  uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac66c70);
  FUN_08cc1128(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac66c78);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar1,uVar2);
}


