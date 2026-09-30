/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_Length
ENTRY_POINT: 03cb56b4
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_Length(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
  }
  lVar5 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03cb5794;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0(param_1,lVar4,0);
LAB_03cb5794:
  iVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (0 < iVar2) {
    FUN_03cb4b24();
    iVar1 = (int)unaff_x19[3] - unaff_w21;
    if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
      FUN_050f7d68(unaff_x19[2],unaff_w21,unaff_x19[2],iVar2 + unaff_w21,iVar1,0);
    }
    lVar4 = unaff_x19[2];
    if (param_1 == unaff_x19) {
      FUN_050f7d68(lVar4,0,lVar4,unaff_w21,unaff_w21,0);
      FUN_050f7d68(unaff_x19[2],iVar2 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                   (int)unaff_x19[3] - unaff_w21,0);
    }
    else {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c(lVar5);
      }
      lVar6 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_03cb58a8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(param_1,lVar5,5);
LAB_03cb58a8:
      (*(code *)*puVar3)(param_1,lVar4,unaff_w21,puVar3[1]);
    }
    *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar2;
  }
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


