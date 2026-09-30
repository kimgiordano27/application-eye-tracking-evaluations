/*
FUNCTION_NAME: FUN_014b23b8
ENTRY_POINT: 014b23b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_014b23b8(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
                    /* try { // try from 014b23b8 to 015b2407 has its CatchHandler @ 014b2498 */
  if ((DAT_03776d47 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__);
    DAT_03776d47 = 1;
  }
  uVar2 = FUN_014f4c1c(0,param_1,0);
  if ((uVar2 & 1) != 0) {
    if (param_1 != (long *)0x0) {
      uVar3 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
                    /* try { // try from 014b2420 to 015b2443 has its CatchHandler @ 014b2490 */
      uVar2 = FUN_014f4c1c(uVar3,0,0);
      if ((uVar2 & 1) == 0) goto LAB_014b2488;
      lVar4 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
      puVar1 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__;
      if (lVar4 != 0) {
                    /* try { // try from 014b2444 to 015b24b7 has its CatchHandler @ 014b21c0 */
        uVar2 = FUN_014f7dc0(lVar4,*(undefined8 *)
                                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__
                             ,0);
        if ((uVar2 & 1) == 0) goto LAB_014b2488;
        plVar5 = (long *)(**(code **)(*param_1 + 0x1a8))
                                   (param_1,*(undefined8 *)puVar1,*(undefined8 *)(*param_1 + 0x1b0))
        ;
        if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014b2484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
          return uVar3;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_014b2488:
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014b232c with catch @ 014b2490
                       catch(type#1 @ 03274860) { ... } // from try @ 014b2420 with catch @ 014b2490
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014b2388 with catch @ 014b2494
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014b23b8 with catch @ 014b2498
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014b2314 with catch @ 014b249c
                       catch(type#1 @ 03274860) { ... } // from try @ 014b2354 with catch @ 014b249c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014b22b4 with catch @ 014b24a0
                        */
  return **(undefined8 **)
           (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo +
           0xb8);
}


