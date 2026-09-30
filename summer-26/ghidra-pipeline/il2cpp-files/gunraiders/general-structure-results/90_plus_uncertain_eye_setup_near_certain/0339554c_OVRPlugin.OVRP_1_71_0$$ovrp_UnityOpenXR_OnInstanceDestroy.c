/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceDestroy
ENTRY_POINT: 0339554c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceDestroy
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  undefined8 uVar13;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  FUN_02b6841c(param_2,param_3,*param_1);
  lVar4 = *unaff_x23;
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18) = param_2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *unaff_x23;
  }
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x20) == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *unaff_x23;
    }
                    /* try { // try from 033955a0 to 034956ab has its CatchHandler @ 033955a0
                       catch() { ... } // from try @ 033955a0 with catch @ 033955a0
                       catch() { ... } // from try @ 033956b8 with catch @ 033955a0
                       catch() { ... } // from try @ 03395704 with catch @ 033955a0
                       catch() { ... } // from try @ 03395778 with catch @ 033955a0 */
    uVar13 = **(undefined8 **)(lVar4 + 0xb8);
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_UnityEngine_UIElements_FocusEventBase<FocusOutEvent>__ctor__)
    ;
    FUN_02b681f4(uVar5,uVar13,*(undefined8 *)Method_Photon_Voice_FrameOut<float>_get_Buf__,0);
    *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = uVar5;
  }
  lVar4 = FUN_02355f08();
  if (unaff_x25 != 0) {
    FUN_0339c944();
  }
  puVar1 = Method_UnityEngine_UIElements_FocusEventBase<FocusInEvent>_GetPooled__;
  if (unaff_x19 == (long *)0x0) {
LAB_03395c90:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  (**(code **)(*unaff_x19 + 0x1b8))();
  do {
    iVar2 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar2 == 4) {
      plVar6 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar6 == (long *)0x0) goto LAB_03395c90;
      uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      uVar11 = FUN_0339738c();
      if ((uVar11 & 1) == 0) {
        if (*(long *)(unaff_x21 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar7 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),uVar5);
        if (lVar7 == 0) {
          plVar6 = *(long **)(unaff_x22 + 0x28);
          if (plVar6 != (long *)0x0) {
            lVar7 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)
                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
                  puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_03395800;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_01c72498(plVar6,*(long *)
                                          Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                  ,0);
LAB_03395800:
            iVar2 = (*(code *)*puVar8)(plVar6,puVar8[1]);
            if (3 < iVar2) {
              plVar6 = *(long **)(unaff_x22 + 0x28);
              uVar13 = (**(code **)(*unaff_x19 + 0x1c8))();
              if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar10 = FUN_03295500(0);
              uVar10 = FUN_033704d4(*(undefined8 *)
                                     Method_Photon_Voice_FramerResampler<float>__ctor__,uVar10,uVar5
                                    ,*(undefined8 *)(unaff_x21 + 0x60),0);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar9 = thunk_FUN_01c495e4();
              uVar13 = FUN_03358c64(uVar9,uVar13,uVar10,0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar7 = *plVar6;
              uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)
                       Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
                  {
                    puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                    goto LAB_0339590c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar8 = (undefined8 *)
                       FUN_01c72498(plVar6,*(long *)
                                            Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                    ,1);
LAB_0339590c:
              (*(code *)*puVar8)(plVar6,4,uVar13,0,puVar8[1]);
            }
          }
          if (*(char *)(unaff_x21 + 0xc0) == '\0') {
            if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            iVar2 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
          }
          else {
            iVar2 = *(int *)(unaff_x21 + 0xc4);
          }
          if (iVar2 == 1) {
            lVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar13 = FUN_03295500(0);
            plVar6 = *(long **)(unaff_x21 + 0x60);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar10 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
            FUN_033704d4(uVar9,uVar13,uVar5,uVar10,0);
            uVar5 = FUN_0335cdc4();
            uVar13 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar5,uVar13);
          }
          uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar11 & 1) != 0) {
            FUN_0339faf0();
          }
        }
        else if ((*(char *)(lVar7 + 0x80) == '\0') && (uVar11 = FUN_0339fc64(), (uVar11 & 1) != 0))
        {
          if (*(long *)(lVar7 + 0x48) == 0) {
            uVar13 = FUN_03395dc8();
            *(undefined8 *)(lVar7 + 0x48) = uVar13;
          }
          FUN_03396234();
          uVar11 = FUN_0335ce1c();
          if ((uVar11 & 1) == 0) {
            lVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar13 = FUN_03295500(0);
            uVar10 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
            FUN_0336f2b8(uVar10,uVar13,uVar5,0);
            uVar5 = FUN_0335cdc4();
            uVar13 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar5,uVar13);
          }
          FUN_0339fec8();
          uVar11 = FUN_0339bdf8();
          if ((uVar11 & 1) == 0) {
            FUN_0339faf0();
          }
        }
        else {
          uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar11 & 1) != 0) {
            FUN_0339fec8();
            FUN_0339faf0();
          }
        }
      }
    }
    else if (iVar2 != 5) {
      if (iVar2 != 0xd) {
        FUN_019b2708();
        uVar3 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar3;
        uVar5 = FUN_03307544(&stack0x00000018,0);
        uVar13 = thunk_FUN_01c273e8(
                                   Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                   );
        FUN_03146988(uVar13,uVar5,0);
        uVar5 = FUN_0335cdc4();
        uVar13 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar5,uVar13);
      }
      goto LAB_03395bf0;
    }
    uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar11 & 1) != 0);
  FUN_0339d160();
LAB_03395bf0:
  if (lVar4 != 0) {
    FUN_02906afc(&stack0x00000030,lVar4,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_direction__);
    while (uVar11 = FUN_02a5e6dc(&stack0x00000030,*(undefined8 *)puVar1), (uVar11 & 1) != 0) {
      FUN_0339f5a0();
    }
    FUN_02a5e7f4(&stack0x00000030,
                 *(undefined8 *)Method_UnityEngine_UIElements_FocusEventBase<FocusInEvent>__ctor__);
  }
  FUN_0339cf34();
  return;
}


