/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTranscode
ENTRY_POINT: 03394abc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxTranscode(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  int *in_x10;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar13;
  long unaff_x25;
  long *plVar14;
  long lVar15;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  uVar4 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (unaff_x25 != 0) {
    FUN_0339c944();
  }
  FUN_0339cd08();
  if (unaff_x19 == (long *)0x0) {
LAB_03395294:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  (**(code **)(*unaff_x19 + 0x1b8))();
  if (unaff_x20 == 0) goto LAB_03395294;
  if (*(long *)(unaff_x20 + 0xd8) == 0) {
    uVar5 = FUN_03395dc8();
                    /* try { // try from 03394b34 to 03494b4f has its CatchHandler @ 03394c64 */
    *(undefined8 *)(unaff_x20 + 0xd8) = uVar5;
  }
  if (*(long *)(unaff_x20 + 0x90) == 0) {
    lVar6 = FUN_03395dc8();
    *(long *)(unaff_x20 + 0x90) = lVar6;
    if (lVar6 == 0) {
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
    }
    else {
      uVar7 = FUN_0338477c(*(undefined8 *)(lVar6 + 0x60),0);
      uVar5 = 0;
      if ((uVar7 & 1) != 0) {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
      }
      *(undefined8 *)(unaff_x20 + 0x98) = uVar5;
    }
  }
  plVar14 = *(long **)(unaff_x20 + 0xa0);
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)FUN_03396234();
  }
  plVar10 = *(long **)(unaff_x20 + 0xd8);
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__)) {
      uVar13 = *(uint *)((long)plVar10 + 0x8c) & 0xfffffffe;
      goto LAB_03394be0;
    }
  }
  uVar13 = 0;
LAB_03394be0:
  do {
    iVar2 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar2 == 4) {
      plVar10 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar10 == (long *)0x0) goto LAB_03395294;
      (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      uVar7 = FUN_0339738c();
      if ((uVar7 & 1) == 0) {
        if (uVar13 == 0x1c) {
          uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          lVar6 = unaff_x19[0xc];
          uVar8 = FUN_033594d8();
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar7 = FUN_03375738(uVar5,lVar6,uVar8,&stack0x00000038,0);
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
        else if (uVar13 == 0x1a) {
          uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          lVar6 = unaff_x19[9];
          lVar15 = unaff_x19[0xc];
          uVar8 = FUN_033594d8();
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar7 = FUN_03375048(uVar5,(int)lVar6,lVar15,uVar8,&stack0x00000048,0);
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
          lVar6 = *(long *)(unaff_x20 + 0xd8);
          if ((lVar6 == 0) || (*(char *)(lVar6 + 0x12) == '\0')) {
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
            plVar11 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
            if (plVar11 == (long *)0x0) {
LAB_03394da0:
              lVar15 = 0;
            }
            else {
              bVar1 = *(byte *)(*(long *)
                                 Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__
                               + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)
                   Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__))
              goto LAB_03394da0;
              lVar15 = plVar11[6];
            }
            uVar8 = *(undefined8 *)(lVar6 + 0x18);
            uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03378ae0(uVar8,lVar15,uVar5,0,0);
          }
        }
        uVar7 = FUN_0335ce1c();
        if ((uVar7 & 1) == 0) {
          thunk_FUN_01c273e8(
                            Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__
                            );
          uVar4 = FUN_0335cdc4();
          uVar5 = thunk_FUN_01c273e8(
                                    Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar4,uVar5);
        }
        if (plVar14 == (long *)0x0) {
LAB_03394ef4:
          FUN_033966b4();
        }
        else {
          uVar7 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
          if ((uVar7 & 1) == 0) goto LAB_03394ef4;
          FUN_033962a0();
        }
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar6 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
              puVar9 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03394f78;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03394f78:
        (*(code *)*puVar9)();
      }
    }
    else if (iVar2 != 5) {
      if (iVar2 != 0xd) {
        FUN_019b2708();
        uVar3 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000020 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000028 = 0xffffffffffffffff;
        in_stack_00000030 = uVar3;
        uVar4 = FUN_03307544(&stack0x00000020,0);
        uVar5 = thunk_FUN_01c273e8(
                                  Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                  );
        FUN_03146988(uVar5,uVar4,0);
        uVar4 = FUN_0335cdc4();
        uVar5 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__)
        ;
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar4,uVar5);
      }
      goto LAB_03395250;
    }
    uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar7 & 1) != 0);
  FUN_0339d160();
LAB_03395250:
  FUN_0339cf34();
  return uVar4;
}


