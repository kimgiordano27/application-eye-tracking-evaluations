/*
FUNCTION_NAME: System.Array$$Empty<Flow.RecursionNode>
ENTRY_POINT: 022e46e4
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


/* WARNING: Removing unreachable block (ram,0x022e4800) */

uint System_Array__Empty<Flow_RecursionNode>(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong in_x9;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  
  do {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_022e4720;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022e4720:
      uVar3 = (*(code *)*puVar2)();
      uVar4 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),uVar3,*(undefined8 *)(unaff_x21 + 0x28));
      if ((uVar4 & 1) != 0) {
        uVar1 = unaff_w22;
        if (unaff_x19 == (long *)0x0) goto LAB_022e47bc;
LAB_022e475c:
        unaff_w22 = uVar1;
        lVar5 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 == 0) goto LAB_022e4794;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_022e477c;
      }
      lVar5 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_022e46a8;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022e46a8:
      unaff_w22 = (*(code *)*puVar2)();
      if ((unaff_w22 & 1) == 0) {
        unaff_w22 = 0;
        uVar1 = 0;
        if (unaff_x19 != (long *)0x0) goto LAB_022e475c;
        goto LAB_022e47bc;
      }
      param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_01ecaf44(param_3);
      }
      param_1 = *unaff_x19;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar6 = piVar6 + 4;
    if (uVar4 == 0) break;
LAB_022e477c:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_022e47b0;
    }
  }
LAB_022e4794:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022e47b0:
  (*(code *)*puVar2)();
LAB_022e47bc:
  return unaff_w22 & 1;
}


