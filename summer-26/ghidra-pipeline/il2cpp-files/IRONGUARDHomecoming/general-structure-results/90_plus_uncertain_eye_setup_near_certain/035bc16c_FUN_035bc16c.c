/*
FUNCTION_NAME: FUN_035bc16c
ENTRY_POINT: 035bc16c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035bc2d8) */

void FUN_035bc16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_048335fa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_048335fa = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar3 = (long *)FUN_034d3df0(param_3,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
  if (0x1000 < lVar4) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_System_Net_CookieCollection_CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext__
                              );
    Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_System_Net_CookieCollection_CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar7);
  }
  lVar4 = FUN_01f08890(*(undefined8 *)
                        Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
  plVar10 = (long *)(param_1 + 0x20);
  *plVar10 = lVar4;
  thunk_FUN_01f51358(plVar10);
  lVar4 = *plVar10;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar2 = (**(code **)(*plVar3 + 0x328))
                    (plVar3,lVar4,0,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*plVar3 + 0x330));
  lVar4 = *plVar10;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (iVar2 != *(int *)(lVar4 + 0x18)) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_Unity_VisualScripting_Cooldown_<>c__DisplayClass43_0_<StartListening>b__0__
                              );
    Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_System_Net_CookieCollection_CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar7);
  }
  FUN_035c21e4(param_1,lVar4,param_1 + 0x28);
  FUN_035c22a4(param_1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
  lVar4 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_035bc2b4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_035bc2b4:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
  return;
}


