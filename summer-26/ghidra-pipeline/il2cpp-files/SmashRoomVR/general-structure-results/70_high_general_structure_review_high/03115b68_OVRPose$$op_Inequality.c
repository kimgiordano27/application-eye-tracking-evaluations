/*
FUNCTION_NAME: OVRPose$$op_Inequality
ENTRY_POINT: 03115b68
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


void OVRPose__op_Inequality(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  thunk_FUN_01afaadc();
  FUN_02518750();
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03115cc8 to 03215ccb has its CatchHandler @ 03115cd4 */
    FUN_01b48178();
  }
  FUN_0311edb4();
  lVar5 = unaff_x19[0x27];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 03115bcc to 03215bdb has its CatchHandler @ 03115c38 */
    thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7eff0);
                    /* try { // try from 03115bdc to 03215c4f has its CatchHandler @ 03115b40 */
    FUN_028af34c();
    (**(code **)(*unaff_x19 + 0x4a8))();
    puVar1 = PTR_DAT_03d7f008;
    lVar5 = *(long *)PTR_DAT_03d7f008;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar5 + 0xb8);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_2438);
      FUN_028aef2c(uVar3,uVar6,*(undefined8 *)PTR_DAT_03d7f000,0);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *puVar4 = uVar3;
      thunk_FUN_01b4f09c(puVar4,uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x03115cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x4c8))();
    return;
  }
                    /* catch() { ... } // from try @ 03115c50 with catch @ 03115cc4
                       catch() { ... } // from try @ 03115cb4 with catch @ 03115cc4 */
  return;
}


