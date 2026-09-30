/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 039a7990
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe
              (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
              undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  
  uStack0000000000000018 = param_3._8_8_;
  uStack0000000000000010 = param_3._0_8_;
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  do {
    uStack0000000000000020 = param_1[4];
    uStack0000000000000060 = uStack0000000000000000;
    uStack0000000000000068 = uStack0000000000000008;
    uStack0000000000000070 = uStack0000000000000010;
    uStack0000000000000078 = uStack0000000000000018;
    uStack0000000000000080 = uStack0000000000000020;
    uVar2 = (*in_x9)(param_4,&stack0x00000060,*(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar2 & 1) == 0) {
LAB_039a79cc:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar1) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) {
LAB_039a7a64:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((*(uint *)(lVar4 + 0x18) <= uVar6) || (*(uint *)(lVar4 + 0x18) <= unaff_w21))
        goto LAB_039a7a68;
        puVar5 = (undefined8 *)(lVar4 + 0x20 + (long)(int)uVar6 * (long)unaff_w23);
        puVar3 = (undefined8 *)(lVar4 + 0x20 + (long)(int)unaff_w21 * (long)unaff_w23);
        unaff_w21 = unaff_w21 + 1;
        uVar10 = puVar5[1];
        uVar9 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar3[4] = puVar5[4];
        puVar3[1] = uVar10;
        *puVar3 = uVar9;
        puVar3[3] = uVar8;
        puVar3[2] = uVar7;
        thunk_FUN_02bb0e9c(puVar3,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        uVar6 = uVar6 + 1;
      }
      if (iVar1 <= (int)uVar6) {
        FUN_04d9e084(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
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
      unaff_x24 = unaff_x24 + 0x28;
      if (iVar1 <= unaff_x22) goto LAB_039a79cc;
    }
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_039a7a64;
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) {
LAB_039a7a68:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x20 == 0) goto LAB_039a7a64;
    param_1 = (undefined8 *)(lVar4 + unaff_x24);
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_4 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack0000000000000008 = param_1[1];
    uStack0000000000000000 = *param_1;
    uStack0000000000000018 = param_1[3];
    uStack0000000000000010 = param_1[2];
  } while( true );
}


