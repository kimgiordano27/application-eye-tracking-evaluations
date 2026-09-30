/*
FUNCTION_NAME: FUN_0373b78c
ENTRY_POINT: 0373b78c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0373b78c(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  puVar2 = Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__;
  if ((DAT_048363e0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementUpdate>_OnComplete__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__1__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__2__
                      );
                    /* try { // try from 0373b7f4 to 0383b7f7 has its CatchHandler @ 0373b858 */
    DAT_048363e0 = 1;
  }
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__;
                    /* try { // try from 0373b7f8 to 0383b7fb has its CatchHandler @ 0373b850 */
                    /* try { // try from 0373b7fc to 0383b7ff has its CatchHandler @ 0373b22c */
  local_38 = 0;
                    /* try { // try from 0373b800 to 0383b803 has its CatchHandler @ 0373b834 */
                    /* try { // try from 0373b804 to 0383b807 has its CatchHandler @ 0373b830 */
                    /* try { // try from 0373b808 to 0383b80b has its CatchHandler @ 0373b814 */
                    /* catch() { ... } // from try @ 0373b6d8 with catch @ 0373b80c
                       try { // try from 0373b80c to 0383b87f has its CatchHandler @ 0373b22c */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0373b668 with catch @ 0373b810 */
    thunk_FUN_01ee6d7c();
  }
                    /* catch() { ... } // from try @ 0373b808 with catch @ 0373b814 */
                    /* catch() { ... } // from try @ 0373b68c with catch @ 0373b818 */
  uVar4 = *param_2;
                    /* catch() { ... } // from try @ 0373b6dc with catch @ 0373b81c */
                    /* catch() { ... } // from try @ 0373b66c with catch @ 0373b820 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0373b610 with catch @ 0373b824 */
    thunk_FUN_01ee6d7c();
  }
                    /* catch() { ... } // from try @ 0373b5a0 with catch @ 0373b828 */
                    /* catch() { ... } // from try @ 0373b5f0 with catch @ 0373b82c */
                    /* catch() { ... } // from try @ 0373b804 with catch @ 0373b830 */
                    /* catch() { ... } // from try @ 0373b800 with catch @ 0373b834 */
                    /* catch() { ... } // from try @ 0373b614 with catch @ 0373b838 */
                    /* catch() { ... } // from try @ 0373b5a4 with catch @ 0373b83c */
                    /* catch() { ... } // from try @ 0373b580 with catch @ 0373b840 */
  uVar3 = FUN_0378e00c(param_1,uVar4,0,param_3 & 1,&local_38,0);
                    /* catch() { ... } // from try @ 0373b4c0 with catch @ 0373b844 */
  if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 0373b428 with catch @ 0373b860 */
                    /* catch() { ... } // from try @ 0373b434 with catch @ 0373b864 */
                    /* catch() { ... } // from try @ 0373b418 with catch @ 0373b868 */
    FUN_023a9ca8(0,*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__2__
                );
  }
  else {
                    /* catch() { ... } // from try @ 0373b4fc with catch @ 0373b848 */
                    /* catch() { ... } // from try @ 0373b4a4 with catch @ 0373b84c */
                    /* catch() { ... } // from try @ 0373b7f8 with catch @ 0373b850 */
                    /* catch() { ... } // from try @ 0373b47c with catch @ 0373b854 */
                    /* catch() { ... } // from try @ 0373b7f4 with catch @ 0373b858 */
    FUN_023a9ba4(local_38,*(undefined8 *)
                           Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__1__
                );
                    /* catch() { ... } // from try @ 0373b458 with catch @ 0373b85c */
  }
                    /* try { // try from 0373b880 to 0383b883 has its CatchHandler @ 0373b8ac */
                    /* try { // try from 0373b884 to 0383b8bb has its CatchHandler @ 0373b22c */
  return;
}


