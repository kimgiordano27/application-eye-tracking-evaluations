/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_sessiongroup_handle_set
ENTRY_POINT: 078990a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  
  FUN_03a8a718();
  FUN_03a8a718(System_Collections_Generic_List<ERSOSection>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x82c) = 1;
  puVar2 = System_Collections_Generic_List<ERSOSection>_TypeInfo;
  if (unaff_x19 != 0) {
                    /* try { // try from 078990c4 to 079990d3 has its CatchHandler @ 078990f8 */
    lVar3 = *(long *)System_Collections_Generic_List<ERSOSection>_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
                    /* try { // try from 078990d4 to 079990f3 has its CatchHandler @ 07899044 */
      lVar3 = *(long *)puVar2;
    }
    puVar1 = System_Collections_Generic_List<ERSORoadExt>_TypeInfo;
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar5[1] == 0) {
                    /* try { // try from 078990f4 to 079990f7 has its CatchHandler @ 078990f8 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078990c4 with catch @ 078990f8
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 078990f4 with catch @ 078990f8
                       try { // try from 078990f8 to 07999113 has its CatchHandler @ 07899044 */
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar6 = *puVar5;
                    /* try { // try from 07899114 to 07999117 has its CatchHandler @ 07899130 */
                    /* try { // try from 07899118 to 07999133 has its CatchHandler @ 07899044 */
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<ERSORoadLog>_TypeInfo);
                    /* catch() { ... } // from try @ 07899114 with catch @ 07899130 */
                    /* try { // try from 07899134 to 0799913b has its CatchHandler @ 07899144 */
      FUN_049639e4(uVar4,uVar6,
                   *(undefined8 *)System_Collections_Generic_List<ERSORoadUpdate>_TypeInfo,0);
      puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar5 = uVar4;
      thunk_FUN_03afed3c(puVar5,uVar4);
    }
    uVar4 = FUN_044d3220();
    uVar4 = FUN_044e130c(uVar4,*(undefined8 *)puVar1);
    return uVar4;
  }
  return 0;
}


