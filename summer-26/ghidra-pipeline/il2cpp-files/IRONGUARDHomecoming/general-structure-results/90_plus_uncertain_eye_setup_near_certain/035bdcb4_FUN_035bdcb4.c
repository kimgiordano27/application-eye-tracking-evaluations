/*
FUNCTION_NAME: FUN_035bdcb4
ENTRY_POINT: 035bdcb4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x035be040) */

undefined4 FUN_035bdcb4(long param_1,long param_2,int param_3,int param_4,uint *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  
  if ((DAT_048335f8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink_AsyncProcessMessage__
                      );
    DAT_048335f8 = 1;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) ||
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390)),
     plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *plVar4;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_035bdda4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                        ,0);
LAB_035bdda4:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar3 = 
  Method_System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink_AsyncProcessMessage__
  ;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar4;
    lVar8 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_035bde1c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar8,0);
LAB_035bde1c:
    uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      uVar14 = 0;
      uVar10 = 8;
LAB_035bdf60:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar4 = (long *)thunk_FUN_01f116d0(plVar4,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar4 == (long *)0x0) goto LAB_035bdfd4;
      lVar8 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 == 0) goto LAB_035bdfac;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar4;
    lVar8 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_035bde7c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar8,1);
LAB_035bde7c:
    lVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar15 = *(undefined8 *)puVar1;
    lVar9 = thunk_FUN_01f116d0(lVar8,uVar15);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar8,uVar15);
    }
    if (0 < param_4) {
      uVar10 = (uint)*(undefined8 *)(lVar9 + 0x18);
      if (0 < (int)uVar10) {
        uVar13 = 0;
        while( true ) {
          if (uVar10 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(param_2 + 0x18) <= param_3 + uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          if (*(ushort *)(param_2 + (long)(int)(param_3 + uVar13) * 2 + 0x20) !=
              (ushort)*(byte *)(lVar9 + (int)uVar13 + 0x20)) break;
          if (uVar10 - 1 == uVar13) {
            *param_5 = uVar10;
            plVar6 = *(long **)(param_1 + 0x10);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                       (plVar6,lVar9,*(undefined8 *)(*plVar6 + 0x310));
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            puVar7 = (undefined4 *)thunk_FUN_01f11920();
            uVar14 = *puVar7;
            uVar10 = 7;
            goto LAB_035bdf60;
          }
          uVar13 = uVar13 + 1;
          if ((param_4 <= (int)uVar13) || ((int)uVar10 <= (int)uVar13)) break;
        }
      }
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_035bdfc8;
    }
  }
LAB_035bdfac:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_035bdfc8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_035bdfd4:
  if ((uVar10 | 8) == 8) {
    uVar14 = 0xffffffff;
    *param_5 = 0;
  }
  return uVar14;
}


