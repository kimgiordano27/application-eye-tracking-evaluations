/*
FUNCTION_NAME: Meta.Conduit.ConduitUtilities.ProgressDelegate$$Invoke
ENTRY_POINT: 0327f7c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0327f890) */
/* WARNING: Removing unreachable block (ram,0x0327f88c) */
/* WARNING: Removing unreachable block (ram,0x0327f8d0) */

void Meta_Conduit_ConduitUtilities_ProgressDelegate__Invoke(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
code_r0x0327f7c0:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    (*(code *)*puVar1)();
    FUN_0327f200();
    lVar2 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0327f764;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0327f764:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_0327f880;
      lVar2 = *unaff_x23;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_0327f858;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 == 0) goto code_r0x0327f7c0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != lVar2) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto code_r0x0327f7c0;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto Meta_Conduit_ConduitParameterValue___ctor;
    }
  }
LAB_0327f858:
  puVar1 = (undefined8 *)FUN_01ecb238();
Meta_Conduit_ConduitParameterValue___ctor:
  (*(code *)*puVar1)();
LAB_0327f880:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


