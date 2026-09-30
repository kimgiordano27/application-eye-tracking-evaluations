/*
FUNCTION_NAME: OVRManager.<>c$$<.cctor>b__514_0
ENTRY_POINT: 033b3fa8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_<>c__<_cctor>b__514_0
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
                    /* try { // try from 033b3fb0 to 034b3fb3 has its CatchHandler @ 033b3fc4 */
  if ((DAT_044a694b & 1) == 0) {
                    /* catch() { ... } // from try @ 033b3fb0 with catch @ 033b3fc4 */
    FUN_01d7d918(StringLiteral_5626);
                    /* try { // try from 033b3fd0 to 034b3fdb has its CatchHandler @ 033b3ff0 */
    FUN_01d7d918(StringLiteral_554);
                    /* try { // try from 033b3fdc to 034b3fe7 has its CatchHandler @ 033b3ae8 */
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
                    /* try { // try from 033b3fe8 to 034b3fef has its CatchHandler @ 033b3ff0 */
                    /* catch() { ... } // from try @ 033b3fd0 with catch @ 033b3ff0
                       catch() { ... } // from try @ 033b3fe8 with catch @ 033b3ff0 */
    FUN_01d7d918(StringLiteral_8648);
                    /* try { // try from 033b3ff4 to 034b4057 has its CatchHandler @ 033b3ff4
                       catch() { ... } // from try @ 033b3ff4 with catch @ 033b3ff4
                       catch() { ... } // from try @ 033b40e4 with catch @ 033b3ff4
                       catch() { ... } // from try @ 033b416c with catch @ 033b3ff4
                       catch() { ... } // from try @ 033b4188 with catch @ 033b3ff4
                       catch() { ... } // from try @ 033b41dc with catch @ 033b3ff4 */
    FUN_01d7d918(StringLiteral_8649);
    FUN_01d7d918(StringLiteral_8650);
    DAT_044a694b = 1;
  }
  FUN_03394edc(param_1,param_2,param_3,param_4,0);
  puVar4 = StringLiteral_8650;
  puVar3 = StringLiteral_8649;
  puVar2 = StringLiteral_5626;
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar5 = FUN_032e1e68(param_2,*(undefined8 *)StringLiteral_8648,0);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  thunk_FUN_01e10808();
  uVar5 = FUN_032e1e68(param_2,*(undefined8 *)puVar4,0);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  thunk_FUN_01e10808();
  uVar5 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar5 = FUN_033a87c8(uVar5);
  lVar6 = FUN_032df734(param_2,*(undefined8 *)puVar3,uVar5,0);
  puVar1 = StringLiteral_554;
  if (lVar6 == 0) {
    lVar7 = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
LAB_033b4110:
    thunk_FUN_01e10808(param_1 + 0xa0,lVar7);
    return;
  }
  uVar5 = *(undefined8 *)StringLiteral_554;
  lVar7 = thunk_FUN_01de26bc(lVar6,uVar5);
  if (lVar7 != 0) {
    *(long *)(param_1 + 0xa0) = lVar7;
    uVar5 = *(undefined8 *)puVar1;
    lVar7 = thunk_FUN_01de26bc(lVar6,uVar5);
    if (lVar7 != 0) goto LAB_033b4110;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c(lVar6,uVar5);
}


