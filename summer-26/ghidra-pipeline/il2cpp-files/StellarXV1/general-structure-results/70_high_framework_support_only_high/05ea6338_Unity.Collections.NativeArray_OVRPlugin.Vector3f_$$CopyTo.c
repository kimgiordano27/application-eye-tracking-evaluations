/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyTo
ENTRY_POINT: 05ea6338
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyTo(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar8;
  long unaff_x22;
  undefined1 auVar9 [16];
  
  FUN_0768890c(param_1 + 0x20);
  uVar4 = FUN_07691f40();
  plVar8 = (long *)*unaff_x20;
  if ((uVar4 & 1) == 0) {
    if (plVar8 == (long *)0x0) goto LAB_05ea65b8;
  }
  else {
    if (plVar8 == (long *)0x0) {
LAB_05ea65b8:
      uVar7 = 0;
      lVar5 = 0;
      goto LAB_05ea65c0;
    }
    if (*plVar8 == *(long *)(unaff_x22 + 0x90)) {
      lVar5 = FUN_074e3264(plVar8,0);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(uint *)(plVar8 + 2);
      uVar3 = *(ushort *)(lVar6 + 0x135);
      if ((uVar3 & 1) == 0) {
        FUN_040b1acc(lVar6);
        lVar6 = *(long *)(unaff_x19 + 0x20);
        uVar3 = *(ushort *)(lVar6 + 0x135);
      }
      uVar1 = *(uint *)(unaff_x20 + 1);
      uVar7 = *(uint *)((long)unaff_x20 + 0xc);
      if ((uVar3 & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0xb0);
      if ((uVar2 < uVar1) || (uVar2 - uVar1 < uVar7)) {
        FUN_0769a508(0);
      }
      if ((*(ushort *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      lVar5 = lVar5 + (int)uVar1;
      goto LAB_05ea65c0;
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(uint *)(unaff_x20 + 1);
  uVar7 = *(uint *)((long)unaff_x20 + 0xc);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc();
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  lVar6 = thunk_FUN_040b4e00(plVar8,lVar5);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(plVar8,lVar5);
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  uVar7 = uVar7 & 0x7fffffff;
  if ((*(uint *)(lVar6 + 0x18) < uVar2) || (*(uint *)(lVar6 + 0x18) - uVar2 < uVar7)) {
    FUN_0769a508(0);
  }
  lVar5 = lVar6 + (int)uVar2 + 0x20;
LAB_05ea65c0:
  auVar9._8_4_ = uVar7;
  auVar9._0_8_ = lVar5;
  auVar9._12_4_ = 0;
  return auVar9;
}


