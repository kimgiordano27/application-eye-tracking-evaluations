/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03cb9208
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cb92f4) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  long *plVar1;
  undefined8 *puVar2;
  uint in_w8;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_x9;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long *in_stack_000000d8;
  
  uStack0000000000000038 = param_2._8_8_;
  uStack0000000000000030 = param_2._0_8_;
  uStack0000000000000028 = param_1._8_8_;
  uStack0000000000000020 = param_1._0_8_;
code_r0x03cb9208:
  if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  do {
    plVar1 = in_stack_000000d8;
    if (*(uint *)(in_x9 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar3 = in_x9 + (long)(int)in_w8 * 0x40;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000008;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000000;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000018;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000010;
    *(undefined8 *)(lVar3 + 0x48) = uStack0000000000000028;
    *(undefined8 *)(lVar3 + 0x40) = uStack0000000000000020;
    *(undefined8 *)(lVar3 + 0x58) = uStack0000000000000038;
    *(undefined8 *)(lVar3 + 0x50) = uStack0000000000000030;
    if (in_stack_000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *in_stack_000000d8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03cb9118;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000d8,*unaff_x22,0);
LAB_03cb9118:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_000000d8;
    if ((uVar5 & 1) == 0) {
      if (in_stack_000000d8 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_000000d8;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_03cb92a0;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_03cb9288;
    }
    if (in_stack_000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03cb919c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar1,lVar3,0);
LAB_03cb919c:
    (*(code *)*puVar2)(&stack0x00000040,plVar1,puVar2[1]);
    in_x9 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000098 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000040;
    in_stack_000000a8 = in_stack_00000058;
    in_stack_000000a0 = in_stack_00000050;
    in_stack_000000b8 = in_stack_00000068;
    in_stack_000000b0 = in_stack_00000060;
    in_stack_000000c8 = in_stack_00000078;
    in_stack_000000c0 = in_stack_00000070;
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    if (in_w8 == *(uint *)(in_x9 + 0x18)) break;
    *(uint *)(unaff_x20 + 0x18) = in_w8 + 1;
    in_stack_00000008 = in_stack_00000048;
    in_stack_00000000 = in_stack_00000040;
    in_stack_00000018 = in_stack_00000058;
    in_stack_00000010 = in_stack_00000050;
    uStack0000000000000028 = in_stack_00000068;
    uStack0000000000000020 = in_stack_00000060;
    uStack0000000000000038 = in_stack_00000078;
    uStack0000000000000030 = in_stack_00000070;
  } while( true );
  FUN_03cb7778();
  in_w8 = *(uint *)(unaff_x20 + 0x18);
  in_x9 = *(long *)(unaff_x20 + 0x10);
  in_stack_00000008 = in_stack_00000098;
  in_stack_00000000 = in_stack_00000090;
  in_stack_00000018 = in_stack_000000a8;
  in_stack_00000010 = in_stack_000000a0;
  *(uint *)(unaff_x20 + 0x18) = in_w8 + 1;
  uStack0000000000000020 = in_stack_000000b0;
  uStack0000000000000028 = in_stack_000000b8;
  uStack0000000000000030 = in_stack_000000c0;
  uStack0000000000000038 = in_stack_000000c8;
  goto code_r0x03cb9208;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_03cb9288:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03cb92bc;
    }
  }
LAB_03cb92a0:
  puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000d8,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb92bc:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


