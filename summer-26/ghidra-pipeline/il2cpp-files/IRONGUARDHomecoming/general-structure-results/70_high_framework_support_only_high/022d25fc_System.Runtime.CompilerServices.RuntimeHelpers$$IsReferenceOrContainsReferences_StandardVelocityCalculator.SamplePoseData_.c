/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<StandardVelocityCalculator.SamplePoseData>
ENTRY_POINT: 022d25fc
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


/* WARNING: Removing unreachable block (ram,0x022d2ad4) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<StandardVelocityCalculator_SamplePoseData>
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined4 unaff_w19;
  long unaff_x22;
  long *unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  int iVar11;
  undefined8 unaff_x28;
  ulong in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_022d2ad0;
  plVar4 = (long *)FUN_041f1618(*(long *)(param_1 + 0x28),unaff_w19,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__)) {
      unaff_x24 = (long *)FUN_04224ea4(plVar4,0);
    }
  }
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  puVar2 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  in_stack_00000018 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  in_stack_00000010 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  if (unaff_x24 == (long *)0x0) {
LAB_022d26d0:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = FUN_0424f664(0);
    puVar3 = Method_System_Char_ConvertToUtf32__;
    if (lVar5 == 0) goto LAB_022d2ad0;
    iVar11 = *(int *)(lVar5 + 0x18) + -1;
    if (iVar11 < 0) {
      unaff_x24 = (long *)0x0;
    }
    else {
      do {
        unaff_x24 = (long *)FUN_030f28e4(lVar5,iVar11,*(undefined8 *)puVar3);
        if (unaff_x24 != (long *)0x0) {
          lVar9 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar9 + 0x130);
          if ((((bVar1 <= *(byte *)(*unaff_x24 + 0x130)) &&
               (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) == lVar9)) &&
              (((unaff_x25 & 0xff) == 0 || ((int)unaff_x24[0x3b] == (int)(unaff_x25 >> 0x20))))) &&
             (uVar7 = FUN_041f75ac(unaff_x24,&stack0x00000018,&stack0x00000010,0,0),
             (uVar7 & 1) != 0)) {
            lVar9 = (**(code **)(*unaff_x24 + 0x418))
                              (in_stack_00000018 & 0xffffffff,in_stack_00000018._4_4_,unaff_x24,
                               *(undefined8 *)(*unaff_x24 + 0x420));
            if (lVar9 != 0) goto LAB_022d280c;
          }
        }
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
      unaff_x24 = (long *)0x0;
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                     + 0x130);
    if ((*(byte *)(*unaff_x24 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__))
    goto LAB_022d26d0;
    FUN_041f75ac(unaff_x24,&stack0x00000018,&stack0x00000010,0,0);
  }
LAB_022d280c:
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar4 == (long *)0x0) {
LAB_022d2848:
    plVar4 = (long *)0x0;
  }
  else {
    lVar5 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) goto LAB_022d2848;
    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
      plVar4 = (long *)0x0;
    }
  }
  if (plVar4 == unaff_x24) {
    if (unaff_x24 == (long *)0x0) goto LAB_022d2998;
  }
  else {
    if (plVar4 != (long *)0x0) {
      FUN_041f7574(plVar4,0);
      FUN_041f76d0(plVar4,unaff_w19,0);
    }
    if (unaff_x24 == (long *)0x0) {
LAB_022d2998:
      if ((in_stack_00000000 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000008,0,0);
      return;
    }
    FUN_041f7788(in_stack_00000018 & 0xffffffff,in_stack_00000018._4_4_,unaff_x24,unaff_w19,0);
  }
  if (unaff_x22 != 0) {
    plVar4 = (long *)(**(code **)(unaff_x22 + 0x18))
                               (in_stack_00000018 & 0xffffffff,in_stack_00000018._4_4_,0,
                                in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,0,
                                *(undefined8 *)(unaff_x22 + 0x40),unaff_x28,
                                *(undefined8 *)(unaff_x22 + 0x28));
    plVar6 = (long *)(**(code **)(*unaff_x24 + 0x398))
                               (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x3a0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x198))(plVar6,plVar4,*(undefined8 *)(*plVar6 + 0x1a0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_041d84e4(plVar4,0);
    if ((uVar7 & 1) != 0) {
      FUN_041c73ec(in_stack_00000008,unaff_x24,0);
    }
    lVar5 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar9 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar5 == lVar9) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(unaff_w19,unaff_x24,0);
    }
    else {
      lVar5 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
      if (lVar5 == lVar9) {
        if (*plVar4 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar4);
        }
        if ((int)plVar4[0x16] == 0) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041e2260(unaff_w19,0,0);
        }
      }
    }
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_022d2a70;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d2a70:
    (*(code *)*puVar8)(plVar4,puVar8[1]);
    return;
  }
LAB_022d2ad0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


