/*
FUNCTION_NAME: System.Collections.Generic.Comparer<DrawingData.SubmittedMesh>$$System.Collections.IComparer.Compare
ENTRY_POINT: 0292bee4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0292c06c) */
/* WARNING: Removing unreachable block (ram,0x0292c01c) */
/* WARNING: Removing unreachable block (ram,0x0292c04c) */

void System_Collections_Generic_Comparer<DrawingData_SubmittedMesh>__System_Collections_IComparer_Compare
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
code_r0x0292bee4:
  if (!(bool)in_ZR) goto LAB_0292bed0;
LAB_0292bee8:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_0292c010;
LAB_0292bfb0:
      lVar4 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_0292bfe8;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0292bf60;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0292bf60:
    plVar3 = (long *)(*(code *)*puVar1)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    if (lVar4 == unaff_x21) {
      *(int *)(unaff_x19 + 0x38) = (int)plVar3[4];
      if (unaff_x20 != (long *)0x0) goto LAB_0292bfb0;
      goto LAB_0292c010;
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0292bee8;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0292bed0:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x0292bee4;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0292c004;
    }
  }
LAB_0292bfe8:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0292c004:
  (*(code *)*puVar1)();
LAB_0292c010:
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  System_Collections_Generic_List<DrawingData_MeshWithType>__System_Collections_IList_Remove
            (*(long *)(unaff_x19 + 0x40),0,
             *(undefined8 *)Method_System_Linq_Enumerable_Any<InvalidConnection>__);
  return;
}


