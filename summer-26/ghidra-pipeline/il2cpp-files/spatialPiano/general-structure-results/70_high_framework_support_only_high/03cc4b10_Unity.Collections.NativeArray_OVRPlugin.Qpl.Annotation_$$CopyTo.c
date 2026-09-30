/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 03cc4b10
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 in_x4;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  
  FUN_050f7d68(unaff_x19[2],unaff_w20,unaff_x19[2],unaff_w23 + unaff_w20,in_x4,0);
  if (unaff_x22 == unaff_x19) {
    FUN_050f7d68(unaff_x19[2],0,unaff_x19[2],unaff_w20,unaff_w20,0);
    lVar4 = unaff_x19[2];
    iVar1 = unaff_w20 << 1;
    iVar6 = unaff_w23 + unaff_w20;
    iVar2 = (int)unaff_x19[3] - unaff_w20;
    lVar3 = lVar4;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar4 = FUN_02f0880c(lVar3,unaff_w23);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    lVar7 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_03cc4d94;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0();
LAB_03cc4d94:
    (*(code *)*puVar5)();
    iVar6 = 0;
    lVar3 = unaff_x19[2];
    iVar1 = unaff_w20;
    iVar2 = unaff_w23;
  }
  FUN_050f7d68(lVar4,iVar6,lVar3,iVar1,iVar2,0);
  *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + unaff_w23;
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


