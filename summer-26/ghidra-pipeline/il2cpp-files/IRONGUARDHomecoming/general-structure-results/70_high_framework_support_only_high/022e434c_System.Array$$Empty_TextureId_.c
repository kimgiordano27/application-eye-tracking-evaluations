/*
FUNCTION_NAME: System.Array$$Empty<TextureId>
ENTRY_POINT: 022e434c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022e44d0) */

uint System_Array__Empty<TextureId>(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x022e434c:
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  while (uVar2 = (*(code *)*puVar3)(), (uVar2 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022e43d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_022e43d0:
    (*(code *)*puVar3)(&stack0x00000020);
    uVar6 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar6 & 1) != 0) {
      uVar1 = uVar2;
      if (unaff_x19 != (long *)0x0) goto LAB_022e4428;
      goto LAB_022e4488;
    }
    param_1 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar6 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x23) goto code_r0x022e434c;
        uVar6 = uVar6 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
  }
  uVar2 = 0;
  uVar1 = 0;
  if (unaff_x19 == (long *)0x0) goto LAB_022e4488;
LAB_022e4428:
  uVar2 = uVar1;
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_022e447c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_022e447c:
  (*(code *)*puVar3)();
LAB_022e4488:
  return uVar2 & 1;
}


