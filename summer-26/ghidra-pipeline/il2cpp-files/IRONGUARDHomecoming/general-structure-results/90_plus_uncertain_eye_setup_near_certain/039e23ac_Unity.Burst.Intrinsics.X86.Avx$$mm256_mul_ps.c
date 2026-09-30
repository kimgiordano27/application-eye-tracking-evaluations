/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Avx$$mm256_mul_ps
ENTRY_POINT: 039e23ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039e2588) */
/* WARNING: Removing unreachable block (ram,0x039e24dc) */
/* WARNING: Removing unreachable block (ram,0x039e2594) */
/* WARNING: Removing unreachable block (ram,0x039e2548) */
/* WARNING: Removing unreachable block (ram,0x039e2550) */
/* WARNING: Removing unreachable block (ram,0x039e2560) */

undefined4 Unity_Burst_Intrinsics_X86_Avx__mm256_mul_ps(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_5878);
    thunk_FUN_01efb3a4(StringLiteral_5879);
    *(undefined1 *)(unaff_x20 + 0x9af) = 1;
  }
  plVar2 = (long *)thunk_FUN_01f117cc(*unaff_x22);
  FUN_039e278c();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5879);
  FUN_03a3cbd8(plVar3,plVar2,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_03a3cc50(plVar3,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_03a3d458(lVar4,0,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(lVar4 + 0x10);
  thunk_FUN_01f51358();
  uVar5 = FUN_039e1954();
  uVar7 = 0;
  if ((uVar5 & 1) == 0) {
    uVar7 = 8;
  }
  lVar8 = *plVar3;
  lVar4 = *(long *)puVar1;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto Unity_Burst_Intrinsics_X86_Sse__or_ps;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar3,lVar4,0);
Unity_Burst_Intrinsics_X86_Sse__or_ps:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  if (plVar2 != (long *)0x0) {
    lVar8 = *plVar2;
    lVar4 = *(long *)puVar1;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_039e2534;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar2,lVar4,0);
LAB_039e2534:
    (*(code *)*puVar6)(plVar2,puVar6[1]);
  }
  return uVar7;
}


