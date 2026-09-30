/*
FUNCTION_NAME: System.Array$$BinarySearch<VisualTreeAsset.SlotDefinition>
ENTRY_POINT: 022e2330
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022e243c) */

uint System_Array__BinarySearch<VisualTreeAsset_SlotDefinition>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  undefined1 auVar5 [16];
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_022e235c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022e235c:
        auVar5 = (*(code *)*puVar1)();
        uVar2 = (**(code **)(unaff_x21 + 0x18))
                          (*(undefined8 *)(unaff_x21 + 0x40),auVar5._0_8_,auVar5._8_8_,
                           *(undefined8 *)(unaff_x21 + 0x28));
        if ((uVar2 & 1) == 0) {
LAB_022e238c:
          if (unaff_x19 == (long *)0x0) goto LAB_022e23f8;
          lVar3 = *unaff_x19;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 == 0) goto LAB_022e23d0;
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_022e23b8;
        }
        lVar3 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x23) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_022e22e4;
            }
            uVar2 = uVar2 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022e22e4:
        unaff_w22 = (*(code *)*puVar1)();
        if ((unaff_w22 & 1) == 0) goto LAB_022e238c;
        param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01ecaf44(param_3);
        }
        param_1 = *unaff_x19;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_022e23b8:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_022e23ec;
    }
  }
LAB_022e23d0:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022e23ec:
  (*(code *)*puVar1)();
LAB_022e23f8:
  return (unaff_w22 ^ 1) & 1;
}


