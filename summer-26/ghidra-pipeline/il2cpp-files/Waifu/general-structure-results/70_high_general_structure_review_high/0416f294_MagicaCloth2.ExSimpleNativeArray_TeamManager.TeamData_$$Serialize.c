/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<TeamManager.TeamData>$$Serialize
ENTRY_POINT: 0416f294
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void MagicaCloth2_ExSimpleNativeArray<TeamManager_TeamData>__Serialize(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  uint unaff_w25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  ulong in_stack_00000010;
  long in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
  do {
    if (unaff_w28 == 1) {
      plVar4 = (long *)FUN_05aef2d4(*(undefined8 *)(*(long *)(in_stack_00000038 + 0x38) + 0x30));
      if (plVar4 == (long *)0x0) goto LAB_0416f668;
      uVar3 = (**(code **)(*plVar4 + 0x198))
                        (plVar4,unaff_w26,unaff_w25,*(undefined8 *)(*plVar4 + 0x1a0));
      if (((unaff_w27 ^ unaff_w29) & 1) != 0) goto LAB_0416f3a8;
      uVar5 = uVar3 >> 0x1f;
      if ((in_stack_00000020 & 1) != 0) {
        uVar5 = (uint)(0 < (int)uVar3);
      }
      uVar3 = (uint)(uVar5 == 0) & (unaff_w27 & unaff_w29 ^ 1);
    }
    else if (unaff_w28 == 0) {
      plVar4 = (long *)FUN_0388be84(*(undefined8 *)(*(long *)(in_stack_00000038 + 0x38) + 0x10));
      if (plVar4 == (long *)0x0) {
LAB_0416f668:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar3 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,unaff_w25,unaff_w26,*(undefined8 *)(*plVar4 + 0x1c0));
      if (((unaff_w27 ^ unaff_w29) & 1) != 0) goto LAB_0416f3a8;
      uVar3 = uVar3 & (unaff_w27 & unaff_w29 ^ 1);
    }
    else {
      plVar4 = (long *)FUN_0388be84(*(undefined8 *)(*(long *)(in_stack_00000038 + 0x38) + 0x10));
      if (plVar4 == (long *)0x0) goto LAB_0416f668;
      uVar3 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,unaff_w25,unaff_w26,*(undefined8 *)(*plVar4 + 0x1c0));
      if ((unaff_w29 & in_stack_00000028._4_4_ & 1) != 0) goto LAB_0416f3a8;
      if (((unaff_w29 | in_stack_00000028._4_4_) & 1) != 0) goto LAB_0416f3b8;
      uVar3 = 1;
    }
    while( true ) {
      uVar5 = (uint)unaff_x21;
      unaff_x21 = unaff_x21 + 1;
      uVar2 = (ushort)(1 << (ulong)(uVar5 & 0x1f));
      uVar1 = *(ushort *)(unaff_x23 + unaff_x19) | uVar2;
      if ((uVar3 & 1) == 0) {
        uVar1 = *(ushort *)(unaff_x23 + unaff_x19) & (uVar2 ^ 0xffff);
      }
      *(ushort *)(unaff_x23 + unaff_x19) = uVar1;
      if (unaff_x24 == unaff_x21) {
        in_stack_00000020 = in_stack_00000020 + 1;
        if (in_stack_00000020 == unaff_x24) {
                    /* WARNING: Could not recover jumptable at 0x0416f42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(&switchD_0416f42c::switchdataD_012ee1da)[unaff_w28] * 4 + 0x416f430))()
          ;
          return;
        }
        unaff_x21 = 0;
        unaff_w29 = 0;
        unaff_x19 = -(in_stack_00000020 >> 0x1f & 1) & 0xfffffffe00000000 |
                    (in_stack_00000020 & 0xffffffff) << 1;
        unaff_w25 = (uint)*(byte *)(in_stack_00000020 + in_stack_00000018);
        unaff_w27 = in_stack_00000020 == in_stack_00000010 | unaff_w27;
        in_stack_00000028._4_4_ = unaff_w27 ^ 1;
      }
      unaff_w26 = (uint)*(byte *)(in_stack_00000030 + unaff_x21);
      unaff_w29 = unaff_x20 == unaff_x21 | unaff_w29;
      if (unaff_w28 != 2) break;
      plVar4 = (long *)FUN_0388be84(*(undefined8 *)(*(long *)(in_stack_00000038 + 0x38) + 0x10));
      if (plVar4 == (long *)0x0) goto LAB_0416f668;
      uVar3 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,unaff_w25,unaff_w26,*(undefined8 *)(*plVar4 + 0x1c0));
      if (((unaff_w27 ^ unaff_w29) & 1) == 0) {
LAB_0416f3b8:
        uVar3 = unaff_w27 & unaff_w29 | uVar3;
      }
      else {
LAB_0416f3a8:
        uVar3 = 0;
      }
    }
  } while( true );
}


