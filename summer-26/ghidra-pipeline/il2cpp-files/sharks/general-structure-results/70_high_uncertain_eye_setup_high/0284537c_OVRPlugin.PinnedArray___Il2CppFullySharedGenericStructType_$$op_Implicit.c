/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 0284537c
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit
               (undefined8 param_1,int param_2,long param_3,undefined8 param_4,int param_5,
               int param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 0284537c to 0294548f has its CatchHandler @ 0284537c
                       catch() { ... } // from try @ 0284537c with catch @ 0284537c
                       catch() { ... } // from try @ 02845568 with catch @ 0284537c
                       catch() { ... } // from try @ 02845624 with catch @ 0284537c
                       catch() { ... } // from try @ 0284562c with catch @ 0284537c
                       catch() { ... } // from try @ 028456d0 with catch @ 0284537c */
  param_10 = FUN_02afb1c0(param_1,3,0);
  uVar2 = FUN_02afb0d0(&param_10,0);
  if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4(*(long *)(param_7 + 0x20));
  }
  lVar3 = FUN_02c19ea8(uVar2,0);
  lVar4 = *(long *)(param_7 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0185daa4(lVar4);
    lVar4 = *(long *)(param_7 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_0185daa4(lVar4);
  }
  FUN_033b7a9c(param_3 + param_5 * 0x28,lVar3 + param_2 * 0x28,(long)(param_6 * 0x28),0);
  FUN_02afb1d4(&param_10,0);
  return;
}


