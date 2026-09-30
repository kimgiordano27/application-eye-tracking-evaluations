/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 041a3144
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
                    /* try { // try from 041a3158 to 042a31b7 has its CatchHandler @ 041a32c0 */
  iVar1 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar4 + 0xb8);
    LeanTween__value((undefined8 *)(unaff_x19 + 0x10));
    return;
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  uVar2 = FUN_02d966a4(lVar4,iVar1);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x10),uVar2);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_041a326c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02dd004c();
LAB_041a326c:
  (*(code *)*puVar3)();
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}


