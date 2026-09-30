/*
FUNCTION_NAME: Unity.Collections.NativeArray<UStar>$$Dispose
ENTRY_POINT: 031eb098
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_18;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x031eb340) */

void Unity_Collections_NativeArray<UStar>__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined4 in_w8;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar9;
  
  *(undefined4 *)(unaff_x21 + 0x1c) = in_w8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
                    /* try { // try from 031eb0bc to 032eb0fb has its CatchHandler @ 031eb0bc
                       catch() { ... } // from try @ 031eb0bc with catch @ 031eb0bc
                       catch() { ... } // from try @ 031eb110 with catch @ 031eb0bc
                       catch() { ... } // from try @ 031eb14c with catch @ 031eb0bc
                       catch() { ... } // from try @ 031eb18c with catch @ 031eb0bc */
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
                    /* try { // try from 031eb0fc to 032eb10f has its CatchHandler @ 031eb11c */
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_031eb108;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_031eb108:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                    /* try { // try from 031eb110 to 032eb133 has its CatchHandler @ 031eb0bc */
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031eb0fc with catch @ 031eb11c
                        */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar4;
                    /* try { // try from 031eb134 to 032eb14b has its CatchHandler @ 031eb184 */
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 031eb14c to 032eb173 has its CatchHandler @ 031eb0bc */
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    /* try { // try from 031eb174 to 032eb183 has its CatchHandler @ 031eb184 */
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<UStar>__CopyFrom;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
Unity_Collections_NativeArray<UStar>__CopyFrom:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto Unity_Collections_NativeArray<UStar>__GetEnumerator;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
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
          goto LAB_031eb1f4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_031eb1f4:
    (*(code *)*puVar3)(&stack0x00000048,plVar4,puVar3[1]);
    memcpy(&stack0x00000090,&stack0x00000048,0x48);
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = *(uint *)(unaff_x21 + 0x18);
    if (uVar9 == *(uint *)(lVar5 + 0x18)) {
      FUN_031e9644();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      uVar9 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar9 + 1;
    memcpy(&stack0x00000048,&stack0x00000090,0x48);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&stack0x00000000,&stack0x00000048,0x48);
    if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = lVar5 + (long)(int)uVar9 * 0x48;
    memcpy((void *)(lVar5 + 0x20),&stack0x00000000,0x48);
    thunk_FUN_01f51358(lVar5 + 0x38,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_031eb300;
    }
  }
Unity_Collections_NativeArray<UStar>__GetEnumerator:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_031eb300:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


