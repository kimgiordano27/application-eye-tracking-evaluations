/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcopyq_laneq_s16
ENTRY_POINT: 039da648
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x039da868) */

uint Unity_Burst_Intrinsics_Arm_Neon__vcopyq_laneq_s16(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x23;
  
                    /* try { // try from 039da650 to 03ada657 has its CatchHandler @ 039daa4c */
  uVar4 = FUN_03583944();
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = (long *)System_Console__SetupStreams();
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x9a8))(plVar5,*(undefined8 *)(*plVar5 + 0x9b0)),
       plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_5819) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_s64;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)StringLiteral_5819,0);
Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_s64:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar2 = StringLiteral_5820;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
Unity_Burst_Intrinsics_Arm_Neon__vcopy_laneq_u8:
      uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
        break;
      }
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_039da7c0;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_039da7c0:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16();
    } while ((uVar4 & 1) == 0);
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_039da858;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_039da858:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  return uVar3 & 1;
}


