/*
FUNCTION_NAME: FUN_0164fdb0
ENTRY_POINT: 0164fdb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 202
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01650904) */
/* WARNING: Removing unreachable block (ram,0x0165025c) */
/* WARNING: Removing unreachable block (ram,0x01650864) */
/* WARNING: Removing unreachable block (ram,0x01650470) */
/* WARNING: Removing unreachable block (ram,0x0165086c) */

void FUN_0164fdb0(long *param_1,ulong param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  
  if ((DAT_037782dc & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_49_0_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_Remoting_Channels_IChannelSender_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Meta_WitAi_WitResponseReference_TypeInfo);
    thunk_FUN_00d48444(System_Func<STMVoiceData,_string>_TypeInfo);
    thunk_FUN_00d48444(System_Buffers_ArrayPool<byte>_TypeInfo);
    DAT_037782dc = 1;
  }
  puVar5 = StringLiteral_10310;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar6 = (long *)(**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
  puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Meta_WitAi_WitResponseReference_TypeInfo;
  puVar2 = System_Func<STMVoiceData,_string>_TypeInfo;
  plVar10 = (long *)OVRPlugin_OVRP_1_49_0_TypeInfo;
  puVar11 = (undefined8 *)System_Buffers_ArrayPool<byte>_TypeInfo;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_0164fe88:
  lVar15 = *plVar6;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
        puVar7 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_0164fed4;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar4,0);
LAB_0164fed4:
  uVar16 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar16 & 1) != 0) {
    lVar15 = *plVar6;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_0164ff34;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar4,1);
LAB_0164ff34:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar10 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar8);
      }
    }
    if ((param_2 & 1) != 0) goto code_r0x0164ff78;
    goto LAB_0164ff90;
  }
  plVar10 = (long *)thunk_FUN_00d6225c(plVar6,*(undefined8 *)puVar5);
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar15 = *plVar10;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar16 == 0) goto LAB_016506f8;
  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
  goto System_DateTime__ToString;
code_r0x0164ff78:
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar16 = FUN_015fe7e8(plVar8[5],*puVar11,0);
  if ((uVar16 & 1) == 0) {
LAB_0164ff90:
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar15 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar15 + 0xb8) + 0x19) == '\0') {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    else {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar16 = thunk_FUN_015fe514(plVar8[5],*puVar11,0);
      if ((uVar16 & 1) != 0) goto LAB_0164fe88;
    }
    if (plVar8[2] != 0) {
      lVar15 = *(long *)puVar2;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *(long *)puVar2;
      }
      plVar9 = *(long **)(*(long *)(lVar15 + 0xb8) + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                 (plVar9,plVar8[2],*(undefined8 *)(*plVar9 + 0x310));
      if (plVar9 == (long *)0x0) {
        lVar15 = plVar8[2];
        uVar13 = thunk_FUN_00d48444(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>__ctor__
                                   );
        uVar14 = thunk_FUN_00d48444(
                                   Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                   );
        uVar13 = FUN_01600424(uVar13,lVar15,uVar14,0);
        thunk_FUN_00d48444(
                          Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                          );
        lVar15 = thunk_FUN_00d62348();
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01780598(lVar15,uVar13,0);
        uVar13 = thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo)
        ;
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar15,uVar13);
      }
      bVar1 = *(byte *)(*plVar10 + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
      FUN_01650a3c(plVar8,plVar9);
    }
    plVar10 = (long *)FUN_0165137c(plVar8);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01650070:
    lVar15 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto System_DateTime__ParseExact;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0);
System_DateTime__ParseExact:
    uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar16 & 1) != 0) {
      lVar15 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0165011c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,1);
LAB_0165011c:
      plVar9 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
      if (plVar9[2] != 0) {
        lVar15 = *(long *)puVar2;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar15 = *(long *)puVar2;
        }
        plVar12 = *(long **)(*(long *)(lVar15 + 0xb8) + 0x50);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                    (plVar12,plVar9[2],*(undefined8 *)(*plVar12 + 0x310));
        if (plVar12 == (long *)0x0) {
          lVar15 = plVar9[2];
          uVar13 = thunk_FUN_00d48444(
                                     Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                                     );
          uVar14 = thunk_FUN_00d48444(
                                     Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                     );
          uVar13 = FUN_01600424(uVar13,lVar15,uVar14,0);
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                            );
          lVar15 = thunk_FUN_00d62348();
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01780598(lVar15,uVar13,0);
          uVar13 = thunk_FUN_00d48444(
                                     UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar15,uVar13);
        }
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if ((*(byte *)(*plVar12 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar12);
        }
        FUN_016513e8(plVar9,plVar12);
      }
      goto LAB_01650070;
    }
    plVar10 = (long *)thunk_FUN_00d6225c(plVar10,*(undefined8 *)puVar5);
    if (plVar10 != (long *)0x0) {
      lVar15 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01650244;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar5,0);
LAB_01650244:
      (*(code *)*puVar11)(plVar10,puVar11[1]);
    }
    plVar10 = (long *)FUN_01651aec(plVar8);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01650284:
    lVar15 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_016502d0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0);
LAB_016502d0:
    uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar16 & 1) != 0) {
      lVar15 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01650330;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,1);
LAB_01650330:
      plVar9 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
      if (plVar9[2] != 0) {
        lVar15 = *(long *)puVar2;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar15 = *(long *)puVar2;
        }
        plVar12 = *(long **)(*(long *)(lVar15 + 0xb8) + 0x48);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                    (plVar12,plVar9[2],*(undefined8 *)(*plVar12 + 0x310));
        if (plVar12 == (long *)0x0) {
          lVar15 = plVar9[2];
          uVar13 = thunk_FUN_00d48444(
                                     Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                                     );
          uVar14 = thunk_FUN_00d48444(
                                     Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp__
                                     );
          uVar13 = FUN_01600424(uVar13,lVar15,uVar14,0);
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                            );
          lVar15 = thunk_FUN_00d62348();
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01780598(lVar15,uVar13,0);
          uVar13 = thunk_FUN_00d48444(
                                     UnityEngine_UIElements_EventBase<DetachFromPanelEvent>_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar15,uVar13);
        }
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if ((*(byte *)(*plVar12 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar12);
        }
        FUN_016513e8(plVar9,plVar12);
      }
      goto LAB_01650284;
    }
    plVar10 = (long *)thunk_FUN_00d6225c(plVar10,*(undefined8 *)puVar5);
    if (plVar10 != (long *)0x0) {
      lVar15 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01650458;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar5,0);
LAB_01650458:
      (*(code *)*puVar11)(plVar10,puVar11[1]);
    }
    plVar10 = (long *)OVRPlugin_OVRP_1_49_0_TypeInfo;
    puVar11 = (undefined8 *)System_Buffers_ArrayPool<byte>_TypeInfo;
    if (*(int *)(*(long *)System_Runtime_Remoting_Channels_IChannelSender_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01651b58(plVar8);
  }
  goto LAB_0164fe88;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
System_DateTime__ToString:
    if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01650714;
    }
  }
LAB_016506f8:
  puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar5,0);
LAB_01650714:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


