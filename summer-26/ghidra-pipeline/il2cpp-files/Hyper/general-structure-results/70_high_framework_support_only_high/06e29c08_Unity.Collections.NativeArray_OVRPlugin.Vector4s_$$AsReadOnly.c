/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$AsReadOnly
ENTRY_POINT: 06e29c08
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__AsReadOnly(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
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
  
  lVar5 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_2) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06e29c50;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_06e29c50:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_0ac09ba8;
  in_stack_00000088 = &stack0x000000d8;
  in_stack_00000080 = 0;
  do {
    in_stack_000000d8 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06e29cc4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar1,0);
LAB_06e29cc4:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = in_stack_000000d8;
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)*in_stack_00000088;
      if (plVar3 == (long *)0x0) goto LAB_06e29ecc;
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_06e29ea4;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06e29d48;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar3,lVar5,0);
LAB_06e29d48:
    (*(code *)*puVar2)(&stack0x00000040,plVar3,puVar2[1]);
    lVar5 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000098 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000040;
    in_stack_000000a8 = in_stack_00000058;
    in_stack_000000a0 = in_stack_00000050;
    in_stack_000000b8 = in_stack_00000068;
    in_stack_000000b0 = in_stack_00000060;
    in_stack_000000c8 = in_stack_00000078;
    in_stack_000000c0 = in_stack_00000070;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 == *(uint *)(lVar5 + 0x18)) {
      FUN_06e28228();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar5 = lVar5 + (long)(int)uVar4 * 0x40;
    *(undefined8 *)(lVar5 + 0x28) = in_stack_00000098;
    *(undefined8 *)(lVar5 + 0x20) = in_stack_00000090;
    *(undefined8 *)(lVar5 + 0x38) = in_stack_000000a8;
    *(undefined8 *)(lVar5 + 0x30) = in_stack_000000a0;
    *(undefined8 *)(lVar5 + 0x48) = in_stack_000000b8;
    *(undefined8 *)(lVar5 + 0x40) = in_stack_000000b0;
    *(undefined8 *)(lVar5 + 0x58) = in_stack_000000c8;
    *(undefined8 *)(lVar5 + 0x50) = in_stack_000000c0;
    thunk_FUN_049ee3d8(lVar5 + 0x20,0);
    plVar3 = in_stack_000000d8;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06e29ec0;
    }
  }
LAB_06e29ea4:
  puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e29ec0:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_06e29ecc:
  if (in_stack_00000080 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


