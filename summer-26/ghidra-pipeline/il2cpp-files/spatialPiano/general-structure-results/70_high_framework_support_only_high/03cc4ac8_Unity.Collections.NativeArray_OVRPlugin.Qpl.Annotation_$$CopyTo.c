/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 03cc4ac8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  
  iVar2 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (0 < iVar2) {
    FUN_03cc4710();
    iVar6 = (int)unaff_x19[3] - unaff_w20;
    if (iVar6 != 0 && unaff_w20 <= (int)unaff_x19[3]) {
      FUN_050f7d68(unaff_x19[2],unaff_w20,unaff_x19[2],iVar2 + unaff_w20,iVar6,0);
    }
    if (unaff_x22 == unaff_x19) {
      FUN_050f7d68(unaff_x19[2],0,unaff_x19[2],unaff_w20,unaff_w20,0);
      lVar4 = unaff_x19[2];
      iVar1 = unaff_w20 << 1;
      iVar6 = iVar2 + unaff_w20;
      iVar7 = (int)unaff_x19[3] - unaff_w20;
      lVar3 = lVar4;
    }
    else {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c();
      }
      lVar4 = FUN_02f0880c(lVar3,iVar2);
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c(lVar3);
      }
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_03cc4d94;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0();
LAB_03cc4d94:
      (*(code *)*puVar5)();
      iVar6 = 0;
      lVar3 = unaff_x19[2];
      iVar1 = unaff_w20;
      iVar7 = iVar2;
    }
    FUN_050f7d68(lVar4,iVar6,lVar3,iVar1,iVar7,0);
    *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar2;
  }
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


