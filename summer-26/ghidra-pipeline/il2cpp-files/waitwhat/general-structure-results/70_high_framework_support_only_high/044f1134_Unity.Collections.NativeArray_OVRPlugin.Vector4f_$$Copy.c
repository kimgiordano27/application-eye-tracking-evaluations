/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 044f1134
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy
              (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  code *in_x9;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  do {
    uStack0000000000000010 = param_1;
    uStack0000000000000040 = uStack0000000000000000;
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = param_1;
    uVar2 = (*in_x9)(param_3,param_4,*(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar2 & 1) == 0) {
LAB_044f1168:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar1) {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) {
LAB_044f11f8:
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if ((*(uint *)(lVar3 + 0x18) <= uVar6) || (*(uint *)(lVar3 + 0x18) <= unaff_w21))
        goto LAB_044f11fc;
        puVar5 = (undefined8 *)(lVar3 + 0x20 + (long)(int)uVar6 * (long)unaff_w23);
        puVar4 = (undefined8 *)(lVar3 + 0x20 + (long)(int)unaff_w21 * (long)unaff_w23);
        unaff_w21 = unaff_w21 + 1;
        uVar8 = puVar5[1];
        uVar7 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar8;
        *puVar4 = uVar7;
        iVar1 = *(int *)(unaff_x19 + 0x18);
        uVar6 = uVar6 + 1;
      }
      if (iVar1 <= (int)uVar6) {
        FUN_0595236c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - unaff_w21;
      }
      unaff_x22 = (long)(int)uVar6;
      unaff_x24 = (long)(int)uVar6 * (long)unaff_w23 + 0x20;
    }
    else {
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x18;
      if (iVar1 <= unaff_x22) goto LAB_044f1168;
    }
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_044f11f8;
    if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) {
LAB_044f11fc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (unaff_x20 == 0) goto LAB_044f11f8;
    puVar4 = (undefined8 *)(lVar3 + unaff_x24);
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_3 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack0000000000000008 = puVar4[1];
    uStack0000000000000000 = *puVar4;
    param_1 = puVar4[2];
    param_4 = (undefined1 *)&stack0x00000040;
  } while( true );
}


