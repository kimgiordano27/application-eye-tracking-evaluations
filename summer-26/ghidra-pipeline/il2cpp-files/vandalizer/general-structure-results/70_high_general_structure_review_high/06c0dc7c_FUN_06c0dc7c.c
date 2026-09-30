/*
FUNCTION_NAME: FUN_06c0dc7c
ENTRY_POINT: 06c0dc7c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_4
*/


void FUN_06c0dc7c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_075d6490;
  if ((bRam0000000007a50110 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d6490);
    FUN_031f20f4(
                System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Concurrent_ConcurrentDictionary<Type,_TypeUtility_ITypeConstructor>_TypeInfo
                );
    bRam0000000007a50110 = 1;
  }
  puVar2 = 
  System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar3 = Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<Vector4>
                    (uVar3,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                     *(undefined8 *)puVar2);
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 200) = uVar3;
    thunk_FUN_0329bf60();
                    /* try { // try from 06c0dd18 to 06d0de03 has its CatchHandler @ 06c0dd18
                       catch() { ... } // from try @ 06c0dd18 with catch @ 06c0dd18
                       catch() { ... } // from try @ 06c0e1a8 with catch @ 06c0dd18
                       catch() { ... } // from try @ 06c0e278 with catch @ 06c0dd18
                       catch() { ... } // from try @ 06c0e354 with catch @ 06c0dd18
                       catch() { ... } // from try @ 06c0e384 with catch @ 06c0dd18
                       catch() { ... } // from try @ 06c0e3fc with catch @ 06c0dd18 */
    FUN_06c0c9b4(param_2,*(undefined8 *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


