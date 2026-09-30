/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$set_Item
ENTRY_POINT: 05ea7150
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4f>__set_Item(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  uint uVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x22;
  undefined1 auVar11 [16];
  
  uVar9 = *(undefined8 *)(in_x9 + 0x70);
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(unaff_x22 + 0xe0));
  }
  uVar9 = FUN_0768890c(uVar9,0);
  uVar4 = FUN_0768890c(*(long *)(unaff_x22 + 0x88) + 0x20,0);
  uVar5 = FUN_07691f40(uVar9,uVar4,0);
  plVar10 = (long *)*unaff_x20;
  if ((uVar5 & 1) == 0) {
    if (plVar10 == (long *)0x0) goto LAB_05ea7400;
  }
  else {
    if (plVar10 == (long *)0x0) {
LAB_05ea7400:
      uVar8 = 0;
      lVar6 = 0;
      goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo;
    }
    if (*plVar10 == *(long *)(unaff_x22 + 0x90)) {
      lVar6 = FUN_074e3264(plVar10,0);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(uint *)(plVar10 + 2);
      uVar3 = *(ushort *)(lVar7 + 0x135);
      if ((uVar3 & 1) == 0) {
        FUN_040b1acc(lVar7);
        lVar7 = *(long *)(unaff_x19 + 0x20);
        uVar3 = *(ushort *)(lVar7 + 0x135);
      }
      uVar1 = *(uint *)(unaff_x20 + 1);
      uVar8 = *(uint *)((long)unaff_x20 + 0xc);
      if ((uVar3 & 1) == 0) {
        lVar7 = FUN_040b1acc(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xb0);
      if ((uVar2 < uVar1) || (uVar2 - uVar1 < uVar8)) {
        FUN_0769a508(0);
      }
      if ((*(ushort *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      lVar6 = lVar6 + (long)(int)uVar1 * 2;
      goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo;
    }
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(uint *)(unaff_x20 + 1);
  uVar8 = *(uint *)((long)unaff_x20 + 0xc);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar7 = thunk_FUN_040b4e00(plVar10,lVar6);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(plVar10,lVar6);
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  uVar8 = uVar8 & 0x7fffffff;
  if ((*(uint *)(lVar7 + 0x18) < uVar2) || (*(uint *)(lVar7 + 0x18) - uVar2 < uVar8)) {
    FUN_0769a508(0);
  }
  lVar6 = lVar7 + (long)(int)uVar2 * 2 + 0x20;
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo:
  auVar11._8_4_ = uVar8;
  auVar11._0_8_ = lVar6;
  auVar11._12_4_ = 0;
  return auVar11;
}


