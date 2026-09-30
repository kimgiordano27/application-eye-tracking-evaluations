/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 03395688
PROGRAM: gunraiders-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 unaff_x28;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar4 = FUN_033936cc(param_1,unaff_x28);
    if (lVar4 == 0) {
      plVar3 = *(long **)(unaff_x22 + 0x28);
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
               ) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03395800;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01c72498(plVar3,*(long *)
                                      Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                              ,0);
LAB_03395800:
        iVar1 = (*(code *)*puVar7)(plVar3,puVar7[1]);
        if (3 < iVar1) {
          plVar3 = *(long **)(unaff_x22 + 0x28);
          uVar6 = (**(code **)(*unaff_x19 + 0x1c8))();
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = FUN_03295500(0);
          uVar9 = FUN_033704d4(*(undefined8 *)Method_Photon_Voice_FramerResampler<float>__ctor__,
                               uVar9,unaff_x28,*(undefined8 *)(unaff_x21 + 0x60),0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar8 = thunk_FUN_01c495e4();
          uVar6 = FUN_03358c64(uVar8,uVar6,uVar9,0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)
                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_0339590c;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01c72498(plVar3,*(long *)
                                        Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                ,1);
LAB_0339590c:
          (*(code *)*puVar7)(plVar3,4,uVar6,0,puVar7[1]);
        }
      }
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
        uVar6 = FUN_03295500(0);
        plVar3 = *(long **)(unaff_x21 + 0x60);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar9 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        uVar8 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
        FUN_033704d4(uVar8,uVar6,unaff_x28,uVar9,0);
        uVar6 = FUN_0335cdc4();
        uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar6,uVar9);
      }
      uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar5 & 1) != 0) {
        FUN_0339faf0();
      }
    }
    else {
                    /* try { // try from 033956ac to 034956af has its CatchHandler @ 033956d0 */
                    /* try { // try from 033956b0 to 034956b7 has its CatchHandler @ 033956d4 */
                    /* try { // try from 033956b8 to 034956eb has its CatchHandler @ 033955a0 */
      if ((*(char *)(lVar4 + 0x80) == '\0') && (uVar5 = FUN_0339fc64(), (uVar5 & 1) != 0)) {
        if (*(long *)(lVar4 + 0x48) == 0) {
          uVar6 = FUN_03395dc8();
                    /* catch(type#1 @ 04025298) { ... } // from try @ 033956ac with catch @ 033956d0
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 033956b0 with catch @ 033956d4
                        */
          *(undefined8 *)(lVar4 + 0x48) = uVar6;
        }
        FUN_03396234();
                    /* try { // try from 033956ec to 03495703 has its CatchHandler @ 03395770 */
        uVar5 = FUN_0335ce1c();
        if ((uVar5 & 1) == 0) {
          lVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar6 = FUN_03295500(0);
          uVar9 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
          FUN_0336f2b8(uVar9,uVar6,unaff_x28,0);
          uVar6 = FUN_0335cdc4();
          uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,uVar9);
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
LAB_03395978:
    do {
      uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar5 & 1) == 0) {
        FUN_0339d160();
LAB_03395bf0:
        if (unaff_x24 != 0) {
          FUN_02906afc(&stack0x00000030);
          while (uVar5 = FUN_02a5e6dc(&stack0x00000030,*unaff_x23), (uVar5 & 1) != 0) {
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
            uVar6 = FUN_03307544(&stack0x00000018,0);
            uVar9 = thunk_FUN_01c273e8(
                                      Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                      );
            FUN_03146988(uVar9,uVar6,0);
            uVar6 = FUN_0335cdc4();
            uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar6,uVar9);
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
      uVar5 = FUN_0339738c();
    } while ((uVar5 & 1) != 0);
    param_1 = *(long *)(unaff_x21 + 0xd8);
  } while( true );
}


