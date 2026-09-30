/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<RegexCharClass.SingleRange>
ENTRY_POINT: 022d1dfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d2378) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<RegexCharClass_SingleRange>
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x25;
  ulong unaff_x26;
  int iVar13;
  undefined8 unaff_x29;
  ulong in_stack_00000008;
  undefined4 in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x940));
  thunk_FUN_01efb3a4(Method_System_Char_System_IConvertible_ToBoolean__);
  thunk_FUN_01efb3a4(Method_System_Char_GetUnicodeCategory__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                    );
  if (*(long *)(unaff_x25 + 0x38) == 0) {
    FUN_01ecafa0();
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    FUN_041c73ec();
  }
  puVar4 = Method_System_Char_IsUpper__;
  if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_041e2310(unaff_w19,0);
  puVar2 = Method_System_Char_System_IConvertible_ToBoolean__;
  lVar10 = *(long *)Method_System_Char_System_IConvertible_ToBoolean__;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar10);
    lVar10 = *(long *)puVar2;
  }
  if ((**(long **)(lVar10 + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(lVar10 + 0xb8) + 0x28), lVar10 == 0)) goto LAB_022d2374;
  plVar6 = (long *)FUN_041f1618(lVar10,unaff_w19,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__)) {
      plVar5 = (long *)FUN_04224ea4(plVar6,0);
    }
  }
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  puVar2 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  in_stack_00000028 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  in_stack_00000020 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  if (plVar5 == (long *)0x0) {
LAB_022d1f78:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar10 = FUN_0424f664(0);
    puVar3 = Method_System_Char_ConvertToUtf32__;
    if (lVar10 == 0) goto LAB_022d2374;
    iVar13 = *(int *)(lVar10 + 0x18) + -1;
    if (iVar13 < 0) {
      plVar5 = (long *)0x0;
    }
    else {
      do {
        plVar5 = (long *)FUN_030f28e4(lVar10,iVar13,*(undefined8 *)puVar3);
        if (plVar5 != (long *)0x0) {
          lVar11 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar11 + 0x130);
          if ((((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == lVar11)) &&
              (((unaff_x26 & 0xff) == 0 || ((int)plVar5[0x3b] == (int)(unaff_x26 >> 0x20))))) &&
             (uVar8 = FUN_041f75ac(plVar5,&stack0x00000028,&stack0x00000020,0,0), (uVar8 & 1) != 0))
          {
            lVar11 = (**(code **)(*plVar5 + 0x418))
                               (in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,plVar5,
                                *(undefined8 *)(*plVar5 + 0x420));
            if (lVar11 != 0) goto LAB_022d20a8;
          }
        }
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
      plVar5 = (long *)0x0;
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                     + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__))
    goto LAB_022d1f78;
    FUN_041f75ac(plVar5,&stack0x00000028,&stack0x00000020,0,0);
  }
LAB_022d20a8:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar6 == (long *)0x0) {
LAB_022d20e4:
    plVar6 = (long *)0x0;
  }
  else {
    lVar10 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar10 + 0x130);
    if (*(byte *)(*plVar6 + 0x130) < bVar1) goto LAB_022d20e4;
    if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
      plVar6 = (long *)0x0;
    }
  }
  if (plVar6 == plVar5) {
    if (plVar5 == (long *)0x0) goto LAB_022d223c;
  }
  else {
    if (plVar6 != (long *)0x0) {
      FUN_041f7574(plVar6,0);
      FUN_041f76d0(plVar6,unaff_w19,0);
    }
    if (plVar5 == (long *)0x0) {
LAB_022d223c:
      if ((in_stack_00000008 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(unaff_x20,0,0);
      return;
    }
    FUN_041f7788(in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,plVar5,unaff_w19,0);
  }
  if (unaff_x23 != 0) {
    plVar6 = (long *)(**(code **)(unaff_x23 + 0x18))
                               (in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,0,
                                in_stack_00000020 & 0xffffffff,in_stack_00000020._4_4_,0,
                                *(undefined8 *)(unaff_x23 + 0x40),unaff_x29,in_stack_00000018,
                                *(undefined8 *)(unaff_x23 + 0x28));
    plVar7 = (long *)(**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar7 + 0x198))(plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x1a0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = FUN_041d84e4(plVar6,0);
    if ((uVar8 & 1) != 0) {
      FUN_041c73ec(unaff_x20,plVar5,0);
    }
    lVar10 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar10 == lVar11) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(unaff_w19,plVar5,0);
    }
    else {
      lVar10 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
      if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar11 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
      if (lVar10 == lVar11) {
        if (*plVar6 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar6);
        }
        if ((int)plVar6[0x16] == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041e2260(unaff_w19,0,0);
        }
      }
    }
    lVar10 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_022d2314;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d2314:
    (*(code *)*puVar9)(plVar6,puVar9[1]);
    return;
  }
LAB_022d2374:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


