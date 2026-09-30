/*
FUNCTION_NAME: OVRTask.CallbackWithState<bool,-OVRSpatialAnchor.InvertedCapture<bool,-OVRSpatialAnchor.UnboundAnchor>>$$Invoke
ENTRY_POINT: 028e08c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x028e09f8) */

void OVRTask_CallbackWithState<bool,_OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor_UnboundAnchor>>__Invoke
               (long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long in_x9;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  if (*(char *)(param_1 + in_x9 * in_x11 + 0x40) == '\0') {
    lVar5 = 0;
  }
  else {
    lVar5 = unaff_x19 - *(long *)(param_1 + in_x9 * 0x28 + 0x20);
  }
  iVar1 = *(int *)(param_1 + in_x9 * 0x28 + 0x44);
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  FUN_0423eb70();
  plVar2 = (long *)FUN_027c4708((double)((float)(lVar5 + (-iVar1 & iVar1 >> 0x1f)) / 1000.0),
                                uStack0000000000000000,uStack0000000000000008,
                                *(undefined8 *)
                                 Method_System_Linq_Enumerable_All<KeyValuePair<TurretType,_TurretBase>>__
                               );
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar2);
  (**(code **)(*unaff_x20 + 0x198))();
  lVar5 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_028e09c4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_028e09c4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


