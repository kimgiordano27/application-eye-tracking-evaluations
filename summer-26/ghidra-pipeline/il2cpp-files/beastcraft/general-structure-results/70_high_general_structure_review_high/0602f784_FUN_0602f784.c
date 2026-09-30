/*
FUNCTION_NAME: FUN_0602f784
ENTRY_POINT: 0602f784
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;telemetry_or_network_hits_6
*/


void FUN_0602f784(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  double dVar10;
  int iStack_34;
  
  if ((bRam0000000006e94dc9 & 1) == 0) {
                    /* try { // try from 0602f7b4 to 0612f8ef has its CatchHandler @ 0602f7b4
                       catch() { ... } // from try @ 0602f7b4 with catch @ 0602f7b4
                       catch() { ... } // from try @ 0602fa9c with catch @ 0602f7b4
                       catch() { ... } // from try @ 0602fb2c with catch @ 0602f7b4
                       catch() { ... } // from try @ 0602fb44 with catch @ 0602f7b4
                       catch() { ... } // from try @ 0602fb94 with catch @ 0602f7b4 */
    FUN_02e3ca1c(PTR_DAT_06a2f880);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyList<IPostInitializable>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyList<IPostLateTickable>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyList<IPostTickable>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyList<ITickable>_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_TypeInfo
                );
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyList<InputDevice>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyList<Instruction>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2f358);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyList<object>_TypeInfo);
    bRam0000000006e94dc9 = 1;
  }
  FUN_0602ec30(param_1);
  FUN_0602e57c(param_1,0);
  lVar7 = *(long *)(param_1 + 0x40);
  iStack_34 = param_2;
  uVar2 = thunk_FUN_02e786f0(*(undefined8 *)
                              System_Collections_Generic_IReadOnlyList<IPostInitializable>_TypeInfo,
                             &iStack_34);
  uVar2 = FUN_054838b8(*(undefined8 *)System_Collections_Generic_IReadOnlyList<object>_TypeInfo,
                       uVar2,0);
  uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)
                              System_Collections_Generic_IReadOnlyList<ITickable>_TypeInfo);
  FUN_0602fc58(uVar3,uVar2,param_2);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_0602fcd0(lVar7,uVar3);
  plVar8 = (long *)(param_1 + 0x20);
  uVar2 = 0;
  if (*plVar8 != 0) {
    FUN_046bdafc(*plVar8,0,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
    *plVar8 = 0;
    uVar2 = thunk_FUN_02ee2be8(plVar8,0);
  }
  if ((*(char *)(param_1 + 0x70) != '\0') && (uVar4 = FUN_0602ff5c(uVar2,param_2), (uVar4 & 1) != 0)
     ) {
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x48) + 0x30);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar7 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Collections_Generic_IReadOnlyList<Instruction>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0602f960;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02e759c0(plVar8,*(long *)
                                  System_Collections_Generic_IReadOnlyList<Instruction>_TypeInfo,0);
LAB_0602f960:
    uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    puVar1 = PTR_DAT_06a2f880;
    if ((uVar4 & 1) == 0) {
      plVar8 = *(long **)(param_1 + 0x90);
      *(undefined1 *)(param_1 + 0x70) = 0;
      uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
      FUN_0557a208(uVar2,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_IReadOnlyList<IPostLateTickable>_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_06a2f358 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar3 = FUN_0561ce94(param_1 + 0x88,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar7 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)
               UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_TypeInfo
             ) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0602fa84;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02e759c0(plVar8,*(long *)
                                    UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_TypeInfo
                            ,0);
LAB_0602fa84:
      uVar2 = (*(code *)*puVar5)(uVar3,plVar8,uVar2,puVar5[1]);
      *(undefined8 *)(param_1 + 0xa0) = uVar2;
    }
    else {
      dVar10 = 10.0;
      if (param_2 != 0x10ed) {
        plVar8 = *(long **)(param_1 + 0x38);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar7 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)System_Collections_Generic_IReadOnlyList<InputDevice>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0602faac;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02e759c0(plVar8,*(long *)
                                      System_Collections_Generic_IReadOnlyList<InputDevice>_TypeInfo
                              ,0);
LAB_0602faac:
        fVar9 = (float)(*(code *)*puVar5)(plVar8,puVar5[1]);
        dVar10 = (double)fVar9;
      }
      plVar8 = *(long **)(param_1 + 0x90);
      uVar2 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a2f880);
      FUN_0557a208(uVar2,param_1,
                   *(undefined8 *)System_Collections_Generic_IReadOnlyList<IPostTickable>_TypeInfo,0
                  );
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar7 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)
               UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_TypeInfo
             ) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0602fb44;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02e759c0(plVar8,*(long *)
                                    UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<SceneInstance>_TypeInfo
                            ,0);
LAB_0602fb44:
      (*(code *)*puVar5)(dVar10,plVar8,uVar2,puVar5[1]);
    }
  }
  return;
}


