/*
FUNCTION_NAME: FUN_02569de0
ENTRY_POINT: 02569de0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_02569de0(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long *plStack_70;
  undefined8 *local_68;
  long local_60;
  undefined8 local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = param_2;
  local_58 = param_1;
  if ((DAT_0482fdec & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    DAT_0482fdec = 1;
  }
  plVar7 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar12 = (ulong)*(uint *)(plVar7[7] + 0xfc);
  puVar13 = auStack_80 + -(uVar12 + 0xf & 0x1fffffff0);
  plStack_70 = &local_60;
  local_68 = &local_58;
  local_78 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar7 + 0x80));
  if (*piVar3 == 0) {
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    if (*(int *)(*(long *)Method_System_Collections_CollectionBase_System_Collections_IList_Remove__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_03ec8718(*(undefined8 *)
                          Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__,0);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) +
                                                  0x80) + 0x60);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    local_50 = (undefined1 *)*puVar5;
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 0x18);
    (*(code *)puVar5[2])(*puVar5,puVar5,lVar8,&local_50);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) +
                                                  0x80) + 0x60);
    plVar7 = (long *)*puVar5;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar3 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02569fe8;
        }
        uVar10 = uVar10 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02569fe8:
    uVar4 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    FUN_01bc5360(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar4);
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_0256a05c;
  }
  if (*piVar3 == 1) {
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    do {
      pcVar6 = (char *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20)
                                                                        + 0xc0) + 0x80) + 0x100);
      if (*pcVar6 == '\0') {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 8))(local_58);
        FUN_01bc5360(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) +
                              0xe0,0);
        goto LAB_0256a054;
      }
LAB_0256a05c:
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0)
                                                    + 0x80) + 0xe0);
      plVar7 = (long *)*puVar5;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0256a0d4;
          }
          uVar10 = uVar10 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_0256a0d4:
      uVar2 = (*(code *)*puVar5)(plVar7,puVar5[1]);
      FUN_01bc5068(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0x100
                   ,uVar2 & 1);
      pcVar6 = (char *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20)
                                                                        + 0xc0) + 0x80) + 0x100);
    } while (*pcVar6 == '\0');
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) +
                                                  0x80) + 0xe0);
    plVar7 = (long *)*puVar5;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar3 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar8) {
          lVar8 = lVar9 + (long)*piVar3 * 0x10 + 0x138;
          goto System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count;
        }
        uVar10 = uVar10 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar10 != 0);
    }
    lVar8 = FUN_01ecb238(plVar7,lVar8,0);
System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count:
    lVar8 = *(long *)(lVar8 + 8);
    local_50 = puVar13;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar7,&local_50,puVar13);
    FUN_01f08810(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0x20,
                 puVar13,uVar12);
    uVar11 = 1;
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),1);
  }
  else {
LAB_0256a054:
    uVar11 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


