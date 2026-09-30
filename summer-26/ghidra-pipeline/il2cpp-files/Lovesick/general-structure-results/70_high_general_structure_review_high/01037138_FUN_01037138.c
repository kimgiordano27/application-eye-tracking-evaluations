/*
FUNCTION_NAME: FUN_01037138
ENTRY_POINT: 01037138
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_01037138(long param_1)

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
  if ((DAT_03775f64 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GlyphPairAdjustmentRecord>__ctor__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_Registry__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<LoopType>_get_Value__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass39_0_<DOLocalMoveZ>b__1__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_Interactions_PressInteraction_var);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_IsMatch__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
    DAT_03775f64 = 1;
  }
  lVar5 = FUN_010c3404(param_1,*(undefined8 *)puVar2);
  puVar4 = Method_System_Text_RegularExpressions_Regex_IsMatch__;
  puVar3 = 
  Method_Oculus_Interaction_Interactable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_Registry__
  ;
  puVar2 = System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo;
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
        if (lVar6 == 0) goto LAB_01037360;
        lVar8 = *(long *)(lVar6 + 0x20);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    /* try { // try from 01037244 to 01137253 has its CatchHandler @ 010372f0 */
        if ((lVar6 == 0) || (FUN_013df2bc(lVar6,param_1,*(undefined8 *)puVar3,0), lVar8 == 0))
        goto LAB_01037360;
                    /* try { // try from 01037254 to 01137307 has its CatchHandler @ 01037028 */
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
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass39_0_<DOLocalMoveZ>b__1__
                       ,0), lVar6 != 0)) {
        FUN_026c8574(lVar6,lVar5,0);
        if (*(long *)(param_1 + 0x78) != 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x78);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01037244 with catch @ 010372f0
                        */
          if ((lVar5 != 0) &&
             (FUN_026c8404(lVar5,param_1,*(undefined8 *)Method_System_Nullable<LoopType>_get_Value__
                           ,0),
             puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__, lVar6 != 0)) {
                    /* try { // try from 01037308 to 0113731f has its CatchHandler @ 010374dc */
            FUN_026c8574(lVar6,lVar5,0);
            uVar7 = *(undefined8 *)(param_1 + 0xc0);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar5 != 0) {
                    /* try { // try from 01037320 to 01137347 has its CatchHandler @ 01037028 */
              FUN_016f27fc(lVar5,param_1,
                           *(undefined8 *)UnityEngine_InputSystem_Interactions_PressInteraction_var,
                           0);
              FUN_00fe0764(uVar7,lVar5,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_01037360:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01037360 to 011373b7 has its CatchHandler @ 01037028 */
  FUN_00da518c();
}


