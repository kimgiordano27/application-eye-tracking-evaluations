/*
FUNCTION_NAME: FUN_03b285ec
ENTRY_POINT: 03b285ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_11
*/


void FUN_03b285ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = StringLiteral_2346;
  if ((DAT_03ffdb88 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db7098);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2346);
    DAT_03ffdb88 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  FUN_03b283f8(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
                    /* try { // try from 03b28668 to 03c28673 has its CatchHandler @ 03b28998 */
  FUN_03aebbb8(param_1,0);
  plVar5 = (long *)(param_1 + 0x28);
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
                    /* try { // try from 03b28698 to 03c286a7 has its CatchHandler @ 03b289dc */
  uVar3 = FUN_0391f968(lVar6,0,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)*plVar5;
    if (plVar4 == (long *)0x0) goto LAB_03b28710;
                    /* try { // try from 03b286b4 to 03c286bf has its CatchHandler @ 03b289d8 */
    (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    *plVar5 = 0;
    thunk_FUN_01b4f09c(plVar5,0);
  }
  puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
                    /* try { // try from 03b286d0 to 03c286eb has its CatchHandler @ 03b289a8 */
  lVar6 = *(long *)
           Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar2;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
                    /* try { // try from 03b286fc to 03c28717 has its CatchHandler @ 03b289c8 */
    FUN_02b5ae30(**(long **)(lVar6 + 0xb8),param_1,*(undefined8 *)PTR_DAT_03db7098);
    return;
  }
LAB_03b28710:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


