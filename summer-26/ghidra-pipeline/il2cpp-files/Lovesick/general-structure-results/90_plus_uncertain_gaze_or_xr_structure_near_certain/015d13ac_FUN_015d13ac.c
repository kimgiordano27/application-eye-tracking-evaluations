/*
FUNCTION_NAME: FUN_015d13ac
ENTRY_POINT: 015d13ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_015d13ac(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
                    /* catch() { ... } // from try @ 015d1270 with catch @ 015d13ac
                       catch() { ... } // from try @ 015d1370 with catch @ 015d13ac */
  puVar2 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
                    /* catch() { ... } // from try @ 015d11ac with catch @ 015d13b0
                       catch() { ... } // from try @ 015d1364 with catch @ 015d13b0 */
                    /* catch() { ... } // from try @ 015d1110 with catch @ 015d13b4
                       catch() { ... } // from try @ 015d135c with catch @ 015d13b4 */
                    /* catch() { ... } // from try @ 015d1074 with catch @ 015d13b8
                       catch() { ... } // from try @ 015d1354 with catch @ 015d13b8 */
                    /* catch() { ... } // from try @ 015d0fb8 with catch @ 015d13bc
                       catch() { ... } // from try @ 015d134c with catch @ 015d13bc */
  if ((DAT_03777ee5 & 1) == 0) {
                    /* try { // try from 015d13d8 to 016d1413 has its CatchHandler @ 015d14c0 */
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(OVRPlugin_TrackingConfidence___TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03777ee5 = 1;
  }
  lVar4 = FUN_00da4fb8(*(undefined8 *)puVar2,7);
  puVar2 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  if (param_1 != 0) {
                    /* try { // try from 015d1420 to 016d1423 has its CatchHandler @ 015d14b4 */
    iVar1 = *(int *)(param_1 + 0x10);
                    /* try { // try from 015d1434 to 016d145b has its CatchHandler @ 015d14b0 */
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_017726a0(iVar1 - param_2,7,0);
    plVar5 = (long *)FUN_0161cd0c(0);
                    /* try { // try from 015d1464 to 016d147b has its CatchHandler @ 015d14ac */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
                    /* try { // try from 015d147c to 016d148f has its CatchHandler @ 015d0e10 */
    uVar6 = FUN_017319b4(0);
    uVar6 = FUN_01604214(param_1,uVar6,0);
    puVar2 = OVRPlugin_TrackingConfidence___TypeInfo;
                    /* try { // try from 015d1490 to 016d149f has its CatchHandler @ 015d14c0 */
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 015d14a4 to 016d14a7 has its CatchHandler @ 015d14b0 */
                    /* try { // try from 015d14a8 to 016d14ab has its CatchHandler @ 015d14ac */
                    /* catch() { ... } // from try @ 015d1464 with catch @ 015d14ac
                       catch() { ... } // from try @ 015d14a8 with catch @ 015d14ac */
                    /* catch() { ... } // from try @ 015d1434 with catch @ 015d14b0
                       catch() { ... } // from try @ 015d14a4 with catch @ 015d14b0 */
                    /* catch() { ... } // from try @ 015d1420 with catch @ 015d14b4 */
                    /* catch() { ... } // from try @ 015d13d8 with catch @ 015d14c0
                       catch() { ... } // from try @ 015d1490 with catch @ 015d14c0 */
      (**(code **)(*plVar5 + 0x268))
                (plVar5,uVar6,param_2,uVar3,lVar4,0,*(undefined8 *)(*plVar5 + 0x270));
                    /* try { // try from 015d14c8 to 016d14cb has its CatchHandler @ 015d156c */
                    /* try { // try from 015d14cc to 016d14e3 has its CatchHandler @ 015d0e10 */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_015d2250(lVar4,0);
      if (lVar4 != 0) {
                    /* try { // try from 015d14e4 to 016d14fb has its CatchHandler @ 015d155c */
        FUN_0179519c(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
                    /* try { // try from 015d14fc to 016d154b has its CatchHandler @ 015d0e10 */
        return uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


