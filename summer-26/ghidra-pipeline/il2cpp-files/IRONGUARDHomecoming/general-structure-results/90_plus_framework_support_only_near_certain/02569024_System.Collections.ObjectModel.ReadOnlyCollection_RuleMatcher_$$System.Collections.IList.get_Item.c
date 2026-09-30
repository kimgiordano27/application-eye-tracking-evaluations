/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<RuleMatcher>$$System.Collections.IList.get_Item
ENTRY_POINT: 02569024
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
System_Collections_ObjectModel_ReadOnlyCollection<RuleMatcher>__System_Collections_IList_get_Item
          (void)

{
  undefined *puVar1;
  bool in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w8;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long in_stack_00000020;
  long in_stack_00000028;
  
  if (!in_ZR) {
    if (in_w8 != 0) {
      return 0;
    }
    plVar8 = *(long **)(unaff_x20 + 0x28);
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
           ) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02569090;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                          ,0);
LAB_02569090:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    *(undefined8 *)(in_stack_00000028 + 0x38) = uVar3;
    thunk_FUN_01f51358();
    unaff_x20 = in_stack_00000028;
  }
  plVar8 = *(long **)(unaff_x20 + 0x38);
  *(undefined4 *)(unaff_x20 + 0x10) = 0xfffffffd;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02569114;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02569114:
  uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  if ((uVar6 & 1) == 0) {
    FUN_025692f4();
    *(undefined8 *)(in_stack_00000028 + 0x38) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x38),0);
    return 0;
  }
  plVar8 = *(long **)(in_stack_00000028 + 0x38);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_025691a0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,1);
LAB_025691a0:
  lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  lVar9 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_01f116d0(lVar5,lVar9);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar5,lVar9);
    }
  }
  *(long *)(in_stack_00000028 + 0x18) = lVar4;
  lVar9 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_01f116d0(lVar5,lVar9);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar5,lVar9);
    }
  }
  thunk_FUN_01f51358((long *)(in_stack_00000028 + 0x18),lVar4);
  *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
  return 1;
}


