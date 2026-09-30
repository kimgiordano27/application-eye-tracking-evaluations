/*
FUNCTION_NAME: FUN_054b9468
ENTRY_POINT: 054b9468
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined8 FUN_054b9468(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
                    /* try { // try from 054b946c to 055b94c7 has its CatchHandler @ 054b932c */
  if ((DAT_066d1095 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<ColocationSessionEventHandler_<LoadScene>d__14>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>__
                );
    DAT_066d1095 = 1;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
                    /* try { // try from 054b94c8 to 055b94df has its CatchHandler @ 054b9504 */
    uVar1 = FUN_054ca674(param_3,*(undefined8 *)(param_2 + 0xc0),0);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 054b94f4 to 055b9503 has its CatchHandler @ 054b9504 */
      plVar2 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
                    /* catch() { ... } // from try @ 054b9454 with catch @ 054b9504
                       catch() { ... } // from try @ 054b94c8 with catch @ 054b9504
                       catch() { ... } // from try @ 054b94f4 with catch @ 054b9504 */
      plVar6 = *(long **)(param_2 + 0xc0);
                    /* try { // try from 054b9508 to 055b950b has its CatchHandler @ 054b9514 */
                    /* try { // try from 054b950c to 055b9517 has its CatchHandler @ 054b932c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 054b9508 with catch @ 054b9514
                        */
      if ((plVar6 == (long *)0x0) ||
         (lVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170)),
         plVar2 == (long *)0x0)) goto LAB_054b9608;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_054b9610;
      if ((int)plVar2[3] == 0) goto LAB_054b960c;
      plVar2[4] = lVar3;
      thunk_FUN_02bb0e9c(plVar2 + 4,lVar3);
      puVar7 = (undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>__
      ;
    }
    else {
                    /* try { // try from 054b94e0 to 055b94f3 has its CatchHandler @ 054b932c */
      uVar1 = FUN_054baf04(param_1,param_2,param_3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      plVar2 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
      plVar6 = *(long **)(param_2 + 0xc0);
      if ((plVar6 == (long *)0x0) ||
         (lVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170)),
         plVar2 == (long *)0x0)) goto LAB_054b9608;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_054b9610:
        uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,0);
      }
      if ((int)plVar2[3] == 0) {
LAB_054b960c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar2[4] = lVar3;
      thunk_FUN_02bb0e9c(plVar2 + 4,lVar3);
      puVar7 = (undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<ColocationSessionEventHandler_<LoadScene>d__14>__
      ;
    }
    uVar5 = FUN_05580fc0(*puVar7,plVar2,0);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x40),uVar5);
    return 0;
  }
LAB_054b9608:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


