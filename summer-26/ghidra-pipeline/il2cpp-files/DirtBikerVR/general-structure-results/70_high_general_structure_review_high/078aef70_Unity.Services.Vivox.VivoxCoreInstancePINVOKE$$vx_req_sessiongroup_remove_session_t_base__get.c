/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_t_base__get
ENTRY_POINT: 078aef70
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_t_base__get
               (void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  uVar3 = FUN_0587c6c4(&stack0x00000018);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    System_Array__InternalArray__ICollection_CopyTo<Dictionary_Entry<object,_PropertyDescriptor>>
              (unaff_x19 + 2,&stack0x00000018);
  }
  else {
    uVar4 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<PanelSettings>_TypeInfo);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078ad680();
    lVar5 = *(long *)(unaff_x20 + 0x28);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),uVar4,*(undefined8 *)(lVar5 + 0x28))
      ;
    }
    puVar2 = System_Collections_Generic_List<object>_TypeInfo;
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
  }
  return;
}


