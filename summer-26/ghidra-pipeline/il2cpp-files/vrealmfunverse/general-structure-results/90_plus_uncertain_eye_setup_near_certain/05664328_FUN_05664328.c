/*
FUNCTION_NAME: FUN_05664328
ENTRY_POINT: 05664328
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05664328(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined *puVar8;
  
  if ((DAT_066d1d37 & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_IDictionary<string,_float>_var);
                    /* try { // try from 05664350 to 05764357 has its CatchHandler @ 056643b8 */
                    /* try { // try from 05664358 to 0576435f has its CatchHandler @ 056643ac */
    FUN_02b3c81c(
                Method_System_Collections_Generic_List_Enumerator<ATGTextJobSystem_ManagedJobData>_get_Current__
                );
                    /* try { // try from 05664360 to 05764363 has its CatchHandler @ 056643a8 */
    DAT_066d1d37 = 1;
  }
                    /* try { // try from 05664364 to 05764367 has its CatchHandler @ 05664398 */
                    /* try { // try from 05664368 to 0576436b has its CatchHandler @ 05664394 */
                    /* try { // try from 0566436c to 0576436f has its CatchHandler @ 05664390 */
                    /* try { // try from 05664370 to 05764377 has its CatchHandler @ 0566438c */
  if ((*param_1 == 0) || (plVar1 = *(long **)(*param_1 + 0x28), plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* try { // try from 05664378 to 0576437b has its CatchHandler @ 05663f00 */
                    /* try { // try from 0566437c to 0576437f has its CatchHandler @ 0566438c */
                    /* try { // try from 05664380 to 057643d3 has its CatchHandler @ 05663f00 */
  lVar5 = *plVar1;
                    /* catch() { ... } // from try @ 05664210 with catch @ 05664388 */
                    /* catch() { ... } // from try @ 05664370 with catch @ 0566438c
                       catch() { ... } // from try @ 0566437c with catch @ 0566438c */
  if (lVar5 == *(long *)
                Method_System_Collections_Generic_List_Enumerator<ATGTextJobSystem_ManagedJobData>_get_Current__
     ) {
                    /* try { // try from 056643f0 to 057643fb has its CatchHandler @ 05663f00 */
    FUN_05657728(plVar1,param_1[1]);
    return;
  }
                    /* catch() { ... } // from try @ 0566436c with catch @ 05664390 */
                    /* catch() { ... } // from try @ 05664368 with catch @ 05664394 */
                    /* catch() { ... } // from try @ 05664364 with catch @ 05664398 */
  plVar1 = (long *)(**(code **)(lVar5 + 0x1c8))
                             (plVar1,param_1[1],param_1[2],*(undefined8 *)(lVar5 + 0x1d0));
                    /* catch() { ... } // from try @ 05664268 with catch @ 0566439c */
  if (plVar1 == (long *)0x0) {
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar4 = FUN_02b3c908(uVar3,2);
    lVar5 = *param_1;
    FUN_0275e13c(lVar5);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    FUN_0275e13c(uVar3);
    plVar1 = (long *)thunk_FUN_02b4c898(uVar3,0);
    FUN_0275e13c();
    uVar3 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
    FUN_0275e13c(uVar4);
    FUN_0275a400(uVar4,uVar3);
    FUN_0275a434(uVar4,0,uVar3);
    puVar8 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  }
  else {
                    /* catch() { ... } // from try @ 0566425c with catch @ 056643a0 */
                    /* catch() { ... } // from try @ 0566419c with catch @ 056643a4 */
    lVar5 = *plVar1;
                    /* catch() { ... } // from try @ 05664360 with catch @ 056643a8 */
                    /* catch() { ... } // from try @ 05664358 with catch @ 056643ac */
                    /* catch() { ... } // from try @ 05664134 with catch @ 056643b0 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 056640d0 with catch @ 056643b4 */
                    /* catch() { ... } // from try @ 05664350 with catch @ 056643b8 */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_IDictionary<string,_float>_var) {
                    /* catch() { ... } // from try @ 056643e8 with catch @ 056643f8 */
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_05664408;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 056643d4 to 057643d7 has its CatchHandler @ 056643e4 */
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
                    /* catch() { ... } // from try @ 056643d4 with catch @ 056643e4 */
    puVar2 = (undefined8 *)
             FUN_02b7654c(plVar1,*(long *)System_Collections_Generic_IDictionary<string,_float>_var,
                          3);
                    /* try { // try from 056643e8 to 057643ef has its CatchHandler @ 056643f8 */
LAB_05664408:
    lVar5 = (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
    if (lVar5 != 0) {
      return;
    }
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar4 = FUN_02b3c908(uVar3,2);
    lVar5 = *param_1;
    FUN_0275e13c(lVar5);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    FUN_0275e13c(uVar3);
    plVar1 = (long *)thunk_FUN_02b4c898(uVar3,0);
    FUN_0275e13c();
    uVar3 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
    FUN_0275e13c(uVar4);
    FUN_0275a400(uVar4,uVar3);
    FUN_0275a434(uVar4,0,uVar3);
    puVar8 = 
    Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__;
  }
  uVar3 = thunk_FUN_02ba3594(puVar8);
  FUN_0275a400(uVar4,uVar3);
  uVar3 = thunk_FUN_02ba3594(puVar8);
  FUN_0275a434(uVar4,1,uVar3);
  uVar3 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                            );
  uVar3 = FUN_04bec334(uVar3,uVar4,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cb60);
  uVar4 = thunk_FUN_02b79644();
  FUN_04d7b3f4(uVar4,uVar3,0);
  uVar3 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_MoveNext__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar3);
}


