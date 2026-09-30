/*
FUNCTION_NAME: FUN_01986130
ENTRY_POINT: 01986130
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01986130(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = UnityEngine_ShadowObjectsFilter_TypeInfo;
                    /* try { // try from 01986154 to 01a8615f has its CatchHandler @ 019861f8 */
  if ((DAT_0377a3ea & 1) == 0) {
    thunk_FUN_00d48444(System_Predicate<InputControlScheme>_TypeInfo);
                    /* try { // try from 0198616c to 01a86187 has its CatchHandler @ 01986208 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_Dispose__
                      );
    thunk_FUN_00d48444(Method_System_Net_Configuration_Ipv6Element__ctor__);
    thunk_FUN_00d48444(Method_OVRTask_TryGetPendingTask<OVRPlugin_Result>__);
                    /* try { // try from 0198618c to 01a8619b has its CatchHandler @ 01986204 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WitKeyword>_get_Count__);
    thunk_FUN_00d48444(UnityEngine_ShadowObjectsFilter_TypeInfo);
                    /* try { // try from 019861a0 to 01a861bf has its CatchHandler @ 01986200 */
    DAT_0377a3ea = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_Dispose__;
  if (lVar2 != 0) {
                    /* try { // try from 019861c4 to 01a861e3 has its CatchHandler @ 019861fc */
    FUN_017b46ec(lVar2,0);
    *(long *)(lVar2 + 0x10) = param_2;
    *(long **)(lVar2 + 0x18) = param_1;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    param_1[0x2b] = param_2;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = System_Predicate<InputControlScheme>_TypeInfo;
    if (lVar3 != 0) {
                    /* try { // try from 019861ec to 01a861ef has its CatchHandler @ 019861f4 */
                    /* try { // try from 019861f0 to 01a8621f has its CatchHandler @ 01985e78 */
                    /* catch() { ... } // from try @ 019861ec with catch @ 019861f4 */
                    /* catch() { ... } // from try @ 01986154 with catch @ 019861f8 */
                    /* catch() { ... } // from try @ 019861c4 with catch @ 019861fc */
                    /* catch() { ... } // from try @ 019861a0 with catch @ 01986200 */
                    /* catch() { ... } // from try @ 0198618c with catch @ 01986204 */
      FUN_012d1810(lVar3,lVar2,*(undefined8 *)Method_System_Net_Configuration_Ipv6Element__ctor__,0)
      ;
                    /* catch() { ... } // from try @ 0198616c with catch @ 01986208 */
                    /* try { // try from 01986220 to 01a86237 has its CatchHandler @ 01986314 */
      (**(code **)(*param_1 + 0x4a8))(param_1,lVar3,1,*(undefined8 *)(*param_1 + 0x4b0));
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
                    /* try { // try from 01986240 to 01a86243 has its CatchHandler @ 01986310 */
                    /* try { // try from 01986248 to 01a8625b has its CatchHandler @ 01986324 */
        FUN_012d1810(lVar3,lVar2,*(undefined8 *)Method_OVRTask_TryGetPendingTask<OVRPlugin_Result>__
                     ,0);
                    /* try { // try from 01986260 to 01a8626b has its CatchHandler @ 0198630c */
        (**(code **)(*param_1 + 0x4c8))(param_1,lVar3,1,*(undefined8 *)(*param_1 + 0x4d0));
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    /* try { // try from 01986270 to 01a8628f has its CatchHandler @ 01986308 */
        if (lVar3 != 0) {
          FUN_012d1810(lVar3,lVar2,
                       *(undefined8 *)Method_System_Collections_Generic_List<WitKeyword>_get_Count__
                       ,0);
                    /* try { // try from 01986294 to 01a862a3 has its CatchHandler @ 01986304 */
                    /* try { // try from 019862a4 to 01a862c3 has its CatchHandler @ 01985e78 */
                    /* WARNING: Could not recover jumptable at 0x019862b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x4e8))(param_1,lVar3,0,*(undefined8 *)(*param_1 + 0x4f0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


