/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 017d3f28
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_0103c348();
      goto LAB_017d3fbc;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar1 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
LAB_017d3fbc:
  iVar3 = (*(code *)*puVar4)();
  if (0 < iVar3) {
    FUN_017d3600();
    iVar2 = (int)unaff_x19[3] - unaff_w21;
    if (iVar2 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
      FUN_01d6ade4(unaff_x19[2],unaff_w21,unaff_x19[2],iVar3 + unaff_w21,iVar2,0);
    }
    if (unaff_x19 == unaff_x23) {
      FUN_01d6ade4(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
      FUN_01d6ade4(unaff_x19[2],iVar3 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                   (int)unaff_x19[3] - unaff_w21,0);
    }
    else {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244(lVar5);
      }
      lVar6 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_017d40cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348();
LAB_017d40cc:
      (*(code *)*puVar4)();
    }
    *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar3;
  }
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


