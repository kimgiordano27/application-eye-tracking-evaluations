/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 03cc4a28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar3 = FUN_02f41e9c();
  lVar7 = *unaff_x22;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03cc4ad0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_03cc4ad0:
  iVar2 = (*(code *)*puVar4)();
  if (0 < iVar2) {
    FUN_03cc4710();
    iVar5 = (int)unaff_x19[3] - unaff_w20;
    if (iVar5 != 0 && unaff_w20 <= (int)unaff_x19[3]) {
      FUN_050f7d68(unaff_x19[2],unaff_w20,unaff_x19[2],iVar2 + unaff_w20,iVar5,0);
    }
    if (unaff_x22 == unaff_x19) {
      FUN_050f7d68(unaff_x19[2],0,unaff_x19[2],unaff_w20,unaff_w20,0);
      lVar7 = unaff_x19[2];
      iVar1 = unaff_w20 << 1;
      iVar5 = iVar2 + unaff_w20;
      iVar6 = (int)unaff_x19[3] - unaff_w20;
      lVar3 = lVar7;
    }
    else {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c();
      }
      lVar7 = FUN_02f0880c(lVar3,iVar2);
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
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_03cc4d94;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0();
LAB_03cc4d94:
      (*(code *)*puVar4)();
      iVar5 = 0;
      lVar3 = unaff_x19[2];
      iVar1 = unaff_w20;
      iVar6 = iVar2;
    }
    FUN_050f7d68(lVar7,iVar5,lVar3,iVar1,iVar6,0);
    *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar2;
  }
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


