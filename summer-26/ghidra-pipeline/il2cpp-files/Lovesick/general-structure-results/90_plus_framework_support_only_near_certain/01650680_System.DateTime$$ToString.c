/*
FUNCTION_NAME: System.DateTime$$ToString
ENTRY_POINT: 01650680
PROGRAM: Lovesick-libil2cpp.so
SCORE: 166
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0165025c) */
/* WARNING: Removing unreachable block (ram,0x01650864) */
/* WARNING: Removing unreachable block (ram,0x01650904) */

void System_DateTime__ToString(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int iVar13;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  
  iVar13 = 0;
  do {
    plVar6 = (long *)thunk_FUN_00d6225c(unaff_x27,*unaff_x29);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x29) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01650458;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x29,0);
LAB_01650458:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
    puVar3 = OVRPlugin_OVRP_1_49_0_TypeInfo;
    puVar2 = System_Buffers_ArrayPool<byte>_TypeInfo;
    if (unaff_x28 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00dbe778(unaff_x28);
    }
    if ((iVar13 != 0x15) && (iVar13 != 0)) {
LAB_016506b0:
      plVar6 = (long *)thunk_FUN_00d6225c();
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 == 0) goto LAB_016506f8;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (*(int *)(*(long *)System_Runtime_Remoting_Channels_IChannelSender_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01651b58(unaff_x25);
LAB_0164fe88:
    do {
      lVar10 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0164fed4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724();
LAB_0164fed4:
      uVar11 = (*(code *)*puVar7)();
      if ((uVar11 & 1) == 0) goto LAB_016506b0;
      lVar10 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0164ff34;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724();
LAB_0164ff34:
      unaff_x25 = (long *)(*(code *)*puVar7)();
      if (unaff_x25 != (long *)0x0) {
        lVar10 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar10 + 300);
        if ((*(byte *)(*unaff_x25 + 300) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(unaff_x25);
        }
      }
      if ((unaff_x20 & 1) != 0) {
        if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar11 = FUN_015fe7e8(unaff_x25[5],*(undefined8 *)puVar2,0);
        if ((uVar11 & 1) != 0) goto LAB_0164fe88;
      }
      lVar10 = *unaff_x24;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *unaff_x24;
      }
      if (*(char *)(*(long *)(lVar10 + 0xb8) + 0x19) == '\0') {
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
      uVar11 = thunk_FUN_015fe514(unaff_x25[5],*(undefined8 *)puVar2,0);
    } while ((uVar11 & 1) != 0);
    if (unaff_x25[2] != 0) {
      lVar10 = *unaff_x24;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *unaff_x24;
      }
      plVar6 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x40);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                 (plVar6,unaff_x25[2],*(undefined8 *)(*plVar6 + 0x310));
      if (plVar6 == (long *)0x0) {
        lVar10 = unaff_x25[2];
        uVar8 = thunk_FUN_00d48444(
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>__ctor__
                                  );
        uVar9 = thunk_FUN_00d48444(
                                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                  );
        uVar8 = FUN_01600424(uVar8,lVar10,uVar9,0);
        thunk_FUN_00d48444(
                          Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                          );
        lVar10 = thunk_FUN_00d62348();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01780598(lVar10,uVar8,0);
        uVar8 = thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar10,uVar8);
      }
      lVar10 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar10 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) {
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
    plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01650070:
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto System_DateTime__ParseExact;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x21,0);
System_DateTime__ParseExact:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) != 0) {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0165011c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x21,1);
LAB_0165011c:
      plVar4 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*unaff_x22 + 300);
      if ((*(byte *)(*plVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar4);
      }
      if (plVar4[2] != 0) {
        lVar10 = *unaff_x24;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *unaff_x24;
        }
        plVar5 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x50);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                   (plVar5,plVar4[2],*(undefined8 *)(*plVar5 + 0x310));
        if (plVar5 == (long *)0x0) {
          lVar10 = plVar4[2];
          uVar8 = thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                                    );
          uVar9 = thunk_FUN_00d48444(
                                    Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                    );
          uVar8 = FUN_01600424(uVar8,lVar10,uVar9,0);
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                            );
          lVar10 = thunk_FUN_00d62348();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01780598(lVar10,uVar8,0);
          uVar8 = thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar10,uVar8);
        }
        bVar1 = *(byte *)(*unaff_x22 + 300);
        if ((*(byte *)(*plVar5 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar5);
        }
        FUN_016513e8(plVar4,plVar5);
      }
      goto LAB_01650070;
    }
    plVar6 = (long *)thunk_FUN_00d6225c(plVar6,*unaff_x29);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x29) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01650244;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x29,0);
LAB_01650244:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
    plVar6 = (long *)FUN_01651aec(unaff_x25);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_x27 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01650284:
    lVar10 = *unaff_x27;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_016502d0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(unaff_x27,*unaff_x21,0);
LAB_016502d0:
    uVar11 = (*(code *)*puVar7)(unaff_x27,puVar7[1]);
    if ((uVar11 & 1) != 0) {
      lVar10 = *unaff_x27;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_01650330;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(unaff_x27,*unaff_x21,1);
LAB_01650330:
      plVar6 = (long *)(*(code *)*puVar7)(unaff_x27,puVar7[1]);
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
        lVar10 = *unaff_x24;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *unaff_x24;
        }
        plVar4 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x48);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                   (plVar4,plVar6[2],*(undefined8 *)(*plVar4 + 0x310));
        if (plVar4 == (long *)0x0) {
          lVar10 = plVar6[2];
          uVar8 = thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                                    );
          uVar9 = thunk_FUN_00d48444(
                                    Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                    );
          uVar8 = FUN_01600424(uVar8,lVar10,uVar9,0);
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                            );
          lVar10 = thunk_FUN_00d62348();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01780598(lVar10,uVar8,0);
          uVar8 = thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar10,uVar8);
        }
        bVar1 = *(byte *)(*unaff_x22 + 300);
        if ((*(byte *)(*plVar4 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar4);
        }
        FUN_016513e8(plVar6,plVar4);
      }
      goto LAB_01650284;
    }
    unaff_x28 = 0;
    iVar13 = 0x15;
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *unaff_x29) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_01650714;
    }
  }
LAB_016506f8:
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x29,0);
LAB_01650714:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


