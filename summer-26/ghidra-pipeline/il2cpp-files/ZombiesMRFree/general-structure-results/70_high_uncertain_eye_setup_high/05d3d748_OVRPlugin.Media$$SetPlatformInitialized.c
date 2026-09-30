/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformInitialized
ENTRY_POINT: 05d3d748
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetPlatformInitialized(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  long lStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  
  if ((DAT_07398acf & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8f90);
    FUN_02fe925c(PTR_DAT_06fb4b60);
    DAT_07398acf = 1;
  }
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  uStack000000000000008c = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  plVar5 = (long *)param_1[0x10];
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
          goto LAB_05d3d804;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)PTR_DAT_06fb4b60,0x12);
LAB_05d3d804:
    uVar3 = (*(code *)*puVar1)(plVar5,&stack0x000000a0,puVar1[1]);
    if ((uVar3 & 1) != 0) {
      plVar5 = (long *)(**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb8f90) {
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_05d3d888;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)PTR_DAT_06fb8f90,0);
LAB_05d3d888:
        lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
        if (lVar2 != 0) {
          in_stack_00000080 = *(undefined8 *)(lVar2 + 0x30);
          uStack0000000000000094 = (undefined4)*(undefined8 *)(lVar2 + 0x44);
          in_stack_00000098 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x44) >> 0x20);
          in_stack_00000090 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x3c) >> 0x20);
          in_stack_00000088 = (undefined4)*(undefined8 *)(lVar2 + 0x38);
          uStack000000000000008c = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20);
          in_stack_00000060 = *(undefined8 *)(lVar2 + 0x50);
          uStack0000000000000074 = (undefined4)*(undefined8 *)(lVar2 + 100);
          in_stack_00000078 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 100) >> 0x20);
          in_stack_00000070 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x5c) >> 0x20);
          in_stack_00000068 = (undefined4)*(undefined8 *)(lVar2 + 0x58);
          uStack000000000000006c = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20);
          FUN_05cac024(&stack0x00000020,&stack0x00000080,&stack0x00000060,0);
          lStack0000000000000054 = uStack0000000000000034;
          in_stack_00000050 = uStack0000000000000030;
          in_stack_00000048 = uStack0000000000000028;
          in_stack_00000040 = in_stack_00000020;
          *(ulong *)((long)param_1 + 0xbc) = CONCAT44(uStack000000000000002c,uStack0000000000000028)
          ;
          *(undefined8 *)((long)param_1 + 0xb4) = in_stack_00000020;
          param_1[0x19] = uStack0000000000000034;
          param_1[0x18] = CONCAT44(uStack0000000000000030,uStack000000000000002c);
          FUN_05cac024(&stack0x000000a0,&stack0x00000080,0);
          param_1[0x14] = in_stack_00000008;
          param_1[0x13] = in_stack_00000000;
          *(undefined8 *)((long)param_1 + 0xac) = uStack0000000000000014;
          *(ulong *)((long)param_1 + 0xa4) =
               CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
  }
  return;
}


