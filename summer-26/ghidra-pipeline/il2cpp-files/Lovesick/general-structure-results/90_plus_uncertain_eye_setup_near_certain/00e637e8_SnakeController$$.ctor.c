/*
FUNCTION_NAME: SnakeController$$.ctor
ENTRY_POINT: 00e637e8
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


void SnakeController___ctor(long param_1)

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
                    /* catch() { ... } // from try @ 00e63764 with catch @ 00e637f8 */
  if ((DAT_03774e37 & 1) == 0) {
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
    DAT_03774e37 = 1;
  }
  lVar5 = FUN_010c3404(param_1,*(undefined8 *)puVar2);
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
        if ((lVar6 == 0) || (FUN_013df2bc(lVar6,param_1,*(undefined8 *)puVar2,0), lVar8 == 0))
        goto LAB_00e63a0c;
        FUN_013df780(lVar8,lVar6,*(undefined8 *)puVar3);
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
        FUN_026c84dc(lVar6,lVar5,0);
        if (*(long *)(param_1 + 0x78) != 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x78);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if ((lVar5 != 0) &&
             (FUN_026c8404(lVar5,param_1,*(undefined8 *)Method_Messenger<Note>_Broadcast__,0),
             puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__, lVar6 != 0)) {
            FUN_026c84dc(lVar6,lVar5,0);
            uVar7 = *(undefined8 *)(param_1 + 0xd0);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar5 != 0) {
              FUN_016f27fc(lVar5,param_1,
                           *(undefined8 *)
                            Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                           ,0);
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


