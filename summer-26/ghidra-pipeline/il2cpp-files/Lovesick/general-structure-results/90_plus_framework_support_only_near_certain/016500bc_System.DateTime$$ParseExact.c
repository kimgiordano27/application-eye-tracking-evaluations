/*
FUNCTION_NAME: System.DateTime$$ParseExact
ENTRY_POINT: 016500bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 166
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0165086c) */
/* WARNING: Removing unreachable block (ram,0x01650904) */
/* WARNING: Removing unreachable block (ram,0x0165025c) */
/* WARNING: Removing unreachable block (ram,0x01650470) */
/* WARNING: Removing unreachable block (ram,0x01650864) */

void System_DateTime__ParseExact(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  long *unaff_x29;
  
code_r0x016500bc:
  do {
    uVar4 = (*(code *)*param_1)(unaff_x27,param_1[1]);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_00d6225c(unaff_x27,*unaff_x29);
      if (plVar6 != (long *)0x0) {
        lVar11 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x29) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01650244;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x29,0);
LAB_01650244:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
      }
      plVar6 = (long *)FUN_01651aec(unaff_x25);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
LAB_01650284:
      lVar11 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_016502d0;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x21,0);
LAB_016502d0:
      uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar4 & 1) != 0) {
        lVar11 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x21) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_01650330;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x21,1);
LAB_01650330:
        plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        bVar1 = *(byte *)(*unaff_x22 + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar7);
        }
        if (plVar7[2] != 0) {
          lVar11 = *unaff_x24;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *unaff_x24;
          }
          plVar8 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x48);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                     (plVar8,plVar7[2],*(undefined8 *)(*plVar8 + 0x310));
          if (plVar8 == (long *)0x0) {
            lVar11 = plVar7[2];
            uVar9 = thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                                      );
            uVar10 = thunk_FUN_00d48444(
                                       Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                       );
            uVar9 = FUN_01600424(uVar9,lVar11,uVar10,0);
            thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                              );
            lVar11 = thunk_FUN_00d62348();
            if (lVar11 != 0) {
              FUN_01780598(lVar11,uVar9,0);
              uVar9 = thunk_FUN_00d48444(
                                        UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(lVar11,uVar9);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          bVar1 = *(byte *)(*unaff_x22 + 300);
          if ((*(byte *)(*plVar8 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar8);
          }
          FUN_016513e8(plVar7,plVar8);
        }
        goto LAB_01650284;
      }
      plVar6 = (long *)thunk_FUN_00d6225c(plVar6,*unaff_x29);
      if (plVar6 != (long *)0x0) {
        lVar11 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x29) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01650458;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x29,0);
LAB_01650458:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
      }
      puVar3 = OVRPlugin_OVRP_1_49_0_TypeInfo;
      puVar2 = System_Buffers_ArrayPool<byte>_TypeInfo;
      if (*(int *)(*(long *)System_Runtime_Remoting_Channels_IChannelSender_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01651b58(unaff_x25);
LAB_0164fe88:
      do {
        lVar11 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x21) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0164fed4;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724();
LAB_0164fed4:
        uVar4 = (*(code *)*puVar5)();
        if ((uVar4 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_00d6225c();
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar4 == 0) goto LAB_016506f8;
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto System_DateTime__ToString;
        }
        lVar11 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x21) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0164ff34;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724();
LAB_0164ff34:
        unaff_x25 = (long *)(*(code *)*puVar5)();
        if (unaff_x25 != (long *)0x0) {
          lVar11 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar11 + 300);
          if ((*(byte *)(*unaff_x25 + 300) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(unaff_x25);
          }
        }
        if ((unaff_x20 & 1) != 0) {
          if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar4 = FUN_015fe7e8(unaff_x25[5],*(undefined8 *)puVar2,0);
          if ((uVar4 & 1) != 0) goto LAB_0164fe88;
        }
        lVar11 = *unaff_x24;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *unaff_x24;
        }
        if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x19) == '\0') {
          if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          break;
        }
        if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar4 = thunk_FUN_015fe514(unaff_x25[5],*(undefined8 *)puVar2,0);
      } while ((uVar4 & 1) != 0);
      if (unaff_x25[2] != 0) {
        lVar11 = *unaff_x24;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *unaff_x24;
        }
        plVar6 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x40);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                   (plVar6,unaff_x25[2],*(undefined8 *)(*plVar6 + 0x310));
        if (plVar6 == (long *)0x0) {
          lVar11 = unaff_x25[2];
          uVar9 = thunk_FUN_00d48444(
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>__ctor__
                                    );
          uVar10 = thunk_FUN_00d48444(
                                     Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                     );
          uVar9 = FUN_01600424(uVar9,lVar11,uVar10,0);
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                            );
          lVar11 = thunk_FUN_00d62348();
          if (lVar11 != 0) {
            FUN_01780598(lVar11,uVar9,0);
            uVar9 = thunk_FUN_00d48444(
                                      UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(lVar11,uVar9);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar11 + 300);
        if ((*(byte *)(*plVar6 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar6);
        }
        FUN_01650a3c(unaff_x25,plVar6);
      }
      plVar6 = (long *)FUN_0165137c(unaff_x25);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      unaff_x27 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    else {
      lVar11 = *unaff_x27;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0165011c;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(unaff_x27,*unaff_x21,1);
LAB_0165011c:
      plVar6 = (long *)(*(code *)*puVar5)(unaff_x27,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*unaff_x22 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar6);
      }
      if (plVar6[2] != 0) {
        lVar11 = *unaff_x24;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *unaff_x24;
        }
        plVar7 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x50);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar7 = (long *)(**(code **)(*plVar7 + 0x308))
                                   (plVar7,plVar6[2],*(undefined8 *)(*plVar7 + 0x310));
        if (plVar7 == (long *)0x0) {
          lVar11 = plVar6[2];
          uVar9 = thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                                    );
          uVar10 = thunk_FUN_00d48444(
                                     Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                     );
          uVar9 = FUN_01600424(uVar9,lVar11,uVar10,0);
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                            );
          lVar11 = thunk_FUN_00d62348();
          if (lVar11 != 0) {
            FUN_01780598(lVar11,uVar9,0);
            uVar9 = thunk_FUN_00d48444(
                                      UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(lVar11,uVar9);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        bVar1 = *(byte *)(*unaff_x22 + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar7);
        }
        FUN_016513e8(plVar6,plVar7);
      }
    }
    lVar11 = *unaff_x27;
    uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          param_1 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x016500bc;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)FUN_00d59724(unaff_x27,*unaff_x21,0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
System_DateTime__ToString:
    if (*(long *)(piVar12 + -2) == *unaff_x29) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_01650714;
    }
  }
LAB_016506f8:
  puVar5 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x29,0);
LAB_01650714:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


