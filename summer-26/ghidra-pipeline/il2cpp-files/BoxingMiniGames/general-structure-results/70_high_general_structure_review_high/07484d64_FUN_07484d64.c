/*
FUNCTION_NAME: FUN_07484d64
ENTRY_POINT: 07484d64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


undefined8 FUN_07484d64(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  int extraout_var;
  undefined8 uVar5;
  long lVar6;
  int local_28;
  int local_24;
  
                    /* try { // try from 07484d64 to 07584d6b has its CatchHandler @ 07484e54 */
  puVar2 = PTR_DAT_079fd2e0;
  if ((DAT_07ef3ed5 & 1) == 0) {
                    /* try { // try from 07484d8c to 07584d97 has its CatchHandler @ 07484e4c */
    FUN_03642964(PTR_DAT_079f4540);
                    /* try { // try from 07484d9c to 07584dab has its CatchHandler @ 07484e50 */
    FUN_03642964(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_Init__);
                    /* try { // try from 07484dac to 07584e23 has its CatchHandler @ 07484804 */
    FUN_03642964(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__)
    ;
    FUN_03642964(PTR_DAT_079fd2e0);
    FUN_03642964(Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__);
    FUN_03642964(Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__);
    DAT_07ef3ed5 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_079f4540;
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *(long *)puVar2;
    if (param_2 < *(int *)(lVar6 + 0x18)) {
                    /* try { // try from 07484e24 to 07584e27 has its CatchHandler @ 07484ec8 */
                    /* try { // try from 07484e28 to 07584e2b has its CatchHandler @ 07484ec4 */
      if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 07484e2c to 07584e2f has its CatchHandler @ 07484eb8 */
        thunk_FUN_036a1978();
      }
                    /* try { // try from 07484e30 to 07584e33 has its CatchHandler @ 07484eb4 */
                    /* try { // try from 07484e34 to 07584e37 has its CatchHandler @ 07484eb0 */
                    /* try { // try from 07484e38 to 07584e3b has its CatchHandler @ 07484e48 */
                    /* try { // try from 07484e3c to 07584e3f has its CatchHandler @ 07484e44 */
                    /* try { // try from 07484e40 to 07584e6f has its CatchHandler @ 07484804 */
                    /* catch() { ... } // from try @ 07484e3c with catch @ 07484e44 */
      uVar4 = FUN_04769984(lVar6,param_2,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__
                          );
                    /* catch() { ... } // from try @ 07484e38 with catch @ 07484e48 */
                    /* catch() { ... } // from try @ 07484d8c with catch @ 07484e4c */
                    /* catch() { ... } // from try @ 07484d9c with catch @ 07484e50 */
      if (0 < extraout_var) {
        return uVar4;
      }
                    /* catch() { ... } // from try @ 07484d64 with catch @ 07484e54 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
                    /* try { // try from 07484e70 to 07584e73 has its CatchHandler @ 07484e9c */
                    /* try { // try from 07484e74 to 07584e9f has its CatchHandler @ 07484804 */
      local_28 = param_2;
      uVar4 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&local_28);
      uVar5 = *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__;
      goto LAB_07484ebc;
    }
  }
  puVar2 = Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__;
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07484e70 with catch @ 07484e9c */
    thunk_FUN_036a1978();
  }
                    /* try { // try from 07484ea0 to 07584ea7 has its CatchHandler @ 07484f6c */
                    /* try { // try from 07484ea8 to 07584ee7 has its CatchHandler @ 07484804 */
                    /* catch() { ... } // from try @ 07484b48 with catch @ 07484eac */
                    /* catch() { ... } // from try @ 07484e34 with catch @ 07484eb0 */
  local_24 = param_2;
                    /* catch() { ... } // from try @ 07484e30 with catch @ 07484eb4 */
  uVar4 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&local_24);
                    /* catch() { ... } // from try @ 07484e2c with catch @ 07484eb8 */
  uVar5 = *(undefined8 *)puVar2;
LAB_07484ebc:
                    /* catch() { ... } // from try @ 07484b04 with catch @ 07484ebc */
                    /* catch() { ... } // from try @ 07484af4 with catch @ 07484ec0 */
                    /* catch() { ... } // from try @ 07484e28 with catch @ 07484ec4 */
                    /* catch() { ... } // from try @ 07484e24 with catch @ 07484ec8 */
  uVar4 = FUN_05c8e390(uVar5,uVar4,0);
                    /* catch() { ... } // from try @ 07484ad8 with catch @ 07484ecc */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)puVar1);
  }
                    /* try { // try from 07484ee8 to 07584eeb has its CatchHandler @ 07484f08 */
                    /* try { // try from 07484eec to 07584f0b has its CatchHandler @ 07484804 */
  FUN_0717994c(uVar4,0);
  return 0;
}


