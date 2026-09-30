/*
FUNCTION_NAME: System.Array.InternalEnumerator<UnitySynchronizationContext.WorkRequest>$$.ctor
ENTRY_POINT: 02eabbcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02eabce8) */

uint System_Array_InternalEnumerator<UnitySynchronizationContext_WorkRequest>___ctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long *unaff_x23;
  
code_r0x02eabbcc:
  puVar2 = (undefined8 *)FUN_01ecb238();
  do {
    (*(code *)*puVar2)();
    uVar3 = FUN_02ea9df0();
    if ((uVar3 & 1) != 0) {
      uVar1 = unaff_w22;
      if (unaff_x19 == (long *)0x0) goto LAB_02eabc90;
LAB_02eabc30:
      unaff_w22 = uVar1;
      lVar5 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_02eabc68;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02eabb68;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02eabb68:
    unaff_w22 = (*(code *)*puVar2)();
    if ((unaff_w22 & 1) == 0) {
      unaff_w22 = 0;
      uVar1 = 0;
      if (unaff_x19 != (long *)0x0) goto LAB_02eabc30;
      goto LAB_02eabc90;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 == 0) goto code_r0x02eabbcc;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != lVar5) {
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
      if (uVar3 == 0) goto code_r0x02eabbcc;
    }
    puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_02eabc84;
    }
  }
LAB_02eabc68:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02eabc84:
  (*(code *)*puVar2)();
LAB_02eabc90:
  return unaff_w22 & 1;
}


