/*
FUNCTION_NAME: FUN_03fc0d68
ENTRY_POINT: 03fc0d68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_03fc0d68(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_0483b8c8 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04583728);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04583730);
    DAT_0483b8c8 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x188))
              (plVar6,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(*plVar6 + 400));
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = FUN_03fae1e8();
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    thunk_FUN_01f51358();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar2 = *(long *)(lVar2 + 0xa0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = FUN_0265d924(lVar2,*(undefined8 *)PTR_DAT_04583730);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    thunk_FUN_01f51358();
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  }
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03fc0eb0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03fc0eb0:
  uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  if ((uVar4 & 1) == 0) {
    FUN_03fc103c();
    *(undefined8 *)(param_1 + 0x38) = 0;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_03fae27c(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_04583728) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03fc0f54;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)PTR_DAT_04583728,0);
LAB_03fc0f54:
  uVar1 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_01f51358();
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}


