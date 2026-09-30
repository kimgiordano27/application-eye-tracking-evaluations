/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$AsReadOnlySpan
ENTRY_POINT: 06e29c60
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__AsReadOnlySpan
               (undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long lStack0000000000000080;
  undefined8 *puStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long *plStack00000000000000d8;
  
  puVar1 = PTR_DAT_0ac09ba8;
  lStack0000000000000080 = 0;
  puStack0000000000000088 = param_1;
  do {
    plStack00000000000000d8 = param_2;
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e29b78 with catch @ 06e29c90
                       try { // try from 06e29c90 to 06f29cb3 has its CatchHandler @ 06e29b44 */
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06e29cc4;
        }
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e29b98 with catch @ 06e29c9c
                        */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar1,0);
LAB_06e29cc4:
    uVar6 = (*(code *)*puVar2)(param_2,puVar2[1]);
    plVar8 = plStack00000000000000d8;
    if ((uVar6 & 1) == 0) {
      plVar8 = (long *)*puStack0000000000000088;
      if (plVar8 == (long *)0x0) goto LAB_06e29ecc;
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_06e29ea4;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (plStack00000000000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06e29d48;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar8,lVar4,0);
LAB_06e29d48:
    (*(code *)*puVar2)(&stack0x00000040,plVar8,puVar2[1]);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000098 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000040;
    in_stack_000000a8 = in_stack_00000058;
    in_stack_000000a0 = in_stack_00000050;
    in_stack_000000b8 = in_stack_00000068;
    in_stack_000000b0 = in_stack_00000060;
    in_stack_000000c8 = in_stack_00000078;
    in_stack_000000c0 = in_stack_00000070;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 == *(uint *)(lVar4 + 0x18)) {
      FUN_06e28228();
      uVar3 = *(uint *)(unaff_x20 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar4 = lVar4 + (long)(int)uVar3 * 0x40;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000098;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000090;
    *(undefined8 *)(lVar4 + 0x38) = in_stack_000000a8;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_000000a0;
    *(undefined8 *)(lVar4 + 0x48) = in_stack_000000b8;
    *(undefined8 *)(lVar4 + 0x40) = in_stack_000000b0;
    *(undefined8 *)(lVar4 + 0x58) = in_stack_000000c8;
    *(undefined8 *)(lVar4 + 0x50) = in_stack_000000c0;
    thunk_FUN_049ee3d8(lVar4 + 0x20,0);
    param_2 = plStack00000000000000d8;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_06e29ec0;
    }
  }
LAB_06e29ea4:
  puVar2 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e29ec0:
  (*(code *)*puVar2)(plVar8,puVar2[1]);
LAB_06e29ecc:
  if (lStack0000000000000080 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


