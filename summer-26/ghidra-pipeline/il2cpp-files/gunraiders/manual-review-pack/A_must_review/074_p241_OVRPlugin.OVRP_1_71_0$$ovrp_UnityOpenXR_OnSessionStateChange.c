/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 03395914
PROGRAM: gunraiders-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 unaff_x26;
  undefined8 unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    (*param_1)(unaff_x29,param_3,unaff_x26,0,param_6);
    do {
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
          lVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar8 = FUN_03295500(0);
          plVar3 = *(long **)(unaff_x21 + 0x60);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          uVar6 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
          FUN_033704d4(uVar6,uVar8,unaff_x28,uVar9,0);
          uVar8 = FUN_0335cdc4();
          uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar8,uVar9);
        }
        uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
        if ((uVar7 & 1) != 0) {
          FUN_0339faf0();
        }
LAB_03395978:
        do {
          uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar7 & 1) == 0) {
            FUN_0339d160();
LAB_03395bf0:
            if (unaff_x24 != 0) {
              FUN_02906afc(&stack0x00000030);
              while (uVar7 = FUN_02a5e6dc(&stack0x00000030,*unaff_x23), (uVar7 & 1) != 0) {
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
                uVar8 = FUN_03307544(&stack0x00000018,0);
                uVar9 = thunk_FUN_01c273e8(
                                          Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                          );
                FUN_03146988(uVar9,uVar8,0);
                uVar8 = FUN_0335cdc4();
                uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar8,uVar9);
              }
              goto LAB_03395bf0;
            }
            goto LAB_03395978;
          }
          plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          unaff_x28 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          uVar7 = FUN_0339738c();
        } while ((uVar7 & 1) != 0);
        if (*(long *)(unaff_x21 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar4 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),unaff_x28);
        if (lVar4 != 0) {
          if ((*(char *)(lVar4 + 0x80) == '\0') && (uVar7 = FUN_0339fc64(), (uVar7 & 1) != 0)) {
            if (*(long *)(lVar4 + 0x48) == 0) {
              uVar8 = FUN_03395dc8();
              *(undefined8 *)(lVar4 + 0x48) = uVar8;
            }
            FUN_03396234();
            uVar7 = FUN_0335ce1c();
            if ((uVar7 & 1) == 0) {
              lVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar8 = FUN_03295500(0);
              uVar9 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
              FUN_0336f2b8(uVar9,uVar8,unaff_x28,0);
              uVar8 = FUN_0335cdc4();
              uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar8,uVar9);
            }
            FUN_0339fec8();
            uVar7 = FUN_0339bdf8();
            if ((uVar7 & 1) == 0) {
              FUN_0339faf0();
            }
          }
          else {
            uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
            if ((uVar7 & 1) != 0) {
              FUN_0339fec8();
              FUN_0339faf0();
            }
          }
          goto LAB_03395978;
        }
        plVar3 = *(long **)(unaff_x22 + 0x28);
      } while (plVar3 == (long *)0x0);
      lVar4 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03395800;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01c72498(plVar3,*(long *)
                                    Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_03395800:
      iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    } while (iVar1 < 4);
    unaff_x29 = *(long **)(unaff_x22 + 0x28);
    uVar8 = (**(code **)(*unaff_x19 + 0x1c8))();
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_03295500(0);
    uVar9 = FUN_033704d4(*(undefined8 *)Method_Photon_Voice_FramerResampler<float>__ctor__,uVar9,
                         unaff_x28,*(undefined8 *)(unaff_x21 + 0x60),0);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = thunk_FUN_01c495e4();
    unaff_x26 = FUN_03358c64(uVar6,uVar8,uVar9,0);
    if (unaff_x29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar4 = *unaff_x29;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0339590c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01c72498(unaff_x29,
                          *(long *)
                           Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,1);
LAB_0339590c:
    param_1 = (code *)*puVar5;
    param_6 = puVar5[1];
    param_3 = 4;
  } while( true );
}


