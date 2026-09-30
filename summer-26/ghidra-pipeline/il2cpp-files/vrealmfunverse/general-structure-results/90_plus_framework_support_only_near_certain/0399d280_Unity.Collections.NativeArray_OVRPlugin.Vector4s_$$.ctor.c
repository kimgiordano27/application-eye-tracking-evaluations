/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 0399d280
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0399d364;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 0399d2c8 to 03a9d3ef has its CatchHandler @ 0399d2c8
                       catch() { ... } // from try @ 0399d2c8 with catch @ 0399d2c8
                       catch() { ... } // from try @ 0399d564 with catch @ 0399d2c8
                       catch() { ... } // from try @ 0399d5a4 with catch @ 0399d2c8
                       catch() { ... } // from try @ 0399d63c with catch @ 0399d2c8 */
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_0399d364:
  iVar1 = (*(code *)*puVar2)();
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar4 + 0xb8);
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10));
    return;
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  uVar3 = FUN_02b3c908(lVar4,iVar1);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10),uVar3);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_0399d480;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_0399d480:
  (*(code *)*puVar2)();
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}


