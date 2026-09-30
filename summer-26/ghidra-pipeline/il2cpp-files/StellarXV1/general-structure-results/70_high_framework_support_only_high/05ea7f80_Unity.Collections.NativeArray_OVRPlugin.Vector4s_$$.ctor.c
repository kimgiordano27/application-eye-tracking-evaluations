/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 05ea7f80
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(ushort *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
  puVar4 = PTR_DAT_09285980;
  uVar10 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x70);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
  }
  uVar10 = FUN_0768890c(uVar10,0);
  uVar5 = FUN_0768890c(*(long *)(puVar4 + 0x88) + 0x20,0);
  uVar6 = FUN_07691f40(uVar10,uVar5,0);
  plVar11 = (long *)*unaff_x20;
  if ((uVar6 & 1) == 0) {
    if (plVar11 == (long *)0x0) goto LAB_05ea8248;
  }
  else {
    if (plVar11 == (long *)0x0) {
LAB_05ea8248:
      uVar9 = 0;
      lVar7 = 0;
      goto LAB_05ea8250;
    }
    if (*plVar11 == *(long *)(puVar4 + 0x90)) {
      lVar7 = FUN_074e3264(plVar11,0);
      lVar8 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(uint *)(plVar11 + 2);
      uVar3 = *(ushort *)(lVar8 + 0x135);
      if ((uVar3 & 1) == 0) {
        FUN_040b1acc(lVar8);
        lVar8 = *(long *)(unaff_x19 + 0x20);
        uVar3 = *(ushort *)(lVar8 + 0x135);
      }
      uVar1 = *(uint *)(unaff_x20 + 1);
      uVar9 = *(uint *)((long)unaff_x20 + 0xc);
      if ((uVar3 & 1) == 0) {
        lVar8 = FUN_040b1acc(lVar8);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0xb0);
      if ((uVar2 < uVar1) || (uVar2 - uVar1 < uVar9)) {
        FUN_0769a508(0);
      }
      if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      lVar7 = lVar7 + (long)(int)uVar1 * 8;
      goto LAB_05ea8250;
    }
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(uint *)(unaff_x20 + 1);
  uVar9 = *(uint *)((long)unaff_x20 + 0xc);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc();
  }
  lVar7 = **(long **)(lVar7 + 0xc0);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_040b1acc(lVar7);
  }
  lVar8 = thunk_FUN_040b4e00(plVar11,lVar7);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(plVar11,lVar7);
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  uVar9 = uVar9 & 0x7fffffff;
  if ((*(uint *)(lVar8 + 0x18) < uVar2) || (*(uint *)(lVar8 + 0x18) - uVar2 < uVar9)) {
    FUN_0769a508(0);
  }
  lVar7 = lVar8 + (long)(int)uVar2 * 8 + 0x20;
LAB_05ea8250:
  auVar12._8_4_ = uVar9;
  auVar12._0_8_ = lVar7;
  auVar12._12_4_ = 0;
  return auVar12;
}


