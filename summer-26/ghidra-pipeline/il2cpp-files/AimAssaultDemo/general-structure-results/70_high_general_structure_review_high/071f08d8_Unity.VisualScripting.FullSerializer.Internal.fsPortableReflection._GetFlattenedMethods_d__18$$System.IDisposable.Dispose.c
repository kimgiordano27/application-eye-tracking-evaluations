/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection.<GetFlattenedMethods>d__18$$System.IDisposable.Dispose
ENTRY_POINT: 071f08d8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_<GetFlattenedMethods>d__18__System_IDisposable_Dispose
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar4;
  ulong uVar5;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  
  lVar4 = 0x20;
  do {
    FUN_075d2bc8(param_1,0);
    lVar3 = *(long *)(unaff_x19 + 0x130);
    if (unaff_x24 == 7) {
      if (lVar3 != 0) {
        FUN_075d5c10(lVar3,*unaff_x22,0);
        return;
      }
      break;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (lVar2 == 0) break;
    uVar5 = unaff_x24 - 4;
    if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_071f0b5c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    FUN_075cae58(&stack0x00000140,*(undefined8 *)(lVar2 + unaff_x24 * 8),0);
    in_stack_000001b8 = in_stack_00000148;
    in_stack_000001b0 = in_stack_00000140;
    in_stack_000001c8 = in_stack_00000158;
    in_stack_000001c0 = in_stack_00000150;
    in_stack_000001d0 = in_stack_00000160;
    if (lVar3 == 0) break;
    in_stack_00000188 = in_stack_00000148;
    in_stack_00000180 = in_stack_00000140;
    in_stack_00000198 = in_stack_00000158;
    in_stack_00000190 = in_stack_00000150;
    in_stack_000001a0 = in_stack_00000160;
    FUN_075d6824(lVar3,&stack0x00000180,0);
    if (*(long *)(unaff_x19 + 0x130) == 0) break;
    FUN_075d3550(0,0,0,0x3f800000,0x3f800000,*(long *)(unaff_x19 + 0x130),1,1,0);
    lVar3 = *(long *)(unaff_x19 + 0x130);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (lVar3 == 0) break;
    FUN_075dc5c8(lVar3,*(int *)(*(long *)(*unaff_x23 + 0xb8) + 8) + 4,
                 *(undefined8 *)(unaff_x19 + 0x90),0,0);
    if (*(long *)(unaff_x19 + 0x130) == 0) break;
    FUN_075dc5c8(*(long *)(unaff_x19 + 0x130),*(int *)(*(long *)(*unaff_x23 + 0xb8) + 8) + 3,
                 *(undefined8 *)(unaff_x19 + 0x38),0,0);
    if (*(long *)(unaff_x19 + 0x130) == 0) break;
    FUN_075dc5c8(*(long *)(unaff_x19 + 0x130),*(int *)(*(long *)(*unaff_x23 + 0xb8) + 8) + 2,
                 *(undefined8 *)(unaff_x19 + 0x30),0,0);
    lVar3 = *(long *)(unaff_x19 + 0xc0);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_071f0b5c;
    puVar1 = (undefined8 *)(lVar3 + lVar4);
    in_stack_00000168 = puVar1[5];
    in_stack_00000160 = puVar1[4];
    in_stack_00000178 = puVar1[7];
    in_stack_00000170 = puVar1[6];
    in_stack_00000148 = puVar1[1];
    in_stack_00000140 = *puVar1;
    in_stack_00000158 = puVar1[3];
    in_stack_00000150 = puVar1[2];
    lVar3 = *(long *)(unaff_x19 + 0xb8);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_071f0b5c;
    puVar1 = (undefined8 *)(lVar3 + lVar4);
    in_stack_00000128 = puVar1[5];
    in_stack_00000120 = puVar1[4];
    in_stack_00000138 = puVar1[7];
    in_stack_00000130 = puVar1[6];
    in_stack_00000108 = puVar1[1];
    in_stack_00000100 = *puVar1;
    in_stack_00000118 = puVar1[3];
    in_stack_00000110 = puVar1[2];
    if (*(long *)(unaff_x19 + 0x130) == 0) break;
    in_stack_00000080 = in_stack_00000100;
    in_stack_00000088 = in_stack_00000108;
    in_stack_00000090 = in_stack_00000110;
    in_stack_00000098 = in_stack_00000118;
    in_stack_000000a0 = in_stack_00000120;
    in_stack_000000a8 = in_stack_00000128;
    in_stack_000000b0 = in_stack_00000130;
    in_stack_000000b8 = in_stack_00000138;
    in_stack_000000c0 = in_stack_00000140;
    in_stack_000000c8 = in_stack_00000148;
    in_stack_000000d0 = in_stack_00000150;
    in_stack_000000d8 = in_stack_00000158;
    in_stack_000000e0 = in_stack_00000160;
    in_stack_000000e8 = in_stack_00000168;
    in_stack_000000f0 = in_stack_00000170;
    in_stack_000000f8 = in_stack_00000178;
    FUN_075d4b74(*(long *)(unaff_x19 + 0x130),&stack0x000000c0,&stack0x00000080,0);
    lVar3 = *(long *)(unaff_x19 + 0x130);
    if (DAT_08253f87 == '\0') {
      FUN_0373b518();
      DAT_08253f87 = '\x01';
    }
    if (*(long *)(unaff_x19 + 0xa8) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0xa8) + 0x18) <= uVar5) goto LAB_071f0b5c;
    if (lVar3 == 0) break;
    FUN_075db0bc(lVar3);
    param_1 = *(long *)(unaff_x19 + 0x130);
    unaff_x24 = unaff_x24 + 1;
    lVar4 = lVar4 + 0x40;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


