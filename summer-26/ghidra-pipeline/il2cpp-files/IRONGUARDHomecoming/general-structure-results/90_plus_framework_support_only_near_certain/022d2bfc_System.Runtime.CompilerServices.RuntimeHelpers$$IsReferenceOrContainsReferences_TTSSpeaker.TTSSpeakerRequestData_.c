/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<TTSSpeaker.TTSSpeakerRequestData>
ENTRY_POINT: 022d2bfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 166
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d3258) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<TTSSpeaker_TTSSpeakerRequestData>
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4 [16],
               undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long in_x6;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x25;
  long *plVar11;
  int iVar12;
  ulong unaff_x28;
  ulong extraout_d0;
  ulong uVar13;
  ulong extraout_d0_00;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                      );
    thunk_FUN_01efb3a4(Method_System_Char_IsHighSurrogate__);
    thunk_FUN_01efb3a4(Method_System_Char_IsLower__);
    thunk_FUN_01efb3a4(Method_System_Char_IsNumber__);
    thunk_FUN_01efb3a4(Method_System_Char_IsSurrogate__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Char_CompareTo__);
    thunk_FUN_01efb3a4(Method_System_Char_ConvertToUtf32__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_BuddyAllocator_AllocateRange<ulong>__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__
                      );
    thunk_FUN_01efb3a4(Method_System_Char_IsUpper__);
    thunk_FUN_01efb3a4(Method_System_Char_IsWhiteSpace__);
    thunk_FUN_01efb3a4(Method_System_Char_Parse__);
    thunk_FUN_01efb3a4(Method_System_Char_System_IConvertible_ToBoolean__);
    thunk_FUN_01efb3a4(Method_System_Char_GetUnicodeCategory__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    if (*(long *)(in_x6 + 0x38) == 0) {
      FUN_01ecafa0(in_x6);
    }
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  if (*(long *)(param_7 + 0x50) != 0) {
    FUN_041c73ec(param_7,*(long *)(param_7 + 0x50),0);
  }
  plVar11 = (long *)Method_System_Char_IsUpper__;
  if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_041e2310(param_8,0);
  puVar2 = Method_System_Char_System_IConvertible_ToBoolean__;
  lVar8 = *(long *)Method_System_Char_System_IConvertible_ToBoolean__;
  uVar13 = extraout_d0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    uVar13 = thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *(long *)puVar2;
  }
  if ((**(long **)(lVar8 + 0xb8) == 0) ||
     (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x28), lVar8 == 0)) goto LAB_022d3254;
  plVar5 = (long *)FUN_041f1618(lVar8,param_8,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__)) {
      plVar4 = (long *)FUN_04224ea4(plVar5,0);
    }
  }
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  puVar2 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  in_stack_00000048 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  in_stack_00000040 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  if (plVar4 == (long *)0x0) {
LAB_022d2e2c:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_0424f664(0);
    puVar3 = Method_System_Char_ConvertToUtf32__;
    uVar13 = extraout_d0_00;
    if (lVar8 == 0) goto LAB_022d3254;
    iVar12 = *(int *)(lVar8 + 0x18) + -1;
    if (iVar12 < 0) {
      plVar4 = (long *)0x0;
      plVar11 = (long *)Method_System_Char_IsUpper__;
    }
    else {
      unaff_x28 = unaff_x28 & 0xffffffff;
      do {
        plVar4 = (long *)FUN_030f28e4(lVar8,iVar12,*(undefined8 *)puVar3);
        if (plVar4 != (long *)0x0) {
          lVar9 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar9 + 0x130);
          if ((((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == lVar9)) &&
              (((unaff_x25 & 0xff) == 0 || ((int)plVar4[0x3b] == (int)(unaff_x25 >> 0x20))))) &&
             (uVar13 = FUN_041f75ac(param_2,param_3,param_5,param_6,plVar4,&stack0x00000048,
                                    &stack0x00000040,0,0), (uVar13 & 1) != 0)) {
            lVar9 = (**(code **)(*plVar4 + 0x418))
                              (in_stack_00000048 & 0xffffffff,in_stack_00000048._4_4_,plVar4,
                               *(undefined8 *)(*plVar4 + 0x420));
            plVar11 = (long *)Method_System_Char_IsUpper__;
            if (lVar9 != 0) goto LAB_022d2f74;
          }
        }
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
      plVar4 = (long *)0x0;
      plVar11 = (long *)Method_System_Char_IsUpper__;
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                     + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__))
    goto LAB_022d2e2c;
    FUN_041f75ac(param_2,param_3,param_5,param_6,plVar4,&stack0x00000048,&stack0x00000040,0,0);
  }
LAB_022d2f74:
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_041e202c(param_8,0,0);
  if (plVar5 == (long *)0x0) {
LAB_022d2fb0:
    plVar5 = (long *)0x0;
  }
  else {
    lVar8 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_022d2fb0;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
      plVar5 = (long *)0x0;
    }
  }
  if (plVar5 == plVar4) {
    if (plVar4 == (long *)0x0) goto LAB_022d3120;
  }
  else {
    if (plVar5 != (long *)0x0) {
      FUN_041f7574(param_2,param_3,plVar5,0);
      FUN_041f76d0(plVar5,param_8,0);
    }
    if (plVar4 == (long *)0x0) {
LAB_022d3120:
      if ((unaff_x28 & 1) == 0) {
        return;
      }
      FUN_041c5278(param_7,0,0);
      return;
    }
    FUN_041f7788(in_stack_00000048 & 0xffffffff,in_stack_00000048._4_4_,plVar4,param_8,0);
  }
  uVar13 = in_stack_00000048 & 0xffffffff;
  if (unaff_x21 != 0) {
    in_stack_00000050 = *unaff_x22;
    in_stack_00000058 = unaff_x22[1];
    in_stack_00000060 = unaff_x22[2];
    in_stack_00000068 = unaff_x22[3];
    in_stack_00000070 = unaff_x22[4];
    plVar5 = (long *)(**(code **)(unaff_x21 + 0x18))
                               (uVar13,in_stack_00000048._4_4_,0,in_stack_00000040 & 0xffffffff,
                                in_stack_00000040._4_4_,0,*(undefined8 *)(unaff_x21 + 0x40),
                                &stack0x00000050,*(undefined8 *)(unaff_x21 + 0x28));
    plVar6 = (long *)(**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x198))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x1a0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar13 = FUN_041d84e4(plVar5,0);
    if ((uVar13 & 1) != 0) {
      FUN_041c73ec(param_7,plVar4,0);
    }
    lVar8 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar9 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar8 == lVar9) {
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(param_8,plVar4,0);
    }
    else {
      lVar8 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
      if (lVar8 == lVar9) {
        if (*plVar5 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar5);
        }
        if ((int)plVar5[0x16] == 0) {
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041e2260(param_8,0,0);
        }
      }
    }
    lVar8 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_022d31f4;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d31f4:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
    return;
  }
LAB_022d3254:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c(uVar13);
}


