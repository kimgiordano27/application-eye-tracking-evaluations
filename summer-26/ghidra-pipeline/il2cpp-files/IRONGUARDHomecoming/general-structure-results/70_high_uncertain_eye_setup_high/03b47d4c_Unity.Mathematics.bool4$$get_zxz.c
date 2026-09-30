/*
FUNCTION_NAME: Unity.Mathematics.bool4$$get_zxz
ENTRY_POINT: 03b47d4c
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

void Unity_Mathematics_bool4__get_zxz(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x24;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto Unity_Mathematics_bool4__set_zxw;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01ecb238();
Unity_Mathematics_bool4__set_zxw:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_03b47e9c;
        lVar3 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto Unity_Mathematics_bool4__get_zzz;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto Unity_Mathematics_bool4__get_zzy;
      }
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_03b47ddc;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03b47ddc:
      (*(code *)*puVar1)();
      if ((unaff_x24 & 1) == 0) {
        FUN_03418748();
      }
      FUN_03b48034();
      FUN_03418748();
      unaff_x24 = 0;
      param_1 = *unaff_x19;
      param_3 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
Unity_Mathematics_bool4__get_zzy:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
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


