/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-OVRSpatialAnchor.InvertedCapture<bool,-OVRSpatialAnchor.UnboundAnchor>>>$$System.Collections.IDictionary.Add
ENTRY_POINT: 029d190c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x029d1d18) */
/* WARNING: Removing unreachable block (ram,0x029d1d6c) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor_UnboundAnchor>>>__System_Collections_IDictionary_Add
               (void)

{
  void *__dest;
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  uint uVar9;
  long *unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44(lVar2);
  }
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar2) {
                    /* try { // try from 029d1a68 to 02ad1a6b has its CatchHandler @ 029d1a9c */
                    /* try { // try from 029d1a6c to 02ad1a6f has its CatchHandler @ 029d1a88 */
                    /* try { // try from 029d1a70 to 02ad1a73 has its CatchHandler @ 029d1a84 */
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_029d1a74;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_029d1a74:
                    /* try { // try from 029d1a74 to 02ad1a7b has its CatchHandler @ 029d1a98 */
                    /* catch() { ... } // from try @ 029d17d0 with catch @ 029d1a7c
                       try { // try from 029d1a7c to 02ad1ab7 has its CatchHandler @ 029d169c */
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* catch() { ... } // from try @ 029d180c with catch @ 029d1a80 */
                    /* catch() { ... } // from try @ 029d1a70 with catch @ 029d1a84 */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch() { ... } // from try @ 029d1a6c with catch @ 029d1a88 */
                    /* catch() { ... } // from try @ 029d17e0 with catch @ 029d1a8c */
                    /* catch() { ... } // from try @ 029d184c with catch @ 029d1a90 */
  lVar2 = 0;
                    /* catch() { ... } // from try @ 029d18ac with catch @ 029d1a94 */
  uVar9 = 0;
                    /* catch() { ... } // from try @ 029d1a74 with catch @ 029d1a98 */
                    /* catch() { ... } // from try @ 029d1a68 with catch @ 029d1a9c */
  do {
                    /* catch() { ... } // from try @ 029d1a64 with catch @ 029d1aa0 */
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 029d1ab8 to 02ad1abb has its CatchHandler @ 029d1adc */
                    /* try { // try from 029d1abc to 02ad1adf has its CatchHandler @ 029d169c */
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    /* try { // try from 029d1ae0 to 02ad1aeb has its CatchHandler @ 029d1b00 */
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_029d1aec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
                    /* catch() { ... } // from try @ 029d1ab8 with catch @ 029d1adc */
LAB_029d1aec:
                    /* try { // try from 029d1aec to 02ad1af7 has its CatchHandler @ 029d169c */
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                    /* try { // try from 029d1af8 to 02ad1aff has its CatchHandler @ 029d1b00 */
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_029d1d0c;
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_029d1ce4;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(unaff_x22 + 0x20);
                    /* catch() { ... } // from try @ 029d1ae0 with catch @ 029d1b00
                       catch() { ... } // from try @ 029d1af8 with catch @ 029d1b00 */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_029d1b70;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_029d1b70:
    (*(code *)*puVar3)(&stack0x00000058,plVar4,puVar3[1]);
    memcpy(&stack0x000000b0,&stack0x00000058,0x58);
    if (lVar2 == 0) {
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = FUN_01f08890(lVar2,4);
LAB_029d1c28:
      memcpy(&stack0x00000058,&stack0x000000b0,0x58);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      if (uVar9 == *(uint *)(lVar2 + 0x18)) {
        if ((int)(uVar9 + 0x40000000) < 0) {
          FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910();
        }
        lVar5 = *(long *)(unaff_x22 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        lVar5 = FUN_01f08890(lVar5,uVar9 << 1);
        FUN_0358d498(lVar2,0,lVar5,0,uVar9,0);
        lVar2 = lVar5;
        goto LAB_029d1c28;
      }
      memcpy(&stack0x00000058,&stack0x000000b0,0x58);
    }
    memcpy(&stack0x00000000,&stack0x00000058,0x58);
    if (*(uint *)(lVar2 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    __dest = (void *)(lVar2 + (long)(int)uVar9 * 0x58 + 0x20);
    memcpy(__dest,&stack0x00000000,0x58);
    thunk_FUN_01f51358(__dest,0);
    uVar9 = uVar9 + 1;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_029d1d00;
    }
  }
LAB_029d1ce4:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d1d00:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_029d1d0c:
  *unaff_x19 = lVar2;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = uVar9;
  return;
}


