/*
FUNCTION_NAME: FUN_02cb0774
ENTRY_POINT: 02cb0774
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


void FUN_02cb0774(undefined8 param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  if ((DAT_0483158d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483158d = 1;
  }
  lVar3 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  piVar4 = (int *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x20);
  iVar1 = *piVar4;
  if (iVar1 == 4) {
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x60);
    plVar6 = (long *)*puVar5;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02cb09a4;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02cb09a4:
    UNRECOVERED_JUMPTABLE = (code *)*puVar5;
    uVar7 = puVar5[1];
  }
  else if (iVar1 == 3) {
    lVar8 = *(long *)(param_2 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar3 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
      uVar2 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar3 = *(long *)(param_2 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xe0);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    plVar6 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0xc0);
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xe0);
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    lVar8 = *(long *)(param_2 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar3 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
      uVar2 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar3 = *(long *)(param_2 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xd8);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    plVar6 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0xa0);
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd8);
  }
                    /* WARNING: Could not recover jumptable at 0x02cb09b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar6,uVar7);
  return;
}


