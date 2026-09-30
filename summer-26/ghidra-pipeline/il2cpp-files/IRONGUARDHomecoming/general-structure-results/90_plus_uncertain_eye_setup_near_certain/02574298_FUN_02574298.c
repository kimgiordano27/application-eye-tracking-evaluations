/*
FUNCTION_NAME: FUN_02574298
ENTRY_POINT: 02574298
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02574298(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  if ((DAT_0482fe0f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddYears__);
    thunk_FUN_01efb3a4(Method_System_DateTime_CompareTo__);
    thunk_FUN_01efb3a4(Method_System_DateTime_DateToTicks__);
    thunk_FUN_01efb3a4(Method_System_DateTime_DaysInMonth__);
    DAT_0482fe0f = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_02574660;
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28))
                      (*(long *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x44));
    if ((uVar8 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar5 == 0)) goto LAB_02574660;
      FUN_02741ef0(lVar5,*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)Method_System_DateTime_DateToTicks__);
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (plVar10 = (long *)(*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30))
                                      (*(long *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x44)),
         plVar10 == (long *)0x0)) goto LAB_02574660;
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
            puVar11 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_025744f4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_025744f4:
      uVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      *(undefined8 *)(param_1 + 0x38) = uVar6;
      goto LAB_02574508;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar5 == 0)) goto LAB_02574660;
    FUN_02741a7c(lVar5,*(undefined8 *)Method_System_DateTime_AddYears__);
    puVar11 = (undefined8 *)(param_1 + 0x20);
    plVar10 = (long *)*puVar11;
    if (plVar10 == (long *)0x0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_02574660;
      lVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18))
                        (*(long *)(param_1 + 0x30) + 0x10);
      if (lVar5 == 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_02574660;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18))
                        (*(long *)(param_1 + 0x30) + 0x10);
      *puVar11 = uVar6;
      thunk_FUN_01f51358(puVar11,uVar6);
      plVar10 = (long *)*puVar11;
      if (plVar10 == (long *)0x0) goto LAB_02574660;
    }
    lVar5 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar11 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025744cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_025744cc:
    uVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
LAB_02574508:
    thunk_FUN_01f51358(param_1 + 0x38,uVar6);
  }
  puVar2 = Method_System_DateTime_CompareTo__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar11 = (undefined8 *)(param_1 + 0x38);
  plVar10 = (long *)*puVar11;
  if (plVar10 != (long *)0x0) {
    do {
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02574578;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_02574578:
      bVar3 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      *(byte *)(param_1 + 0x40) = bVar3 & 1;
      if ((bVar3 & 1) != 0) {
        plVar10 = (long *)*puVar11;
        if (plVar10 != (long *)0x0) {
          lVar5 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 == 0)
          goto 
          System_Collections_ObjectModel_ReadOnlyCollection<StyleVariable>__System_Collections_Generic_ICollection<T>_get_IsReadOnly
          ;
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_02574600;
        }
        break;
      }
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar5 == 0)) break;
      if (*(int *)(lVar5 + 0x18) < 1) {
        return 0;
      }
      uVar6 = FUN_02741e90(lVar5,*(undefined8 *)puVar2);
      *puVar11 = uVar6;
      thunk_FUN_01f51358(puVar11,uVar6);
      plVar10 = (long *)*puVar11;
      if (plVar10 == (long *)0x0) break;
    } while( true );
  }
LAB_02574660:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_02574600:
    if (*(long *)(piVar9 + -2) == *(long *)Method_System_DateTime_AddTicks__) {
      puVar11 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02574634;
    }
  }

  System_Collections_ObjectModel_ReadOnlyCollection<StyleVariable>__System_Collections_Generic_ICollection<T>_get_IsReadOnly
  :
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)Method_System_DateTime_AddTicks__,0);
LAB_02574634:
  uVar4 = (*(code *)*puVar11)(plVar10,puVar11[1]);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return 1;
}


