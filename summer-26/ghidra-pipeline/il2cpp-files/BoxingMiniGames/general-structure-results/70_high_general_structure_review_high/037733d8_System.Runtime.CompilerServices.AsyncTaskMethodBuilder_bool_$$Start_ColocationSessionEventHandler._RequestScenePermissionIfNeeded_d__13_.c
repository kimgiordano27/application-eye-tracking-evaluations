/*
FUNCTION_NAME: System.Runtime.CompilerServices.AsyncTaskMethodBuilder<bool>$$Start<ColocationSessionEventHandler.<RequestScenePermissionIfNeeded>d__13>
ENTRY_POINT: 037733d8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>__Start<ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
                    /* try { // try from 037733e0 to 0387342b has its CatchHandler @ 03773344 */
  if ((*(byte *)(unaff_x20 + 0x792) & 1) == 0) {
    FUN_03642964(PTR_DAT_079f5f80);
    FUN_03642964(PTR_DAT_079f50c8);
    FUN_03642964(PTR_DAT_079f61c0);
                    /* catch() { ... } // from try @ 0377336c with catch @ 0377340c */
    FUN_03642964(PTR_DAT_079f5f98);
    *(undefined1 *)(unaff_x20 + 0x792) = 1;
  }
  puVar3 = PTR_DAT_079f61c0;
  puVar2 = PTR_DAT_079f5f98;
  puVar1 = PTR_DAT_079f50c8;
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x68);
    uVar4 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5f80);
    FUN_05548858(uVar4,param_1,*(undefined8 *)puVar3,0);
    uVar4 = FUN_03de7ea8(uVar5,uVar4,*(undefined8 *)puVar2);
    FUN_03c8f0fc(uVar4,param_1,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


