/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 05544db0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor
               (undefined8 param_1,undefined8 param_2)

{
  void *__src;
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  undefined8 *__dest;
  ulong __n;
  long unaff_x26;
  long lVar10;
  long unaff_x29;
  
  bVar1 = *(byte *)(unaff_x22 + 0x3b8);
  *(undefined8 *)(unaff_x29 + -0x18) = param_2;
  if ((bVar1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e80c28);
    FUN_03c8f898(PTR_DAT_08e83cd8);
    *(undefined1 *)(unaff_x22 + 0x3b8) = 1;
  }
  puVar2 = PTR_DAT_08e80c28;
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  uVar8 = *(uint *)(lVar4 + 0xfc);
  __n = (ulong)uVar8;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03cf1244();
    uVar8 = *(uint *)(lVar4 + 0xfc);
  }
  puVar3 = PTR_DAT_08e83cd8;
  lVar4 = (long)&stack0x00000000 - ((ulong)(uVar8 + 0x10) + 0xf & 0x1fffffff0);
                    /* try { // try from 05544e28 to 05644e2f has its CatchHandler @ 05544f0c */
  __dest = (undefined8 *)(lVar4 - (__n + 0xf & 0x1fffffff0));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = FUN_08484e48(*(undefined8 *)puVar3,0);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  __src = unaff_x21;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x18);
  }
  memcpy(__dest,__src,__n);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar10 = *(long *)(lVar10 + 0xc0);
  puVar7 = *(undefined8 **)(lVar10 + 0xb0);
  uVar6 = *puVar7;
  if (-1 < *(int *)(*(long *)(lVar10 + 0x70) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  *(undefined8 **)(unaff_x29 + -0x10) = __dest;
  (*(code *)puVar7[2])(uVar6,puVar7,lVar5,unaff_x29 + -0x10,__dest);
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar10 = *(long *)(lVar9 + 0x70);
  lVar5 = lVar10;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_03cf1244(lVar10);
    unaff_x21 = *(void **)(unaff_x29 + -0x18);
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar9 + 0x70);
  }
  if (-1 < *(int *)(lVar5 + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x18);
  }
  FUN_03c90414(lVar10,*(undefined8 *)(lVar9 + 0xb8),lVar4,unaff_x21,0,unaff_x29 + -0x10);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0))
            (param_1,*(undefined8 *)(unaff_x29 + -0x10),1);
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


