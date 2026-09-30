/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 05ccd7c0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  do {
    if (unaff_x25 != 0) {
      lVar2 = thunk_FUN_03d2ee44(unaff_x25,param_1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(unaff_x25,param_1);
      }
      if (*(char *)(unaff_x19 + 0x110) == '\0') {
LAB_05ccd974:
        FUN_05fbbdc8();
        return;
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar5 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar3 = FUN_08a550fc(unaff_x22,0);
      uVar4 = FUN_06fd1ba0(uVar5,uVar3,0);
      if ((uVar4 & 1) == 0) goto LAB_05ccd974;
    }
    unaff_x26 = unaff_x26 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x26) {
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
      uVar4 = FUN_06093294(puVar1,*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60));
      if ((uVar4 & 1) == 0) {
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
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    unaff_x22 = *(long *)(unaff_x27 + unaff_x26 * 8);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c(lVar2);
    }
    unaff_x25 = thunk_FUN_03d2ee44(unaff_x22,lVar2);
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_03d8f26c(param_1);
    }
  } while( true );
}


