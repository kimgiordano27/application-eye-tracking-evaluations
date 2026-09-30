/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<UIRStylePainter.RepeatRectUV>
ENTRY_POINT: 022d34fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d39e8) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<UIRStylePainter_RepeatRectUV>
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 uVar13;
  code *pcVar14;
  long *unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  int iVar15;
  void *unaff_x28;
  ulong uVar16;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  
  bVar1 = *(byte *)(**(long **)(param_1 + 0x7a0) + 0x130);
  if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == **(long **)(param_1 + 0x7a0)))
  {
    unaff_x24 = (long *)FUN_04224ea4(param_2,0);
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
  if (unaff_x24 == (long *)0x0) {
LAB_022d35b0:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_0424f664(0);
    puVar3 = Method_System_Char_ConvertToUtf32__;
    if (lVar6 == 0) goto LAB_022d39e4;
    iVar15 = *(int *)(lVar6 + 0x18) + -1;
    if (iVar15 < 0) {
      unaff_x24 = (long *)0x0;
    }
    else {
      do {
        unaff_x24 = (long *)FUN_030f28e4(lVar6,iVar15,*(undefined8 *)puVar3);
        if (unaff_x24 != (long *)0x0) {
          lVar11 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar11 + 0x130);
          if ((((bVar1 <= *(byte *)(*unaff_x24 + 0x130)) &&
               (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) == lVar11)) &&
              (((unaff_x25 & 0xff) == 0 || ((int)unaff_x24[0x3b] == (int)(unaff_x25 >> 0x20))))) &&
             (uVar9 = FUN_041f75ac(unaff_x24,&stack0x00000070,&stack0x00000068,0,0),
             (uVar9 & 1) != 0)) {
            lVar11 = (**(code **)(*unaff_x24 + 0x418))
                               (in_stack_00000070 & 0xffffffff,in_stack_00000070._4_4_,unaff_x24,
                                *(undefined8 *)(*unaff_x24 + 0x420));
            if (lVar11 != 0) goto LAB_022d36ec;
          }
        }
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
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
    goto LAB_022d35b0;
    FUN_041f75ac(unaff_x24,&stack0x00000070,&stack0x00000068,0,0);
  }
LAB_022d36ec:
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar7 == (long *)0x0) {
LAB_022d3728:
    plVar7 = (long *)0x0;
  }
  else {
    lVar6 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_022d3728;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
      plVar7 = (long *)0x0;
    }
  }
  if (plVar7 == unaff_x24) {
    if (unaff_x24 == (long *)0x0) goto LAB_022d38ac;
  }
  else {
    if (plVar7 != (long *)0x0) {
      FUN_041f7574(plVar7,0);
      FUN_041f76d0(plVar7,unaff_w19,0);
    }
    if (unaff_x24 == (long *)0x0) {
LAB_022d38ac:
      if ((in_stack_00000010 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000018,0,0);
      return;
    }
    FUN_041f7788(in_stack_00000070 & 0xffffffff,in_stack_00000070._4_4_,unaff_x24,unaff_w19,0);
  }
  uVar9 = in_stack_00000070 & 0xffffffff;
  uVar5 = in_stack_00000070._4_4_;
  uVar16 = in_stack_00000068 & 0xffffffff;
  uVar4 = in_stack_00000068._4_4_;
  memcpy(&stack0x00000020,unaff_x28,0x44);
  if (unaff_x21 != 0) {
    pcVar14 = *(code **)(unaff_x21 + 0x18);
    uVar13 = *(undefined8 *)(unaff_x21 + 0x40);
    memcpy(&stack0x00000078,&stack0x00000020,0x44);
    plVar7 = (long *)(*pcVar14)(uVar9,uVar5,0,uVar16,uVar4,0,uVar13,&stack0x00000078,
                                *(undefined8 *)(unaff_x21 + 0x28));
    plVar8 = (long *)(**(code **)(*unaff_x24 + 0x398))
                               (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x3a0));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar8 + 0x198))(plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x1a0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = FUN_041d84e4(plVar7,0);
    if ((uVar9 & 1) != 0) {
      FUN_041c73ec(in_stack_00000018,unaff_x24,0);
    }
    lVar6 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar6 == lVar11) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(unaff_w19,unaff_x24,0);
    }
    else {
      lVar6 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar11 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
      if (lVar6 == lVar11) {
        if (*plVar7 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar7);
        }
        if ((int)plVar7[0x16] == 0) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041e2260(unaff_w19,0,0);
        }
      }
    }
    lVar6 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_022d3984;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar7,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_022d3984:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
    return;
  }
LAB_022d39e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


