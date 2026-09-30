/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 03c690bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item(void)

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
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  do {
    if (unaff_x21 == 0) {
LAB_03c69148:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    in_stack_00000048 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000058 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000010;
    in_stack_00000068 = in_stack_00000028;
    in_stack_00000060 = in_stack_00000020;
    in_stack_00000078 = in_stack_00000038;
    in_stack_00000070 = in_stack_00000030;
    uVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 != 0) {
        if ((uint)unaff_x23 < *(uint *)(lVar3 + 0x18)) {
          puVar1 = (undefined8 *)(lVar3 + unaff_x22);
          uVar6 = puVar1[4];
          uVar5 = puVar1[7];
          uVar4 = puVar1[6];
          uVar10 = puVar1[1];
          uVar9 = *puVar1;
          uVar8 = puVar1[3];
          uVar7 = puVar1[2];
          unaff_x19[5] = puVar1[5];
          unaff_x19[4] = uVar6;
          unaff_x19[7] = uVar5;
          unaff_x19[6] = uVar4;
          unaff_x19[1] = uVar10;
          *unaff_x19 = uVar9;
          unaff_x19[3] = uVar8;
          unaff_x19[2] = uVar7;
          return;
        }
LAB_03c6914c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      goto LAB_03c69148;
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x40;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) goto LAB_03c69148;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_03c6914c;
    puVar1 = (undefined8 *)(lVar3 + unaff_x22);
    in_stack_00000028 = puVar1[5];
    in_stack_00000020 = puVar1[4];
    in_stack_00000038 = puVar1[7];
    in_stack_00000030 = puVar1[6];
    in_stack_00000008 = puVar1[1];
    in_stack_00000000 = *puVar1;
    in_stack_00000018 = puVar1[3];
    in_stack_00000010 = puVar1[2];
  } while( true );
}


