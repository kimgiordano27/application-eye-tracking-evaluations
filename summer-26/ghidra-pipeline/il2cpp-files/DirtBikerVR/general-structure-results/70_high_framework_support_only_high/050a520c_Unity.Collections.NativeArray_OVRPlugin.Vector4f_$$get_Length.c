/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_Length
ENTRY_POINT: 050a520c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Length
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
                    /* try { // try from 050a5210 to 051a5227 has its CatchHandler @ 050a5294 */
  uStack0000000000000080 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000090 = 0;
  if (param_1 == 0) {
LAB_050a5454:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar2 = param_4 + -1;
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar3 = iVar2 + param_2;
  if (uVar3 < uVar6) {
    lVar8 = param_1 + (long)(int)uVar3 * 0x18;
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    uStack0000000000000088 = *(undefined8 *)(lVar8 + 0x28);
    uStack0000000000000080 = *(undefined8 *)(lVar8 + 0x20);
    uStack0000000000000090 = *(undefined8 *)(lVar8 + 0x30);
    if ((int)param_2 <= iVar1 >> 1) {
      do {
        uVar6 = param_2 * 2;
        uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
        if ((int)uVar6 < param_3) {
          uVar3 = uVar6 + param_4;
          if ((uVar5 <= uVar3 - 1) || (uVar5 <= uVar3)) goto LAB_050a5450;
          if (param_5 == 0) goto LAB_050a5454;
          lVar8 = param_1 + (long)(int)(uVar3 - 1) * 0x18;
          lVar9 = param_1 + (long)(int)uVar3 * 0x18;
          uVar12 = *(undefined8 *)(lVar8 + 0x28);
          uVar11 = *(undefined8 *)(lVar8 + 0x20);
          uVar7 = *(undefined8 *)(lVar8 + 0x30);
          uVar14 = *(undefined8 *)(lVar9 + 0x28);
          uVar13 = *(undefined8 *)(lVar9 + 0x20);
          uVar10 = *(undefined8 *)(lVar9 + 0x30);
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          in_stack_000000a0 = uVar13;
          in_stack_000000a8 = uVar14;
          in_stack_000000b0 = uVar10;
          in_stack_000000c0 = uVar11;
          in_stack_000000c8 = uVar12;
          in_stack_000000d0 = uVar7;
          uVar3 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),&stack0x000000c0,&stack0x000000a0,
                             *(undefined8 *)(param_5 + 0x28));
          uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
          uVar6 = uVar6 | uVar3 >> 0x1f;
        }
        uVar3 = iVar2 + uVar6;
        if (uVar5 <= uVar3) goto LAB_050a5450;
        if (param_5 == 0) goto LAB_050a5454;
        lVar8 = param_1 + (long)(int)uVar3 * 0x18;
        uVar11 = *(undefined8 *)(lVar8 + 0x28);
        uVar10 = *(undefined8 *)(lVar8 + 0x20);
        uVar7 = *(undefined8 *)(lVar8 + 0x30);
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        in_stack_000000d0 = uStack0000000000000090;
        in_stack_000000c8 = uStack0000000000000088;
        in_stack_000000c0 = uStack0000000000000080;
        in_stack_000000a0 = uVar10;
        in_stack_000000a8 = uVar11;
        in_stack_000000b0 = uVar7;
        iVar4 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x000000c0,&stack0x000000a0,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar4) {
          uVar3 = iVar2 + param_2;
          break;
        }
        if ((*(uint *)(param_1 + 0x18) <= uVar3) ||
           (param_2 = iVar2 + param_2, *(uint *)(param_1 + 0x18) <= param_2)) goto LAB_050a5450;
        lVar9 = param_1 + (long)(int)param_2 * 0x18;
        uVar10 = *(undefined8 *)(lVar8 + 0x28);
        uVar7 = *(undefined8 *)(lVar8 + 0x20);
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
        *(undefined8 *)(lVar9 + 0x28) = uVar10;
        *(undefined8 *)(lVar9 + 0x20) = uVar7;
        thunk_FUN_03afed3c(param_1 + (long)(int)param_2 * 0x18 + 0x28,0);
        param_2 = uVar6;
      } while ((int)uVar6 <= iVar1 >> 1);
      uVar6 = *(uint *)(param_1 + 0x18);
    }
    if (uVar3 < uVar6) {
      param_1 = param_1 + (long)(int)uVar3 * 0x18;
      *(undefined8 *)(param_1 + 0x28) = uStack0000000000000088;
      *(undefined8 *)(param_1 + 0x20) = uStack0000000000000080;
      *(undefined8 *)(param_1 + 0x30) = uStack0000000000000090;
      thunk_FUN_03afed3c(param_1 + 0x28,0);
      return;
    }
  }
LAB_050a5450:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


