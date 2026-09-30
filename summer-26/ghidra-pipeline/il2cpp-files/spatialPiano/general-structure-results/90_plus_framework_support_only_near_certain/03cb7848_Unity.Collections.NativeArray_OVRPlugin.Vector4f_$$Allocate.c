/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Allocate
ENTRY_POINT: 03cb7848
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Allocate(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  while( true ) {
    uStack0000000000000008 = param_1[1];
    uStack0000000000000000 = *param_1;
    uStack0000000000000018 = param_1[3];
    uStack0000000000000010 = param_1[2];
    uStack0000000000000028 = param_1[5];
    uStack0000000000000020 = param_1[4];
    uStack0000000000000038 = param_1[7];
    uStack0000000000000030 = param_1[6];
    uStack0000000000000040 = uStack0000000000000000;
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = uStack0000000000000010;
    uStack0000000000000058 = uStack0000000000000018;
    uStack0000000000000060 = uStack0000000000000020;
    uStack0000000000000068 = uStack0000000000000028;
    uStack0000000000000070 = uStack0000000000000030;
    uStack0000000000000078 = uStack0000000000000038;
    uVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x40;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) goto LAB_03cb78d8;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23)
    goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Item;
    if (unaff_x21 == 0) goto LAB_03cb78d8;
    param_1 = (undefined8 *)(lVar3 + unaff_x22);
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    if ((uint)unaff_x23 < *(uint *)(lVar3 + 0x18)) {
      puVar1 = (undefined8 *)(lVar3 + unaff_x22);
      uVar4 = *puVar1;
      uVar6 = puVar1[3];
      uVar5 = puVar1[2];
      unaff_x19[1] = puVar1[1];
      *unaff_x19 = uVar4;
      unaff_x19[3] = uVar6;
      unaff_x19[2] = uVar5;
      uVar4 = puVar1[4];
      uVar6 = puVar1[7];
      uVar5 = puVar1[6];
      unaff_x19[5] = puVar1[5];
      unaff_x19[4] = uVar4;
      unaff_x19[7] = uVar6;
      unaff_x19[6] = uVar5;
      return;
    }
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Item:
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_03cb78d8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


