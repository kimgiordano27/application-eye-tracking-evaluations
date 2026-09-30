/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 0417a01c
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals(int param_1)

{
  int iVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  
  if (in_NG == in_OV) {
    FUN_0417944c();
    iVar1 = (int)unaff_x19[3] - unaff_w21;
    if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
      FUN_0562505c(unaff_x19[2],unaff_w21,unaff_x19[2],param_1 + unaff_w21,iVar1,0);
    }
    if (unaff_x19 == unaff_x23) {
      FUN_0562505c(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
      FUN_0562505c(unaff_x19[2],param_1 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                   (int)unaff_x19[3] - unaff_w21,0);
    }
    else {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768(lVar3);
      }
      lVar4 = *unaff_x23;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_0417a11c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0417a11c:
      (*(code *)*puVar2)();
    }
    *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + param_1;
  }
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


