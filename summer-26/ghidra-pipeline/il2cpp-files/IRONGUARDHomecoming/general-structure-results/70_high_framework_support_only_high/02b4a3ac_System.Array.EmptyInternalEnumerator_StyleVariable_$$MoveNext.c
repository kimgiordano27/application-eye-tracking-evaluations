/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<StyleVariable>$$MoveNext
ENTRY_POINT: 02b4a3ac
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


/* WARNING: Removing unreachable block (ram,0x02b4a54c) */

void System_Array_EmptyInternalEnumerator<StyleVariable>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02b4a3dc;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b4a3dc:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          if (unaff_x21 == (long *)0x0) {
            return;
          }
          lVar3 = *unaff_x21;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 == 0) goto LAB_02b4a4e8;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_02b4a4d0;
        }
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar4 = *unaff_x21;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar3) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_02b4a390;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b4a390:
        (*(code *)*puVar1)();
        FUN_02b4b5bc();
        param_1 = *unaff_x21;
        param_3 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_02b4a4d0:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02b4a504;
    }
  }
LAB_02b4a4e8:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b4a504:
  (*(code *)*puVar1)();
  return;
}


