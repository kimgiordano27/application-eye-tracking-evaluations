/*
FUNCTION_NAME: FUN_0102edb0
ENTRY_POINT: 0102edb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0102edb0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long local_28;
  
  if ((DAT_03775f1a & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Spectrum_Point>_MoveNext__)
    ;
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_84_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RenderChain_RenderNodeData>_Clear__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03775f1a = 1;
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  if (param_2 == 0) goto LAB_0102eff8;
  uVar2 = FUN_026f2aa0(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
                    /* try { // try from 0102ee4c to 0112ee53 has its CatchHandler @ 0102f0f0 */
  uVar3 = FUN_0268b4e0(uVar2,0,0);
                    /* try { // try from 0102ee5c to 0112ee63 has its CatchHandler @ 0102f0ec */
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = FUN_026f2bb4(param_2,0);
  if (lVar4 == 0) goto LAB_0102eff8;
                    /* try { // try from 0102ee78 to 0112ee83 has its CatchHandler @ 0102f06c */
  FUN_010e58e8(lVar4,&local_28,
               *(undefined8 *)
                Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
              );
  lVar4 = local_28;
                    /* try { // try from 0102ee90 to 0112ee97 has its CatchHandler @ 0102f070 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 0102ee98 to 0112eea3 has its CatchHandler @ 0102f0e4 */
  uVar3 = FUN_02681b9c(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_026f2bb4(param_2,0);
    if (lVar4 == 0) goto LAB_0102eff8;
    FUN_010e58e8(lVar4,&local_28,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<RenderChain_RenderNodeData>_Clear__);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_02681b9c(local_28,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    goto LAB_0102efe0;
  }
                    /* try { // try from 0102eeb0 to 0112eebb has its CatchHandler @ 0102f0d4 */
  lVar4 = FUN_026f2aa0(param_2,0);
  if (lVar4 == 0) goto LAB_0102eff8;
                    /* try { // try from 0102eec0 to 0112eedf has its CatchHandler @ 0102f0f4 */
  FUN_010c2e94(lVar4,&local_28,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Spectrum_Point>_MoveNext__);
  lVar4 = local_28;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 0102eeec to 0112eef7 has its CatchHandler @ 0102f0e0 */
  uVar3 = FUN_0268b5e4(lVar4,0);
  if ((uVar3 & 1) == 0) {
LAB_0102ef00:
                    /* try { // try from 0102ef08 to 0112ef0f has its CatchHandler @ 0102f0e8 */
    uVar2 = FUN_026f2aa0(param_2,0);
                    /* try { // try from 0102ef14 to 0112ef1b has its CatchHandler @ 0102f0dc */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 0102ef20 to 0112ef2b has its CatchHandler @ 0102f0d8 */
      thunk_FUN_00d32864(*(long *)puVar1);
    }
                    /* try { // try from 0102ef2c to 0112f097 has its CatchHandler @ 0102eb18 */
    uVar3 = FUN_0268b5e4(uVar2,0);
    if ((uVar3 & 1) == 0) goto LAB_0102efe0;
    lVar4 = FUN_026f2aa0(param_2,0);
    if (lVar4 == 0) goto LAB_0102eff8;
    FUN_010c2c5c(lVar4,&local_28,*(undefined8 *)OVRPlugin_OVRP_1_84_0_TypeInfo);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0268b5e4(local_28,0);
    if ((uVar3 & 1) == 0) goto LAB_0102efe0;
  }
  else {
    if (lVar4 == 0) goto LAB_0102eff8;
    if (*(char *)(lVar4 + 0xfd) == '\0') goto LAB_0102ef00;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_0102eff8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x30) = 0;
LAB_0102efe0:
  FUN_0102effc(param_1);
  return;
}


