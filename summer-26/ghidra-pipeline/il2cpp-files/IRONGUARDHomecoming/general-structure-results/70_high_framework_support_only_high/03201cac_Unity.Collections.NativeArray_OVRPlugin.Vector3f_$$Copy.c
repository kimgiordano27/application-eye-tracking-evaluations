/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 03201cac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined1 auVar4 [16];
  
  do {
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + 0x20),
                       *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) {
LAB_03201d18:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) {
LAB_03201d1c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar2 = *(undefined8 *)(lVar3 + unaff_x21 + 0x20);
      uVar1 = (ulong)*(uint *)(lVar3 + unaff_x21 + 0x28);
LAB_03201d08:
      auVar4._8_8_ = uVar1;
      auVar4._0_8_ = uVar2;
      return auVar4;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0xc;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x22) {
      uVar2 = 0;
      uVar1 = 0;
      goto LAB_03201d08;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_03201d18;
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) goto LAB_03201d1c;
    if (unaff_x20 == 0) goto LAB_03201d18;
    param_1 = param_1 + unaff_x21;
  } while( true );
}


