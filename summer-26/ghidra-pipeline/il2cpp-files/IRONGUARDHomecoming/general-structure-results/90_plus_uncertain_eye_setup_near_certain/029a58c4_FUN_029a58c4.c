/*
FUNCTION_NAME: FUN_029a58c4
ENTRY_POINT: 029a58c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_029a58c4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  if ((DAT_04830da9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830da9 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_1[5];
    if (plVar7 == (long *)0x0) goto LAB_029a5b68;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_029a598c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_029a598c:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_1[8] = lVar3;
    thunk_FUN_01f51358(param_1 + 8,lVar3);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_029a5b68;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_029a5a08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_029a5a08:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_029a5b68;
    }
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_029a5b68;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto 
          Meta_WitAi_ThreadUtility_ThreadPerformer_<WaitForCompletion>d__13<__Il2CppFullySharedGenericType>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);

    Meta_WitAi_ThreadUtility_ThreadPerformer_<WaitForCompletion>d__13<__Il2CppFullySharedGenericType>__System_Collections_IEnumerator_get_Current
    :
    (*(code *)*puVar2)(auStack_88,plVar7,puVar2[1]);
    memcpy(auStack_d0,auStack_88,0x48);
    lVar3 = param_1[6];
    if (lVar3 == 0) break;
    pcVar9 = *(code **)(lVar3 + 0x18);
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
    memcpy(auStack_88,auStack_d0,0x48);
    uVar5 = (*pcVar9)(uVar8,auStack_88,*(undefined8 *)(lVar3 + 0x28));
  } while ((uVar5 & 1) == 0);
  lVar3 = param_1[7];
  memcpy(auStack_118,auStack_d0,0x48);
  if (lVar3 != 0) {
    pcVar9 = *(code **)(lVar3 + 0x18);
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
    memcpy(auStack_88,auStack_118,0x48);
    auVar10 = (*pcVar9)(uVar8,auStack_88,*(undefined8 *)(lVar3 + 0x28));
    *(undefined1 (*) [16])(param_1 + 3) = auVar10;
    thunk_FUN_01f51358((undefined1 (*) [16])(param_1 + 3),0);
    return 1;
  }
LAB_029a5b68:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


