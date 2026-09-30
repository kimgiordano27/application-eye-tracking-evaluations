/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_IsCreated
ENTRY_POINT: 050a0f80
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_IsCreated
               (undefined8 param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  int unaff_w23;
  uint unaff_w24;
  uint uVar6;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  do {
    unaff_w28 = unaff_w28 | param_2 >> 0x1f;
    uVar6 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar7 = unaff_w25 + unaff_w24;
      if ((uint)param_1 <= uVar7) goto LAB_050a107c;
      if (unaff_x21 == 0) goto LAB_050a1080;
      lVar5 = unaff_x19 + (long)(int)uVar7 * (long)unaff_w26;
      uVar8 = *(undefined8 *)(lVar5 + 0x28);
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      uVar4 = *(undefined8 *)(lVar5 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = in_stack_00000070;
      in_stack_00000090 = uVar3;
      in_stack_00000098 = uVar8;
      in_stack_000000a0 = uVar4;
      iVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar1) {
        uVar7 = unaff_w25 + uVar6;
LAB_050a1034:
        if (uVar7 < *(uint *)(unaff_x19 + 0x18)) {
          lVar5 = unaff_x19 + (long)(int)uVar7 * 0x18;
          *(undefined8 *)(lVar5 + 0x28) = in_stack_00000078;
          *(undefined8 *)(lVar5 + 0x20) = in_stack_00000070;
          *(undefined8 *)(lVar5 + 0x30) = in_stack_00000080;
          return;
        }
        goto LAB_050a107c;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar7) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar6)) goto LAB_050a107c;
      lVar2 = unaff_x19 + (long)(int)(unaff_w25 + uVar6) * (long)unaff_w26;
      uVar3 = *(undefined8 *)(lVar5 + 0x28);
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      if (unaff_w27 < (int)unaff_w24) goto LAB_050a1034;
      unaff_w28 = unaff_w24 * 2;
      param_1 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar6 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    uVar6 = unaff_w28 + in_stack_00000008._4_4_;
    if (((uint)param_1 <= uVar6 - 1) || ((uint)param_1 <= uVar6)) {
LAB_050a107c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x21 == 0) {
LAB_050a1080:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = unaff_x19 + (long)(int)(uVar6 - 1) * (long)unaff_w26;
    lVar2 = unaff_x19 + (long)(int)uVar6 * (long)unaff_w26;
    uVar9 = *(undefined8 *)(lVar5 + 0x28);
    uVar8 = *(undefined8 *)(lVar5 + 0x20);
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
    uVar11 = *(undefined8 *)(lVar2 + 0x28);
    uVar10 = *(undefined8 *)(lVar2 + 0x20);
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    in_stack_00000090 = uVar10;
    in_stack_00000098 = uVar11;
    in_stack_000000a0 = uVar3;
    in_stack_000000b0 = uVar8;
    in_stack_000000b8 = uVar9;
    in_stack_000000c0 = uVar4;
    param_2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                         *(undefined8 *)(unaff_x21 + 0x28));
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
  } while( true );
}


