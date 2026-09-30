/*
FUNCTION_NAME: FUN_0346b42c
ENTRY_POINT: 0346b42c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_10;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0346badc) */
/* WARNING: Removing unreachable block (ram,0x0346bad0) */

long * FUN_0346b42c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  
  puVar3 = Method_System_RuntimeType_get_GenericParameterPosition__;
  if ((DAT_048329bd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeType_get_GenericParameterPosition__);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_SettingsSection_get_Properties__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_SetPropertyUtility_SetStruct<Image_Type>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_048329bd = 1;
  }
  plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_03469998();
  puVar3 = Method_System_Net_Configuration_SettingsSection_get_Properties__;
  if (param_1 != (long *)0x0) {
    lVar11 = *param_1;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_System_Net_Configuration_SettingsSection_get_Properties__) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto LAB_0346b518;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)
                                   Method_System_Net_Configuration_SettingsSection_get_Properties__,
                          5);
LAB_0346b518:
    plVar8 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
    puVar4 = 
    Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
    ;
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
             ) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0346b580;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                            ,0);
LAB_0346b580:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
      puVar5 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<Image_Type>__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0346b5f8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_0346b5f8:
        uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((uVar13 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar1);
          if (plVar8 == (long *)0x0) goto LAB_0346b780;
          lVar11 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 == 0) goto LAB_0346b758;
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0346b740;
        }
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_0346b658;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,1);
LAB_0346b658:
        lVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar15 = *(undefined8 *)puVar5;
        plVar9 = (long *)thunk_FUN_01f116d0(lVar11,uVar15);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,uVar15);
        }
        lVar12 = *plVar9;
        lVar11 = *(long *)puVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0346b6d0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar11,0);
LAB_0346b6d0:
        uVar15 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar15,uVar15);
        }
        lVar11 = (**(code **)(*plVar6 + 0x198))(plVar6,uVar15,*(undefined8 *)(*plVar6 + 0x1a0));
        if (lVar11 == 0) {
          (**(code **)(*plVar6 + 0x1a8))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x1b0));
        }
      } while( true );
    }
  }
  goto System_Math__Clamp;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0346ba34:
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto FUN_0346ba68;
    }
  }
LAB_0346ba4c:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
FUN_0346ba68:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return plVar6;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0346b740:
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0346b774;
    }
  }
LAB_0346b758:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_0346b774:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_0346b780:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    lVar11 = *param_1;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto LAB_0346b7e8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar3,5);
LAB_0346b7e8:
    plVar8 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0346b848;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_0346b848:
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
      puVar4 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<Image_Type>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0346b8b8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_0346b8b8:
        uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((uVar13 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar1);
          if (plVar8 == (long *)0x0) {
            return plVar6;
          }
          lVar11 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 == 0) goto LAB_0346ba4c;
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0346ba34;
        }
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_0346b918;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,1);
LAB_0346b918:
        lVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar15 = *(undefined8 *)puVar4;
        lVar12 = thunk_FUN_01f116d0(lVar11,uVar15);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,uVar15);
        }
        lVar12 = *(long *)puVar4;
        plVar9 = (long *)thunk_FUN_01f116d0(lVar11,lVar12);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,lVar12);
        }
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_0346b9a8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,2);
LAB_0346b9a8:
        uVar13 = (*(code *)*puVar7)(plVar9,plVar6,puVar7[1]);
        if ((uVar13 & 1) == 0) {
          thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__
                            );
          uVar15 = thunk_FUN_01f117cc();
          uVar10 = thunk_FUN_01efb3a4(Method_UnityEngine_SetupCoroutine_InvokeMoveNext__);
          FUN_03579ad0(uVar15,uVar10,0);
          uVar10 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_Rendering_Universal_ShaderData_GetOrUpdateBuffer<int>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar15,uVar10);
        }
      } while( true );
    }
  }
System_Math__Clamp:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


