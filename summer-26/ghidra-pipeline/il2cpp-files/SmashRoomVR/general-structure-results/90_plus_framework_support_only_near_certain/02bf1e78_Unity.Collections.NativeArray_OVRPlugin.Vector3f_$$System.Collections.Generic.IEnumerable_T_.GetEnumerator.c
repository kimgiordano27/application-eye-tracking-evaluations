/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 02bf1e78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_01ae9f78();
      goto LAB_02bf1f18;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar1 != param_3);
                    /* try { // try from 02bf1f0c to 02cf1f13 has its CatchHandler @ 02bf2024 */
                    /* try { // try from 02bf1f14 to 02cf2003 has its CatchHandler @ 02bf1cfc */
  puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
LAB_02bf1f18:
  iVar2 = (*(code *)*puVar3)();
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar2 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ae9e74();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ae9e74();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x10));
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ae9e74();
  }
  uVar4 = FUN_01b47fd0(lVar5,iVar2);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x10),uVar4);
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ae9e74(lVar5);
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_02bf2024;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_02bf2024:
  (*(code *)*puVar3)();
  *(int *)(unaff_x19 + 0x18) = iVar2;
  return;
}


