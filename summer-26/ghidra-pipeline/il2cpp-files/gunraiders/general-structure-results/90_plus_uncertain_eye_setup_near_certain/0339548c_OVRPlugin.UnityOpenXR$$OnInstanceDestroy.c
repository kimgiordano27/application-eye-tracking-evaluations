/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceDestroy
ENTRY_POINT: 0339548c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceDestroy(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar14;
  long unaff_x25;
  long lVar15;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xf00));
  *(undefined1 *)(unaff_x23 + 0x6ce) = 1;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_0339cd08();
  if (unaff_x21 == 0) goto LAB_03395c90;
  uVar5 = FUN_03392590();
  puVar2 = Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_03395c90;
    if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x2c) >> 1 & 1) != 0) goto LAB_033954e8;
    lVar14 = 0;
  }
  else {
LAB_033954e8:
    uVar11 = *(undefined8 *)(unaff_x21 + 0xd8);
    lVar14 = *(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar14 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar14 = *(long *)puVar2;
      }
      uVar12 = **(undefined8 **)(lVar14 + 0xb8);
      lVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_UnityEngine_UIElements_FocusEventBase<FocusOutEvent>_GetPooled__
                                );
      FUN_02b6841c(lVar7,uVar12,*(undefined8 *)Method_Photon_Voice_FrameOut<float>__ctor__,0);
      lVar14 = *(long *)puVar2;
      *(long *)(*(long *)(lVar14 + 0xb8) + 0x18) = lVar7;
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar14 = *(long *)puVar2;
    }
    puVar1 = Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_focusController__;
    lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x20);
    if (lVar15 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar14 = *(long *)puVar2;
      }
      uVar12 = **(undefined8 **)(lVar14 + 0xb8);
      lVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_UnityEngine_UIElements_FocusEventBase<FocusOutEvent>__ctor__
                                 );
      FUN_02b681f4(lVar15,uVar12,*(undefined8 *)Method_Photon_Voice_FrameOut<float>_get_Buf__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = lVar15;
    }
    lVar14 = FUN_02355f08(uVar11,lVar7,lVar15,*(undefined8 *)puVar1);
  }
  if (unaff_x25 != 0) {
    FUN_0339c944();
  }
  puVar2 = Method_UnityEngine_UIElements_FocusEventBase<FocusInEvent>_GetPooled__;
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x1b8))();
    do {
      iVar3 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar3 == 4) {
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if (plVar6 == (long *)0x0) goto LAB_03395c90;
        uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        uVar5 = FUN_0339738c();
        if ((uVar5 & 1) == 0) {
          if (*(long *)(unaff_x21 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar7 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),uVar11);
          if (lVar7 == 0) {
            plVar6 = *(long **)(unaff_x22 + 0x28);
            if (plVar6 != (long *)0x0) {
              lVar7 = *plVar6;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)
                       Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
                  {
                    puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_03395800;
                  }
                  uVar5 = uVar5 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar5 != 0);
              }
              puVar8 = (undefined8 *)
                       FUN_01c72498(plVar6,*(long *)
                                            Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                    ,0);
LAB_03395800:
              iVar3 = (*(code *)*puVar8)(plVar6,puVar8[1]);
              if (3 < iVar3) {
                plVar6 = *(long **)(unaff_x22 + 0x28);
                uVar12 = (**(code **)(*unaff_x19 + 0x1c8))();
                if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar10 = FUN_03295500(0);
                uVar10 = FUN_033704d4(*(undefined8 *)
                                       Method_Photon_Voice_FramerResampler<float>__ctor__,uVar10,
                                      uVar11,*(undefined8 *)(unaff_x21 + 0x60),0);
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar9 = thunk_FUN_01c495e4();
                uVar12 = FUN_03358c64(uVar9,uVar12,uVar10,0);
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar7 = *plVar6;
                uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar5 != 0) {
                  piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) ==
                        *(long *)
                         Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                       ) {
                      puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_0339590c;
                    }
                    uVar5 = uVar5 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar5 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_01c72498(plVar6,*(long *)
                                              Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                      ,1);
LAB_0339590c:
                (*(code *)*puVar8)(plVar6,4,uVar12,0,puVar8[1]);
              }
            }
            if (*(char *)(unaff_x21 + 0xc0) == '\0') {
              if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              iVar3 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
            }
            else {
              iVar3 = *(int *)(unaff_x21 + 0xc4);
            }
            if (iVar3 == 1) {
              lVar14 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar12 = FUN_03295500(0);
              plVar6 = *(long **)(unaff_x21 + 0x60);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              uVar10 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
              uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__)
              ;
              FUN_033704d4(uVar9,uVar12,uVar11,uVar10,0);
              uVar11 = FUN_0335cdc4();
              uVar12 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar11,uVar12);
            }
            uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
            if ((uVar5 & 1) != 0) {
              FUN_0339faf0();
            }
          }
          else if ((*(char *)(lVar7 + 0x80) == '\0') && (uVar5 = FUN_0339fc64(), (uVar5 & 1) != 0))
          {
            if (*(long *)(lVar7 + 0x48) == 0) {
              uVar12 = FUN_03395dc8();
              *(undefined8 *)(lVar7 + 0x48) = uVar12;
            }
            FUN_03396234();
            uVar5 = FUN_0335ce1c();
            if ((uVar5 & 1) == 0) {
              lVar14 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar12 = FUN_03295500(0);
              uVar10 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
              FUN_0336f2b8(uVar10,uVar12,uVar11,0);
              uVar11 = FUN_0335cdc4();
              uVar12 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar11,uVar12);
            }
            FUN_0339fec8();
            uVar5 = FUN_0339bdf8();
            if ((uVar5 & 1) == 0) {
              FUN_0339faf0();
            }
          }
          else {
            uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
            if ((uVar5 & 1) != 0) {
              FUN_0339fec8();
              FUN_0339faf0();
            }
          }
        }
      }
      else if (iVar3 != 5) {
        if (iVar3 != 0xd) {
          FUN_019b2708();
          uVar4 = (**(code **)(*unaff_x19 + 0x188))();
          in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
          in_stack_00000020 = 0xffffffffffffffff;
          in_stack_00000028 = uVar4;
          uVar11 = FUN_03307544(&stack0x00000018,0);
          uVar12 = thunk_FUN_01c273e8(
                                     Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                     );
          FUN_03146988(uVar12,uVar11,0);
          uVar11 = FUN_0335cdc4();
          uVar12 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar11,uVar12);
        }
        goto LAB_03395bf0;
      }
      uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
    } while ((uVar5 & 1) != 0);
    FUN_0339d160();
LAB_03395bf0:
    if (lVar14 != 0) {
      FUN_02906afc(&stack0x00000030,lVar14,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_direction__);
      while (uVar5 = FUN_02a5e6dc(&stack0x00000030,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
        FUN_0339f5a0();
      }
      FUN_02a5e7f4(&stack0x00000030,
                   *(undefined8 *)Method_UnityEngine_UIElements_FocusEventBase<FocusInEvent>__ctor__
                  );
    }
    FUN_0339cf34();
    return;
  }
LAB_03395c90:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


