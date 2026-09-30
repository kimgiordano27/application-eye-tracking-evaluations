/*
FUNCTION_NAME: OVRPose$$GetHashCode
ENTRY_POINT: 03115ac0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRPose__GetHashCode(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_03d7efe8;
                    /* try { // try from 03115ad4 to 03215b1b has its CatchHandler @ 03115a00 */
  if ((DAT_03ff1d3d & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3875);
    thunk_FUN_01ad9084(StringLiteral_2438);
    thunk_FUN_01ad9084(PTR_DAT_03d7eff0);
    thunk_FUN_01ad9084(PTR_DAT_03d7efe8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 03115b1c to 03215b2b has its CatchHandler @ 03115b2c */
    thunk_FUN_01ad9084(PTR_DAT_03d7eff8);
                    /* catch() { ... } // from try @ 03115abc with catch @ 03115b2c
                       catch() { ... } // from try @ 03115b1c with catch @ 03115b2c */
    thunk_FUN_01ad9084(PTR_DAT_03d7f000);
                    /* try { // try from 03115b30 to 03215b33 has its CatchHandler @ 03115b3c */
                    /* try { // try from 03115b34 to 03215b3f has its CatchHandler @ 03115a00 */
    thunk_FUN_01ad9084(PTR_DAT_03d7f008);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03115b30 with catch @ 03115b3c
                        */
                    /* try { // try from 03115b40 to 03215bcb has its CatchHandler @ 03115b40
                       catch() { ... } // from try @ 03115b40 with catch @ 03115b40
                       catch() { ... } // from try @ 03115bdc with catch @ 03115b40
                       catch() { ... } // from try @ 03115c68 with catch @ 03115b40
                       catch() { ... } // from try @ 03115ccc with catch @ 03115b40 */
    DAT_03ff1d3d = 1;
  }
  FUN_029bc658(param_1,*(undefined8 *)puVar1);
  if ((char)param_1[0x22] != '\0') {
    lVar5 = param_1[0x23];
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_3875);
    FUN_02518750(uVar2,param_1,*(undefined8 *)(*param_1 + 0x5e0),0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0311edb4(lVar5,uVar2,0);
    lVar5 = param_1[0x27];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(lVar5,0,0);
    if ((uVar3 & 1) != 0) {
      uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7eff0);
      FUN_028af34c(uVar2,param_1,*(undefined8 *)PTR_DAT_03d7eff8,0);
      (**(code **)(*param_1 + 0x4a8))(param_1,uVar2,1,*(undefined8 *)(*param_1 + 0x4b0));
      puVar1 = PTR_DAT_03d7f008;
      lVar5 = *(long *)PTR_DAT_03d7f008;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *(long *)puVar1;
        }
        uVar2 = **(undefined8 **)(lVar5 + 0xb8);
        lVar6 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_2438);
        FUN_028aef2c(lVar6,uVar2,*(undefined8 *)PTR_DAT_03d7f000,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar4 = lVar6;
        thunk_FUN_01b4f09c(plVar4,lVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x03115cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x4c8))(param_1,lVar6,1,*(undefined8 *)(*param_1 + 0x4d0));
      return;
    }
  }
  return;
}


