/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 033955c8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  undefined8 unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  FUN_02b681f4();
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x27;
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
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar5 == (long *)0x0) goto LAB_03395c90;
      uVar11 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      uVar10 = FUN_0339738c();
      if ((uVar10 & 1) == 0) {
        if (*(long *)(unaff_x21 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar6 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),uVar11);
        if (lVar6 == 0) {
          plVar5 = *(long **)(unaff_x22 + 0x28);
          if (plVar5 != (long *)0x0) {
            lVar6 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar10 != 0) {
              piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)
                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
                  puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_03395800;
                }
                uVar10 = uVar10 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_01c72498(plVar5,*(long *)
                                          Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                  ,0);
LAB_03395800:
            iVar2 = (*(code *)*puVar7)(plVar5,puVar7[1]);
            if (3 < iVar2) {
              plVar5 = *(long **)(unaff_x22 + 0x28);
              uVar12 = (**(code **)(*unaff_x19 + 0x1c8))();
              if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar9 = FUN_03295500(0);
              uVar9 = FUN_033704d4(*(undefined8 *)Method_Photon_Voice_FramerResampler<float>__ctor__
                                   ,uVar9,uVar11,*(undefined8 *)(unaff_x21 + 0x60),0);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar8 = thunk_FUN_01c495e4();
              uVar12 = FUN_03358c64(uVar8,uVar12,uVar9,0);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar6 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar10 != 0) {
                piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)
                       Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
                  {
                    puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_0339590c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)
                       FUN_01c72498(plVar5,*(long *)
                                            Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                    ,1);
LAB_0339590c:
              (*(code *)*puVar7)(plVar5,4,uVar12,0,puVar7[1]);
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
            uVar12 = FUN_03295500(0);
            plVar5 = *(long **)(unaff_x21 + 0x60);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar9 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
            uVar8 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
            FUN_033704d4(uVar8,uVar12,uVar11,uVar9,0);
            uVar11 = FUN_0335cdc4();
            uVar12 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar11,uVar12);
          }
          uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar10 & 1) != 0) {
            FUN_0339faf0();
          }
        }
        else if ((*(char *)(lVar6 + 0x80) == '\0') && (uVar10 = FUN_0339fc64(), (uVar10 & 1) != 0))
        {
          if (*(long *)(lVar6 + 0x48) == 0) {
            uVar12 = FUN_03395dc8();
            *(undefined8 *)(lVar6 + 0x48) = uVar12;
          }
          FUN_03396234();
          uVar10 = FUN_0335ce1c();
          if ((uVar10 & 1) == 0) {
            lVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar12 = FUN_03295500(0);
            uVar9 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
            FUN_0336f2b8(uVar9,uVar12,uVar11,0);
            uVar11 = FUN_0335cdc4();
            uVar12 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar11,uVar12);
          }
          FUN_0339fec8();
          uVar10 = FUN_0339bdf8();
          if ((uVar10 & 1) == 0) {
            FUN_0339faf0();
          }
        }
        else {
          uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar10 & 1) != 0) {
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
    uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar10 & 1) != 0);
  FUN_0339d160();
LAB_03395bf0:
  if (lVar4 != 0) {
    FUN_02906afc(&stack0x00000030,lVar4,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_direction__);
    while (uVar10 = FUN_02a5e6dc(&stack0x00000030,*(undefined8 *)puVar1), (uVar10 & 1) != 0) {
      FUN_0339f5a0();
    }
    FUN_02a5e7f4(&stack0x00000030,
                 *(undefined8 *)Method_UnityEngine_UIElements_FocusEventBase<FocusInEvent>__ctor__);
  }
  FUN_0339cf34();
  return;
}


