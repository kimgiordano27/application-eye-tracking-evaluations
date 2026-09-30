/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 068631cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable
                (long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long lVar7;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  uint uStack0000000000000000;
  uint uStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  do {
    uVar6 = *(undefined8 *)(in_x9 + unaff_x25 * 8);
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar4 = FUN_06862b7c(unaff_x27,unaff_x28,uVar6);
    iVar2 = (int)uVar4;
    if (iVar2 == 1) {
      uStack0000000000000004 = 1;
    }
    else if (iVar2 == 2) {
      uStack0000000000000000 = 1;
    }
    else if (iVar2 == 0) {
      return uVar4;
    }
LAB_06863228:
    do {
      unaff_x25 = unaff_x25 + 1;
      if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x25) {
        if (((uStack0000000000000004 ^ uStack0000000000000000) & 1) != 0) {
          uVar5 = 1;
          if ((uStack0000000000000004 & 1) == 0) {
            uVar5 = 2;
          }
          return (ulong)uVar5;
        }
        if ((unaff_x21 == 0) || ((uStack0000000000000004 & 1) != 0)) {
          return 0;
        }
        if ((unaff_x20 != 0) && (unaff_x19 != 0)) {
          if (*(int *)(unaff_x19 + 0x18) < *(int *)(unaff_x20 + 0x18)) {
            return 1;
          }
          if (*(int *)(unaff_x19 + 0x18) <= *(int *)(unaff_x20 + 0x18)) {
            return 0;
          }
          return 2;
        }
        goto LAB_068632b4;
      }
      if (unaff_x21 != 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_x25) goto LAB_068632b8;
        lVar7 = *(long *)(in_stack_00000010 + unaff_x25 * 8);
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (lVar7 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_06863228;
      }
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
        if (in_stack_00000018 != 0) goto LAB_06863088;
LAB_068630c4:
        if (unaff_x26 == 0) goto LAB_068632b4;
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_068632b8;
        if (unaff_x20 == 0) goto LAB_068632b4;
        uVar5 = *(uint *)(unaff_x20 + 0x18);
        uVar1 = *(uint *)(in_stack_00000028 + unaff_x25 * 4);
LAB_068630e4:
        if (uVar5 <= uVar1) goto LAB_068632b8;
        plVar3 = *(long **)(unaff_x20 + (long)(int)uVar1 * 8 + 0x20);
        if (plVar3 == (long *)0x0) goto LAB_068632b4;
        unaff_x27 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      }
      else {
        if (in_stack_00000018 == 0) goto LAB_068630c4;
LAB_06863088:
        if (unaff_x26 == 0) goto LAB_068632b4;
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_068632b8;
        if (unaff_x20 == 0) goto LAB_068632b4;
        uVar5 = *(uint *)(unaff_x20 + 0x18);
        uVar1 = *(uint *)(in_stack_00000028 + unaff_x25 * 4);
        unaff_x27 = in_stack_00000018;
        if ((int)uVar1 < (int)(uVar5 - 1)) goto LAB_068630e4;
      }
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
        if (unaff_x29 != 0) goto LAB_06863118;
LAB_06863154:
        if (unaff_x24 == 0) goto LAB_068632b4;
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_068632b8;
        if (unaff_x19 == 0) goto LAB_068632b4;
        uVar5 = *(uint *)(unaff_x19 + 0x18);
        uVar1 = *(uint *)(in_stack_00000020 + unaff_x25 * 4);
LAB_06863174:
        if (uVar5 <= uVar1) goto LAB_068632b8;
        plVar3 = *(long **)(unaff_x19 + (long)(int)uVar1 * 8 + 0x20);
        if (plVar3 == (long *)0x0) {
LAB_068632b4:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        unaff_x28 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      }
      else {
        if (unaff_x29 == 0) goto LAB_06863154;
LAB_06863118:
        if (unaff_x24 == 0) goto LAB_068632b4;
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_068632b8;
        if (unaff_x19 == 0) goto LAB_068632b4;
        uVar5 = *(uint *)(unaff_x19 + 0x18);
        uVar1 = *(uint *)(in_stack_00000020 + unaff_x25 * 4);
        unaff_x28 = unaff_x29;
        if ((int)uVar1 < (int)(uVar5 - 1)) goto LAB_06863174;
      }
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
    } while (unaff_x27 == unaff_x28);
    param_1 = DAT_083ca578;
    in_x9 = in_stack_00000008;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x25) {
LAB_068632b8:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
  } while( true );
}


