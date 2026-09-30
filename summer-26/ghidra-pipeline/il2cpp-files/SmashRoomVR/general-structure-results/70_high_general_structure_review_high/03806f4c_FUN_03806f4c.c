/*
FUNCTION_NAME: FUN_03806f4c
ENTRY_POINT: 03806f4c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_8
*/


void FUN_03806f4c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if ((DAT_03ff8342 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da55d8);
    DAT_03ff8342 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar4 = FUN_03b26f4c(0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar5 = FUN_0391f968(lVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar8,0,0);
    if ((uVar5 & 1) != 0) {
      plVar6 = *(long **)(lVar4 + 0x28);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        *(undefined8 *)(param_1 + 0x198) = 0;
      }
      else {
        lVar4 = *(long *)PTR_DAT_03da55d8;
        bVar1 = *(byte *)(lVar4 + 0x130);
        if (*(byte *)(*plVar6 + 0x130) < bVar1) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = plVar6;
          if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
            plVar7 = (long *)0x0;
          }
        }
        *(long **)(param_1 + 0x198) = plVar7;
        if (*(byte *)(*plVar6 + 0x130) < bVar1) {
          plVar6 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
          plVar6 = (long *)0x0;
        }
      }
      thunk_FUN_01b4f09c(param_1 + 0x198,plVar6);
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x198);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0391f968(uVar8,0,0);
  return;
}


