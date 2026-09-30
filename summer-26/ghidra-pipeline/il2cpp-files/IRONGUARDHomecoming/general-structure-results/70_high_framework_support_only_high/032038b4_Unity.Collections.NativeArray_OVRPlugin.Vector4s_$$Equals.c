/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 032038b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  
  uVar1 = FUN_01ecaf44();
  uVar1 = FUN_01f08890(uVar1,unaff_w22);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x10),uVar1);
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032037d8 with catch @ 032038e4
                       try { // try from 032038e4 to 03303907 has its CatchHandler @ 032037a4 */
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032037f4 with catch @ 032038f0
                        */
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
                    /* try { // try from 03203908 to 0330391f has its CatchHandler @ 032039f4 */
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
                    /* try { // try from 03203988 to 033039e3 has its CatchHandler @ 032037a4 */
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_03203998;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
                    /* try { // try from 03203920 to 03303943 has its CatchHandler @ 032037a4 */
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03203998:
  (*(code *)*puVar2)();
  *(undefined4 *)(unaff_x19 + 0x18) = unaff_w22;
  return;
}


