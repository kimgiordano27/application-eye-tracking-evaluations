/*
FUNCTION_NAME: FUN_039c1e54
ENTRY_POINT: 039c1e54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_14;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x039c2534) */
/* WARNING: Removing unreachable block (ram,0x039c2ab4) */
/* WARNING: Removing unreachable block (ram,0x039c2aa8) */

void FUN_039c1e54(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  
  puVar2 = Method_System_Collections_Generic_List<DropdownMenuItem>__ctor__;
  if ((DAT_04139bc7 & 1) == 0) {
    FUN_01ab69ac(Method_System_Collections_Generic_List<DropdownMenuItem>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DropdownMenuItem>_GetEnumerator__);
    FUN_01ab69ac(System_Runtime_Serialization_OnDeserializedAttribute_var);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DropdownMenuItem>_Insert__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DropdownMenuItem>_RemoveAt__);
    FUN_01ab69ac(PTR_DAT_03cd9150);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DropdownMenuItem>_get_Count__);
    FUN_01ab69ac(_Common_UpdateManager_UpdateTransformJobManager<TData>_var);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DropdownMenuItem>_get_Item__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DuplicateSamplePoint>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DuplicateSamplePoint>__ctor__);
    FUN_01ab69ac(System_Runtime_Serialization_OnDeserializingAttribute_var);
    FUN_01ab69ac(PTR_DAT_03cd9880);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DuplicateSamplePoint>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DuplicateSamplePoint>_AddRange__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DuplicateSamplePoint>_Clear__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DuplicateSamplePoint>_GetEnumerator__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DynamicBoneCollider>__ctor__);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DynamicBoneCollider>_GetEnumerator__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DynamicBoneCollider>_get_Count__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DynamicBones>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DynamicBones>_GetEnumerator__);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DynamicBones>_get_Count__);
    FUN_01ab69ac(Unity_Physics_Systems_PhysicsSimulationPickerSystem_var);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DynamicBones>_get_Item__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<EasingFunction>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<EasingFunction>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<EasingFunction>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<EasingFunction>_AddRange__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<EasingFunction>_Clear__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<EasingFunction>_GetEnumerator__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<EasingFunction>_get_Item__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<EconomyValidationErrorDetail>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<EconomyValidationErrorDetail>_Add__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<DropdownMenuItem>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<Enum>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<Argument>_AddRange__);
    FUN_01ab69ac(Method_System_Collections_Generic_List<AnonymousTypeParameter>_GetEnumerator__);
    DAT_04139bc7 = 1;
  }
  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_027b3d9c(lVar6,0);
  plVar21 = (long *)Method_System_Collections_Generic_List<Enum>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<EasingFunction>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<DynamicBones>_get_Item__;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 0x18);
    *plVar7 = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,param_2);
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    Animancer_AnimancerState__OnSetIsPlaying(lVar8,*(undefined8 *)puVar2);
    plVar16 = (long *)(lVar6 + 0x10);
    *plVar16 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar8);
    uVar9 = FUN_0304f8a4(param_1,0);
    lVar8 = *plVar21;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
      lVar8 = *plVar21;
    }
    puVar2 = Method_System_Collections_Generic_List<DropdownMenuItem>_Insert__;
    lVar17 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar17 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar8);
        lVar8 = *plVar21;
      }
      uVar18 = **(undefined8 **)(lVar8 + 0xb8);
      lVar17 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Method_System_Collections_Generic_List<DuplicateSamplePoint>_AddRange__
                                 );
      FUN_021de1ac(lVar17,uVar18,
                   *(undefined8 *)Method_System_Collections_Generic_List<EasingFunction>__ctor__,0);
      plVar10 = (long *)(*(long *)(*plVar21 + 0xb8) + 8);
      *plVar10 = lVar17;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar17);
    }
    uVar9 = FUN_01f6d39c(uVar9,lVar17,*(undefined8 *)puVar2);
    lVar8 = *plVar21;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
      lVar8 = *plVar21;
    }
    puVar2 = Method_System_Collections_Generic_List<DropdownMenuItem>_get_Item__;
    lVar17 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar17 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar8);
        lVar8 = *plVar21;
      }
      uVar18 = **(undefined8 **)(lVar8 + 0xb8);
      lVar17 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Method_System_Collections_Generic_List<DynamicBoneCollider>__ctor__
                                 );
      FUN_021de1ac(lVar17,uVar18,
                   *(undefined8 *)Method_System_Collections_Generic_List<EasingFunction>_Add__,0);
      plVar10 = (long *)(*(long *)(*plVar21 + 0xb8) + 0x10);
      *plVar10 = lVar17;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar17);
    }
    plVar10 = (long *)FUN_01f71424(uVar9,lVar17,*(undefined8 *)puVar2);
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Collections_Generic_List<DynamicBoneCollider>_GetEnumerator__)
          {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_039c2288;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01a472ec(plVar10,*(long *)
                                      Method_System_Collections_Generic_List<DynamicBoneCollider>_GetEnumerator__
                             ,0);
LAB_039c2288:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      puVar4 = Method_System_Collections_Generic_List<DropdownMenuItem>_get_Count__;
      puVar3 = Method_System_Collections_Generic_List<DropdownMenuItem>_GetEnumerator__;
      puVar2 = PTR_DAT_03cbed20;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar8 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_039c2304;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar2,0);
LAB_039c2304:
        uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar1 = PTR_DAT_03cbed08;
        if ((uVar14 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_039c2528;
          lVar8 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar14 == 0) goto LAB_039c2500;
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_039c24e8;
        }
        lVar8 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_System_Collections_Generic_List<DynamicBones>_GetEnumerator__) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_039c2368;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01a472ec(plVar10,*(long *)
                                        Method_System_Collections_Generic_List<DynamicBones>_GetEnumerator__
                               ,0);
LAB_039c2368:
        lVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_01b5f01c(*plVar16,lVar8,
                     *(undefined8 *)Method_System_Collections_Generic_List<DynamicBones>_get_Count__
                    );
        lVar17 = thunk_FUN_01a89e68(*(undefined8 *)
                                     Method_System_Collections_Generic_List<Argument>_AddRange__);
        FUN_0397f860(lVar17,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar19 = *plVar7;
        uVar9 = FUN_036cbb80(lVar8,0);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar9,uVar9);
        }
        uVar5 = FUN_02217a2c(lVar19,uVar9,
                             *(undefined8 *)Unity_Physics_Systems_PhysicsSimulationPickerSystem_var)
        ;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(undefined4 *)(lVar17 + 0x10) = uVar5;
        lVar19 = *plVar21;
        uVar9 = *(undefined8 *)(lVar8 + 0x20);
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar19);
          lVar19 = *plVar21;
        }
        lVar8 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x18);
        if (lVar8 == 0) {
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar19);
            lVar19 = *plVar21;
          }
          uVar18 = **(undefined8 **)(lVar19 + 0xb8);
          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Method_System_Collections_Generic_List<DuplicateSamplePoint>__ctor__
                                    );
          FUN_021de1ac(lVar8,uVar18,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<EasingFunction>_AddRange__,0);
          plVar21 = (long *)Method_System_Collections_Generic_List<Enum>__ctor__;
          plVar12 = (long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<Enum>__ctor__
                                      + 0xb8) + 0x18);
          *plVar12 = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar8);
        }
        uVar9 = FUN_01f6d39c(uVar9,lVar8,*(undefined8 *)puVar3);
        uVar9 = FUN_01f7108c(uVar9,*(undefined8 *)puVar4);
        *(undefined8 *)(lVar17 + 0x18) = uVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(param_3 + 0x18))
                  (*(undefined8 *)(param_3 + 0x40),lVar17,*(undefined8 *)(param_3 + 0x28));
      } while( true );
    }
  }
  goto LAB_039c2aa0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_039c2a18:
    if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
      puVar11 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_039c2a4c;
    }
  }
LAB_039c2a30:
  puVar11 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)puVar1,0);
LAB_039c2a4c:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
  return;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_039c24e8:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_039c251c;
    }
  }
LAB_039c2500:
  puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cbed08,0);
LAB_039c251c:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_039c2528:
  uVar9 = FUN_0304f8a4(param_1,0);
  lVar8 = *plVar21;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar8);
    lVar8 = *plVar21;
  }
  puVar2 = Method_System_Collections_Generic_List<DropdownMenuItem>_Add__;
  lVar17 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
  if (lVar17 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
      lVar8 = *plVar21;
    }
    uVar18 = **(undefined8 **)(lVar8 + 0xb8);
    lVar17 = thunk_FUN_01a89e68(*(undefined8 *)
                                 Method_System_Collections_Generic_List<DuplicateSamplePoint>_Clear__
                               );
    FUN_021de1ac(lVar17,uVar18,
                 *(undefined8 *)Method_System_Collections_Generic_List<EasingFunction>_Clear__,0);
    plVar16 = (long *)(*(long *)(*plVar21 + 0xb8) + 0x20);
    *plVar16 = lVar17;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar17);
  }
  uVar9 = FUN_01f6d7a8(uVar9,lVar17,*(undefined8 *)puVar2);
  lVar8 = *plVar21;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar8);
    lVar8 = *plVar21;
  }
  puVar2 = Method_System_Collections_Generic_List<DuplicateSamplePoint>__ctor__;
  lVar17 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
  if (lVar17 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
      lVar8 = *plVar21;
    }
    uVar18 = **(undefined8 **)(lVar8 + 0xb8);
    lVar17 = thunk_FUN_01a89e68(*(undefined8 *)
                                 Method_System_Collections_Generic_List<DuplicateSamplePoint>_Add__)
    ;
    FUN_021de1ac(lVar17,uVar18,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EasingFunction>_GetEnumerator__,0);
    plVar16 = (long *)(*(long *)(*plVar21 + 0xb8) + 0x28);
    *plVar16 = lVar17;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar17);
  }
  plVar16 = (long *)FUN_01f71424(uVar9,lVar17,*(undefined8 *)puVar2);
  if (plVar16 != (long *)0x0) {
    lVar8 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_System_Collections_Generic_List<DynamicBoneCollider>_get_Count__) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_039c26d8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01a472ec(plVar16,*(long *)
                                    Method_System_Collections_Generic_List<DynamicBoneCollider>_get_Count__
                           ,0);
LAB_039c26d8:
    plVar16 = (long *)(*(code *)*puVar11)(plVar16,puVar11[1]);
    puVar2 = PTR_DAT_03cd9150;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar10 = (long *)(lVar6 + 0x20);
    plVar12 = (long *)(lVar6 + 0x28);
    do {
      lVar8 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03cbed20) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_039c2754;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)PTR_DAT_03cbed20,0);
LAB_039c2754:
      uVar14 = (*(code *)*puVar11)(plVar16,puVar11[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar16 == (long *)0x0) {
          return;
        }
        lVar6 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar14 == 0) goto LAB_039c2a30;
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_039c2a18;
      }
      lVar8 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Collections_Generic_List<DynamicBones>__ctor__) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_039c27b8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01a472ec(plVar16,*(long *)
                                      Method_System_Collections_Generic_List<DynamicBones>__ctor__,0
                            );
LAB_039c27b8:
      lVar8 = (*(code *)*puVar11)(plVar16,puVar11[1]);
      lVar17 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Method_System_Collections_Generic_List<AnonymousTypeParameter>_GetEnumerator__
                                 );
      FUN_0397f8e8(lVar17,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar8 + 0x28);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = FUN_02217a2c(*plVar7,*(undefined8 *)(lVar8 + 0x60),
                           *(undefined8 *)Unity_Physics_Systems_PhysicsSimulationPickerSystem_var);
      *(undefined4 *)(lVar17 + 0x30) = uVar5;
      *(undefined4 *)(lVar17 + 0x2c) = *(undefined4 *)(lVar8 + 0x58);
      uVar9 = *(undefined8 *)(lVar8 + 0x4c);
      *(undefined4 *)(lVar17 + 0x28) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined8 *)(lVar17 + 0x20) = uVar9;
      *(undefined8 *)(lVar17 + 0x18) = *(undefined8 *)(lVar8 + 0x44);
      *(undefined4 *)(lVar17 + 0x34) = *(undefined4 *)(lVar8 + 0x78);
      lVar19 = *plVar10;
      uVar9 = *(undefined8 *)(lVar8 + 0x80);
      if (lVar19 == 0) {
        lVar19 = thunk_FUN_01a89e68(*(undefined8 *)
                                     Method_System_Collections_Generic_List<DuplicateSamplePoint>_GetEnumerator__
                                   );
        FUN_021de1ac(lVar19,lVar6,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<EconomyValidationErrorDetail>__ctor__,0
                    );
        *plVar10 = lVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar19);
      }
      uVar9 = FUN_01f6d39c(uVar9,lVar19,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<DropdownMenuItem>_RemoveAt__);
      lVar19 = *plVar21;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar19);
        lVar19 = *plVar21;
      }
      lVar20 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x30);
      if (lVar20 == 0) {
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar19);
          lVar19 = *plVar21;
        }
        uVar18 = **(undefined8 **)(lVar19 + 0xb8);
        lVar20 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd9880);
        FUN_021de1ac(lVar20,uVar18,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<EasingFunction>_get_Item__,0);
        plVar21 = (long *)Method_System_Collections_Generic_List<Enum>__ctor__;
        plVar13 = (long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<Enum>__ctor__ +
                                    0xb8) + 0x30);
        *plVar13 = lVar20;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,lVar20);
      }
      uVar9 = FUN_01f71424(uVar9,lVar20,
                           *(undefined8 *)_Common_UpdateManager_UpdateTransformJobManager<TData>_var
                          );
      uVar9 = FUN_01f70920(uVar9,*(undefined8 *)puVar2);
      *(undefined8 *)(lVar17 + 0x40) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar19 = *plVar12;
      uVar9 = *(undefined8 *)(lVar8 + 0x68);
      if (lVar19 == 0) {
        lVar19 = thunk_FUN_01a89e68(*(undefined8 *)
                                     System_Runtime_Serialization_OnDeserializingAttribute_var);
        FUN_021de1ac(lVar19,lVar6,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<EconomyValidationErrorDetail>_Add__,0);
        *plVar12 = lVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar19);
      }
      uVar9 = FUN_01f6d39c(uVar9,lVar19,
                           *(undefined8 *)System_Runtime_Serialization_OnDeserializedAttribute_var);
      uVar9 = FUN_01f70920(uVar9,*(undefined8 *)puVar2);
      *(undefined8 *)(lVar17 + 0x38) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(param_4 + 0x18))
                (*(undefined8 *)(param_4 + 0x40),lVar17,*(undefined8 *)(param_4 + 0x28));
    } while( true );
  }
LAB_039c2aa0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


