/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Colocation_RequestMap
ENTRY_POINT: 05256b44
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05256e70) */

void Oculus_Platform_CAPI__ovr_Colocation_RequestMap(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int in_w9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  uint uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  long in_stack_00000068;
  char cStack0000000000000070;
  char cStack0000000000000071;
  long in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  uint in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  uint uStack00000000000000c0;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  uint in_stack_000000e8;
  
  (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))(&stack0x00000048);
  lVar4 = in_stack_00000078;
  lVar3 = in_stack_00000068;
  uVar7 = uStack0000000000000054;
  uVar18 = uStack0000000000000050;
  uVar17 = uStack000000000000004c;
  uVar15 = uStack0000000000000048;
  if (cStack0000000000000070 == '\0') {
    return;
  }
  lVar11 = *(long *)(unaff_x19 + 0x70);
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(unaff_x19 + 0x78);
    *(bool *)(lVar11 + 0x39) = cStack0000000000000071 != '\0';
    *(undefined1 *)(lVar11 + 0x38) = 1;
    *(undefined4 *)(lVar11 + 0x48) = in_stack_00000080;
    *(undefined4 *)(lVar11 + 0x34) = uStack0000000000000064;
    in_stack_000000d0 = 0;
    uStack00000000000000d8 = 0;
    uStack00000000000000dc = 0;
    in_stack_000000e8 = 0;
    uStack00000000000000e0 = 0;
    uStack00000000000000e4 = 0;
    uVar16 = uStack000000000000005c;
    uVar6 = uStack0000000000000060;
    uVar14 = FUN_053ab4cc(uStack0000000000000058,0);
    uStack00000000000000d8 = uVar6;
    in_stack_000000d0 = CONCAT44(uVar16,uVar14);
    uStack00000000000000dc = FUN_053ab780(uVar15,0);
    in_stack_000000e8 = uVar7;
    uStack00000000000000e4 = uVar18;
    uStack00000000000000e0 = uVar17;
    *(ulong *)(lVar11 + 0x20) = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
    *(undefined8 *)(lVar11 + 0x18) = in_stack_000000d0;
    *(ulong *)(lVar11 + 0x28) = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
    *(uint *)(lVar11 + 0x30) = in_stack_000000e8;
    if ((*(long *)(unaff_x19 + 0x78) != 0) &&
       (plVar12 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0x18), plVar12 != (long *)0x0)) {
      lVar11 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_05256c6c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_02f421d0(plVar12,*(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo,1);
LAB_05256c6c:
      puVar2 = System_Tuple<Task,_Task,_TaskContinuation>_TypeInfo;
      puVar1 = System_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>_TypeInfo;
      (*(code *)*puVar8)(&stack0x00000048,plVar12,puVar8[1]);
      in_stack_000000b8 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_000000b0 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      _uStack00000000000000c0 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
      while( true ) {
        uVar9 = FUN_04aeea48(&stack0x000000b0,*(undefined8 *)puVar2);
        if ((uVar9 & 1) == 0) {
          FUN_04aeea44(&stack0x000000b0,*(undefined8 *)System_Tuple<Pose,_float,_float>_TypeInfo);
          return;
        }
        uVar7 = uStack00000000000000c0;
        uStack0000000000000098 = 0;
        uStack000000000000009c = 0;
        uStack00000000000000a0 = 0;
        uStack00000000000000a4 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar9 = FUN_042cecdc(*(long *)(unaff_x19 + 0x78),_uStack00000000000000c0 & 0xffffffff,
                             (long)&stack0x00000088 + 4,*(undefined8 *)puVar1);
        uVar5 = in_stack_00000088._4_4_;
        if ((uVar9 & 1) != 0) {
          uStack00000000000000d8 = 0;
          uStack00000000000000dc = 0;
          uStack00000000000000e0 = 0;
          uStack00000000000000e4 = 0;
          in_stack_000000d0 = 0;
          in_stack_000000e8 = 0;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(uint *)(lVar3 + 0x18) <= in_stack_00000088._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar19 = 0;
          uVar18 = 0;
          uVar17 = 0;
          uVar20 = *(uint *)(lVar3 + (long)(int)in_stack_00000088._4_4_ * 0x10 + 0x2c);
          uVar15 = 0;
          if ((uVar20 & 0x7fffffff) < 0x7f800001) {
            lVar11 = lVar3 + (long)(int)in_stack_00000088._4_4_ * 0x10;
            uVar17 = *(undefined4 *)(lVar11 + 0x24);
            uVar18 = *(undefined4 *)(lVar11 + 0x28);
            uVar19 = uVar20;
            uVar15 = FUN_053ab780(*(undefined4 *)(lVar11 + 0x20),0);
          }
          uStack00000000000000dc = uVar15;
          uStack00000000000000e0 = uVar17;
          uStack00000000000000e4 = uVar18;
          in_stack_000000e8 = uVar19;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          lVar11 = lVar4 + (long)(int)uVar5 * 0xc;
          uVar18 = *(undefined4 *)(lVar11 + 0x24);
          uVar15 = *(undefined4 *)(lVar11 + 0x28);
          uVar17 = FUN_053ab4cc(*(undefined4 *)(lVar11 + 0x20),0);
          uStack0000000000000098 = uVar15;
          in_stack_000000d0 = CONCAT44(uVar18,uVar17);
          uStack00000000000000a4 = uStack00000000000000e4;
          in_stack_000000a8 = in_stack_000000e8;
          uStack00000000000000a0 = uStack00000000000000e0;
          uStack000000000000009c = uStack00000000000000dc;
          in_stack_00000090 = in_stack_000000d0;
          uStack00000000000000d8 = uStack0000000000000098;
        }
        lVar11 = *(long *)(unaff_x19 + 0x70);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        in_stack_000000e8 = *(uint *)(lVar11 + 0x30);
        in_stack_000000d0 = *(undefined8 *)(lVar11 + 0x18);
        lVar13 = *(long *)(lVar11 + 0x40);
        uStack00000000000000d8 = (undefined4)*(undefined8 *)(lVar11 + 0x20);
        uStack00000000000000dc = (undefined4)((ulong)*(undefined8 *)(lVar11 + 0x20) >> 0x20);
        uStack00000000000000e0 = (undefined4)*(undefined8 *)(lVar11 + 0x28);
        uStack00000000000000e4 = (undefined4)((ulong)*(undefined8 *)(lVar11 + 0x28) >> 0x20);
        FUN_052c2a1c(&stack0x00000048,&stack0x000000d0,&stack0x00000090,0);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar13 = lVar13 + (long)(int)uVar7 * 0x1c;
        *(ulong *)(lVar13 + 0x28) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
        *(ulong *)(lVar13 + 0x20) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        *(ulong *)(lVar13 + 0x34) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
        *(ulong *)(lVar13 + 0x2c) = CONCAT44(uStack0000000000000058,uStack0000000000000054);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


