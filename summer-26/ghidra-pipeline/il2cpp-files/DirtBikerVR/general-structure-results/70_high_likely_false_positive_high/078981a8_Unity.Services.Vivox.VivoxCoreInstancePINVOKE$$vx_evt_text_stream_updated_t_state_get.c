/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_state_get
ENTRY_POINT: 078981a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_state_get(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  lVar3 = System_Array__BinarySearch<DataBindingManager_BindingRequest>();
                    /* try { // try from 078981ac to 079981c3 has its CatchHandler @ 07897e44 */
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 =
       FUN_058b71ec(lVar3,*(undefined8 *)System_Collections_Generic_List<ERMarkerExt>_TypeInfo);
                    /* try { // try from 078981c4 to 079981d3 has its CatchHandler @ 07898900 */
  uVar4 = FUN_0587c6c4(&stack0x00000028,
                       *(undefined8 *)System_Collections_Generic_List<ERLocalGrid>_TypeInfo);
                    /* try { // try from 078981d8 to 079981e7 has its CatchHandler @ 078988fc */
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
                    /* try { // try from 078982f4 to 07998323 has its CatchHandler @ 07898930 */
    FUN_03fe3ce8(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar3 = FUN_0587c704(&stack0x00000028,
                         *(undefined8 *)System_Collections_Generic_List<ERLaneData>_TypeInfo);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             System_Collections_Generic_List<ERConnectionVecs>_TypeInfo);
    uVar4 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<ERChildObject>_TypeInfo);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x18,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe3ce8(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar5 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)System_Collections_Generic_List<ERCell>_TypeInfo);
      puVar2 = System_Collections_Generic_List<ERBlendVecs>_TypeInfo;
      iVar1 = *(int *)(*unaff_x23 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar1 == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    }
  }
  return;
}


