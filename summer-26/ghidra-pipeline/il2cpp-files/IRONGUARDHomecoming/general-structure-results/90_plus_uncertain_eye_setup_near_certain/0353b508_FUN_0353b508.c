/*
FUNCTION_NAME: FUN_0353b508
ENTRY_POINT: 0353b508
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0353b8dc) */

void FUN_0353b508(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  
  if ((DAT_048330e4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_lane_u32__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_laneq_s16__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_laneq_s32__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048330e4 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  plVar4 = (long *)*param_2;
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar7);
    }
    uVar5 = FUN_03582560(plVar4,0,0);
    if ((uVar5 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_0353b8e4;
      lVar7 = (**(code **)(*plVar4 + 0x7b8))(plVar4,0x3e,*(undefined8 *)(*plVar4 + 0x7c0));
      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_laneq_s32__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if ((lVar7 != 0) && (0 < (int)*(ulong *)(lVar7 + 0x18))) {
        uVar5 = 0;
        uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar12 = *(long **)(lVar7 + uVar5 * 8 + 0x20);
                    /* catch() { ... } // from try @ 0353b668 with catch @ 0353b628
                       catch() { ... } // from try @ 0353b6a0 with catch @ 0353b628
                       catch() { ... } // from try @ 0353b6e4 with catch @ 0353b628 */
          plVar4 = (long *)FUN_022cd888(plVar12,*(undefined8 *)
                                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_lane_u32__
                                       );
          if (plVar4 != (long *)0x0) {
            lVar9 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 0353b64c to 0363b657 has its CatchHandler @ 0353b680 */
            if (uVar8 != 0) {
                    /* try { // try from 0353b65c to 0363b667 has its CatchHandler @ 0353b684 */
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                    /* try { // try from 0353b668 to 0363b69b has its CatchHandler @ 0353b628 */
                if (*(long *)(piVar11 + -2) ==
                    *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_laneq_s16__) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0353b694;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0353b64c with catch @ 0353b680
                        */
            puVar6 = (undefined8 *)
                     FUN_01ecb238(plVar4,*(long *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_laneq_s16__
                                  ,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0353b65c with catch @ 0353b684
                        */
LAB_0353b694:
                    /* try { // try from 0353b69c to 0363b69f has its CatchHandler @ 0353b6d0 */
            plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
                    /* try { // try from 0353b6a0 to 0363b6d3 has its CatchHandler @ 0353b628 */
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar9 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* try { // try from 0353b6f0 to 0363b6f7 has its CatchHandler @ 0353b6f8 */
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0353b6f4;
                  }
                  uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 0353b69c with catch @ 0353b6d0 */
                  piVar11 = piVar11 + 4;
                    /* try { // try from 0353b6d4 to 0363b6e3 has its CatchHandler @ 0353b6f8 */
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
                    /* try { // try from 0353b6e4 to 0363b6ef has its CatchHandler @ 0353b628 */
LAB_0353b6f4:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353b6d4 with catch @ 0353b6f8
                       catch(type#2 @ 00000000) { ... } // from try @ 0353b6f0 with catch @ 0353b6f8
                        */
              uVar8 = (*(code *)*puVar6)(plVar4,puVar6[1]);
              if ((uVar8 & 1) == 0) {
                iVar14 = 6;
                iVar13 = 6;
                goto joined_r0x0353b7dc;
              }
              lVar9 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0353b750;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar3,0);
LAB_0353b750:
              lVar9 = (*(code *)*puVar6)(plVar4,puVar6[1]);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar10 = *(long *)puVar1;
              uVar15 = *(undefined8 *)(lVar9 + 0x10);
              lVar9 = *param_2;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar10);
              }
              uVar8 = FUN_03582560(uVar15,lVar9,0);
            } while ((uVar8 & 1) == 0);
            *param_1 = plVar12;
            thunk_FUN_01f51358(param_1,plVar12);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
            *param_2 = lVar9;
            thunk_FUN_01f51358(param_2);
            iVar14 = 9;
            iVar13 = 9;
joined_r0x0353b7dc:
            if (plVar4 != (long *)0x0) {
              lVar9 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0353b834;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)
                       FUN_01ecb238(plVar4,*(long *)
                                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                    ,0);
LAB_0353b834:
              (*(code *)*puVar6)(plVar4,puVar6[1]);
              iVar13 = iVar14;
            }
            if ((iVar13 != 6) && (iVar13 != 0)) {
              return;
            }
          }
          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
    }
    return;
  }
LAB_0353b8e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


