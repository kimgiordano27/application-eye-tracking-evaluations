/*
FUNCTION_NAME: FUN_00e63a14
ENTRY_POINT: 00e63a14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_00e63a14(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  puVar2 = Method_System_Collections_Generic_List<GlyphPairAdjustmentRecord>__ctor__;
                    /* try { // try from 00e63a24 to 00f63a2b has its CatchHandler @ 00e63a7c */
  if ((DAT_03774e38 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GlyphPairAdjustmentRecord>__ctor__);
    thunk_FUN_00d48444(Oculus_Platform_MessageWithChallengeEntryList_TypeInfo);
    thunk_FUN_00d48444(Method_Messenger<Note>_Broadcast__);
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPoolBase_TypeInfo
                      );
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e63a24 with catch @ 00e63a7c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e639fc with catch @ 00e63a80
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e639cc with catch @ 00e63a84
                        */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                      );
                    /* try { // try from 00e63a88 to 00f63a8f has its CatchHandler @ 00e63a98 */
                    /* try { // try from 00e63a90 to 00f63a9b has its CatchHandler @ 00e63994 */
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_IsMatch__);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e63a88 with catch @ 00e63a98
                        */
                    /* try { // try from 00e63a9c to 00f63ad7 has its CatchHandler @ 00e63a9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00e63a9c with catch @ 00e63a9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00e63c60 with catch @ 00e63a9c
                        */
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
    DAT_03774e38 = 1;
  }
  lVar5 = FUN_010c3404(param_1,*(undefined8 *)puVar2);
  puVar4 = Method_System_Text_RegularExpressions_Regex_IsMatch__;
  puVar3 = Oculus_Platform_MessageWithChallengeEntryList_TypeInfo;
  puVar2 = System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
                    /* try { // try from 00e63ad8 to 00f63ae7 has its CatchHandler @ 00e63c54 */
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e63be8 with catch @ 00e63c40
                        */
          FUN_00da5194();
        }
        lVar6 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00e63c3c;
                    /* try { // try from 00e63b08 to 00f63b0f has its CatchHandler @ 00e63c50 */
        lVar8 = *(long *)(lVar6 + 0x20);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    /* try { // try from 00e63b28 to 00f63b2f has its CatchHandler @ 00e63c4c */
        if ((lVar6 == 0) || (FUN_013df2bc(lVar6,param_1,*(undefined8 *)puVar3,0), lVar8 == 0))
        goto LAB_00e63c3c;
        FUN_013df7e0(lVar8,lVar6,*(undefined8 *)puVar2);
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
    if (*(long *)(param_1 + 0x78) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x70);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__)
      ;
      if ((lVar5 != 0) &&
         (FUN_026c8404(lVar5,param_1,
                       *(undefined8 *)
                        UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPoolBase_TypeInfo
                       ,0), lVar6 != 0)) {
        FUN_026c8574(lVar6,lVar5,0);
                    /* try { // try from 00e63b9c to 00f63ba3 has its CatchHandler @ 00e63c3c */
        if (*(long *)(param_1 + 0x78) != 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x78);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    /* try { // try from 00e63bbc to 00f63bd3 has its CatchHandler @ 00e63c44 */
          if ((lVar5 != 0) &&
             (FUN_026c8404(lVar5,param_1,*(undefined8 *)Method_Messenger<Note>_Broadcast__,0),
             puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__, lVar6 != 0)) {
            FUN_026c8574(lVar6,lVar5,0);
            uVar7 = *(undefined8 *)(param_1 + 0xd0);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar5 != 0) {
              FUN_016f27fc(lVar5,param_1,
                           *(undefined8 *)
                            Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                           ,0);
              FUN_00fe0764(uVar7,lVar5,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_00e63c3c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


