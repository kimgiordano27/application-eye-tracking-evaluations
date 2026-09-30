/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<TreeViewItemWrapper>$$get_Item
ENTRY_POINT: 02576d48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Collections_ObjectModel_ReadOnlyCollection<TreeViewItemWrapper>__get_Item
          (long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lStack0000000000000020;
  long lStack0000000000000028;
  
  lStack0000000000000020 = param_2;
  lStack0000000000000028 = param_1;
  if ((DAT_0482fe17 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe17 = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02576e18;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02576e18:
    uVar2 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    *(undefined8 *)(lStack0000000000000028 + 0x28) = uVar2;
    thunk_FUN_01f51358();
    param_1 = lStack0000000000000028;
  }
  plVar8 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02576e9c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02576e9c:
  uVar6 = (*(code *)*puVar1)(plVar8,puVar1[1]);
  if ((uVar6 & 1) == 0) {
    FUN_025770a0();
    *(undefined8 *)(lStack0000000000000028 + 0x28) = 0;
    thunk_FUN_01f51358((undefined8 *)(lStack0000000000000028 + 0x28),0);
    return 0;
  }
  plVar8 = *(long **)(lStack0000000000000028 + 0x28);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02576f44;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02576f44:
  lVar4 = (*(code *)*puVar1)(plVar8,puVar1[1]);
  lVar5 = *(long *)(*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_01f116d0(lVar4,lVar5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar4,lVar5);
    }
  }
  plVar8 = (long *)(lStack0000000000000028 + 0x18);
  *plVar8 = lVar3;
  lVar5 = *(long *)(*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_01f116d0(lVar4,lVar5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar4,lVar5);
    }
  }
  thunk_FUN_01f51358(plVar8,lVar3);
  *(undefined4 *)(lStack0000000000000028 + 0x10) = 1;
  return 1;
}


