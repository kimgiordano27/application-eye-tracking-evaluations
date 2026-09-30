/*
FUNCTION_NAME: FUN_035e797c
ENTRY_POINT: 035e797c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035e7af0) */
/* WARNING: Removing unreachable block (ram,0x035e7b18) */
/* WARNING: Removing unreachable block (ram,0x035e7bc8) */

void FUN_035e797c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)(*(code *)*param_1)();
  puVar3 = 
  Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_035e79fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_035e79fc:
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_035e7ae4;
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_035e7abc;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_035e7a58;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar3,0);
LAB_035e7a58:
    lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar9 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_23__
                                );
      uVar8 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                                );
      FUN_034efd98(uVar6,uVar7,uVar8,0);
      uVar7 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_34__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar7);
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0329d8fc();
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_035e7ad8;
    }
  }
LAB_035e7abc:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_035e7ad8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_035e7ae4:
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    FUN_035e7640();
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar6 = thunk_FUN_01f117cc();
  uVar7 = thunk_FUN_01efb3a4(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_3__
                            );
  uVar8 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                            );
  FUN_034efd98(uVar6,uVar7,uVar8,0);
  uVar7 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_34__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


