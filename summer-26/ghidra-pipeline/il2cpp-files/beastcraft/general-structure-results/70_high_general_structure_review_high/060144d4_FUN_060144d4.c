/*
FUNCTION_NAME: FUN_060144d4
ENTRY_POINT: 060144d4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_060144d4(int *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  
  if ((bRam0000000006e94cec & 1) == 0) {
    FUN_02e3ca1c(
                System_Collections_Generic_IEnumerator<KeyValuePair<string,_SessionProperty>>_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a3be98);
    FUN_02e3ca1c(System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_IEnumerable<IResourceLocation>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_IEnumerator<KeyValuePair<string,_Subscription>>_TypeInfo
                );
    FUN_02e3ca1c(
                System_Collections_Generic_IEnumerator<KeyValuePair<uint,_TaskCompletionSource<Reply>>>_TypeInfo
                );
    FUN_02e3ca1c(System_Collections_Generic_IEnumerator<KeyValuePair<Vector3,_int>>_TypeInfo);
    FUN_02e3ca1c(
                System_Collections_Generic_IEnumerator<InputStateHistory_Record<TouchState>>_TypeInfo
                );
    bRam0000000006e94cec = 1;
  }
  puVar1 = PTR_DAT_06a3be98;
  lVar7 = *(long *)(param_1 + 8);
  uStack_48 = 0;
  if (*param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar4 = *(long *)(lVar7 + 0x28);
    plVar8 = *(long **)(*(long *)(lVar7 + 0x10) + 0x10);
    if (lVar4 == 0) {
      uVar3 = 0;
      uVar9 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar4 + 0x10);
      uVar9 = *(undefined8 *)(lVar4 + 0x18);
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar4 = *plVar8;
    uVar10 = *(undefined8 *)(lVar7 + 0x18);
    uVar11 = *(undefined8 *)(lVar7 + 0x20);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo)
        {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06014624;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02e759c0(plVar8,*(long *)
                                  System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo
                          ,0);
LAB_06014624:
    lVar4 = (*(code *)*puVar2)(uVar11,plVar8,uVar10,uVar3,uVar9,puVar2[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uStack_48 = FUN_046decbc(lVar4,*(undefined8 *)
                                    System_Collections_Generic_IEnumerator<InputStateHistory_Record<TouchState>>_TypeInfo
                            );
    uVar5 = FUN_046bbfb4(&uStack_48,
                         *(undefined8 *)
                          System_Collections_Generic_IEnumerator<KeyValuePair<Vector3,_int>>_TypeInfo
                        );
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_48;
      thunk_FUN_02ee2be8(param_1 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_038419c4(param_1 + 2,&uStack_48,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_IEnumerator<KeyValuePair<string,_SessionProperty>>_TypeInfo
                  );
      return;
    }
  }
  lVar4 = FUN_046bbff4(&uStack_48,
                       *(undefined8 *)
                        System_Collections_Generic_IEnumerator<KeyValuePair<uint,_TaskCompletionSource<Reply>>>_TypeInfo
                      );
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  plVar8 = (long *)(lVar7 + 0x30);
  *plVar8 = lVar4;
  thunk_FUN_02ee2be8(plVar8);
  if (*plVar8 != 0) {
    uVar9 = *(undefined8 *)(*plVar8 + 0x20);
    uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)
                                System_Collections_Generic_IEnumerable<IResourceLocation>_TypeInfo);
    FUN_0600fa34(uVar3,uVar9);
    *(undefined8 *)(lVar7 + 0x38) = uVar3;
    thunk_FUN_02ee2be8((undefined8 *)(lVar7 + 0x38),uVar3);
    lVar7 = *(long *)puVar1;
    *param_1 = -2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_0552c984(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


