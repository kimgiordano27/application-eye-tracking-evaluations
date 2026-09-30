/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_session_handle_set
ENTRY_POINT: 078aea88
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_session_handle_set
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000018;
  
  in_stack_00000018 =
       FUN_058b71ec(param_1,*(undefined8 *)
                             System_Collections_Generic_List<OccluderSubviewUpdate>_TypeInfo);
  uVar4 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)System_Collections_Generic_List<OccluderContext>_TypeInfo);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fe7cd0(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    uVar3 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<ObjectId>_TypeInfo);
    puVar2 = System_Collections_Generic_List<object>_TypeInfo;
    iVar1 = *(int *)(*unaff_x21 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  }
  return;
}


