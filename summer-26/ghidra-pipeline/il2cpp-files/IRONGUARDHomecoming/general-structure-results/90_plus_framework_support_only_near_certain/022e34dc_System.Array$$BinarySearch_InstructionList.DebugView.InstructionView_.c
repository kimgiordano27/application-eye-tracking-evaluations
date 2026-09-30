/*
FUNCTION_NAME: System.Array$$BinarySearch<InstructionList.DebugView.InstructionView>
ENTRY_POINT: 022e34dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x022e366c) */

byte System_Array__BinarySearch<InstructionList_DebugView_InstructionView>(void)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  
  lVar4 = **(long **)(unaff_x20 + 0x38);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_022e3540;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022e3540:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_022e35a8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_022e35a8:
  bVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
  iVar5 = 6;
  if ((bVar1 & 1) == 0) {
    iVar5 = 7;
  }
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022e3620;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022e3620:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  return iVar5 == 6 & bVar1;
}


