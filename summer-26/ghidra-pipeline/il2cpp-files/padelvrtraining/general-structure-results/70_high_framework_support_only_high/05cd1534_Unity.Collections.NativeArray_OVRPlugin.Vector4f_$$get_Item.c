/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_Item
ENTRY_POINT: 05cd1534
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Item(void)

{
  undefined8 *puVar1;
  int in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  int iStack0000000000000008;
  
  iStack0000000000000008 = in_w8 + 1;
                    /* try { // try from 05cd153c to 05dd1587 has its CatchHandler @ 05cd1484 */
  FUN_07175a38(&stack0x00000008,0);
  FUN_06fd2168();
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 05cd14cc with catch @ 05cd1568
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 05cd14f8 with catch @ 05cd156c
                        */
  lVar5 = *(long *)PTR_DAT_091a0c08;
  lVar2 = *(long *)(lVar5 + 0x38);
  if (lVar2 == 0) {
    FUN_03d8f2c8(lVar5);
    lVar2 = *(long *)(lVar5 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
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


