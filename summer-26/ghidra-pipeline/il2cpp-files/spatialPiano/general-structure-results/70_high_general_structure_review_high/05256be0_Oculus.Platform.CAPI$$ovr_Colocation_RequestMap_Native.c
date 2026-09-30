/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Colocation_RequestMap_Native
ENTRY_POINT: 05256be0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05256e70) */

void Oculus_Platform_CAPI__ovr_Colocation_RequestMap_Native
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long unaff_x22;
  long unaff_x23;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
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
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  uint in_stack_000000e8;
  
  uVar11 = param_2;
  uStack00000000000000e4 = param_3;
  uVar4 = param_4;
  uStack00000000000000dc = FUN_053ab780();
  in_stack_000000e8 = uVar4;
  in_stack_000000e0 = uVar11;
  *(ulong *)(unaff_x20 + 0x20) = CONCAT44(uStack00000000000000dc,in_stack_000000d8);
  *(undefined8 *)(unaff_x20 + 0x18) = in_stack_000000d0;
  *(ulong *)(unaff_x20 + 0x28) = CONCAT44(uStack00000000000000e4,in_stack_000000e0);
  *(uint *)(unaff_x20 + 0x30) = in_stack_000000e8;
  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
     (plVar9 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0x18), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_05256c6c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02f421d0(plVar9,*(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo,1);
LAB_05256c6c:
  puVar2 = System_Tuple<Task,_Task,_TaskContinuation>_TypeInfo;
  puVar1 = System_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>_TypeInfo;
  (*(code *)*puVar5)(&stack0x00000048,plVar9,puVar5[1]);
  in_stack_000000b8 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
  _uStack00000000000000c0 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
  in_stack_000000b0 = in_stack_00000048;
  while( true ) {
    uVar7 = FUN_04aeea48(&stack0x000000b0,*(undefined8 *)puVar2);
    if ((uVar7 & 1) == 0) {
      FUN_04aeea44(&stack0x000000b0,*(undefined8 *)System_Tuple<Pose,_float,_float>_TypeInfo);
      return;
    }
    uVar4 = uStack00000000000000c0;
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
    uVar7 = FUN_042cecdc(*(long *)(unaff_x19 + 0x78),_uStack00000000000000c0 & 0xffffffff,
                         (long)&stack0x00000088 + 4,*(undefined8 *)puVar1);
    uVar3 = in_stack_00000088._4_4_;
    if ((uVar7 & 1) != 0) {
      in_stack_000000d8 = 0;
      uStack00000000000000dc = 0;
      in_stack_000000e0 = 0;
      uStack00000000000000e4 = 0;
      in_stack_000000d0 = 0;
      in_stack_000000e8 = 0;
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(unaff_x22 + 0x18) <= in_stack_00000088._4_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar15 = *(uint *)(unaff_x22 + (long)(int)in_stack_00000088._4_4_ * 0x10 + 0x2c);
      uVar11 = 0;
      if ((uVar15 & 0x7fffffff) < 0x7f800001) {
        lVar6 = unaff_x22 + (long)(int)in_stack_00000088._4_4_ * 0x10;
        uVar12 = *(undefined4 *)(lVar6 + 0x24);
        uVar13 = *(undefined4 *)(lVar6 + 0x28);
        uVar14 = uVar15;
        uVar11 = FUN_053ab780(*(undefined4 *)(lVar6 + 0x20),0);
      }
      uStack00000000000000dc = uVar11;
      in_stack_000000e0 = uVar12;
      uStack00000000000000e4 = uVar13;
      in_stack_000000e8 = uVar14;
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar6 = unaff_x23 + (long)(int)uVar3 * 0xc;
      uVar13 = *(undefined4 *)(lVar6 + 0x24);
      uVar11 = *(undefined4 *)(lVar6 + 0x28);
      uVar12 = FUN_053ab4cc(*(undefined4 *)(lVar6 + 0x20),0);
      uStack0000000000000098 = uVar11;
      in_stack_000000d0 = CONCAT44(uVar13,uVar12);
      uStack00000000000000a4 = uStack00000000000000e4;
      in_stack_000000a8 = in_stack_000000e8;
      uStack00000000000000a0 = in_stack_000000e0;
      uStack000000000000009c = uStack00000000000000dc;
      in_stack_00000090 = in_stack_000000d0;
      in_stack_000000d8 = uStack0000000000000098;
    }
    lVar6 = *(long *)(unaff_x19 + 0x70);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_stack_000000e8 = *(uint *)(lVar6 + 0x30);
    in_stack_000000d0 = *(undefined8 *)(lVar6 + 0x18);
    lVar10 = *(long *)(lVar6 + 0x40);
    in_stack_000000d8 = (undefined4)*(undefined8 *)(lVar6 + 0x20);
    uStack00000000000000dc = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20);
    in_stack_000000e0 = (undefined4)*(undefined8 *)(lVar6 + 0x28);
    uStack00000000000000e4 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x28) >> 0x20);
    FUN_052c2a1c(&stack0x00000048,&stack0x000000d0,&stack0x00000090,0);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar10 = lVar10 + (long)(int)uVar4 * 0x1c;
    *(ulong *)(lVar10 + 0x28) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
    *(undefined8 *)(lVar10 + 0x20) = in_stack_00000048;
    *(ulong *)(lVar10 + 0x34) = CONCAT44(in_stack_00000060,uStack000000000000005c);
    *(ulong *)(lVar10 + 0x2c) = CONCAT44(uStack0000000000000058,uStack0000000000000054);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


