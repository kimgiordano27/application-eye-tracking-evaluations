/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<TexturePacker_JsonArray.Frame>$$.cctor
ENTRY_POINT: 02b5c310
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02b5c60c) */

void System_Array_EmptyInternalEnumerator<TexturePacker_JsonArray_Frame>___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_03579868();
                    /* try { // try from 02b5c328 to 02c5c32b has its CatchHandler @ 02b5c374 */
  uVar3 = FUN_03582560();
                    /* try { // try from 02b5c32c to 02c5c32f has its CatchHandler @ 02b5c370 */
                    /* try { // try from 02b5c330 to 02c5c33b has its CatchHandler @ 02b5c37c */
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
                    /* try { // try from 02b5c33c to 02c5c33f has its CatchHandler @ 02b5c368 */
                    /* try { // try from 02b5c340 to 02c5c343 has its CatchHandler @ 02b5c37c */
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 02b5c344 to 02c5c347 has its CatchHandler @ 02b5c360 */
                    /* try { // try from 02b5c348 to 02c5c38b has its CatchHandler @ 02b5c1f0 */
      lVar6 = FUN_01ecaf44(lVar6);
    }
                    /* catch() { ... } // from try @ 02b5c2e0 with catch @ 02b5c350 */
                    /* catch() { ... } // from try @ 02b5c2c4 with catch @ 02b5c354 */
                    /* catch() { ... } // from try @ 02b5c2a4 with catch @ 02b5c358 */
                    /* catch() { ... } // from try @ 02b5c21c with catch @ 02b5c35c */
                    /* catch() { ... } // from try @ 02b5c344 with catch @ 02b5c360 */
                    /* catch() { ... } // from try @ 02b5c250 with catch @ 02b5c364 */
                    /* catch() { ... } // from try @ 02b5c33c with catch @ 02b5c368 */
                    /* catch() { ... } // from try @ 02b5c25c with catch @ 02b5c36c */
                    /* catch() { ... } // from try @ 02b5c32c with catch @ 02b5c370 */
                    /* catch() { ... } // from try @ 02b5c328 with catch @ 02b5c374 */
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
                    /* catch() { ... } // from try @ 02b5c230 with catch @ 02b5c378 */
    uVar1 = *(uint *)(unaff_x21 + 4);
                    /* catch() { ... } // from try @ 02b5c330 with catch @ 02b5c37c
                       catch() { ... } // from try @ 02b5c340 with catch @ 02b5c37c */
    if ((int)uVar1 < 1) {
      return;
    }
    lVar6 = unaff_x21[3];
    if (lVar6 != 0) {
                    /* try { // try from 02b5c38c to 02c5c38f has its CatchHandler @ 02b5c3a4 */
      uVar3 = 0;
      lVar7 = lVar6 + 0x38;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
                    /* catch() { ... } // from try @ 02b5c38c with catch @ 02b5c3a4 */
        if (-1 < *(int *)(lVar7 + -0x18)) {
                    /* try { // try from 02b5c3bc to 02c5c3c7 has its CatchHandler @ 02b5c3dc */
                    /* try { // try from 02b5c3c8 to 02c5c3d3 has its CatchHandler @ 02b5c1f0 */
          FUN_02b5d3d0();
        }
        uVar3 = uVar3 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar1 != uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(lVar6 + 0x88);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto FUN_02b5c448;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
FUN_02b5c448:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02b5c4b0;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02b5c4b0:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar3 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02b5c528;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar6,0);
LAB_02b5c528:
    (*(code *)*puVar4)(&stack0x00000008,plVar5,puVar4[1]);
    FUN_02b5d3d0();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02b5c5c4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02b5c5c4:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  return;
}


