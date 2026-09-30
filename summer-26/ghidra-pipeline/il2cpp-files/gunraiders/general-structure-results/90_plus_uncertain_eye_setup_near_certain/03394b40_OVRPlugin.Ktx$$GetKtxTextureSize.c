/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureSize
ENTRY_POINT: 03394b40
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Ktx__GetKtxTextureSize(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar12;
  undefined8 unaff_x24;
  long *plVar13;
  long lVar14;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  lVar4 = FUN_03395dc8();
  *(long *)(unaff_x20 + 0x90) = lVar4;
  if (lVar4 == 0) {
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
  }
  else {
    uVar5 = FUN_0338477c(*(undefined8 *)(lVar4 + 0x60),0);
    uVar8 = 0;
    if ((uVar5 & 1) != 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
    }
                    /* try { // try from 03394b6c to 03494b77 has its CatchHandler @ 03394c5c */
    *(undefined8 *)(unaff_x20 + 0x98) = uVar8;
  }
  plVar13 = *(long **)(unaff_x20 + 0xa0);
  if (plVar13 == (long *)0x0) {
                    /* try { // try from 03394b88 to 03494b8b has its CatchHandler @ 03394c50 */
                    /* try { // try from 03394b8c to 03494b93 has its CatchHandler @ 03394c54 */
    plVar13 = (long *)FUN_03396234();
  }
  plVar9 = *(long **)(unaff_x20 + 0xd8);
  if (plVar9 != (long *)0x0) {
                    /* try { // try from 03394bb8 to 03494bbf has its CatchHandler @ 03394c58 */
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__ +
                     0x130);
                    /* try { // try from 03394bc0 to 03494c47 has its CatchHandler @ 03394a44 */
    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__)) {
      uVar12 = *(uint *)((long)plVar9 + 0x8c) & 0xfffffffe;
      goto LAB_03394be0;
    }
  }
  uVar12 = 0;
LAB_03394be0:
  do {
    iVar2 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar2 == 4) {
      plVar9 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      uVar5 = FUN_0339738c();
      if ((uVar5 & 1) == 0) {
        if (uVar12 == 0x1c) {
          uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          lVar4 = unaff_x19[0xc];
          uVar7 = FUN_033594d8();
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar5 = FUN_03375738(uVar8,lVar4,uVar7,&stack0x00000038,0);
          if ((uVar5 & 1) == 0) {
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
        else {
                    /* try { // try from 03394c48 to 03494c4b has its CatchHandler @ 03394c60 */
          if (uVar12 == 0x1a) {
                    /* try { // try from 03394c4c to 03494c4f has its CatchHandler @ 03394c58 */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394b88 with catch @ 03394c50
                       try { // try from 03394c50 to 03494c7b has its CatchHandler @ 03394a44 */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394b8c with catch @ 03394c54
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394bb8 with catch @ 03394c58
                       catch(type#1 @ 04025298) { ... } // from try @ 03394c4c with catch @ 03394c58
                        */
            uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394b6c with catch @ 03394c5c
                        */
            lVar4 = unaff_x19[9];
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394c48 with catch @ 03394c60
                        */
            lVar14 = unaff_x19[0xc];
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394b34 with catch @ 03394c64
                        */
            uVar7 = FUN_033594d8();
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar5 = FUN_03375048(uVar8,(int)lVar4,lVar14,uVar7,&stack0x00000048,0);
            if ((uVar5 & 1) == 0) {
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
            lVar4 = *(long *)(unaff_x20 + 0xd8);
            if ((lVar4 == 0) || (*(char *)(lVar4 + 0x12) == '\0')) {
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
              plVar10 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
              if (plVar10 == (long *)0x0) {
LAB_03394da0:
                lVar14 = 0;
              }
              else {
                bVar1 = *(byte *)(*(long *)
                                   Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__
                                 + 0x130);
                if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)
                     Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__))
                goto LAB_03394da0;
                lVar14 = plVar10[6];
              }
              uVar7 = *(undefined8 *)(lVar4 + 0x18);
              uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
                          + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_03378ae0(uVar7,lVar14,uVar8,0,0);
            }
          }
        }
        uVar5 = FUN_0335ce1c();
        if ((uVar5 & 1) == 0) {
          thunk_FUN_01c273e8(
                            Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__
                            );
          uVar8 = FUN_0335cdc4();
          uVar7 = thunk_FUN_01c273e8(
                                    Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar8,uVar7);
        }
        if (plVar13 == (long *)0x0) {
LAB_03394ef4:
          FUN_033966b4();
        }
        else {
          uVar5 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
          if ((uVar5 & 1) == 0) goto LAB_03394ef4;
          FUN_033962a0();
        }
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar4 = *unaff_x23;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03394f78;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498();
LAB_03394f78:
        (*(code *)*puVar6)();
      }
    }
    else if (iVar2 != 5) {
      if (iVar2 != 0xd) {
        FUN_019b2708();
        uVar3 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000020 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000028 = 0xffffffffffffffff;
        in_stack_00000030 = uVar3;
        uVar8 = FUN_03307544(&stack0x00000020,0);
        uVar7 = thunk_FUN_01c273e8(
                                  Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                  );
        FUN_03146988(uVar7,uVar8,0);
        uVar8 = FUN_0335cdc4();
        uVar7 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__)
        ;
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar8,uVar7);
      }
      goto LAB_03395250;
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar5 & 1) != 0);
  FUN_0339d160();
LAB_03395250:
  FUN_0339cf34();
  return unaff_x24;
}


