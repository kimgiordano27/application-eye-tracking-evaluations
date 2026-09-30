/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector3>
ENTRY_POINT: 04d7f65c
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04d7fa34) */

void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector3>(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  code *in_x9;
  int *piVar9;
  long unaff_x19;
  uint uVar10;
  undefined8 in_stack_00000000;
  undefined1 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_00000120;
  long in_stack_000001e8;
  
  (*in_x9)();
  in_stack_000000a8 = in_stack_00000070;
  in_stack_000000a0 = in_stack_00000068;
  in_stack_000000b8 = in_stack_00000080;
  in_stack_000000b0 = in_stack_00000078;
  in_stack_000000c0 = in_stack_00000088;
  in_stack_00000098 = in_stack_00000060;
  in_stack_00000090 = in_stack_00000058;
  lVar2 = *(long *)(*(long *)(in_stack_000001e8 + 0x38) + 0x50);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_05d07acc(&stack0x00000090,*(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x48));
  memcpy(&stack0x000000d0,&stack0x00000000,0x58);
  puVar1 = PTR_DAT_08f8a7d0;
  in_stack_00000000 = 0;
  in_stack_00000010 = &stack0x000001e8;
  in_stack_00000008 = &stack0x000000d0;
  do {
    uVar3 = FUN_071df48c(&stack0x000000d0,
                         *(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x78));
    plVar7 = in_stack_00000120;
    if ((uVar3 & 1) == 0) {
      uVar10 = 0x10;
      goto LAB_04d7f9e4;
    }
    if (in_stack_00000120 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *in_stack_00000120;
    lVar2 = *(long *)puVar1;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04d7f750;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000120,lVar2,0);
LAB_04d7f750:
    uVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    uVar6 = FUN_086299f4(&stack0x000001c0,0);
    uVar3 = thunk_FUN_07367938(uVar5,uVar6,0);
  } while ((uVar3 & 1) == 0);
  lVar8 = *plVar7;
  lVar2 = *(long *)puVar1;
  uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_04d7f938;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20(plVar7,lVar2,1);
LAB_04d7f938:
  uVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar5;
  plVar7 = (long *)FUN_0862ccb8(uVar5,0);
  if (plVar7 != (long *)0x0) {
    lVar2 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f8c250) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04d7f9cc;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08f8c250,0);
LAB_04d7f9cc:
    (*(code *)*puVar4)(plVar7);
  }
  uVar10 = 0xf;
LAB_04d7f9e4:
  FUN_071df8d4(&stack0x000000d0,*(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x80));
  if ((uVar10 | 0x10) == 0x10) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


