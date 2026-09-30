/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 05bc2a38
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetUseOverriddenExternalCameraStaticPose(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  
                    /* try { // try from 05bc2a38 to 05cc2a3b has its CatchHandler @ 05bc2b7c */
                    /* try { // try from 05bc2a3c to 05cc2a43 has its CatchHandler @ 05bc2b8c */
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_05bc2a80;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_031c0d08();
LAB_05bc2a80:
                    /* try { // try from 05bc2a80 to 05cc2a83 has its CatchHandler @ 05bc2b54 */
  uVar5 = (*(code *)*puVar4)();
  if ((uVar5 & 1) == 0) {
    bVar1 = false;
  }
  else {
                    /* try { // try from 05bc2a94 to 05cc2a9b has its CatchHandler @ 05bc2b7c */
    lVar6 = *unaff_x20;
                    /* try { // try from 05bc2a9c to 05cc2aef has its CatchHandler @ 05bc26d4 */
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_05bc2aec;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08();
LAB_05bc2aec:
                    /* try { // try from 05bc2af0 to 05cc2af3 has its CatchHandler @ 05bc2b90 */
                    /* try { // try from 05bc2af4 to 05cc2af7 has its CatchHandler @ 05bc2b88 */
    uVar2 = (*(code *)*puVar4)();
                    /* try { // try from 05bc2af8 to 05cc2afb has its CatchHandler @ 05bc2b84 */
    lVar6 = *unaff_x19;
                    /* try { // try from 05bc2afc to 05cc2aff has its CatchHandler @ 05bc2b74 */
                    /* try { // try from 05bc2b00 to 05cc2b03 has its CatchHandler @ 05bc2b4c */
                    /* try { // try from 05bc2b04 to 05cc2b07 has its CatchHandler @ 05bc2b70 */
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 05bc2b08 to 05cc2b0b has its CatchHandler @ 05bc2b48 */
    if (uVar5 != 0) {
                    /* try { // try from 05bc2b0c to 05cc2b0f has its CatchHandler @ 05bc2b60 */
                    /* try { // try from 05bc2b10 to 05cc2b13 has its CatchHandler @ 05bc2b68 */
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 05bc2b14 to 05cc2b17 has its CatchHandler @ 05bc2b40 */
                    /* try { // try from 05bc2b18 to 05cc2b1b has its CatchHandler @ 05bc2b3c */
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_05bc2b4c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08();
LAB_05bc2b4c:
    uVar3 = (*(code *)*puVar4)();
    bVar1 = (uVar3 & uVar2) != 0;
  }
  return bVar1;
}


