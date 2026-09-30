/*
FUNCTION_NAME: FUN_03904f10
ENTRY_POINT: 03904f10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x039053a0) */
/* WARNING: Removing unreachable block (ram,0x039053d4) */

void FUN_03904f10(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((DAT_048381e4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    DAT_048381e4 = 1;
  }
  puVar4 = Method_System_Configuration_ConfigurationElement_Reset__;
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                             (plVar5,*param_2,0,*(undefined8 *)(*plVar5 + 0x310));
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(*plVar5 + 0x40) !=
      *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ + 0x40
               )) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  lVar11 = *(long *)puVar4;
  piVar6 = (int *)thunk_FUN_01f11920();
  lVar8 = *param_3;
  iVar1 = *piVar6;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar11) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_03905030;
      }
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(param_3,lVar11,0xc);
LAB_03905030:
  (*(code *)*puVar7)(param_3,(long)iVar1,puVar7[1]);
  puVar2 = 
  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
  ;
  lVar8 = *param_2;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar10 = *(undefined8 *)
            Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
  ;
  lVar11 = thunk_FUN_01f116d0(lVar8,uVar10);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar8,uVar10);
  }
  lVar11 = *(long *)puVar2;
  plVar5 = (long *)thunk_FUN_01f116d0(lVar8,lVar11);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar8,lVar11);
  }
  lVar8 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar11) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_039050c8;
      }
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar5,lVar11,0);
LAB_039050c8:
  plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar5;
    lVar8 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar6 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03905148;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_03905148:
    uVar9 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    if ((uVar9 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)puVar2);
      if (plVar5 == (long *)0x0) goto LAB_03905314;
      lVar11 = *plVar5;
      lVar8 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 == 0) goto LAB_039052ec;
      piVar6 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar5;
    lVar8 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar6 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_039051a8;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,1);
LAB_039051a8:
    uVar10 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0,uVar10);
    }
    FUN_0390f94c(*(long *)(param_1 + 0x40),uVar10,param_3,0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar6 = piVar6 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar6 + -2) == lVar8) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03905308;
    }
  }
LAB_039052ec:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_03905308:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_03905314:
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *param_3;
  lVar8 = *(long *)puVar4;
  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar9 != 0) {
    piVar6 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar8) {
        puVar7 = (undefined8 *)(lVar11 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_0390536c;
      }
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(param_3,lVar8,0xd);
LAB_0390536c:
  (*(code *)*puVar7)(param_3,puVar7[1]);
  return;
}


