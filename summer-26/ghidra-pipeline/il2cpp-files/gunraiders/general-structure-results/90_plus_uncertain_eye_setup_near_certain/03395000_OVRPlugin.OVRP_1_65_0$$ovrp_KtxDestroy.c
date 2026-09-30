/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxDestroy
ENTRY_POINT: 03395000
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxDestroy(undefined8 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long lVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (param_2 == 1) {
    puVar5 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar6 = thunk_FUN_01c273e8(PTR_DAT_0422f998);
    uVar7 = thunk_FUN_01c22fc8(uVar6,*(undefined8 *)*puVar5);
    if ((uVar7 & 1) != 0) {
      __cxa_end_catch();
      lVar8 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_03295500(0);
      uVar9 = (**(code **)(*unaff_x19 + 0x198))();
      uVar15 = *(undefined8 *)(unaff_x20 + 200);
      uVar10 = thunk_FUN_01c273e8(
                                 Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_GetPooled__
                                 );
      FUN_033704d4(uVar10,uVar6,uVar9,uVar15,0);
      uVar6 = FUN_0335d3b4();
      uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar9);
    }
    puVar11 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar11 = *puVar5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&PTR_PTR_04025298,0);
  }
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01cf64e4(param_1);
  }
  puVar5 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar6 = thunk_FUN_01c273e8(PTR_DAT_0422f998);
  uVar7 = thunk_FUN_01c22fc8(uVar6,*(undefined8 *)*puVar5);
  if ((uVar7 & 1) == 0) {
    puVar11 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar11 = *puVar5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&PTR_PTR_04025298,0);
  }
  uVar6 = *puVar5;
  __cxa_end_catch();
  (**(code **)(*unaff_x19 + 0x1c8))();
  thunk_FUN_01c273e8(Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__);
  thunk_FUN_01c495e4();
  uVar7 = FUN_03393b30();
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(uVar6);
  }
  FUN_03396b58();
  do {
    while( true ) {
      uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar7 & 1) == 0) {
        FUN_0339d160();
        goto LAB_03395250;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 != 4) break;
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar7 = FUN_0339738c();
      if ((uVar7 & 1) == 0) {
        if (unaff_w24 == 0x1c) {
          uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          lVar8 = unaff_x19[0xc];
          uVar9 = FUN_033594d8();
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar7 = FUN_03375738(uVar6,lVar8,uVar9,&stack0x00000038,0);
          if ((uVar7 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03295500(0);
            FUN_033985d4();
          }
          else {
            in_stack_00000028 = in_stack_00000040;
            in_stack_00000020 = in_stack_00000038;
            thunk_FUN_01c49334(*(undefined8 *)UnityEngine_ISubsystemDescriptor_TypeInfo,
                               &stack0x00000020);
          }
        }
        else if (unaff_w24 == 0x1a) {
          uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          lVar8 = unaff_x19[9];
          lVar14 = unaff_x19[0xc];
          uVar9 = FUN_033594d8();
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar7 = FUN_03375048(uVar6,(int)lVar8,lVar14,uVar9,&stack0x00000048,0);
          if ((uVar7 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03295500(0);
            FUN_033985d4();
          }
          else {
            in_stack_00000020 = in_stack_00000048;
            thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422f960,&stack0x00000020);
          }
        }
        else {
          lVar8 = *(long *)(unaff_x20 + 0xd8);
          if ((lVar8 == 0) || (*(char *)(lVar8 + 0x12) == '\0')) {
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03295500(0);
            FUN_033985d4();
          }
          else {
            if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            plVar12 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
            if (plVar12 == (long *)0x0) {
LAB_03394da0:
              lVar14 = 0;
            }
            else {
              bVar1 = *(byte *)(*(long *)
                                 Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__
                               + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)
                   Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__))
              goto LAB_03394da0;
              lVar14 = plVar12[6];
            }
            uVar9 = *(undefined8 *)(lVar8 + 0x18);
            uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03378ae0(uVar9,lVar14,uVar6,0,0);
          }
        }
        uVar7 = FUN_0335ce1c();
        if ((uVar7 & 1) == 0) {
          thunk_FUN_01c273e8(
                            Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__
                            );
          uVar6 = FUN_0335cdc4();
          uVar9 = thunk_FUN_01c273e8(
                                    Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,uVar9);
        }
        if (unaff_x26 == (long *)0x0) {
LAB_03394ef4:
          FUN_033966b4();
        }
        else {
          uVar7 = (**(code **)(*unaff_x26 + 0x1a8))();
          if ((uVar7 & 1) == 0) goto LAB_03394ef4;
          FUN_033962a0();
        }
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar8 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03394f78;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498();
LAB_03394f78:
        (*(code *)*puVar5)();
      }
    }
  } while (iVar2 == 5);
  if (iVar2 != 0xd) {
    FUN_019b2708();
    uVar3 = (**(code **)(*unaff_x19 + 0x188))();
    in_stack_00000020 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
    in_stack_00000028 = 0xffffffffffffffff;
    in_stack_00000030 = uVar3;
    uVar6 = FUN_03307544(&stack0x00000020,0);
    uVar9 = thunk_FUN_01c273e8(
                              Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                              );
    FUN_03146988(uVar9,uVar6,0);
    uVar6 = FUN_0335cdc4();
    uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar9);
  }
LAB_03395250:
  FUN_0339cf34();
  return in_stack_00000010;
}


