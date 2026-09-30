/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vdot_lane_u32
ENTRY_POINT: 039dde78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039ddf70) */

void Unity_Burst_Intrinsics_Arm_Neon__vdot_lane_u32(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    *(undefined1 *)(unaff_x22 + 0x99e) = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_03a3c038();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  while (uVar3 = FUN_03a3c444(lVar2,0), (uVar3 & 1) != 0) {
    uVar4 = FUN_03a3c16c(lVar2,0);
    FUN_039de034(param_2,uVar4);
  }
  plVar5 = (long *)thunk_FUN_01f116d0(lVar2,*(undefined8 *)puVar1);
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    lVar2 = *(long *)puVar1;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_039ddf48;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar2,0);
LAB_039ddf48:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


