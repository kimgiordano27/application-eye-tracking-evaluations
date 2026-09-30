/*
FUNCTION_NAME: FUN_061bcccc
ENTRY_POINT: 061bcccc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_061bcccc(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_076ddd1a & 1) == 0) {
    thunk_FUN_032e1da0(
                      System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                      );
                    /* try { // try from 061bcd00 to 062bcd0b has its CatchHandler @ 061bd334 */
    thunk_FUN_032e1da0(System_Collections_Generic_IEnumerator<SwitchCase>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    DAT_076ddd1a = 1;
  }
  puVar1 = System_Collections_Generic_IEnumerator<SwitchCase>_TypeInfo;
  local_30 = 0;
  local_28 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar2 = FUN_057af330(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  FUN_0623e120(uVar2,&local_28,&local_30,0);
  uVar4 = local_28;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_061bcdc0;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 061bcd98 to 062bcd9f has its CatchHandler @ 061bd2b0 */
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_032937ac(param_2,*(long *)
                                   System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                          ,1);
LAB_061bcdc0:
    lVar5 = (*(code *)*puVar3)(param_2,uVar4,puVar3[1]);
    uVar4 = local_30;
    if (lVar5 != 0) {
                    /* try { // try from 061bcde4 to 062bcdef has its CatchHandler @ 061bd31c */
      uVar2 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
      FUN_0624b7a8(uVar2,uVar4,lVar5,0);
      return uVar2;
    }
  }
  uVar4 = thunk_FUN_032e1da0(PTR_DAT_07279560);
                    /* try { // try from 061bce20 to 062bce23 has its CatchHandler @ 061bd2dc */
                    /* try { // try from 061bce24 to 062bce33 has its CatchHandler @ 061bd2ec */
  uVar4 = FUN_032d5d3c(uVar4,2);
  FUN_02d9d3f0();
  FUN_02da1a84(uVar4,uVar2);
  FUN_02da1ab8(uVar4,0,uVar2);
  uVar2 = local_28;
  FUN_02d9d3f0(uVar4);
  FUN_02da1a84(uVar4,uVar2);
  FUN_02da1ab8(uVar4,1,uVar2);
  uVar2 = thunk_FUN_032e1da0(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
  uVar2 = FUN_0623eb78(uVar2,uVar4,0);
                    /* try { // try from 061bce94 to 062bce9f has its CatchHandler @ 061bd318 */
  thunk_FUN_032e1da0(PTR_DAT_0727ddb0);
  uVar4 = thunk_FUN_032a56a0();
  FUN_05920d38(uVar4,uVar2,0);
  uVar2 = thunk_FUN_032e1da0(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar4,uVar2);
}


