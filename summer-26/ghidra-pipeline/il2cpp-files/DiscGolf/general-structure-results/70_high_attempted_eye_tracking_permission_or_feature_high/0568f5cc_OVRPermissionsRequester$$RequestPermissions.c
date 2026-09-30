/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 0568f5cc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *unaff_x19;
  int in_stack_00000010;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
  uVar3 = thunk_FUN_02df8d3c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000010 * 8) = uVar2;
    in_stack_00000010 = in_stack_00000010 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    LeanTween__value(unaff_x19 + 0xc,0);
    lVar4 = thunk_FUN_02dfd288(
                              System_Collections_Generic_List<ExpressionBinder_UnaOpFullSig>_TypeInfo
                              );
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = thunk_FUN_02dfd288(Unity_Netcode_NetworkListEvent<ulong>_TypeInfo);
    FUN_03fa59e0(unaff_x19 + 2,uVar2,uVar5);
    return;
  }
  puVar6 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar6 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar6,&PTR_PTR_066567d8,0);
}


