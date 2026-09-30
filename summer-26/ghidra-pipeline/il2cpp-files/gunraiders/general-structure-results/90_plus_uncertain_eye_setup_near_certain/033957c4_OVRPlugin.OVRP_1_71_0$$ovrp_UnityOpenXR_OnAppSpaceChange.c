/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnAppSpaceChange
ENTRY_POINT: 033957c4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  undefined8 unaff_x28;
  long *plVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03395800;
      }
      in_x9 = in_x9 - 1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_01c72498(unaff_x26,param_3,0);
LAB_03395800:
      iVar1 = (*(code *)*puVar3)(unaff_x26,puVar3[1]);
      if (3 < iVar1) {
        plVar10 = *(long **)(unaff_x22 + 0x28);
        uVar4 = (**(code **)(*unaff_x19 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar5 = FUN_03295500(0);
        uVar5 = FUN_033704d4(*(undefined8 *)Method_Photon_Voice_FramerResampler<float>__ctor__,uVar5
                             ,unaff_x28,*(undefined8 *)(unaff_x21 + 0x60),0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar6 = thunk_FUN_01c495e4();
        uVar4 = FUN_03358c64(uVar6,uVar4,uVar5,0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
               ) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0339590c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01c72498(plVar10,*(long *)
                                       Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                              ,1);
LAB_0339590c:
        (*(code *)*puVar3)(plVar10,4,uVar4,0,puVar3[1]);
      }
      do {
        if (*(char *)(unaff_x21 + 0xc0) == '\0') {
          if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          iVar1 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
        }
        else {
          iVar1 = *(int *)(unaff_x21 + 0xc4);
        }
        if (iVar1 == 1) {
          lVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar4 = FUN_03295500(0);
          plVar10 = *(long **)(unaff_x21 + 0x60);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar5 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
          uVar6 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
          FUN_033704d4(uVar6,uVar4,unaff_x28,uVar5,0);
          uVar4 = FUN_0335cdc4();
          uVar5 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar4,uVar5);
        }
        uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
        if ((uVar8 & 1) != 0) {
          FUN_0339faf0();
        }
LAB_03395978:
        do {
          uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar8 & 1) == 0) {
            FUN_0339d160();
LAB_03395bf0:
            if (unaff_x24 != 0) {
              FUN_02906afc(&stack0x00000030);
              while (uVar8 = FUN_02a5e6dc(&stack0x00000030,*unaff_x23), (uVar8 & 1) != 0) {
                FUN_0339f5a0();
              }
              FUN_02a5e7f4(&stack0x00000030,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_FocusEventBase<FocusInEvent>__ctor__);
            }
            FUN_0339cf34();
            return;
          }
          iVar1 = (**(code **)(*unaff_x19 + 0x188))();
          if (iVar1 != 4) {
            if (iVar1 != 5) {
              if (iVar1 != 0xd) {
                FUN_019b2708();
                uVar2 = (**(code **)(*unaff_x19 + 0x188))();
                in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
                in_stack_00000020 = 0xffffffffffffffff;
                in_stack_00000028 = uVar2;
                uVar4 = FUN_03307544(&stack0x00000018,0);
                uVar5 = thunk_FUN_01c273e8(
                                          Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                          );
                FUN_03146988(uVar5,uVar4,0);
                uVar4 = FUN_0335cdc4();
                uVar5 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar4,uVar5);
              }
              goto LAB_03395bf0;
            }
            goto LAB_03395978;
          }
          plVar10 = (long *)(**(code **)(*unaff_x19 + 0x198))();
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          unaff_x28 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          uVar8 = FUN_0339738c();
        } while ((uVar8 & 1) != 0);
        if (*(long *)(unaff_x21 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar7 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),unaff_x28);
        if (lVar7 != 0) {
          if ((*(char *)(lVar7 + 0x80) == '\0') && (uVar8 = FUN_0339fc64(), (uVar8 & 1) != 0)) {
            if (*(long *)(lVar7 + 0x48) == 0) {
              uVar4 = FUN_03395dc8();
              *(undefined8 *)(lVar7 + 0x48) = uVar4;
            }
            FUN_03396234();
            uVar8 = FUN_0335ce1c();
            if ((uVar8 & 1) == 0) {
              lVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar4 = FUN_03295500(0);
              uVar5 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
              FUN_0336f2b8(uVar5,uVar4,unaff_x28,0);
              uVar4 = FUN_0335cdc4();
              uVar5 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar4,uVar5);
            }
            FUN_0339fec8();
            uVar8 = FUN_0339bdf8();
            if ((uVar8 & 1) == 0) {
              FUN_0339faf0();
            }
          }
          else {
            uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
            if ((uVar8 & 1) != 0) {
              FUN_0339fec8();
              FUN_0339faf0();
            }
          }
          goto LAB_03395978;
        }
        unaff_x26 = *(long **)(unaff_x22 + 0x28);
      } while (unaff_x26 == (long *)0x0);
      param_1 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
      ;
    } while (in_x9 == 0);
  } while( true );
}


