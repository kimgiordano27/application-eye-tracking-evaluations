/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 05d664f0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  ulong in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined8 in_stack_000000f8;
  
  if ((DAT_076d8629 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b11c8);
    thunk_FUN_032e1da0(PTR_DAT_072b11d0);
    thunk_FUN_032e1da0(PTR_DAT_072b11d8);
    thunk_FUN_032e1da0(PTR_DAT_072b11e0);
    thunk_FUN_032e1da0(PTR_DAT_072b11e8);
    thunk_FUN_032e1da0(PTR_DAT_072b11f0);
    thunk_FUN_032e1da0(PTR_DAT_072b11f8);
    thunk_FUN_032e1da0(PTR_DAT_072b1200);
    DAT_076d8629 = 1;
  }
  puVar2 = PTR_DAT_072b11d0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_050762b8(*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_072b11d0);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_050762b8(*(long *)(param_1 + 0x30),*(undefined8 *)puVar2);
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar9 != 0)) {
        FUN_03cdcde8(lVar9,*(undefined8 *)PTR_DAT_072b11f0);
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0x18), lVar9 != 0)) {
          FUN_0506fe10(lVar9,*(undefined8 *)PTR_DAT_072b11d8);
          puVar5 = PTR_DAT_072b1200;
          puVar4 = PTR_DAT_072b11e8;
          puVar3 = PTR_DAT_072b11e0;
          puVar2 = PTR_DAT_072b11c8;
          lVar9 = *(long *)(param_1 + 0x28);
          if (lVar9 != 0) {
            iVar10 = 0;
            while( true ) {
              if (*(int *)(lVar9 + 0x18) <= iVar10) {
                return;
              }
              lVar11 = *(long *)(param_1 + 0x38);
              FUN_042c8aec(&stack0x000000c0,lVar9,iVar10,*(undefined8 *)puVar5);
              uVar6 = in_stack_000000c0;
              if (*(long *)(param_1 + 0x28) == 0) break;
              FUN_042c8aec(&stack0x00000080,*(long *)(param_1 + 0x28),iVar10,*(undefined8 *)puVar5);
              in_stack_000000c8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
              in_stack_000000d8 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
              in_stack_000000d0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
              in_stack_000000c0 = in_stack_00000080;
              uStack00000000000000e8 = (undefined4)in_stack_000000a8;
              uStack00000000000000ec = (undefined4)((ulong)in_stack_000000a8 >> 0x20);
              uStack00000000000000e0 = uStack00000000000000a0;
              uStack00000000000000e4 = uStack00000000000000a4;
              in_stack_000000f8 = in_stack_000000b8;
              uStack00000000000000f0 = (undefined4)in_stack_000000b0;
              uStack00000000000000f4 = (undefined4)((ulong)in_stack_000000b0 >> 0x20);
              in_stack_00000060 = CONCAT44(uStack00000000000000e8,uStack00000000000000a4);
              uStack0000000000000074 = in_stack_000000b8;
              uStack0000000000000068 = uStack00000000000000ec;
              uStack000000000000006c = uStack00000000000000f0;
              uStack0000000000000070 = uStack00000000000000f4;
              if (lVar11 == 0) break;
              uStack0000000000000088 = uStack00000000000000ec;
              uStack0000000000000094 = (undefined4)in_stack_000000b8;
              uStack0000000000000098 = (undefined4)((ulong)in_stack_000000b8 >> 0x20);
              uStack000000000000008c = uStack00000000000000f0;
              uStack0000000000000090 = uStack00000000000000f4;
              in_stack_00000080 = in_stack_00000060;
              FUN_05075fd4(lVar11,uVar6 & 0xffffffff,&stack0x00000080,*(undefined8 *)puVar3);
              if (*(long *)(param_1 + 0x28) == 0) break;
              lVar9 = *(long *)(param_1 + 0x30);
              FUN_042c8aec(&stack0x00000080,*(long *)(param_1 + 0x28),iVar10,*(undefined8 *)puVar5);
              uVar6 = in_stack_00000080;
              if (*(long *)(param_1 + 0x28) == 0) break;
              FUN_042c8aec(&stack0x00000020,*(long *)(param_1 + 0x28),iVar10,*(undefined8 *)puVar5);
              uVar8 = uStack0000000000000038;
              uVar7 = uStack0000000000000034;
              uStack0000000000000088 = uStack0000000000000028;
              uStack000000000000008c = uStack000000000000002c;
              in_stack_00000080 = in_stack_00000020;
              uStack0000000000000098 = uStack0000000000000038;
              uStack000000000000009c = uStack000000000000003c;
              uStack0000000000000090 = uStack0000000000000030;
              uStack0000000000000094 = uStack0000000000000034;
              in_stack_000000a8 = in_stack_00000048;
              uStack00000000000000a0 = (undefined4)in_stack_00000040;
              uStack00000000000000a4 = (undefined4)((ulong)in_stack_00000040 >> 0x20);
              in_stack_000000b8 = in_stack_00000058;
              in_stack_000000b0 = in_stack_00000050;
              uVar1 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
              if (lVar9 == 0) break;
              uStack0000000000000028 = uStack0000000000000030;
              uStack0000000000000034 = uStack000000000000003c;
              uStack0000000000000038 = uStack00000000000000a0;
              uStack000000000000002c = uVar7;
              uStack0000000000000030 = uVar8;
              in_stack_00000020 = uVar1;
              FUN_05075fd4(lVar9,uVar6 & 0xffffffff,&stack0x00000020,*(undefined8 *)puVar3);
              if ((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x28) == 0)) break;
              lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
              FUN_042c8aec(&stack0x00000020,*(long *)(param_1 + 0x28),iVar10,*(undefined8 *)puVar5);
              if (lVar9 == 0) break;
              FUN_03cdd958(lVar9,in_stack_00000020 & 0xffffffff,*(undefined8 *)puVar4);
              if ((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x28) == 0)) break;
              lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
              FUN_042c8aec(&stack0x00000020,*(long *)(param_1 + 0x28),iVar10,*(undefined8 *)puVar5);
              uVar6 = in_stack_00000020;
              if (*(long *)(param_1 + 0x28) == 0) break;
              FUN_042c8aec(&stack0x00000020,*(long *)(param_1 + 0x28),iVar10,*(undefined8 *)puVar5);
              if (lVar9 == 0) break;
              FUN_0506fc90(lVar9,uVar6 & 0xffffffff,in_stack_00000020._4_4_,*(undefined8 *)puVar2);
              lVar9 = *(long *)(param_1 + 0x28);
              iVar10 = iVar10 + 1;
              if (lVar9 == 0) break;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


