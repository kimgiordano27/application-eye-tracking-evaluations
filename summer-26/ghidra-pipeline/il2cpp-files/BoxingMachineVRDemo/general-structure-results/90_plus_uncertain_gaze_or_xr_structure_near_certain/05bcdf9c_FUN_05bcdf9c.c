/*
FUNCTION_NAME: FUN_05bcdf9c
ENTRY_POINT: 05bcdf9c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_05bcdf9c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar3 = Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__;
  puVar2 = PTR_DAT_06764380;
                    /* try { // try from 05bcdf9c to 05ccdfd3 has its CatchHandler @ 05bcdd64 */
  puVar1 = PTR_DAT_06764370;
                    /* catch() { ... } // from try @ 05bcdf98 with catch @ 05bcdfc4 */
  if ((DAT_06b81fda & 1) == 0) {
                    /* try { // try from 05bcdfd4 to 05ccdfdb has its CatchHandler @ 05bcdff0 */
    FUN_02d6084c(PTR_DAT_06788338);
                    /* try { // try from 05bcdfdc to 05ccdfe7 has its CatchHandler @ 05bcdd64 */
    FUN_02d6084c(PTR_DAT_06764370);
                    /* try { // try from 05bcdfe8 to 05ccdfef has its CatchHandler @ 05bcdff0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bcdfd4 with catch @ 05bcdff0
                       catch(type#2 @ 00000000) { ... } // from try @ 05bcdfe8 with catch @ 05bcdff0
                        */
    FUN_02d6084c(PTR_DAT_06764378);
    FUN_02d6084c(PTR_DAT_06764380);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                );
    DAT_06b81fda = 1;
  }
  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_0504920c(lVar4,0);
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_04279190(lVar5,*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    plVar7 = (long *)(lVar4 + 0x10);
    *plVar7 = lVar5;
    thunk_FUN_02dd37b4(plVar7,lVar5);
    lVar5 = FUN_0637c89c(param_1,0);
    puVar2 = Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__;
    puVar1 = PTR_DAT_06788338;
    if (lVar5 != 0) {
      lVar5 = FUN_0637b84c(lVar5,0);
      uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_047cf76c(uVar6,lVar4,*(undefined8 *)puVar2,0);
      if (lVar5 != 0) {
        FUN_060621d4(lVar5,uVar6,0);
        if (*plVar7 != 0) {
          return *(undefined8 *)(*plVar7 + 0x10);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


