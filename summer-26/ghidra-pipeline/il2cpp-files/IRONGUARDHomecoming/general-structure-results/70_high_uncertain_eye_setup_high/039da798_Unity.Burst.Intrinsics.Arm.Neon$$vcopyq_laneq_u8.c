/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcopyq_laneq_u8
ENTRY_POINT: 039da798
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039da868) */

uint Unity_Burst_Intrinsics_Arm_Neon__vcopyq_laneq_u8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x20;
  uint unaff_w21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
code_r0x039da798:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
                    /* try { // try from 039da7a0 to 03ada7c7 has its CatchHandler @ 039daa54 */
  if (in_x9 != 0) goto LAB_039da78c;
LAB_039da7a4:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    (*(code *)*puVar1)();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16();
    if ((uVar2 & 1) != 0) {
LAB_039da800:
      if (unaff_x20 == (long *)0x0) goto LAB_039da864;
      lVar3 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_039da83c;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8:
    unaff_w21 = (*(code *)*puVar1)();
    if ((unaff_w21 & 1) == 0) {
      unaff_w21 = 0;
      goto LAB_039da800;
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_039da7a4;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_039da78c:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x039da798;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_039da858;
    }
  }
LAB_039da83c:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_039da858:
  (*(code *)*puVar1)();
LAB_039da864:
  return unaff_w21 & 1;
}


