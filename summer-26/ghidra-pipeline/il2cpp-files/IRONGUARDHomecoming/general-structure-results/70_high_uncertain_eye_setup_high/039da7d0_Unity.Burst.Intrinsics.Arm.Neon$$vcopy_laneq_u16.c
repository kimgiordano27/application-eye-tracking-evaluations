/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcopy_laneq_u16
ENTRY_POINT: 039da7d0
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

uint Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u16(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x20;
  uint unaff_w21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar1 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16();
    if ((uVar1 & 1) != 0) goto LAB_039da800;
    lVar3 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8:
    unaff_w21 = (*(code *)*puVar2)();
    if ((unaff_w21 & 1) == 0) break;
    lVar3 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_039da7c0;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_039da7c0:
    (*(code *)*puVar2)();
  } while( true );
  unaff_w21 = 0;
LAB_039da800:
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_039da858;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_039da858:
    (*(code *)*puVar2)();
  }
  return unaff_w21 & 1;
}


