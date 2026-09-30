/*
FUNCTION_NAME: FUN_038af8d8
ENTRY_POINT: 038af8d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_038af8d8(long *param_1,byte param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 038af8d8 to 039af8db has its CatchHandler @ 038b00cc */
                    /* try { // try from 038af8dc to 039af8df has its CatchHandler @ 038aff00 */
                    /* try { // try from 038af8e0 to 039af8e3 has its CatchHandler @ 038afefc */
                    /* try { // try from 038af8e4 to 039af8e7 has its CatchHandler @ 038b00c8 */
                    /* try { // try from 038af8e8 to 039af8eb has its CatchHandler @ 038b00c4 */
                    /* try { // try from 038af8ec to 039af8ef has its CatchHandler @ 038b00c0 */
                    /* try { // try from 038af8f0 to 039af8f3 has its CatchHandler @ 038b00bc */
                    /* try { // try from 038af8f4 to 039af8f7 has its CatchHandler @ 038b0014 */
  if ((DAT_03ff8c80 & 1) == 0) {
                    /* try { // try from 038af8f8 to 039af8fb has its CatchHandler @ 038b00c4 */
                    /* try { // try from 038af8fc to 039af8ff has its CatchHandler @ 038b00c0 */
                    /* try { // try from 038af900 to 039af903 has its CatchHandler @ 038b00bc */
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
                    /* try { // try from 038af904 to 039af90b has its CatchHandler @ 038b00b8 */
                    /* try { // try from 038af90c to 039af93f has its CatchHandler @ 038afdf8 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2679);
    thunk_FUN_01ad9084(PTR_DAT_03da95a8);
    DAT_03ff8c80 = 1;
  }
  bVar2 = FUN_038a446c(param_1);
  puVar1 = StringLiteral_2679;
                    /* try { // try from 038af940 to 039af973 has its CatchHandler @ 038afdf4 */
  if ((bVar2 & 1) == (param_2 & 1)) {
                    /* try { // try from 038afa00 to 039afa0b has its CatchHandler @ 038b0140 */
    return;
  }
  if (*(int *)(*(long *)StringLiteral_2679 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03feddc6 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_2679);
                    /* try { // try from 038af974 to 039af9a7 has its CatchHandler @ 038afdf0 */
    DAT_03feddc6 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar1;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
                    /* try { // try from 038af9a8 to 039af9db has its CatchHandler @ 038afdec */
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar4 = FUN_0391f968(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
                    /* try { // try from 038af9dc to 039af9e7 has its CatchHandler @ 038b014c */
      thunk_FUN_01ac7298();
    }
                    /* try { // try from 038af9e8 to 039af9f3 has its CatchHandler @ 038b0148 */
                    /* try { // try from 038af9f4 to 039af9ff has its CatchHandler @ 038b0144 */
    FUN_038f2e04(*(undefined8 *)PTR_DAT_03da95a8,0);
    return;
  }
  *(byte *)(param_1 + 3) = param_2 & 1;
                    /* try { // try from 038afa18 to 039afa23 has its CatchHandler @ 038b0138 */
                    /* try { // try from 038afa24 to 039afa2f has its CatchHandler @ 038b0134 */
                    /* WARNING: Could not recover jumptable at 0x038afa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 038afa30 to 039afa3b has its CatchHandler @ 038b0130 */
  (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
  return;
}


