/*
FUNCTION_NAME: SpiralCurve$$Generate
ENTRY_POINT: 00e63808
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void SpiralCurve__Generate(ulong param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *unaff_x21;
  long lVar8;
  uint uVar9;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 00e63814 to 00f638e7 has its CatchHandler @ 00e63814
                       catch() { ... } // from try @ 00e63814 with catch @ 00e63814
                       catch() { ... } // from try @ 00e638f4 with catch @ 00e63814 */
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GlyphPairAdjustmentRecord>__ctor__);
    thunk_FUN_00d48444(Oculus_Platform_MessageWithChallengeEntryList_TypeInfo);
    thunk_FUN_00d48444(Method_Messenger<Note>_Broadcast__);
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPoolBase_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                      );
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_IsMatch__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__);
    *(undefined1 *)(unaff_x20 + 0xe37) = 1;
  }
  lVar5 = FUN_010c3404(param_2,*unaff_x21);
  puVar4 = Method_System_Text_RegularExpressions_Regex_IsMatch__;
  puVar3 = Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__;
  puVar2 = Oculus_Platform_MessageWithChallengeEntryList_TypeInfo;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar6 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00e63a0c;
        lVar8 = *(long *)(lVar6 + 0x20);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    /* try { // try from 00e638e8 to 00f638f3 has its CatchHandler @ 00e63910 */
                    /* try { // try from 00e638f4 to 00f6392b has its CatchHandler @ 00e63814 */
        if ((lVar6 == 0) || (FUN_013df2bc(lVar6,param_2,*(undefined8 *)puVar2,0), lVar8 == 0))
        goto LAB_00e63a0c;
        FUN_013df780(lVar8,lVar6,*(undefined8 *)puVar3);
        uVar1 = *(uint *)(lVar5 + 0x18);
                    /* catch() { ... } // from try @ 00e638e8 with catch @ 00e63910 */
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
    if (*(long *)(param_2 + 0x78) != 0) {
      lVar6 = *(long *)(*(long *)(param_2 + 0x78) + 0x70);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__)
      ;
      if ((lVar5 != 0) &&
         (FUN_026c8404(lVar5,param_2,
                       *(undefined8 *)
                        UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPoolBase_TypeInfo
                       ,0), lVar6 != 0)) {
        FUN_026c84dc(lVar6,lVar5,0);
        if (*(long *)(param_2 + 0x78) != 0) {
          lVar6 = *(long *)(*(long *)(param_2 + 0x78) + 0x78);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    /* try { // try from 00e63994 to 00f639cb has its CatchHandler @ 00e63994
                       catch(type#1 @ 00000000) { ... } // from try @ 00e63994 with catch @ 00e63994
                       catch(type#1 @ 00000000) { ... } // from try @ 00e63a90 with catch @ 00e63994
                        */
          if ((lVar5 != 0) &&
             (FUN_026c8404(lVar5,param_2,*(undefined8 *)Method_Messenger<Note>_Broadcast__,0),
             puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__, lVar6 != 0)) {
            FUN_026c84dc(lVar6,lVar5,0);
            uVar7 = *(undefined8 *)(param_2 + 0xd0);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar5 != 0) {
                    /* try { // try from 00e639cc to 00f639db has its CatchHandler @ 00e63a84 */
              FUN_016f27fc(lVar5,param_2,
                           *(undefined8 *)
                            Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                           ,0);
                    /* try { // try from 00e639fc to 00f63a03 has its CatchHandler @ 00e63a80 */
              FUN_00fe0700(uVar7,lVar5,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_00e63a0c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


