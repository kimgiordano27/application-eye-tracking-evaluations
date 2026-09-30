/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector2>
ENTRY_POINT: 04d7f484
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04d7fa34) */

void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector2>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  uint uVar10;
  long *unaff_x21;
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
  long *in_stack_000001b8;
  long in_stack_000001e8;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04d7f56c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_04d7f56c:
  uVar8 = (*(code *)*puVar2)();
  plVar5 = in_stack_000001b8;
  if ((uVar8 & 1) == 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_04d7fa30;
    lVar6 = **(long **)(in_stack_000001e8 + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0406aaec(lVar6);
    }
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04d7f654;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_04d7f654:
    (*(code *)*puVar2)(&stack0x00000058);
    in_stack_000000a8 = in_stack_00000070;
    in_stack_000000a0 = in_stack_00000068;
    in_stack_000000b8 = in_stack_00000080;
    in_stack_000000b0 = in_stack_00000078;
    in_stack_000000c0 = in_stack_00000088;
    in_stack_00000098 = in_stack_00000060;
    in_stack_00000090 = in_stack_00000058;
    lVar6 = *(long *)(*(long *)(in_stack_000001e8 + 0x38) + 0x50);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0406aaec();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_05d07acc(&stack0x00000090,*(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x48));
    memcpy(&stack0x000000d0,&stack0x00000000,0x58);
    puVar1 = PTR_DAT_08f8a7d0;
    in_stack_00000000 = 0;
    in_stack_00000010 = &stack0x000001e8;
    in_stack_00000008 = &stack0x000000d0;
    do {
      uVar8 = FUN_071df48c(&stack0x000000d0,
                           *(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x78));
      plVar5 = in_stack_00000120;
      if ((uVar8 & 1) == 0) {
        uVar10 = 0x10;
        goto LAB_04d7f9e4;
      }
      if (in_stack_00000120 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = *in_stack_00000120;
      lVar6 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04d7f750;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000120,lVar6,0);
LAB_04d7f750:
      uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      uVar4 = FUN_086299f4(&stack0x000001c0,0);
      uVar8 = thunk_FUN_07367938(uVar3,uVar4,0);
    } while ((uVar8 & 1) == 0);
    lVar7 = *plVar5;
    lVar6 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_04d7f938;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar5,lVar6,1);
LAB_04d7f938:
    uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
    plVar5 = (long *)FUN_0862ccb8(uVar3,0);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f8c250) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04d7f9cc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f8c250,0);
LAB_04d7f9cc:
      (*(code *)*puVar2)(plVar5);
    }
    uVar10 = 0xf;
LAB_04d7f9e4:
    FUN_071df8d4(&stack0x000000d0,*(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x80));
    if ((uVar10 | 0x10) == 0x10) {
      *(undefined4 *)(unaff_x19 + 0xa8) = 4;
    }
  }
  else {
    if (in_stack_000001b8 == (long *)0x0) {
LAB_04d7fa30:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *(long *)(*(long *)(in_stack_000001e8 + 0x38) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0406aaec(lVar6);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04d7f910;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar5,lVar6,0);
LAB_04d7f910:
    (*(code *)*puVar2)(plVar5);
  }
  return;
}


