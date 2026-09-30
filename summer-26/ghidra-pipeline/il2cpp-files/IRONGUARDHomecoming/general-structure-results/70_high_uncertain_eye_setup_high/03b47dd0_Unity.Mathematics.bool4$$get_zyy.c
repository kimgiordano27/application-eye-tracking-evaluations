/*
FUNCTION_NAME: Unity.Mathematics.bool4$$get_zyy
ENTRY_POINT: 03b47dd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b47ea8) */
/* WARNING: Removing unreachable block (ram,0x03b47eec) */

void Unity_Mathematics_bool4__get_zyy(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x24;
  
code_r0x03b47dd0:
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    (*(code *)*puVar1)();
    if ((unaff_x24 & 1) == 0) {
      FUN_03418748();
    }
    FUN_03b48034();
    FUN_03418748();
    unaff_x24 = 0;
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto Unity_Mathematics_bool4__set_zxw;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
Unity_Mathematics_bool4__set_zxw:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_03b47e9c;
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto Unity_Mathematics_bool4__get_zzz;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x22) goto code_r0x03b47dd0;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto Unity_Mathematics_bool4__get_zwx;
    }
  }
Unity_Mathematics_bool4__get_zzz:
  puVar1 = (undefined8 *)FUN_01ecb238();
Unity_Mathematics_bool4__get_zwx:
  (*(code *)*puVar1)();
LAB_03b47e9c:
  FUN_03419060();
  (**(code **)(*unaff_x20 + 0x168))();
  return;
}


