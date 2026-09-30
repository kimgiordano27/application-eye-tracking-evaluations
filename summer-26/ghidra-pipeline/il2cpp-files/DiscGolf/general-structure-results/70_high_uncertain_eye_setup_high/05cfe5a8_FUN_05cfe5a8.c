/*
FUNCTION_NAME: FUN_05cfe5a8
ENTRY_POINT: 05cfe5a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cfeb20) */

long FUN_05cfe5a8(long param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  
  puVar3 = Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TryGetValue__;
  if ((DAT_06dc2e19 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TryGetValue__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_115_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<PropertyPath>_Add__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__
                );
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
                );
    DAT_06dc2e19 = 1;
  }
  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_05cfac90();
  puVar3 = OVRPlugin_OVRP_1_115_0_TypeInfo;
  if (param_3 != 0) {
    lVar17 = 0;
    uVar18 = 0;
    uVar16 = 0;
    do {
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar3;
      }
      lVar14 = **(long **)(lVar8 + 0xb8);
      if (lVar14 == 0) goto LAB_05cfeb0c;
      if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar18) goto LAB_05cfe72c;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar14 == 0) goto LAB_05cfeb0c;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_05cfe7f4;
      iVar5 = FUN_0536a4b0(param_3,*(undefined8 *)(lVar14 + lVar17 + 0x20),5,0);
      if (iVar5 == 0) {
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar8 = *(long *)puVar3;
        }
        lVar8 = **(long **)(lVar8 + 0xb8);
        if (lVar8 == 0) goto LAB_05cfeb0c;
        if (*(uint *)(lVar8 + 0x18) <= uVar18) {
LAB_05cfe7f4:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar16 = *(undefined4 *)(lVar8 + lVar17 + 0x28);
      }
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0x10;
    } while( true );
  }
  uVar16 = 2;
LAB_05cfe72c:
  puVar3 = Method_System_Collections_Generic_HashSet<PropertyPath>_Add__;
  if (param_2 != 0) {
    uVar9 = FUN_05c0b888(param_2,0);
    uVar6 = FUN_05cfe308(param_1,uVar9);
    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05cfa4e8(lVar17,param_4);
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
    ;
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    while (lVar8 = FUN_05cfa560(lVar17),
          puVar4 = 
          Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__,
          puVar2 = PTR_DAT_069fbff8, puVar1 = PTR_DAT_069fbff0, lVar8 != 0) {
      uVar9 = *(undefined8 *)(lVar8 + 0x40);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar18 = FUN_05ceb584(uVar9,0);
      if ((uVar18 & 1) == 0) {
        uVar18 = FUN_05cf801c(lVar8,uVar16,param_2,uVar6 & 1,*(undefined8 *)(param_1 + 0x28),1,
                              param_5 & 1,0);
        if ((uVar18 & 1) != 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_05cfb6a8(lVar7,lVar8,1);
        }
      }
      else if ((param_5 & 1) != 0) {
        uVar9 = thunk_FUN_02dfd288(Method_System_Collections_Generic_HashSet<PropertyPath>_Clear__);
        uVar9 = FUN_0534f2b4(uVar9,0);
        thunk_FUN_02dfd288(Method_System_Collections_Generic_HashSet<NetworkObject>_Contains__);
        uVar10 = thunk_FUN_02dd3144();
        FUN_054d078c(uVar10,uVar9,0);
        uVar9 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_HashSet<PropertyPath>_GetEnumerator__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar10,uVar9);
      }
    }
    if (lVar7 != 0) {
      plVar11 = (long *)FUN_05cfb52c(lVar7);
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *plVar11;
        lVar17 = *(long *)puVar2;
        uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar18 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05cfe9c8;
            }
            uVar18 = uVar18 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_02dd004c(plVar11,lVar17,0);
LAB_05cfe9c8:
        uVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar18 & 1) == 0) {
          plVar11 = (long *)thunk_FUN_02dd3048(plVar11,*(undefined8 *)puVar1);
          if (plVar11 == (long *)0x0) {
            return lVar7;
          }
          lVar8 = *plVar11;
          lVar17 = *(long *)puVar1;
          uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar18 == 0) goto LAB_05cfeabc;
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_05cfeaa4;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *plVar11;
        lVar17 = *(long *)puVar2;
        uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar18 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_05cfea30;
            }
            uVar18 = uVar18 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_02dd004c(plVar11,lVar17,1);
LAB_05cfea30:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar13);
        }
        FUN_05cfbf74(param_1,plVar13,param_5 & 1);
      } while( true );
    }
  }
LAB_05cfeb0c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar15 = piVar15 + 4;
    if (uVar18 == 0) break;
LAB_05cfeaa4:
    if (*(long *)(piVar15 + -2) == lVar17) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05cfead8;
    }
  }
LAB_05cfeabc:
  puVar12 = (undefined8 *)FUN_02dd004c(plVar11,lVar17,0);
LAB_05cfead8:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return lVar7;
}


