/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<RenderChain.RenderNodeData>
ENTRY_POINT: 022d1efc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d2378) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<RenderChain_RenderNodeData>
               (long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined4 unaff_w19;
  long *unaff_x22;
  long unaff_x23;
  ulong unaff_x26;
  int iVar11;
  undefined8 unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  puVar2 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  in_stack_00000028 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  in_stack_00000020 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  if (param_1 == (long *)0x0) {
LAB_022d1f78:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar4 = FUN_0424f664(0);
    puVar3 = Method_System_Char_ConvertToUtf32__;
    if (lVar4 == 0) goto LAB_022d2374;
    iVar11 = *(int *)(lVar4 + 0x18) + -1;
    if (iVar11 < 0) {
      param_1 = (long *)0x0;
    }
    else {
      do {
        param_1 = (long *)FUN_030f28e4(lVar4,iVar11,*(undefined8 *)puVar3);
        if (param_1 != (long *)0x0) {
          lVar9 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar9 + 0x130);
          if ((((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
               (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == lVar9)) &&
              (((unaff_x26 & 0xff) == 0 || ((int)param_1[0x3b] == (int)(unaff_x26 >> 0x20))))) &&
             (uVar7 = FUN_041f75ac(param_1,&stack0x00000028,&stack0x00000020,0,0), (uVar7 & 1) != 0)
             ) {
            lVar9 = (**(code **)(*param_1 + 0x418))
                              (in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,param_1,
                               *(undefined8 *)(*param_1 + 0x420));
            if (lVar9 != 0) goto LAB_022d20a8;
          }
        }
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
      param_1 = (long *)0x0;
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                     + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__))
    goto LAB_022d1f78;
    FUN_041f75ac(param_1,&stack0x00000028,&stack0x00000020,0,0);
  }
LAB_022d20a8:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar5 == (long *)0x0) {
LAB_022d20e4:
    plVar5 = (long *)0x0;
  }
  else {
    lVar4 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar4 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_022d20e4;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
      plVar5 = (long *)0x0;
    }
  }
  if (plVar5 == param_1) {
    if (param_1 == (long *)0x0) goto LAB_022d223c;
  }
  else {
    if (plVar5 != (long *)0x0) {
      FUN_041f7574(plVar5,0);
      FUN_041f76d0(plVar5,unaff_w19,0);
    }
    if (param_1 == (long *)0x0) {
LAB_022d223c:
      if ((in_stack_00000008 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000010,0,0);
      return;
    }
    FUN_041f7788(in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,param_1,unaff_w19,0);
  }
  if (unaff_x23 != 0) {
    plVar5 = (long *)(**(code **)(unaff_x23 + 0x18))
                               (in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,0,
                                in_stack_00000020 & 0xffffffff,in_stack_00000020._4_4_,0,
                                *(undefined8 *)(unaff_x23 + 0x40),unaff_x29,in_stack_00000018,
                                *(undefined8 *)(unaff_x23 + 0x28));
    plVar6 = (long *)(**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x198))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x1a0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_041d84e4(plVar5,0);
    if ((uVar7 & 1) != 0) {
      FUN_041c73ec(in_stack_00000010,param_1,0);
    }
    lVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar9 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar4 == lVar9) {
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(unaff_w19,param_1,0);
    }
    else {
      lVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
      if (lVar4 == lVar9) {
        if (*plVar5 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar5);
        }
        if ((int)plVar5[0x16] == 0) {
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041e2260(unaff_w19,0,0);
        }
      }
    }
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_022d2314;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d2314:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    return;
  }
LAB_022d2374:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


