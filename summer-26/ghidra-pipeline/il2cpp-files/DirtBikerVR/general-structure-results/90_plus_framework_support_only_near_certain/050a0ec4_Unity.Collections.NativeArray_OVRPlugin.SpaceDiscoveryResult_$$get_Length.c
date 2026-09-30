/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 050a0ec4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Length(void)

{
  char in_NG;
  char in_OV;
  uint uVar1;
  int iVar2;
  int in_w3;
  long in_x4;
  long in_x5;
  uint in_w8;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_x9;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint uVar8;
  uint unaff_w29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  uStack0000000000000080 = in_x9;
  if (in_NG == in_OV) {
    do {
      uVar8 = unaff_w24 * 2;
      uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      if ((int)uVar8 < unaff_w23) {
        uVar1 = uVar8 + in_w3;
        if ((uVar3 <= uVar1 - 1) || (uVar3 <= uVar1)) goto LAB_050a107c;
        if (in_x4 == 0) goto LAB_050a1080;
        lVar4 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
        lVar6 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
        uVar10 = *(undefined8 *)(lVar4 + 0x28);
        uVar9 = *(undefined8 *)(lVar4 + 0x20);
        uVar5 = *(undefined8 *)(lVar4 + 0x30);
        uVar12 = *(undefined8 *)(lVar6 + 0x28);
        uVar11 = *(undefined8 *)(lVar6 + 0x20);
        uVar7 = *(undefined8 *)(lVar6 + 0x30);
        if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        in_stack_00000090 = uVar11;
        in_stack_00000098 = uVar12;
        in_stack_000000a0 = uVar7;
        in_stack_000000b0 = uVar9;
        in_stack_000000b8 = uVar10;
        in_stack_000000c0 = uVar5;
        uVar1 = (**(code **)(in_x4 + 0x18))
                          (*(undefined8 *)(in_x4 + 0x40),&stack0x000000b0,&stack0x00000090,
                           *(undefined8 *)(in_x4 + 0x28));
        uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
        uVar8 = uVar8 | uVar1 >> 0x1f;
      }
      unaff_w29 = unaff_w25 + uVar8;
      if (uVar3 <= unaff_w29) goto LAB_050a107c;
      if (in_x4 == 0) {
LAB_050a1080:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_000000c0 = uStack0000000000000080;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = in_stack_00000070;
      in_stack_00000090 = uVar7;
      in_stack_00000098 = uVar9;
      in_stack_000000a0 = uVar5;
      iVar2 = (**(code **)(in_x4 + 0x18))
                        (*(undefined8 *)(in_x4 + 0x40),&stack0x000000b0,&stack0x00000090,
                         *(undefined8 *)(in_x4 + 0x28));
      if (-1 < iVar2) {
        unaff_w29 = unaff_w25 + unaff_w24;
        break;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24)) goto LAB_050a107c;
      lVar6 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * (long)unaff_w26;
      uVar7 = *(undefined8 *)(lVar4 + 0x28);
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      *(undefined8 *)(lVar6 + 0x20) = uVar5;
      unaff_w24 = uVar8;
    } while ((int)uVar8 <= unaff_w27);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w29 < in_w8) {
    lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000078;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000070;
    *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000080;
    return;
  }
LAB_050a107c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


