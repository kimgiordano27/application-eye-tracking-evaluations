/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-InputSystemUIInputModule.InputActionReferenceState>$$get_Item
ENTRY_POINT: 02aa2aa4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
System_Collections_Generic_Dictionary<object,_InputSystemUIInputModule_InputActionReferenceState>__get_Item
          (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  lStack_20 = param_2;
  uStack_18 = param_1;
  if ((DAT_0483103a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483103a = 1;
  }
  plVar6 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar11 = (ulong)*(uint *)(plVar6[6] + 0xfc);
  puVar12 = auStack_40 + -(uVar11 + 0xf & 0x1fffffff0);
  plStack_30 = &lStack_20;
  puStack_28 = &uStack_18;
  uStack_38 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar6 + 0x80));
  if (*piVar3 == 0) {
    FUN_01bc52e4(uStack_18,*(undefined8 *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_18,
                                *(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    plVar6 = (long *)*puVar5;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto FUN_02aa2c04;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
FUN_02aa2c04:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    FUN_01bc5360(uStack_18,*(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar4);
    FUN_01bc52e4(uStack_18,*(undefined8 *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    while (piVar3 = (int *)thunk_FUN_01ee7388(uStack_18,
                                              *(long *)(**(long **)(*(long *)(lStack_20 + 0x20) +
                                                                   0xc0) + 0x80) + 0xa0),
          0 < *piVar3) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_18,
                                  *(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80)
                                  + 0xe0);
      plVar6 = (long *)*puVar5;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_02aa2cec;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02aa2cec:
      uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar9 & 1) == 0) break;
      piVar3 = (int *)thunk_FUN_01ee7388(uStack_18,
                                         *(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) +
                                                  0x80) + 0xa0);
      FUN_01bc52e4(uStack_18,
                   *(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80) + 0xa0,
                   *piVar3 + -1);
    }
    piVar3 = (int *)thunk_FUN_01ee7388(uStack_18,
                                       *(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) +
                                                0x80) + 0xa0);
    if (*piVar3 < 1) goto LAB_02aa2d6c;
LAB_02aa2e78:
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lStack_20 + 0x20) + 0xc0) + 8))(uStack_18);
    FUN_01bc5360(uStack_18,*(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 0);
  }
  else if (*piVar3 == 1) {
    FUN_01bc52e4(uStack_18,*(undefined8 *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02aa2d6c:
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_18,
                                *(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80) +
                                0xe0);
    plVar6 = (long *)*puVar5;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02aa2de4;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02aa2de4:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) != 0) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_18,
                                  *(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80)
                                  + 0xe0);
      plVar6 = (long *)*puVar5;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar3 * 0x10 + 0x138;
            goto LAB_02aa2ec4;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      lVar7 = FUN_01ecb238(plVar6,lVar7,0);
LAB_02aa2ec4:
      lVar7 = *(long *)(lVar7 + 8);
      puStack_10 = puVar12;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar6,&puStack_10,puVar12);
      FUN_01f08810(uStack_18,
                   *(long *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80) + 0x20,puVar12,
                   uVar11);
      uVar10 = 1;
      FUN_01bc52e4(uStack_18,*(undefined8 *)(**(long **)(*(long *)(lStack_20 + 0x20) + 0xc0) + 0x80)
                   ,1);
      goto LAB_02aa2f24;
    }
    goto LAB_02aa2e78;
  }
  uVar10 = 0;
LAB_02aa2f24:
  if (*(long *)(lVar1 + 0x28) == lStack_8) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


