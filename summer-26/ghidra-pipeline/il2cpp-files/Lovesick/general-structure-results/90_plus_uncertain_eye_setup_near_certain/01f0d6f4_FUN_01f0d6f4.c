/*
FUNCTION_NAME: FUN_01f0d6f4
ENTRY_POINT: 01f0d6f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_10;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01f0d6f4(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* try { // try from 01f0d704 to 0200d71f has its CatchHandler @ 01f0d728 */
                    /* try { // try from 01f0d720 to 0200d73f has its CatchHandler @ 01f0d528 */
  if ((DAT_037801a9 & 1) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01f0d5f8 with catch @ 01f0d728
                       catch(type#1 @ 03274860) { ... } // from try @ 01f0d704 with catch @ 01f0d728
                        */
    thunk_FUN_00d48444(UnityEngine_ProBuilder_Poly2Tri_DTSweepPointComparator_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
                    /* try { // try from 01f0d740 to 0200d743 has its CatchHandler @ 01f0d7b8 */
    thunk_FUN_00d48444(Method_UnityEngine_XR_InputFeatureUsage<float>__ctor__);
    thunk_FUN_00d48444(Method_Remote_ChannelUp__);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<__Il2CppFullySharedGenericType>_GetRegisteredItems__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddq_f64__);
                    /* try { // try from 01f0d77c to 0200d7a3 has its CatchHandler @ 01f0d7c0 */
    thunk_FUN_00d48444(StringLiteral_12712);
    DAT_037801a9 = 1;
  }
  puVar1 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_01f0d9a4;
                    /* try { // try from 01f0d7a4 to 0200d7af has its CatchHandler @ 01f0d528 */
  if (*(int *)(lVar6 + 0x1c) == 0x2a) {
    uVar4 = **(undefined8 **)
              (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
              + 0xb8);
    FUN_01f0df58(lVar6);
    uVar5 = uVar4;
  }
  else {
    if (*(int *)(lVar6 + 0x1c) != 0x6e) {
      FUN_00ac2be8(lVar6);
      uVar4 = *(undefined8 *)(lVar6 + 0x10);
      uVar5 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_List_Enumerator<RaycastResult>_get_Current__
                                );
      uVar5 = FUN_01f77b84(uVar5,uVar4,0);
      uVar4 = thunk_FUN_00d48444(Oculus_Interaction_Input_Compatibility_OVR_HandJointUtils_TypeInfo)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar5,uVar4);
    }
                    /* try { // try from 01f0d7b0 to 0200d7b7 has its CatchHandler @ 01f0d7c0 */
    if (*(char *)(lVar6 + 0x48) != '\0') {
                    /* catch() { ... } // from try @ 01f0d740 with catch @ 01f0d7b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f0d77c with catch @ 01f0d7c0
                       catch(type#2 @ 00000000) { ... } // from try @ 01f0d7b0 with catch @ 01f0d7c0
                        */
      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar3 = FUN_01f0cd2c(lVar6);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_01f0d9a4;
        uVar4 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
        uVar3 = thunk_FUN_015fe514(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                   *(undefined8 *)Method_Remote_ChannelUp__,0);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_01f0d9a4;
          uVar3 = thunk_FUN_015fe514(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                     *(undefined8 *)
                                      Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__
                                     ,0);
          if ((uVar3 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_01f0d9a4;
            uVar3 = thunk_FUN_015fe514(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                       *(undefined8 *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<__Il2CppFullySharedGenericType>_GetRegisteredItems__
                                       ,0);
            if ((uVar3 & 1) == 0) {
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_01f0d9a4;
              uVar3 = thunk_FUN_015fe514(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                         *(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vaddq_f64__,0);
              param_4 = 7;
              if ((uVar3 & 1) == 0) {
                param_4 = 0;
              }
            }
            else {
              param_4 = 9;
            }
          }
          else {
            param_4 = 4;
          }
        }
        else {
          param_4 = 8;
        }
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_01f0d9a4;
        FUN_01f0df58();
        FUN_01f0d41c(param_1,0x28);
        uVar5 = uVar4;
        if (param_4 == 7) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_01f0d9a4;
          if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) != 0x29) {
            FUN_01f0d9e8(param_1,0x73);
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_01f0d9a4;
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
            FUN_01f0df58();
          }
        }
        FUN_01f0d41c(param_1,0x29);
        goto LAB_01f0d958;
      }
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_01f0d9a4;
    }
    puVar2 = StringLiteral_12712;
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x30);
    FUN_01f0df58(lVar6);
    uVar3 = thunk_FUN_015fe514(uVar5,*(undefined8 *)puVar2,0);
    if ((uVar3 & 1) != 0) {
      uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
  }
LAB_01f0d958:
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                              UnityEngine_ProBuilder_Poly2Tri_DTSweepPointComparator_TypeInfo);
  if (lVar6 != 0) {
    FUN_01f0ba94(lVar6,param_3,param_2,uVar4,uVar5,param_4);
    return lVar6;
  }
LAB_01f0d9a4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


