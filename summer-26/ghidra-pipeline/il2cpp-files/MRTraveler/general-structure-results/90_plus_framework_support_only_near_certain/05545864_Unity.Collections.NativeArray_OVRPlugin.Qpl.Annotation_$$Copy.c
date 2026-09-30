/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 05545864
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (undefined8 param_1,undefined8 param_2,void *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  undefined8 *__dest;
  long *plVar6;
  long unaff_x21;
  void *unaff_x22;
  ulong __n;
  undefined8 *__dest_00;
  long unaff_x25;
  long lVar7;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(void **)(unaff_x29 + -0x20) = param_3;
                    /* try { // try from 0554586c to 05645883 has its CatchHandler @ 055458fc */
  lVar7 = *(long *)(param_4 + 0x20);
  lVar3 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x70);
  __n = (ulong)*(uint *)(lVar3 + 0xfc);
                    /* try { // try from 05545884 to 056458eb has its CatchHandler @ 05545794 */
  uVar4 = __n + 0xf & 0x1fffffff0;
  __dest_00 = (undefined8 *)(in_x9 - uVar4);
  __dest = (undefined8 *)((long)__dest_00 - uVar4);
  if (-1 < *(int *)(lVar3 + 0x28)) {
    param_3 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(__dest_00,param_3,__n);
  lVar3 = *(long *)(lVar7 + 0xc0);
  puVar2 = *(undefined8 **)(lVar3 + 0xf0);
  uVar1 = *puVar2;
  if (-1 < *(int *)(*(long *)(lVar3 + 0x70) + 0x28)) {
    __dest_00 = (undefined8 *)*__dest_00;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = __dest_00;
  (*(code *)puVar2[2])(uVar1,puVar2,param_2,unaff_x29 + -0x18,unaff_x29 + -0x10);
  lVar3 = *(long *)(unaff_x21 + 0x20);
  plVar6 = *(long **)(unaff_x29 + -0x10);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x70) + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(__dest,unaff_x22,__n);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar7 = *(long *)(lVar3 + 0xc0);
  lVar3 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
    lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  }
  if (-1 < *(int *)(*(long *)(lVar7 + 0x70) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  lVar7 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar3) {
        lVar3 = lVar7 + (long)(*piVar5 + 2) * 0x10 + 0x138;
        goto LAB_05545998;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_03cf1348(plVar6,lVar3,2);
LAB_05545998:
  *(undefined8 **)(unaff_x29 + -0x18) = __dest;
  lVar3 = *(long *)(lVar3 + 8);
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar6,unaff_x29 + -0x18,__dest);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


