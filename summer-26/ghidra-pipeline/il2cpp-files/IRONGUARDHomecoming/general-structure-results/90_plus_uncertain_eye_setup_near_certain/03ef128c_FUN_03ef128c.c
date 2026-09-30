/*
FUNCTION_NAME: FUN_03ef128c
ENTRY_POINT: 03ef128c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_03ef128c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_0483aef3 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0457d350);
    thunk_FUN_01efb3a4(PTR_DAT_0457d358);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483aef3 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 2) {
    lVar5 = *(long *)(param_1 + 0x28);
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(long *)(param_1 + 0x18) = lVar5;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_01f51358((long *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar2 = (long *)FUN_03ef0b10(lVar5);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0457d350) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03ef138c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)PTR_DAT_0457d350,0);
LAB_03ef138c:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    thunk_FUN_01f51358();
  }
  plVar2 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03ef1410;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03ef1410:
  uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  if ((uVar6 & 1) == 0) {
    FUN_03ef1570();
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),0);
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0457d358) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03ef14a0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)PTR_DAT_0457d358,0);
LAB_03ef14a0:
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_01f51358();
  *(undefined4 *)(param_1 + 0x10) = 2;
  return 1;
}


