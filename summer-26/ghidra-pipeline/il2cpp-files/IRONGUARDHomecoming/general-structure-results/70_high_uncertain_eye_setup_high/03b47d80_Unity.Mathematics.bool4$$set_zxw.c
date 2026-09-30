/*
FUNCTION_NAME: Unity.Mathematics.bool4$$set_zxw
ENTRY_POINT: 03b47d80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b47ea8) */
/* WARNING: Removing unreachable block (ram,0x03b47eec) */

void Unity_Mathematics_bool4__set_zxw(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x24;
  
code_r0x03b47d80:
  uVar1 = (*(code *)*param_1)();
  if ((uVar1 & 1) != 0) {
    lVar3 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03b47ddc;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b47ddc:
    (*(code *)*puVar2)();
    if ((unaff_x24 & 1) == 0) {
      FUN_03418748();
    }
    FUN_03b48034();
    FUN_03418748();
    unaff_x24 = 0;
    lVar3 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          param_1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto code_r0x03b47d80;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_01ecb238();
    goto code_r0x03b47d80;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto Unity_Mathematics_bool4__get_zwx;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
Unity_Mathematics_bool4__get_zwx:
    (*(code *)*puVar2)();
  }
  FUN_03419060();
  (**(code **)(*unaff_x20 + 0x168))();
  return;
}


