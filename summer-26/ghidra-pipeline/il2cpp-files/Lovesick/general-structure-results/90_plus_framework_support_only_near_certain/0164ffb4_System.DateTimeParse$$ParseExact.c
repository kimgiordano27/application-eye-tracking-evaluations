/*
FUNCTION_NAME: System.DateTimeParse$$ParseExact
ENTRY_POINT: 0164ffb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01650904) */
/* WARNING: Removing unreachable block (ram,0x0165025c) */
/* WARNING: Removing unreachable block (ram,0x01650864) */
/* WARNING: Removing unreachable block (ram,0x01650470) */
/* WARNING: Removing unreachable block (ram,0x0165086c) */

void System_DateTimeParse__ParseExact(void)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x29;
  
code_r0x0164ffb4:
  uVar2 = thunk_FUN_015fe514(unaff_x25[5],*unaff_x26,0);
  if ((uVar2 & 1) != 0) goto LAB_0164fe88;
  do {
    if (unaff_x25[2] != 0) {
      lVar3 = *unaff_x24;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *unaff_x24;
      }
      plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x40);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                 (plVar4,unaff_x25[2],*(undefined8 *)(*plVar4 + 0x310));
      if (plVar4 == (long *)0x0) {
        lVar3 = unaff_x25[2];
        uVar8 = thunk_FUN_00d48444(
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>__ctor__
                                  );
        uVar9 = thunk_FUN_00d48444(
                                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                  );
        uVar8 = FUN_01600424(uVar8,lVar3,uVar9,0);
        thunk_FUN_00d48444(
                          Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                          );
        lVar3 = thunk_FUN_00d62348();
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01780598(lVar3,uVar8,0);
        uVar8 = thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar3,uVar8);
      }
      bVar1 = *(byte *)(*unaff_x23 + 300);
      if ((*(byte *)(*plVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar4);
      }
      FUN_01650a3c(unaff_x25,plVar4);
    }
    plVar4 = (long *)FUN_0165137c(unaff_x25);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01650070:
    lVar3 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar2 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto System_DateTime__ParseExact;
        }
        uVar2 = uVar2 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x21,0);
System_DateTime__ParseExact:
    uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar2 & 1) != 0) {
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0165011c;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x21,1);
LAB_0165011c:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
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
        lVar3 = *unaff_x24;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *unaff_x24;
        }
        plVar7 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x50);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar7 = (long *)(**(code **)(*plVar7 + 0x308))
                                   (plVar7,plVar6[2],*(undefined8 *)(*plVar7 + 0x310));
        if (plVar7 == (long *)0x0) {
          lVar3 = plVar6[2];
          uVar8 = thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                                    );
          uVar9 = thunk_FUN_00d48444(
                                    Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                    );
          uVar8 = FUN_01600424(uVar8,lVar3,uVar9,0);
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                            );
          lVar3 = thunk_FUN_00d62348();
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01780598(lVar3,uVar8,0);
          uVar8 = thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar3,uVar8);
        }
        bVar1 = *(byte *)(*unaff_x22 + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar7);
        }
        FUN_016513e8(plVar6,plVar7);
      }
      goto LAB_01650070;
    }
    plVar4 = (long *)thunk_FUN_00d6225c(plVar4,*unaff_x29);
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x29) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01650244;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x29,0);
LAB_01650244:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    plVar4 = (long *)FUN_01651aec(unaff_x25);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01650284:
    lVar3 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar2 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_016502d0;
        }
        uVar2 = uVar2 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x21,0);
LAB_016502d0:
    uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar2 & 1) != 0) {
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_01650330;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x21,1);
LAB_01650330:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
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
        lVar3 = *unaff_x24;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *unaff_x24;
        }
        plVar7 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x48);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar7 = (long *)(**(code **)(*plVar7 + 0x308))
                                   (plVar7,plVar6[2],*(undefined8 *)(*plVar7 + 0x310));
        if (plVar7 == (long *)0x0) {
          lVar3 = plVar6[2];
          uVar8 = thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                                    );
          uVar9 = thunk_FUN_00d48444(
                                    Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                    );
          uVar8 = FUN_01600424(uVar8,lVar3,uVar9,0);
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                            );
          lVar3 = thunk_FUN_00d62348();
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01780598(lVar3,uVar8,0);
          uVar8 = thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar3,uVar8);
        }
        bVar1 = *(byte *)(*unaff_x22 + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar7);
        }
        FUN_016513e8(plVar6,plVar7);
      }
      goto LAB_01650284;
    }
    plVar4 = (long *)thunk_FUN_00d6225c(plVar4,*unaff_x29);
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x29) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01650458;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x29,0);
LAB_01650458:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    unaff_x23 = (long *)OVRPlugin_OVRP_1_49_0_TypeInfo;
    unaff_x26 = (undefined8 *)System_Buffers_ArrayPool<byte>_TypeInfo;
    if (*(int *)(*(long *)System_Runtime_Remoting_Channels_IChannelSender_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01651b58(unaff_x25);
LAB_0164fe88:
    do {
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0164fed4;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724();
LAB_0164fed4:
      uVar2 = (*(code *)*puVar5)();
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_00d6225c();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar2 == 0) goto LAB_016506f8;
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto System_DateTime__ToString;
      }
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0164ff34;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724();
LAB_0164ff34:
      unaff_x25 = (long *)(*(code *)*puVar5)();
      if (unaff_x25 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x23 + 300);
        if ((*(byte *)(*unaff_x25 + 300) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(unaff_x25);
        }
      }
      if ((unaff_x20 & 1) == 0) break;
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar2 = FUN_015fe7e8(unaff_x25[5],*unaff_x26,0);
    } while ((uVar2 & 1) != 0);
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *unaff_x24;
    }
    if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x19) != '\0') break;
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  } while( true );
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  goto code_r0x0164ffb4;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar10 = piVar10 + 4;
    if (uVar2 == 0) break;
System_DateTime__ToString:
    if (*(long *)(piVar10 + -2) == *unaff_x29) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_01650714;
    }
  }
LAB_016506f8:
  puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x29,0);
LAB_01650714:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


