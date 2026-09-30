/*
FUNCTION_NAME: FUN_05883dac
ENTRY_POINT: 05883dac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_05883dac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  
                    /* try { // try from 05883dac to 05983daf has its CatchHandler @ 05883db4 */
                    /* try { // try from 05883db0 to 05983db3 has its CatchHandler @ 05883dc4 */
                    /* catch() { ... } // from try @ 05883dac with catch @ 05883db4 */
                    /* catch() { ... } // from try @ 05883d9c with catch @ 05883db8 */
                    /* catch() { ... } // from try @ 05883d48 with catch @ 05883dbc */
                    /* catch() { ... } // from try @ 05883cd8 with catch @ 05883dc0 */
                    /* catch() { ... } // from try @ 05883d30 with catch @ 05883dc4
                       catch() { ... } // from try @ 05883db0 with catch @ 05883dc4 */
                    /* catch() { ... } // from try @ 05883da4 with catch @ 05883dc8 */
                    /* catch() { ... } // from try @ 05883cc0 with catch @ 05883dcc
                       catch() { ... } // from try @ 05883da0 with catch @ 05883dcc */
                    /* catch() { ... } // from try @ 05883d94 with catch @ 05883dd0 */
                    /* catch() { ... } // from try @ 05883cfc with catch @ 05883dd4 */
  if ((DAT_06bc1160 & 1) == 0) {
                    /* catch() { ... } // from try @ 05883c8c with catch @ 05883dd8 */
                    /* catch() { ... } // from try @ 05883c84 with catch @ 05883ddc */
    FUN_02f08768(Method_System_Collections_Generic_HashSet<Text>_get_Count__);
                    /* catch() { ... } // from try @ 05883c30 with catch @ 05883de4
                       catch() { ... } // from try @ 05883d84 with catch @ 05883de4 */
                    /* try { // try from 05883dec to 05983def has its CatchHandler @ 05883e2c */
    FUN_02f08768(Method_System_Collections_Generic_HashSet<TrackableId>__ctor__);
                    /* try { // try from 05883df0 to 05983e0f has its CatchHandler @ 05883a04 */
    FUN_02f08768(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet<InternedString>_Contains__);
                    /* try { // try from 05883e10 to 05983e13 has its CatchHandler @ 05883e18 */
    FUN_02f08768(Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                );
                    /* catch() { ... } // from try @ 05883e10 with catch @ 05883e18 */
                    /* try { // try from 05883e1c to 05983e23 has its CatchHandler @ 05883e2c */
    FUN_02f08768(Method_System_Collections_Generic_HashSet<PokeInteractor>_GetEnumerator__);
                    /* try { // try from 05883e24 to 05983e2f has its CatchHandler @ 05883a04 */
    DAT_06bc1160 = 1;
  }
                    /* catch() { ... } // from try @ 05883dec with catch @ 05883e2c
                       catch() { ... } // from try @ 05883e1c with catch @ 05883e2c */
  local_60 = 0;
  uStack_58 = 0;
  FUN_058801bc(param_1);
  puVar2 = Method_System_Collections_Generic_HashSet<TrackableId>__ctor__;
  puVar1 = Method_System_Collections_Generic_HashSet<InternedString>_Contains__;
  if (param_2 == 0) goto LAB_05884090;
  uStack_58 = *(undefined8 *)(param_2 + 0x90);
  local_60 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = FUN_03cd4ff4(&local_60,0,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__)
  ;
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_2 + 0xa8) == 0) {
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar6 = *(long *)puVar1;
      }
      FUN_05883610(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0xa0),param_2,4);
      lVar6 = *(long *)(param_2 + 0x28);
      if (lVar6 == 0) goto LAB_05884090;
      uVar4 = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)(lVar6 + 0x50) = uVar4;
      lVar6 = *(long *)(param_2 + 0x28);
      if (lVar6 == 0) goto LAB_05884090;
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(param_2 + 0x98);
      uVar4 = FUN_0588bf08(lVar6,0);
      puVar1 = Method_System_Collections_Generic_HashSet<PokeInteractor>_GetEnumerator__;
      lVar6 = *(long *)Method_System_Collections_Generic_HashSet<PokeInteractor>_GetEnumerator__;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar6);
        lVar6 = *(long *)puVar1;
      }
      puVar8 = *(undefined8 **)(lVar6 + 0xb8);
      lVar11 = puVar8[9];
      if (lVar11 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar6);
          puVar8 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar7 = *puVar8;
        lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_System_Collections_Generic_HashSet<Text>_get_Count__);
        FUN_05895434(lVar11,uVar7,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = lVar11;
      }
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_058957b4(uVar7,2,lVar11,uVar9,0);
      goto LAB_05883f54;
    }
  }
  else if (*(long *)(param_2 + 0xa8) == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067cb910);
    uVar4 = thunk_FUN_02f45270();
    uVar5 = thunk_FUN_02f6ef30(
                              Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__
                              );
    FUN_050d7c20(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02f6ef30(
                              Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,uVar5);
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar1;
  }
  FUN_05883610(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0xa0),param_2,0xb);
  lVar6 = *(long *)(param_2 + 0x28);
  if (lVar6 == 0) {
LAB_05884090:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(param_2 + 0xa8);
  uVar4 = FUN_0588bf08(lVar6,0);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa8);
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_058957b4(uVar7,2,uVar10,uVar9,0);
LAB_05883f54:
  FUN_05881214(param_1,uVar5,uVar4,uVar7);
  return 1;
}


