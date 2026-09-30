/*
FUNCTION_NAME: Unity.Collections.NativeArray<CopyClosingMeshJobData>$$CopyFrom
ENTRY_POINT: 031ce5ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x031ce924) */
/* WARNING: Removing unreachable block (ram,0x031ce920) */
/* WARNING: Removing unreachable block (ram,0x031ce968) */

void Unity_Collections_NativeArray<CopyClosingMeshJobData>__CopyFrom(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
                    /* try { // try from 031ce5ec to 032ce5ef has its CatchHandler @ 031ce334 */
  lVar2 = FUN_01ecaf44();
                    /* try { // try from 031ce5f0 to 032ce5f3 has its CatchHandler @ 031ce5fc */
                    /* try { // try from 031ce5f4 to 032ce627 has its CatchHandler @ 031ce334 */
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031ce5f0 with catch @ 031ce5fc
                        */
  if (uVar6 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031ce520 with catch @ 031ce600
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031ce5e0 with catch @ 031ce604
                        */
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031ce5e4 with catch @ 031ce608
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031ce450 with catch @ 031ce60c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031ce490 with catch @ 031ce610
                        */
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_031ce77c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 031ce628 to 032ce62b has its CatchHandler @ 031ce638 */
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_031ce77c:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_031ce7e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_031ce7e4:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          Unity_Collections_NativeArray<CopyClosingMeshJobData>__System_Collections_IEnumerable_GetEnumerator
          ;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar2,0);
Unity_Collections_NativeArray<CopyClosingMeshJobData>__System_Collections_IEnumerable_GetEnumerator:
    (*(code *)*puVar3)(&stack0x00000020,plVar4,puVar3[1]);
    FUN_031ce234();
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_031ce908;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_031ce908:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


