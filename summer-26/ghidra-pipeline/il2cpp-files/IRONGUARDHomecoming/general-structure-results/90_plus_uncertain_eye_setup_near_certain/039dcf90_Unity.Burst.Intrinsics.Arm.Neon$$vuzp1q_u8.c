/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vuzp1q_u8
ENTRY_POINT: 039dcf90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039dd0c0) */

undefined8 Unity_Burst_Intrinsics_Arm_Neon__vuzp1q_u8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long *plVar10;
  long unaff_x21;
  
  plVar10 = *(long **)(unaff_x20 + 0x1f8);
  if ((*(byte *)(unaff_x21 + 0x99a) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_5830);
    thunk_FUN_01efb3a4(StringLiteral_5831);
    thunk_FUN_01efb3a4(StringLiteral_5828);
    *(undefined1 *)(unaff_x21 + 0x99a) = 1;
  }
  puVar3 = StringLiteral_5831;
  puVar2 = StringLiteral_5830;
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  uVar4 = FUN_039dd8a0(param_2);
  plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_0340c37c(plVar10,0,0);
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_03a3a554(uVar5,uVar4,plVar10,0,0);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_039dd09c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_039dd09c:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return uVar5;
}


