/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<RaycastHit2D>$$.ctor
ENTRY_POINT: 02561f00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void System_Collections_ObjectModel_ReadOnlyCollection<RaycastHit2D>___ctor(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xdcf) = in_w8;
  FUN_01bc52e4();
  plVar1 = (long *)thunk_FUN_01ee7388();
  if (*plVar1 == 0) {
    return;
  }
  puVar2 = (undefined8 *)thunk_FUN_01ee7388();
  plVar1 = (long *)*puVar2;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto System_Collections_ObjectModel_ReadOnlyCollection<RaycastHit2D>__get_Item;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
System_Collections_ObjectModel_ReadOnlyCollection<RaycastHit2D>__get_Item:
                    /* WARNING: Could not recover jumptable at 0x02561fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


