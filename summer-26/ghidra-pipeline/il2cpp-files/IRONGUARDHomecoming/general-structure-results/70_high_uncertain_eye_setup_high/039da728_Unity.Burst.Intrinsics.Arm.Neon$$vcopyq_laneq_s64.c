/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcopyq_laneq_s64
ENTRY_POINT: 039da728
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


/* WARNING: Removing unreachable block (ram,0x039da868) */

uint Unity_Burst_Intrinsics_Arm_Neon__vcopyq_laneq_s64(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong in_x9;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    piVar5 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_01ecb238();
Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8:
      uVar1 = (*(code *)*puVar2)();
      if ((uVar1 & 1) == 0) {
        uVar1 = 0;
LAB_039da800:
        if (unaff_x20 == (long *)0x0) goto LAB_039da864;
        lVar3 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_039da83c;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_039da824;
      }
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_039da7c0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_039da7c0:
      (*(code *)*puVar2)();
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16();
      if ((uVar4 & 1) != 0) goto LAB_039da800;
      param_1 = *unaff_x20;
      param_3 = *unaff_x24;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_039da824:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_039da858;
    }
  }
LAB_039da83c:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_039da858:
  (*(code *)*puVar2)();
LAB_039da864:
  return uVar1 & 1;
}


