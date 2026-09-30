/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 033aa808
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__GetOpenVRControllerOffset(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  uVar3 = (**(code **)(param_1 + 0x598))(param_2,*(undefined8 *)(param_1 + 0x5a0));
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar3 = FUN_033aa3c0(param_2);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar5 = thunk_FUN_01de27b8();
      uVar6 = thunk_FUN_01dd295c(StringLiteral_8481);
      uVar7 = thunk_FUN_01dd295c(StringLiteral_1645);
                    /* try { // try from 033aa970 to 034aa973 has its CatchHandler @ 033aaae8 */
      FUN_03287130(uVar5,uVar6,uVar7,0);
      uVar6 = thunk_FUN_01dd295c(StringLiteral_8482);
                    /* try { // try from 033aa984 to 034aa987 has its CatchHandler @ 033aaad4 */
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar5,uVar6);
    }
  }
  FUN_033aaa34();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
                    /* try { // try from 033aa870 to 034aa873 has its CatchHandler @ 033aa878 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033aa7ec with catch @ 033aa874
                       try { // try from 033aa874 to 034aa893 has its CatchHandler @ 033aa74c */
  uVar2 = FUN_033aa664(0);
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033aa870 with catch @ 033aa878
                        */
  if ((int)uVar2 < 0) {
                    /* try { // try from 033aa8b0 to 034aa8bb has its CatchHandler @ 033aa8d0 */
    uVar5 = 0;
  }
  else {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033aa7b0 with catch @ 033aa87c
                        */
    lVar4 = (**(code **)(*unaff_x19 + 0x248))();
                    /* try { // try from 033aa894 to 034aa897 has its CatchHandler @ 033aa8a4 */
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033aa8c8 to 034aa8cf has its CatchHandler @ 033aa8d0 */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
                    /* catch() { ... } // from try @ 033aa894 with catch @ 033aa8a4 */
    uVar5 = *(undefined8 *)(lVar4 + (ulong)uVar2 * 8 + 0x20);
  }
                    /* try { // try from 033aa8bc to 034aa8c7 has its CatchHandler @ 033aa74c */
  return uVar5;
}


