/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_reset_focus_t_base__get
ENTRY_POINT: 078afc18
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_reset_focus_t_base__get
               (void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
  lVar3 = FUN_078ad860();
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             System_Collections_Generic_List<OccluderSubviewUpdate>_TypeInfo);
    uVar1 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<OccluderContext>_TypeInfo);
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      FUN_044097ac(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar2 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)System_Collections_Generic_List<ObjectId>_TypeInfo);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0(uVar2,uVar2);
      }
      if (*(long *)(unaff_x20 + 0xa0) != 0) {
        FUN_0587de80(*(long *)(unaff_x20 + 0xa0),uVar2,
                     *(undefined8 *)System_Collections_Generic_List<Playable>_TypeInfo);
      }
      *unaff_x19 = 0xfffffffe;
      FUN_0666f0cc(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


