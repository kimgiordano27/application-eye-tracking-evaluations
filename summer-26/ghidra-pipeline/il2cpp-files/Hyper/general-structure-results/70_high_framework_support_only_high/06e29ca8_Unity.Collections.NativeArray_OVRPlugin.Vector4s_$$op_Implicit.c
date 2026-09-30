/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$op_Implicit
ENTRY_POINT: 06e29ca8
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__op_Implicit(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long *in_stack_000000d8;
  
code_r0x06e29ca8:
  puVar1 = (undefined8 *)FUN_04980e68(unaff_x21,param_2,0);
                    /* try { // try from 06e29cb4 to 06f29ccb has its CatchHandler @ 06e29da0 */
  do {
                    /* try { // try from 06e29ccc to 06f29cef has its CatchHandler @ 06e29b44 */
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    plVar7 = in_stack_000000d8;
    if ((uVar2 & 1) == 0) {
      plVar7 = (long *)*in_stack_00000088;
      if (plVar7 == (long *)0x0) goto LAB_06e29ecc;
      lVar3 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_06e29ea4;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34(lVar3);
    }
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06e29d48;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar7,lVar3,0);
LAB_06e29d48:
    (*(code *)*puVar1)(&stack0x00000040,plVar7,puVar1[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000098 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000040;
    in_stack_000000a8 = in_stack_00000058;
    in_stack_000000a0 = in_stack_00000050;
    in_stack_000000b8 = in_stack_00000068;
    in_stack_000000b0 = in_stack_00000060;
    in_stack_000000c8 = in_stack_00000078;
    in_stack_000000c0 = in_stack_00000070;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 == *(uint *)(lVar3 + 0x18)) {
      FUN_06e28228();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar3 = lVar3 + (long)(int)uVar4 * 0x40;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000098;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000090;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_000000a8;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_000000a0;
    *(undefined8 *)(lVar3 + 0x48) = in_stack_000000b8;
    *(undefined8 *)(lVar3 + 0x40) = in_stack_000000b0;
    *(undefined8 *)(lVar3 + 0x58) = in_stack_000000c8;
    *(undefined8 *)(lVar3 + 0x50) = in_stack_000000c0;
    thunk_FUN_049ee3d8(lVar3 + 0x20,0);
    if (in_stack_000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *in_stack_000000d8;
    param_2 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x21 = in_stack_000000d8;
    if (uVar2 == 0) goto code_r0x06e29ca8;
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
      if (uVar2 == 0) goto code_r0x06e29ca8;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06e29ec0;
    }
  }
LAB_06e29ea4:
  puVar1 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e29ec0:
  (*(code *)*puVar1)(plVar7,puVar1[1]);
LAB_06e29ecc:
  if (in_stack_00000080 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


