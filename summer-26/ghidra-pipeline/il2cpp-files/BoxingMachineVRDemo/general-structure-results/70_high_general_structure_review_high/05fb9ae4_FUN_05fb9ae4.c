/*
FUNCTION_NAME: FUN_05fb9ae4
ENTRY_POINT: 05fb9ae4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_20;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05fb9d94) */
/* WARNING: Removing unreachable block (ram,0x05fb9d98) */
/* WARNING: Removing unreachable block (ram,0x05fba2fc) */

void FUN_05fb9ae4(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  long lStack_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_06b84b58 & 1) == 0) {
    FUN_02d6084c(Method_Firebase_Firestore_Future_QuerySnapshot_ThrowIfDisposed__);
    FUN_02d6084c(Method_Firebase_Firestore_Future_QuerySnapshot_swigRelease__);
    FUN_02d6084c(PTR_DAT_06761fe8);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>,_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23>__
                );
    FUN_02d6084c(Method_System_GC_CollectionCount__);
    FUN_02d6084c(PTR_DAT_06761ff8);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Nullable<int>>,_AsyncProtocolRequest_<ProcessOperation>d__24>__
                );
    FUN_02d6084c(Method_System_GC_ReRegisterForFinalize__);
    FUN_02d6084c(Method_System_GC_SuppressFinalize__);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<ValueTuple<WebHeaderCollection,_byte[],_int>>,_WebConnectionTunnel_<Initialize>d__42>__
                );
    FUN_02d6084c(PTR_DAT_06762010);
    FUN_02d6084c(Method_System_Runtime_InteropServices_GCHandle_AddrOfPinnedObject__);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<byte[]>,_WebResponseStream_<ReadAllAsync>d__48>__
                );
    FUN_02d6084c(PTR_DAT_06762028);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__
                );
    FUN_02d6084c(PTR_DAT_06760248);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_Firebase_Firestore_FirestoreCpp_QueryWhereArrayContainsAny__);
    FUN_02d6084c(Method_System_Runtime_InteropServices_GCHandle_Free__);
    DAT_06b84b58 = 1;
  }
  puVar1 = Method_System_Runtime_InteropServices_GCHandle_Free__;
  puVar7 = Method_System_Runtime_InteropServices_GCHandle_AddrOfPinnedObject__;
  puVar6 = Method_System_GC_ReRegisterForFinalize__;
  puVar4 = Method_Firebase_Firestore_FirestoreCpp_QueryWhereArrayContainsAny__;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c8 = (long *)0x0;
  uStack_b8 = 0;
  local_c0 = 0;
  lStack_a8 = 0;
  local_b0 = (long *)0x0;
  local_d8 = (long *)0x0;
  puVar13 = (undefined8 *)Method_System_GC_CollectionCount__;
  if ((param_3 != 0) && (*(int *)(param_3 + 0x18) != 0)) {
    lVar11 = *(long *)Method_Firebase_Firestore_FirestoreCpp_QueryWhereArrayContainsAny__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar4;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
    if ((lVar11 == 0) ||
       (lVar11 = FUN_04895520(lVar11,*(undefined8 *)
                                      Method_Firebase_Firestore_Future_QuerySnapshot_swigRelease__),
       lVar11 == 0)) goto LAB_05fba328;
    FUN_04488580(&local_f8,lVar11,*(undefined8 *)puVar1);
    puVar3 = PTR_DAT_06762028;
    puVar2 = PTR_DAT_06761ff8;
    puVar1 = PTR_DAT_06761fe8;
    uStack_78 = uStack_f0;
    local_80 = local_f8;
    local_70 = local_e8;
    while (uVar12 = FUN_04b3add0(&local_80,*(undefined8 *)puVar6), plVar9 = local_70,
          puVar13 = (undefined8 *)Method_System_GC_CollectionCount__, (uVar12 & 1) != 0) {
      FUN_03a38cc8(&local_f8,param_3,*(undefined8 *)puVar3);
      uStack_98 = uStack_f0;
      local_a0 = local_f8;
      local_90 = local_e8;
      while (uVar12 = FUN_04a68d14(&local_a0,*(undefined8 *)puVar2), plVar8 = local_90,
            (uVar12 & 1) != 0) {
        if (plVar9 != (long *)0x0) {
          lVar11 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
                puVar13 = (undefined8 *)(lVar11 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                goto LAB_05fb9d60;
              }
              uVar12 = uVar12 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar7,2);
LAB_05fb9d60:
          (*(code *)*puVar13)(plVar9,(ulong)plVar8 & 0xffffffff,puVar13[1]);
        }
      }
      FUN_04a68d10(&local_a0,*(undefined8 *)puVar1);
    }
    FUN_04b3adcc(&local_80,*(undefined8 *)Method_System_GC_CollectionCount__);
  }
  if ((param_2 != 0) && (*(int *)(param_2 + 0x18) != 0)) {
    FUN_03b6c0e0(&local_f8,param_2,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<byte[]>,_WebResponseStream_<ReadAllAsync>d__48>__
                );
    puVar3 = Method_Firebase_Firestore_Future_QuerySnapshot_ThrowIfDisposed__;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Nullable<int>>,_AsyncProtocolRequest_<ProcessOperation>d__24>__
    ;
    puVar1 = PTR_DAT_0675e1b8;
    uStack_b8 = uStack_f0;
    local_c0 = local_f8;
    lStack_a8 = lStack_e0;
    local_b0 = local_e8;
    while (uVar12 = FUN_04ada480(&local_c0,*(undefined8 *)puVar2), lVar11 = lStack_a8,
          plVar9 = local_b0, (uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar12 = UnityEngine_Font__add_textureRebuilt(lVar11,0,0);
      if ((uVar12 & 1) == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar11 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar14 = thunk_FUN_02d709fc(*(long *)(lVar11 + 0x40),0);
        lVar15 = *(long *)puVar4;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar15 = *(long *)puVar4;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x18);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar10 = FUN_0489720c(lVar15,uVar14,&local_c8,*(undefined8 *)puVar3);
        plVar8 = local_c8;
        if ((local_c8 != (long *)0x0) && (((uVar10 ^ 1) & 1) == 0)) {
          lVar15 = *local_c8;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
                puVar16 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_05fb9f08;
              }
              uVar12 = uVar12 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)FUN_02d9a5d4(local_c8,*(long *)puVar7,1);
LAB_05fb9f08:
          (*(code *)*puVar16)(plVar8,plVar9,lVar11,puVar16[1]);
        }
      }
    }
    FUN_04ada47c(&local_c0,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>,_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23>__
                );
  }
  puVar1 = Method_System_Runtime_InteropServices_GCHandle_Free__;
  if ((param_4 != 0) && (*(int *)(param_4 + 0x18) != 0)) {
    FUN_03b6c0e0(&local_f8,param_4,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<byte[]>,_WebResponseStream_<ReadAllAsync>d__48>__
                );
    puVar5 = Method_Firebase_Firestore_Future_QuerySnapshot_ThrowIfDisposed__;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Nullable<int>>,_AsyncProtocolRequest_<ProcessOperation>d__24>__
    ;
    puVar2 = PTR_DAT_0675e1b8;
    uStack_b8 = uStack_f0;
    local_c0 = local_f8;
    lStack_a8 = lStack_e0;
    local_b0 = local_e8;
    while (uVar12 = FUN_04ada480(&local_c0,*(undefined8 *)puVar3), lVar11 = lStack_a8,
          plVar9 = local_b0, (uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar12 = UnityEngine_Font__add_textureRebuilt(lVar11,0,0);
      if ((uVar12 & 1) == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar11 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar14 = thunk_FUN_02d709fc(*(long *)(lVar11 + 0x40),0);
        lVar15 = *(long *)puVar4;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar15 = *(long *)puVar4;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x18);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar10 = FUN_0489720c(lVar15,uVar14,&local_d0,*(undefined8 *)puVar5);
        plVar8 = local_d0;
        if ((local_d0 != (long *)0x0) && (((uVar10 ^ 1) & 1) == 0)) {
          lVar15 = *local_d0;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
                puVar16 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_05fba064;
              }
              uVar12 = uVar12 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)FUN_02d9a5d4(local_d0,*(long *)puVar7,3);
LAB_05fba064:
          (*(code *)*puVar16)(plVar8,plVar9,lVar11,puVar16[1]);
        }
      }
    }
    FUN_04ada47c(&local_c0,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>,_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23>__
                );
  }
  if ((param_5 != 0) && (*(int *)(param_5 + 0x18) != 0)) {
    FUN_03b6c0e0(&local_f8,param_5,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<byte[]>,_WebResponseStream_<ReadAllAsync>d__48>__
                );
    puVar5 = Method_Firebase_Firestore_Future_QuerySnapshot_ThrowIfDisposed__;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Nullable<int>>,_AsyncProtocolRequest_<ProcessOperation>d__24>__
    ;
    puVar2 = PTR_DAT_0675e1b8;
    uStack_b8 = uStack_f0;
    local_c0 = local_f8;
    lStack_a8 = lStack_e0;
    local_b0 = local_e8;
    while (uVar12 = FUN_04ada480(&local_c0,*(undefined8 *)puVar3), lVar11 = lStack_a8,
          plVar9 = local_b0, (uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar12 = UnityEngine_Font__add_textureRebuilt(lVar11,0,0);
      if ((uVar12 & 1) == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar11 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar14 = thunk_FUN_02d709fc(*(long *)(lVar11 + 0x40),0);
        lVar15 = *(long *)puVar4;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar15 = *(long *)puVar4;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x18);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar10 = FUN_0489720c(lVar15,uVar14,&local_d8,*(undefined8 *)puVar5);
        plVar8 = local_d8;
        if ((local_d8 != (long *)0x0) && (((uVar10 ^ 1) & 1) == 0)) {
          lVar15 = *local_d8;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
                puVar16 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_05fba1b8;
              }
              uVar12 = uVar12 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)FUN_02d9a5d4(local_d8,*(long *)puVar7,4);
LAB_05fba1b8:
          (*(code *)*puVar16)(plVar8,plVar9,lVar11,puVar16[1]);
        }
      }
    }
    FUN_04ada47c(&local_c0,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>,_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23>__
                );
  }
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar11 = *(long *)puVar4;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
  if ((lVar11 != 0) &&
     (lVar11 = FUN_04895520(lVar11,*(undefined8 *)
                                    Method_Firebase_Firestore_Future_QuerySnapshot_swigRelease__),
     lVar11 != 0)) {
    FUN_04488580(&local_f8,lVar11,*(undefined8 *)puVar1);
    uStack_78 = uStack_f0;
    local_80 = local_f8;
    local_70 = local_e8;
    do {
      do {
        uVar12 = FUN_04b3add0(&local_80,*(undefined8 *)puVar6);
        plVar9 = local_70;
        if ((uVar12 & 1) == 0) {
          FUN_04b3adcc(&local_80,*puVar13);
          return;
        }
      } while (local_70 == (long *)0x0);
      lVar11 = *local_70;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
            puVar16 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_05fba298;
          }
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)FUN_02d9a5d4(local_70,*(long *)puVar7,0);
LAB_05fba298:
      (*(code *)*puVar16)(plVar9,puVar16[1]);
    } while( true );
  }
LAB_05fba328:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


