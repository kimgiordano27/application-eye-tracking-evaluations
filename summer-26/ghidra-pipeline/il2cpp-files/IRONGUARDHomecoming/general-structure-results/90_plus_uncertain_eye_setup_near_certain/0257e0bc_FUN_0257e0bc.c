/*
FUNCTION_NAME: FUN_0257e0bc
ENTRY_POINT: 0257e0bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0257e0bc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_0482fe30 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe30 = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    plVar9 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
           ) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_0257e17c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                          ,0);
FUN_0257e17c:
    uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    thunk_FUN_01f51358();
  }
  plVar9 = *(long **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar9;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0257e200;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_0257e200:
    uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      FUN_0257e420();
      *(undefined8 *)(param_1 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
      return 0;
    }
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar9;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0257e270;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,1);
LAB_0257e270:
    lVar5 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar6 = thunk_FUN_01f116d0(lVar5,lVar6);
    if (lVar6 != 0) {
      lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01f116d0(lVar5,lVar6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar5,lVar6);
        }
      }
      *(long *)(param_1 + 0x18) = lVar4;
      lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01f116d0(lVar5,lVar6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar5,lVar6);
        }
      }
      thunk_FUN_01f51358((long *)(param_1 + 0x18),lVar4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    plVar9 = *(long **)(param_1 + 0x38);
  } while( true );
}


