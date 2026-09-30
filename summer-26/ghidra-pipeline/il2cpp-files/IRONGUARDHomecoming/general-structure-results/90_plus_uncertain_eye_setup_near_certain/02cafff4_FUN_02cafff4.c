/*
FUNCTION_NAME: FUN_02cafff4
ENTRY_POINT: 02cafff4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 114
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02cafff4(undefined8 param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  
  if ((DAT_0483158c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483158c = 1;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x20);
  if (*piVar3 != 4) {
    if (*piVar3 != 1) {
      return;
    }
    lVar5 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar2 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar2 = *(long *)(param_2 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xa0);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    (*pcVar8)(param_1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xa0));
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    FUN_01bc52e4(param_1,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80),0xffffffff);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  puVar4 = (undefined8 *)
           thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x60);
  plVar7 = (long *)*puVar4;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar7;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar3 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar3 + 2) * 0x10 + 0x138);
        goto LAB_02cb017c;
      }
      uVar6 = uVar6 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,2);
LAB_02cb017c:
                    /* WARNING: Could not recover jumptable at 0x02cb018c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar7,puVar4[1]);
  return;
}


