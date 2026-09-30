/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseArray$$Serialize
ENTRY_POINT: 0630eb18
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_WitResponseArray__Serialize(void)

{
  undefined2 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x24;
  uint uVar5;
  ulong unaff_x27;
  uint unaff_w28;
  uint uVar6;
  uint uVar7;
  ulong unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined2 uStack0000000000000040;
  char cStack0000000000000042;
  ushort uStack0000000000000044;
  ulong in_stack_00000060;
  long in_stack_00000068;
  int in_stack_00000070;
  int in_stack_00000078;
  
  do {
    uVar5 = (uint)unaff_x27;
    if ((uVar5 != unaff_w28) && (uVar3 = FUN_0406b8ac(), (uVar3 & 1) != 0)) {
      uVar7 = (uint)unaff_x29;
      if (((int)uVar7 < (int)unaff_w28) && ((int)uVar7 < (int)uVar5)) {
        uVar6 = uVar5;
        if ((int)unaff_w28 <= (int)uVar5) {
          uVar6 = unaff_w28;
        }
        uVar3 = (ulong)uVar6;
        uVar6 = uVar7;
        uVar4 = unaff_w28;
        if ((int)unaff_w28 <= (int)uVar5) {
          uVar4 = uVar5;
        }
      }
      else {
        uVar3 = (ulong)in_stack_00000028._4_4_;
        uVar6 = unaff_w28;
        uVar4 = unaff_w21;
        if ((int)uVar5 < (int)unaff_w28) {
          uVar6 = uVar7;
          if ((int)unaff_w28 <= (int)uVar7) {
            uVar6 = unaff_w28;
          }
          uVar3 = (ulong)uVar6;
          uVar6 = uVar5;
          uVar4 = unaff_w28;
          if ((int)unaff_w28 <= (int)uVar7) {
            uVar4 = uVar7;
          }
        }
      }
      FUN_04ecae9c(in_stack_00000020,(ulong)uVar6 | uVar3 << 0x20,uVar4,DAT_083f9758);
      unaff_w20 = unaff_w20 + 1;
    }
    do {
      while( true ) {
        uVar1 = uStack0000000000000040;
        if (cStack0000000000000042 == '\x01') {
          cStack0000000000000042 = '\0';
          if ((*(byte *)(*(long *)(*(long *)(unaff_x22 + 0xae8) + 0x20) + 0x135) & 1) == 0) {
            FUN_0338f618();
          }
          uVar3 = System_Collections_Generic_ObjectEqualityComparer<GameTagOptionObject>__LastIndexOf
                            (&stack0x00000030,uVar1);
        }
        else {
          if ((*(byte *)(*(long *)(*(long *)(unaff_x22 + 0xae8) + 0x20) + 0x135) & 1) == 0) {
            FUN_0338f618();
          }
          uVar3 = FUN_04ecdf04(&stack0x00000030);
        }
        if ((uVar3 & 1) != 0) break;
        if (unaff_w20 == 0) {
          FUN_04eaf574(in_stack_00000000,&stack0x00000060,DAT_083f9410);
        }
        if (in_stack_00000078 == -1) {
          uVar3 = FUN_073b5f14(in_stack_00000068,in_stack_00000010,in_stack_00000008,
                               in_stack_00000018,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
        }
        else {
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          in_stack_00000070 = in_stack_00000078;
          in_stack_00000078 =
               *(int *)(*(long *)(in_stack_00000068 + 0x10) + (long)in_stack_00000078 * 4);
        }
        lVar2 = *(long *)(DAT_083e7ec8 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0338f618();
        }
        if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x38) == 0) {
          FUN_0338f674();
        }
        if (in_stack_00000070 == -1) {
          unaff_x29 = 0;
        }
        else {
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          unaff_x29 = *(ulong *)(*(long *)(in_stack_00000068 + 8) + (long)in_stack_00000070 * 8);
        }
        in_stack_00000038 = unaff_x19[1];
        in_stack_00000030 = *unaff_x19;
        unaff_x27 = unaff_x29 >> 0x20;
        unaff_w21 = (uint)(unaff_x29 >> 0x20);
        uVar5 = (uint)unaff_x29;
        cStack0000000000000042 = '\x01';
        in_stack_00000028._4_4_ = uVar5;
        if ((int)unaff_w21 <= (int)uVar5) {
          in_stack_00000028._4_4_ = unaff_w21;
        }
        unaff_w20 = 0;
        uStack0000000000000040 = (undefined2)unaff_x29;
        *unaff_x24 = 0;
        unaff_x24[1] = 0;
        *(undefined8 *)((long)unaff_x24 + 0xd) = 0;
        in_stack_00000060 = unaff_x29;
        if ((int)unaff_w21 <= (int)uVar5) {
          unaff_w21 = uVar5;
        }
      }
      unaff_w28 = (uint)uStack0000000000000044;
    } while ((uint)unaff_x29 == (uint)uStack0000000000000044);
  } while( true );
}


