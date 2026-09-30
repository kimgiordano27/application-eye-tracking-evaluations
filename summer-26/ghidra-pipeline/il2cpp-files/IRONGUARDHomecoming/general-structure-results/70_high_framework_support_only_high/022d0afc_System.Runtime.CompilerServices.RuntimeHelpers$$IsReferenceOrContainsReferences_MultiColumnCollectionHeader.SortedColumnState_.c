/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<MultiColumnCollectionHeader.SortedColumnState>
ENTRY_POINT: 022d0afc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d0e34) */
/* WARNING: Removing unreachable block (ram,0x022d0bec) */
/* WARNING: Removing unreachable block (ram,0x022d0c00) */
/* WARNING: Removing unreachable block (ram,0x022d0c04) */
/* WARNING: Removing unreachable block (ram,0x022d0c10) */
/* WARNING: Removing unreachable block (ram,0x022d0c20) */
/* WARNING: Removing unreachable block (ram,0x022d0c38) */
/* WARNING: Removing unreachable block (ram,0x022d0c4c) */
/* WARNING: Removing unreachable block (ram,0x022d0c68) */
/* WARNING: Removing unreachable block (ram,0x022d0c7c) */
/* WARNING: Removing unreachable block (ram,0x022d0e30) */
/* WARNING: Removing unreachable block (ram,0x022d0c80) */
/* WARNING: Removing unreachable block (ram,0x022d0dbc) */
/* WARNING: Removing unreachable block (ram,0x022d0cb4) */
/* WARNING: Removing unreachable block (ram,0x022d0dc4) */
/* WARNING: Removing unreachable block (ram,0x022d0cd8) */
/* WARNING: Removing unreachable block (ram,0x022d0dcc) */
/* WARNING: Removing unreachable block (ram,0x022d0d00) */
/* WARNING: Removing unreachable block (ram,0x022d0d28) */
/* WARNING: Removing unreachable block (ram,0x022d0d44) */
/* WARNING: Removing unreachable block (ram,0x022d0d0c) */
/* WARNING: Removing unreachable block (ram,0x022d0d48) */
/* WARNING: Removing unreachable block (ram,0x022d0d58) */
/* WARNING: Removing unreachable block (ram,0x022d0d60) */
/* WARNING: Removing unreachable block (ram,0x022d0d88) */
/* WARNING: Removing unreachable block (ram,0x022d0d6c) */
/* WARNING: Removing unreachable block (ram,0x022d0d78) */
/* WARNING: Removing unreachable block (ram,0x022d0d94) */
/* WARNING: Removing unreachable block (ram,0x022d0da4) */
/* WARNING: Removing unreachable block (ram,0x022d0dac) */
/* WARNING: Removing unreachable block (ram,0x022d0db0) */
/* WARNING: Removing unreachable block (ram,0x022d0db8) */
/* WARNING: Removing unreachable block (ram,0x022d0e3c) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<MultiColumnCollectionHeader_SortedColumnState>
               (code *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  
  plVar1 = (long *)(*param_1)();
  plVar2 = plVar1;
  plVar4 = *(long **)(unaff_x21 + 0x60);
  if (*(long **)(unaff_x21 + 0x60) == (long *)0x0) {
    plVar2 = *(long **)(unaff_x21 + 0x58);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x398))(plVar2,*(undefined8 *)(*plVar2 + 0x3a0));
    plVar4 = plVar2;
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(plVar2,plVar4);
  }
  FUN_041d4560(plVar1,plVar4,0);
  plVar2 = *(long **)(unaff_x21 + 0x58);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x398))(plVar2,*(undefined8 *)(*plVar2 + 0x3a0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar2 + 0x198))(plVar2,plVar1,*(undefined8 *)(*plVar2 + 0x1a0));
  FUN_041c73ec();
  lVar5 = *plVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_022d0bd8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d0bd8:
  (*(code *)*puVar3)(plVar1,puVar3[1]);
  return;
}


