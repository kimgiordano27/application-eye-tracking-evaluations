/*
FUNCTION_NAME: FUN_019923f0
ENTRY_POINT: 019923f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019923f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  puVar6 = StringLiteral_2655;
  puVar5 = 
  Method_System_Collections_Generic_List_Enumerator<TuneTargetSteppedGeometry_SteppedRendererSet>_get_Current__
  ;
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__;
  puVar3 = PTR_DAT_033f3fe8;
                    /* try { // try from 01992424 to 01a92427 has its CatchHandler @ 0199244c */
                    /* try { // try from 01992428 to 01a9242b has its CatchHandler @ 019914bc */
                    /* try { // try from 0199242c to 01a9242f has its CatchHandler @ 01992448 */
  if ((DAT_0377a458 & 1) == 0) {
                    /* try { // try from 01992430 to 01a92437 has its CatchHandler @ 019914bc */
                    /* try { // try from 01992438 to 01a9243b has its CatchHandler @ 01992444 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                      );
                    /* try { // try from 0199243c to 01a9246f has its CatchHandler @ 019914bc */
                    /* catch() { ... } // from try @ 01992438 with catch @ 01992444 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<TuneTargetSteppedGeometry_SteppedRendererSet>_get_Current__
                      );
                    /* catch() { ... } // from try @ 0199242c with catch @ 01992448 */
                    /* catch() { ... } // from try @ 01992424 with catch @ 0199244c */
                    /* catch() { ... } // from try @ 0199234c with catch @ 01992450 */
    thunk_FUN_00d48444(PTR_DAT_033f3fe8);
                    /* catch() { ... } // from try @ 01992320 with catch @ 01992454 */
                    /* catch() { ... } // from try @ 019922c4 with catch @ 01992458 */
    thunk_FUN_00d48444(StringLiteral_2655);
    DAT_0377a458 = 1;
  }
  uVar2 = _LAB_028aa0b8;
  uVar1 = _LAB_028aa0b0;
                    /* try { // try from 01992470 to 01a92473 has its CatchHandler @ 019924f4 */
  *(undefined4 *)(param_1 + 0x50) = 0x3ba3d70a;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar6,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar5,0);
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar4,0);
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar3,0);
  *(undefined4 *)(param_1 + 0x78) = uVar7;
                    /* try { // try from 019924c0 to 01a924f3 has its CatchHandler @ 019925b8 */
  thunk_FUN_0268a01c(param_1,0);
  return;
}


