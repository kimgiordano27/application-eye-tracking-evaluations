/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Allocate
ENTRY_POINT: 03cb8974
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Allocate(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  while ((uint)unaff_x22 < in_w9) {
    if (unaff_x20 == 0) goto LAB_03cb8a6c;
    puVar1 = (undefined8 *)(param_1 + unaff_x24);
    in_stack_00000088 = puVar1[1];
    in_stack_00000080 = *puVar1;
    in_stack_00000098 = puVar1[3];
    in_stack_00000090 = puVar1[2];
    in_stack_000000a8 = puVar1[5];
    in_stack_000000a0 = puVar1[4];
    in_stack_000000b8 = puVar1[7];
    in_stack_000000b0 = puVar1[6];
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar3 = *(int *)(unaff_x19 + 0x18);
    if ((uVar4 & 1) == 0) {
LAB_03cb89cc:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar3) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_03cb8a6c;
        if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21)) break;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x40);
        puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x40);
        uVar9 = puVar1[4];
        uVar8 = puVar1[7];
        uVar7 = puVar1[6];
        uVar11 = puVar1[1];
        uVar10 = *puVar1;
        uVar13 = puVar1[3];
        uVar12 = puVar1[2];
        unaff_w21 = unaff_w21 + 1;
        puVar2[5] = puVar1[5];
        puVar2[4] = uVar9;
        puVar2[7] = uVar8;
        puVar2[6] = uVar7;
        puVar2[1] = uVar11;
        *puVar2 = uVar10;
        puVar2[3] = uVar13;
        puVar2[2] = uVar12;
        iVar3 = *(int *)(unaff_x19 + 0x18);
        uVar6 = uVar6 + 1;
      }
      if (iVar3 <= (int)uVar6) {
        Newtonsoft_Json_Linq_JObject__LoadAsync
                  (*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar3 - unaff_w21,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - unaff_w21;
      }
      unaff_x22 = (long)(int)uVar6;
      unaff_x24 = unaff_x23 | unaff_x22 << 6;
    }
    else {
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x40;
      if (iVar3 <= unaff_x22) goto LAB_03cb89cc;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_03cb8a6c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_w9 = *(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


