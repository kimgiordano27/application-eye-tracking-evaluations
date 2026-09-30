/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0418b79c
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 0418b7b0 to 0428b7c7 has its CatchHandler @ 0418b800 */
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0418b854;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
                    /* try { // try from 0418b7c8 to 0428b7ef has its CatchHandler @ 0418b738 */
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0418b854:
  iVar1 = (*(code *)*puVar2)();
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar4 + 0xb8);
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x10));
    return;
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768();
  }
  uVar3 = FUN_02f07f14(lVar4,iVar1);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x10),uVar3);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_0418b960;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0418b960:
  (*(code *)*puVar2)();
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}


