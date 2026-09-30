/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$set_Item
ENTRY_POINT: 05cd1570
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__set_Item(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 05cd1524 with catch @ 05cd1570
                        */
  lVar5 = *param_1;
  lVar2 = *(long *)(lVar5 + 0x38);
  if (lVar2 == 0) {
    FUN_03d8f2c8(lVar5);
    lVar2 = *(long *)(lVar5 + 0x38);
  }
                    /* try { // try from 05cd1588 to 05dd159f has its CatchHandler @ 05cd1638 */
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
                    /* try { // try from 05cd15a0 to 05dd15b3 has its CatchHandler @ 05cd1484 */
    thunk_FUN_03db619c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                    /* try { // try from 05cd15b4 to 05dd15cb has its CatchHandler @ 05cd1638 */
    FUN_03d8f26c();
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05cd16d0 with catch @ 05cd164c
                       catch() { ... } // from try @ 05cd1710 with catch @ 05cd164c
                       catch() { ... } // from try @ 05cd1748 with catch @ 05cd164c
                       catch() { ... } // from try @ 05cd1774 with catch @ 05cd164c
                       catch() { ... } // from try @ 05cd17e8 with catch @ 05cd164c */
    FUN_03d2d548();
  }
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_091faf08) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_05cd11a8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_05cd11a8:
  (*(code *)*puVar1)();
  *(int *)(unaff_x19 + 0x140) = *(int *)(unaff_x19 + 0x144) + 10;
  *(int *)(unaff_x19 + 0x144) = *(int *)(unaff_x19 + 0x144) + 1;
  return;
}


