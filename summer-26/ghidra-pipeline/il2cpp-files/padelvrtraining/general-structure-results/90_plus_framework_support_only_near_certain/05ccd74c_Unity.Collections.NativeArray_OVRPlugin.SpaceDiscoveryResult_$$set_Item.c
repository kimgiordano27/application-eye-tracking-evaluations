/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 05ccd74c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  if (param_1 != 0) {
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar9 = 0;
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar6 = *(long *)(param_1 + 0x20 + uVar9 * 8);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03d8f26c(lVar4);
        }
        lVar4 = thunk_FUN_03d2ee44(lVar6,lVar4);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03d8f26c(lVar7);
        }
        if (lVar4 != 0) {
          lVar2 = thunk_FUN_03d2ee44(lVar4,lVar7);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d8e4(lVar4,lVar7);
          }
          if (*(char *)(unaff_x19 + 0x110) == '\0') {
LAB_05ccd974:
            FUN_05fbbdc8();
            return;
          }
          if (lVar6 == 0) goto LAB_05ccd9b0;
          uVar8 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar3 = FUN_08a550fc(lVar6,0);
          uVar5 = FUN_06fd1ba0(uVar8,uVar3,0);
          if ((uVar5 & 1) == 0) goto LAB_05ccd974;
        }
        uVar5 = (ulong)*(uint *)(param_1 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    FUN_051b177c(&stack0x00000058,*(undefined8 *)(unaff_x19 + 0x108),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50));
    puVar1 = (undefined8 *)(unaff_x19 + 0xd8);
    in_stack_00000080 = in_stack_00000068;
    in_stack_00000078 = in_stack_00000060;
    in_stack_00000070 = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_00000068;
    *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_00000060;
    *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000058;
    thunk_FUN_03d1023c(puVar1,0);
    uVar9 = FUN_06093294(puVar1,*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60));
    if ((uVar9 & 1) == 0) {
      in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0xe8);
      in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0xe0);
      in_stack_00000070 = *puVar1;
      FUN_060921c8(&stack0x00000058,&stack0x00000070,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70));
      *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000068;
      *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000060;
      *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000058;
      thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
      FUN_06092a44(puVar1,*(undefined8 *)(unaff_x19 + 0xd0),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
    }
    else {
      in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0xe8);
      in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0xe0);
      in_stack_00000070 = *puVar1;
      FUN_05ccd9c0();
    }
    return;
  }
LAB_05ccd9b0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


