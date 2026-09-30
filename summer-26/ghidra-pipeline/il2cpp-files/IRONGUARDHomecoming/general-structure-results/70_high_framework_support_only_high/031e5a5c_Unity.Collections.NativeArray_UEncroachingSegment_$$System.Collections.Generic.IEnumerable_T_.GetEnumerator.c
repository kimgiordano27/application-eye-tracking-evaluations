/*
FUNCTION_NAME: Unity.Collections.NativeArray<UEncroachingSegment>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 031e5a5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031e5c7c) */

void Unity_Collections_NativeArray<UEncroachingSegment>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  void *__dest;
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar7;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_031e5ab4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031e5ab4:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_031e5c20;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_031e5b2c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031e5b2c:
    (*(code *)*puVar2)(&stack0x000000d0);
    memcpy(&stack0x000001a0,&stack0x000000d0,0xd0);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if (uVar7 == *(uint *)(lVar3 + 0x18)) {
      FUN_031e3f00();
      lVar3 = *(long *)(unaff_x21 + 0x10);
      uVar7 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
    memcpy(&stack0x000000d0,&stack0x000001a0,0xd0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&stack0x00000000,&stack0x000000d0,0xd0);
    if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    __dest = (void *)(lVar3 + (long)(int)uVar7 * 0xd0 + 0x20);
    memcpy(__dest,&stack0x00000000,0xd0);
    thunk_FUN_01f51358(__dest,0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_031e5c3c;
    }
  }
LAB_031e5c20:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031e5c3c:
  (*(code *)*puVar2)();
  return;
}


