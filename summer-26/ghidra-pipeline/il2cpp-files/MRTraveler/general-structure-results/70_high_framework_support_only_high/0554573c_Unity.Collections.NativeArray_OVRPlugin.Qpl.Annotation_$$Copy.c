/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 0554573c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (void *param_1,undefined8 param_2,size_t param_3)

{
  long lVar1;
  int in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  void *unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if (-1 < in_w8) {
    unaff_x23 = (void *)(unaff_x29 + -0x30);
  }
  memcpy(param_1,unaff_x23,param_3);
  lVar2 = *(long *)(unaff_x25 + 0xc0);
  lVar1 = *(long *)(lVar2 + 0x58);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244(lVar1);
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0);
  }
  if (-1 < *(int *)(*(long *)(lVar2 + 0x18) + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar1) {
        lVar1 = lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138;
        goto LAB_055457d4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_03cf1348();
LAB_055457d4:
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x19;
  (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(char *)(unaff_x29 + -0x18) != '\0');
}


