/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 05ea4994
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  long in_x10;
  ulong uVar6;
  code *pcVar7;
  void *unaff_x20;
  undefined8 unaff_x21;
  ulong __n;
  undefined1 *__src;
  long unaff_x24;
  undefined1 *__dest;
  void *unaff_x27;
  undefined8 uVar8;
  long unaff_x28;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(in_x10 + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar6;
                    /* try { // try from 05ea49ac to 05fa49c3 has its CatchHandler @ 05ea4a5c */
  __src = __dest + -uVar6;
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
                    /* try { // try from 05ea49c4 to 05fa49d7 has its CatchHandler @ 05ea48bc */
  }
                    /* try { // try from 05ea49d8 to 05fa49ef has its CatchHandler @ 05ea4a5c */
  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  lVar2 = thunk_FUN_040b4efc();
  lVar5 = *(long *)(unaff_x24 + 0x20);
                    /* try { // try from 05ea49f0 to 05fa4a4b has its CatchHandler @ 05ea48bc */
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x24 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  (*pcVar7)(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
                    /* try { // try from 05ea4a4c to 05fa4a5b has its CatchHandler @ 05ea4a5c */
  memcpy(__dest,unaff_x20,__n);
  if (lVar2 == 0) {
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    lVar3 = *(long *)(unaff_x24 + 0x20);
                    /* catch() { ... } // from try @ 05ea4974 with catch @ 05ea4a5c
                       catch() { ... } // from try @ 05ea49ac with catch @ 05ea4a5c
                       catch() { ... } // from try @ 05ea49d8 with catch @ 05ea4a5c
                       catch() { ... } // from try @ 05ea4a4c with catch @ 05ea4a5c */
                    /* try { // try from 05ea4a60 to 05fa4a63 has its CatchHandler @ 05ea4a6c */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 05ea4a64 to 05fa4a6f has its CatchHandler @ 05ea48bc */
      lVar3 = FUN_040b1acc();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ea4a60 with catch @ 05ea4a6c
                        */
    FUN_040775b0(lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80),__dest,__n)
    ;
    lVar3 = *(long *)(unaff_x24 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    *(void **)(unaff_x29 + -0x28) = unaff_x20;
    uVar4 = thunk_FUN_040b4efc();
    lVar5 = *(long *)(unaff_x24 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar3 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x24 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
    lVar5 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
      lVar5 = *(long *)(unaff_x24 + 0x20);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    (*pcVar7)(uVar4,lVar2,uVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
    lVar2 = *(long *)(unaff_x24 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    lVar3 = lVar2;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
      uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x24 + 0x20);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x40);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar4;
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x21;
    (**(code **)(lVar3 + 0x10))
              (uVar8,lVar3,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x20,__src);
    memcpy(unaff_x27,__src,__n);
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


