/*
FUNCTION_NAME: FUN_054a0834
ENTRY_POINT: 054a0834
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_054a0834(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
                    /* try { // try from 054a0838 to 055a085b has its CatchHandler @ 054a0340 */
  if ((DAT_06bbf129 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
                    /* try { // try from 054a085c to 055a085f has its CatchHandler @ 054a0864 */
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000D60_PostfixBurstDelegate_TypeInfo
                );
                    /* catch() { ... } // from try @ 054a085c with catch @ 054a0864 */
                    /* try { // try from 054a0868 to 055a086f has its CatchHandler @ 054a0878 */
    FUN_02f08768(System_Reflection_CustomAttributeData_LazyCAttrData_TypeInfo);
                    /* try { // try from 054a0870 to 055a087b has its CatchHandler @ 054a0340 */
                    /* catch() { ... } // from try @ 054a07bc with catch @ 054a0878
                       catch() { ... } // from try @ 054a0830 with catch @ 054a0878
                       catch() { ... } // from try @ 054a0868 with catch @ 054a0878 */
    FUN_02f08768(Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate_TypeInfo);
    DAT_06bbf129 = 1;
  }
  puVar1 = PTR_DAT_067c8f48;
  if (*(long *)(param_1 + 0x20) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060a6338(*(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000D60_PostfixBurstDelegate_TypeInfo
                 ,0);
    return;
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = (**(code **)(*plVar3 + 0x1f8))(plVar3,5,*(undefined8 *)(*plVar3 + 0x200));
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060a6338(*(undefined8 *)
                  Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate_TypeInfo,0);
  }
  puVar2 = System_Reflection_CustomAttributeData_LazyCAttrData_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_060a9584(*(undefined8 *)puVar2,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar3 = (long *)FUN_0588a6d0(*(long *)(param_1 + 0x20),0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar3 + 0x268))(plVar3,*(undefined8 *)(*plVar3 + 0x270));
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_0588a808(*(long *)(param_1 + 0x20),0);
      lVar5 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x054a094c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


