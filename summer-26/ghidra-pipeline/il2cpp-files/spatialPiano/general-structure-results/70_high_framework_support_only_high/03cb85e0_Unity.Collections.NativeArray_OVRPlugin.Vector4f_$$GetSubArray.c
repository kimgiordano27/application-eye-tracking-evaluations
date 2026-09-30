/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetSubArray
ENTRY_POINT: 03cb85e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cb869c) */
/* WARNING: Removing unreachable block (ram,0x03cb8698) */
/* WARNING: Removing unreachable block (ram,0x03cb86e0) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetSubArray
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  long *in_stack_00000098;
  
  uStack0000000000000068 = param_2._8_8_;
  uStack0000000000000060 = param_2._0_8_;
  uStack0000000000000058 = param_1._8_8_;
  uStack0000000000000050 = param_1._0_8_;
  do {
    uStack0000000000000078 = in_stack_00000028;
    uStack0000000000000070 = in_stack_00000020;
    uStack0000000000000088 = in_stack_00000038;
    uStack0000000000000080 = in_stack_00000030;
    FUN_03cb7fa4();
    if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar2 = *in_stack_00000098;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03cb8548;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000098,*unaff_x24,0);
LAB_03cb8548:
    uVar4 = (*(code *)*puVar1)(in_stack_00000098,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000098 == (long *)0x0) goto LAB_03cb868c;
      lVar2 = *in_stack_00000098;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_03cb8664;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar3 = *in_stack_00000098;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03cb85cc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000098,lVar2,0);
LAB_03cb85cc:
    (*(code *)*puVar1)(in_stack_00000098,puVar1[1]);
    uStack0000000000000050 = in_stack_00000000;
    uStack0000000000000058 = in_stack_00000008;
    uStack0000000000000060 = in_stack_00000010;
    uStack0000000000000068 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03cb8680;
    }
  }
LAB_03cb8664:
  puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000098,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb8680:
  (*(code *)*puVar1)(in_stack_00000098,puVar1[1]);
LAB_03cb868c:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


