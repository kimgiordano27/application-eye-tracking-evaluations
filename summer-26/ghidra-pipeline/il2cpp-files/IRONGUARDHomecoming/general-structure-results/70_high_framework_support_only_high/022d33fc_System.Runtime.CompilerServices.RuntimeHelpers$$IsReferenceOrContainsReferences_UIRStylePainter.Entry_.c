/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<UIRStylePainter.Entry>
ENTRY_POINT: 022d33fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d39e8) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<UIRStylePainter_Entry>
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x24;
  ulong unaff_x25;
  int iVar17;
  void *unaff_x28;
  ulong uVar18;
  ulong in_stack_00000010;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_BuddyAllocator_AllocateRange<ulong>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__);
  thunk_FUN_01efb3a4(Method_System_Char_IsUpper__);
  thunk_FUN_01efb3a4(Method_System_Char_IsWhiteSpace__);
  thunk_FUN_01efb3a4(Method_System_Char_Parse__);
  thunk_FUN_01efb3a4(Method_System_Char_System_IConvertible_ToBoolean__);
  thunk_FUN_01efb3a4(Method_System_Char_GetUnicodeCategory__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                    );
  if (*(long *)(unaff_x24 + 0x38) == 0) {
    FUN_01ecafa0();
  }
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    FUN_041c73ec();
  }
  puVar4 = Method_System_Char_IsUpper__;
  if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_041e2310(unaff_w19,0);
  puVar2 = Method_System_Char_System_IConvertible_ToBoolean__;
  lVar12 = *(long *)Method_System_Char_System_IConvertible_ToBoolean__;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar12);
    lVar12 = *(long *)puVar2;
  }
  if ((**(long **)(lVar12 + 0xb8) == 0) ||
     (lVar12 = *(long *)(**(long **)(lVar12 + 0xb8) + 0x28), lVar12 == 0)) goto LAB_022d39e4;
  plVar8 = (long *)FUN_041f1618(lVar12,unaff_w19,0);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__)) {
      plVar7 = (long *)FUN_04224ea4(plVar8,0);
    }
  }
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  puVar2 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  in_stack_00000070 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  in_stack_00000068 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  if (plVar7 == (long *)0x0) {
LAB_022d35b0:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar12 = FUN_0424f664(0);
    puVar3 = Method_System_Char_ConvertToUtf32__;
    if (lVar12 == 0) goto LAB_022d39e4;
    iVar17 = *(int *)(lVar12 + 0x18) + -1;
    if (iVar17 < 0) {
      plVar7 = (long *)0x0;
    }
    else {
      do {
        plVar7 = (long *)FUN_030f28e4(lVar12,iVar17,*(undefined8 *)puVar3);
        if (plVar7 != (long *)0x0) {
          lVar13 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == lVar13)) &&
              (((unaff_x25 & 0xff) == 0 || ((int)plVar7[0x3b] == (int)(unaff_x25 >> 0x20))))) &&
             (uVar10 = FUN_041f75ac(plVar7,&stack0x00000070,&stack0x00000068,0,0), (uVar10 & 1) != 0
             )) {
            lVar13 = (**(code **)(*plVar7 + 0x418))
                               (in_stack_00000070 & 0xffffffff,in_stack_00000070._4_4_,plVar7,
                                *(undefined8 *)(*plVar7 + 0x420));
            if (lVar13 != 0) goto LAB_022d36ec;
          }
        }
        iVar17 = iVar17 + -1;
      } while (-1 < iVar17);
      plVar7 = (long *)0x0;
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                     + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__))
    goto LAB_022d35b0;
    FUN_041f75ac(plVar7,&stack0x00000070,&stack0x00000068,0,0);
  }
LAB_022d36ec:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar8 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar8 == (long *)0x0) {
LAB_022d3728:
    plVar8 = (long *)0x0;
  }
  else {
    lVar12 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar12 + 0x130);
    if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_022d3728;
    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar12) {
      plVar8 = (long *)0x0;
    }
  }
  if (plVar8 == plVar7) {
    if (plVar7 == (long *)0x0) goto LAB_022d38ac;
  }
  else {
    if (plVar8 != (long *)0x0) {
      FUN_041f7574(plVar8,0);
      FUN_041f76d0(plVar8,unaff_w19,0);
    }
    if (plVar7 == (long *)0x0) {
LAB_022d38ac:
      if ((in_stack_00000010 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(unaff_x20,0,0);
      return;
    }
    FUN_041f7788(in_stack_00000070 & 0xffffffff,in_stack_00000070._4_4_,plVar7,unaff_w19,0);
  }
  uVar10 = in_stack_00000070 & 0xffffffff;
  uVar6 = in_stack_00000070._4_4_;
  uVar18 = in_stack_00000068 & 0xffffffff;
  uVar5 = in_stack_00000068._4_4_;
  memcpy(&stack0x00000020,unaff_x28,0x44);
  if (unaff_x21 != 0) {
    pcVar16 = *(code **)(unaff_x21 + 0x18);
    uVar15 = *(undefined8 *)(unaff_x21 + 0x40);
    memcpy(&stack0x00000078,&stack0x00000020,0x44);
    plVar8 = (long *)(*pcVar16)(uVar10,uVar6,0,uVar18,uVar5,0,uVar15,&stack0x00000078,
                                *(undefined8 *)(unaff_x21 + 0x28));
    plVar9 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar9 + 0x198))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 0x1a0));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = FUN_041d84e4(plVar8,0);
    if ((uVar10 & 1) != 0) {
      FUN_041c73ec(unaff_x20,plVar7,0);
    }
    lVar12 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar13 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar12 == lVar13) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(unaff_w19,plVar7,0);
    }
    else {
      lVar12 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar13 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
      if (lVar12 == lVar13) {
        if (*plVar8 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar8);
        }
        if ((int)plVar8[0x16] == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041e2260(unaff_w19,0,0);
        }
      }
    }
    lVar12 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_022d3984;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar8,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_022d3984:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
    return;
  }
LAB_022d39e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


