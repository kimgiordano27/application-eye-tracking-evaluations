/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<StyleVariable>$$.cctor
ENTRY_POINT: 02b4a41c
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


/* WARNING: Removing unreachable block (ram,0x02b4a54c) */

void System_Array_EmptyInternalEnumerator<StyleVariable>___cctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  do {
    piVar4 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02b4a390;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b4a390:
      (*(code *)*puVar1)();
      FUN_02b4b5bc();
      lVar2 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_02b4a3dc;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b4a3dc:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) {
          return;
        }
        lVar2 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_02b4a4e8;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_02b4a4d0;
      }
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_01ecaf44(param_3);
      }
      param_1 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_02b4a4d0:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_02b4a504;
    }
  }
LAB_02b4a4e8:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b4a504:
  (*(code *)*puVar1)();
  return;
}


