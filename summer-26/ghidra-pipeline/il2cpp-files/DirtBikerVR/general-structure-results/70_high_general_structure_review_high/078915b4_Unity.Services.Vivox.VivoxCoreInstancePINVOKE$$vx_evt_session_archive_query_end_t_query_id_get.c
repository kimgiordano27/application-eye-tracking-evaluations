/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_query_id_get
ENTRY_POINT: 078915b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_query_id_get
               (long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  ulong unaff_x21;
  int in_stack_00000010;
  
  uVar3 = thunk_FUN_03af1434(*(undefined8 *)(param_1 + 0x8b0));
  uVar4 = thunk_FUN_03aed0c4(uVar3,*(undefined8 *)*unaff_x20);
  iVar1 = in_stack_00000010;
  if ((uVar4 & 1) == 0) {
    plVar5 = (long *)__cxa_allocate_exception(8);
    *plVar5 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,&PTR_PTR_07fde6e8,0);
  }
  lVar8 = *unaff_x20;
  *(long *)(&stack0x00000000 + (long)in_stack_00000010 * 8) = lVar8;
  in_stack_00000010 = in_stack_00000010 + 1;
  __cxa_end_catch();
  if ((unaff_x21 & 1) != 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar2 = FUN_0788e7e4(*(undefined8 *)(lVar8 + 0x98));
    uVar3 = FUN_0788ea04(*(undefined8 *)(lVar8 + 0x98));
    thunk_FUN_03af1434(PTR_DAT_0848b038);
    lVar6 = thunk_FUN_03ac74bc();
    FUN_0784fa10(lVar6,uVar2,uVar3,lVar8,0);
    *(undefined4 *)(lVar6 + 0x90) = uVar2;
    in_stack_00000010 = iVar1;
    uVar3 = thunk_FUN_03af1434(System_Collections_Generic_List<ByRefUpdater>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(lVar6,uVar3);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *(long *)(lVar8 + 0x90);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(char *)(lVar6 + 0x20) != '\0') {
    uVar2 = FUN_0788e91c();
    if (*(long *)(lVar8 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar8 + 0x90) + 0x30);
    thunk_FUN_03af1434(PTR_DAT_0848b038);
    lVar6 = thunk_FUN_03ac74bc();
    FUN_0784fa10(lVar6,uVar2,uVar3,lVar8,0);
    *(undefined4 *)(lVar6 + 0x90) = uVar2;
    in_stack_00000010 = iVar1;
    uVar3 = thunk_FUN_03af1434(System_Collections_Generic_List<ByRefUpdater>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(lVar6,uVar3);
  }
  if (*(char *)(lVar6 + 0x21) == '\0') {
    thunk_FUN_03af1434(System_Action<Task,_object>_TypeInfo);
    uVar3 = thunk_FUN_03ac74bc();
    uVar7 = thunk_FUN_03af1434(System_Collections_Generic_HashSet<Object>_TypeInfo);
    FUN_0784fa10(uVar3,15999,uVar7,lVar8,0);
    in_stack_00000010 = iVar1;
    uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<ByRefUpdater>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,uVar7);
  }
  uVar3 = *(undefined8 *)(lVar6 + 0x30);
  thunk_FUN_03af1434(PTR_DAT_0848b038);
  lVar8 = thunk_FUN_03ac74bc();
  FUN_0784fa08(lVar8,0x3e7e,uVar3,0);
  *(undefined4 *)(lVar8 + 0x90) = 0x3e7e;
  in_stack_00000010 = iVar1;
  uVar3 = thunk_FUN_03af1434(System_Collections_Generic_List<ByRefUpdater>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(lVar8,uVar3);
}


