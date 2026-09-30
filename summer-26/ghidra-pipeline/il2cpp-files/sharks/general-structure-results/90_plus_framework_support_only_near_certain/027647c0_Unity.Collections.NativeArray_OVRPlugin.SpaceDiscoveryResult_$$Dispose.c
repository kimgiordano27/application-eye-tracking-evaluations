/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 027647c0
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long lVar4;
  code *unaff_x23;
  uint unaff_w24;
  uint uVar5;
  void *unaff_x25;
  code *pcVar6;
  undefined8 uVar7;
  int unaff_w27;
  long unaff_x28;
  uint unaff_w29;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  while( true ) {
    uVar5 = unaff_w24;
    uVar7 = *(undefined8 *)(unaff_x21 + 0x40);
    memcpy(&stack0x00000340,&stack0x00000110,0x50);
    memcpy(&stack0x000002f0,&stack0x000000c0,0x50);
    iVar3 = (*unaff_x23)(uVar7,&stack0x00000340,&stack0x000002f0,*(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar3) break;
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (uVar2 <= unaff_w29) goto LAB_027648c4;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 027647a8 with catch @ 0276480c
                       try { // try from 0276480c to 02864823 has its CatchHandler @ 02764760 */
    memcpy(&stack0x00000070,unaff_x25,0x50);
    if (uVar2 <= unaff_w27 + unaff_w22) goto LAB_027648c4;
                    /* try { // try from 02764824 to 0286483b has its CatchHandler @ 027648b0 */
    lVar4 = unaff_x19 + (int)(unaff_w27 + unaff_w22) * unaff_x28;
    memcpy((void *)(lVar4 + 0x20),&stack0x00000070,0x50);
                    /* try { // try from 0276483c to 0286489f has its CatchHandler @ 02764760 */
    thunk_FUN_0188fd20(lVar4 + 0x28,0);
    if (iStack0000000000000018 < (int)uVar5) goto LAB_02764860;
    unaff_w24 = uVar5 * 2;
    iVar3 = (int)unaff_x28;
    if ((int)unaff_w24 < iStack000000000000001c) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      uVar2 = unaff_w24 + in_stack_00000010._4_4_;
      if ((uVar1 <= uVar2 - 1) ||
         (memcpy(&stack0x00000250,(void *)(unaff_x19 + (long)(int)(uVar2 - 1) * (long)iVar3 + 0x20),
                 0x50), uVar1 <= uVar2)) goto LAB_027648c4;
      memcpy(&stack0x00000200,(void *)(unaff_x19 + (long)(int)uVar2 * (long)iVar3 + 0x20),0x50);
      if (unaff_x21 == 0) goto LAB_027648c8;
      memcpy(&stack0x000001b0,&stack0x00000250,0x50);
      memcpy(&stack0x00000160,&stack0x00000200,0x50);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      pcVar6 = *(code **)(unaff_x21 + 0x18);
      uVar7 = *(undefined8 *)(unaff_x21 + 0x40);
      memcpy(&stack0x00000340,&stack0x000001b0,0x50);
      memcpy(&stack0x000002f0,&stack0x00000160,0x50);
      uVar2 = (*pcVar6)(uVar7,&stack0x00000340,&stack0x000002f0,*(undefined8 *)(unaff_x21 + 0x28));
      unaff_w24 = unaff_w24 | uVar2 >> 0x1f;
    }
    memcpy(&stack0x00000250,&stack0x000002a0,0x50);
    unaff_w29 = unaff_w27 + unaff_w24;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_027648c4;
    unaff_x25 = (void *)(unaff_x19 + (long)(int)unaff_w29 * (long)iVar3 + 0x20);
    memcpy(&stack0x00000200,unaff_x25,0x50);
    if (unaff_x21 == 0) {
LAB_027648c8:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    memcpy(&stack0x00000110,&stack0x00000250,0x50);
    memcpy(&stack0x000000c0,&stack0x00000200,0x50);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    unaff_x23 = *(code **)(unaff_x21 + 0x18);
    unaff_w22 = uVar5;
  }
  unaff_w29 = unaff_w27 + unaff_w22;
LAB_02764860:
  uVar5 = *(uint *)(unaff_x19 + 0x18);
  memcpy(&stack0x00000020,&stack0x000002a0,0x50);
  if (unaff_w29 < uVar5) {
    lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x50;
    memcpy((void *)(lVar4 + 0x20),&stack0x00000020,0x50);
                    /* try { // try from 027648a0 to 028648af has its CatchHandler @ 027648b0 */
    thunk_FUN_0188fd20(lVar4 + 0x28,0);
    return;
  }
LAB_027648c4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 027648c4 to 02864bc3 has its CatchHandler @ 027648c4
                       catch() { ... } // from try @ 027648c4 with catch @ 027648c4
                       catch() { ... } // from try @ 02764c88 with catch @ 027648c4
                       catch() { ... } // from try @ 02764d4c with catch @ 027648c4
                       catch() { ... } // from try @ 02764df8 with catch @ 027648c4 */
  FUN_017fc5b0();
}


