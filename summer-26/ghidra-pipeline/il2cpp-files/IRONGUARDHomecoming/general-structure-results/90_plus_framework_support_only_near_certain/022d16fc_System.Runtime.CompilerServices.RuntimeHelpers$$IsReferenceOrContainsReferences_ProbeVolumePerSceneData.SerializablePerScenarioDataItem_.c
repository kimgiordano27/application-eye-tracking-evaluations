/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<ProbeVolumePerSceneData.SerializablePerScenarioDataItem>
ENTRY_POINT: 022d16fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d1c1c) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined4 unaff_w19;
  long unaff_x22;
  long *plVar12;
  long unaff_x23;
  ulong unaff_x26;
  int iVar13;
  undefined8 unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  
  plVar12 = *(long **)(unaff_x22 + 0x930);
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_041e2310(unaff_w19,0);
  puVar2 = Method_System_Char_System_IConvertible_ToBoolean__;
  lVar9 = *(long *)Method_System_Char_System_IConvertible_ToBoolean__;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar9);
    lVar9 = *(long *)puVar2;
  }
  if ((**(long **)(lVar9 + 0xb8) == 0) ||
     (lVar9 = *(long *)(**(long **)(lVar9 + 0xb8) + 0x28), lVar9 == 0)) goto LAB_022d1c18;
  plVar5 = (long *)FUN_041f1618(lVar9,unaff_w19,0);
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
  in_stack_00000028 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  in_stack_00000020 =
       **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  if (plVar4 == (long *)0x0) {
LAB_022d181c:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar9 = FUN_0424f664(0);
    puVar3 = Method_System_Char_ConvertToUtf32__;
    if (lVar9 == 0) goto LAB_022d1c18;
    iVar13 = *(int *)(lVar9 + 0x18) + -1;
    if (iVar13 < 0) {
      plVar4 = (long *)0x0;
    }
    else {
      do {
        plVar4 = (long *)FUN_030f28e4(lVar9,iVar13,*(undefined8 *)puVar3);
        if (plVar4 != (long *)0x0) {
          lVar10 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar10 + 0x130);
          if ((((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == lVar10)) &&
              (((unaff_x26 & 0xff) == 0 || ((int)plVar4[0x3b] == (int)(unaff_x26 >> 0x20))))) &&
             (uVar7 = FUN_041f75ac(plVar4,&stack0x00000028,&stack0x00000020,0,0), (uVar7 & 1) != 0))
          {
            lVar10 = (**(code **)(*plVar4 + 0x418))
                               (in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,plVar4,
                                *(undefined8 *)(*plVar4 + 0x420));
            if (lVar10 != 0) goto LAB_022d194c;
          }
        }
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
      plVar4 = (long *)0x0;
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                     + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__))
    goto LAB_022d181c;
    FUN_041f75ac(plVar4,&stack0x00000028,&stack0x00000020,0,0);
  }
LAB_022d194c:
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar5 == (long *)0x0) {
LAB_022d1988:
    plVar5 = (long *)0x0;
  }
  else {
    lVar9 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar9 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_022d1988;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
      plVar5 = (long *)0x0;
    }
  }
  if (plVar5 == plVar4) {
    if (plVar4 == (long *)0x0) goto LAB_022d1ae0;
  }
  else {
    if (plVar5 != (long *)0x0) {
      FUN_041f7574(plVar5,0);
      FUN_041f76d0(plVar5,unaff_w19,0);
    }
    if (plVar4 == (long *)0x0) {
LAB_022d1ae0:
      if ((in_stack_00000008 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000010,0,0);
      return;
    }
    FUN_041f7788(in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,plVar4,unaff_w19,0);
  }
  if (unaff_x23 != 0) {
    plVar5 = (long *)(**(code **)(unaff_x23 + 0x18))
                               (in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,0,
                                in_stack_00000020 & 0xffffffff,in_stack_00000020._4_4_,0,
                                *(undefined8 *)(unaff_x23 + 0x40),unaff_x29,in_stack_00000018,
                                *(undefined8 *)(unaff_x23 + 0x28));
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
    uVar7 = FUN_041d84e4(plVar5,0);
    if ((uVar7 & 1) != 0) {
      FUN_041c73ec(in_stack_00000010,plVar4,0);
    }
    lVar9 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar10 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar9 == lVar10) {
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(unaff_w19,plVar4,0);
    }
    else {
      lVar9 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar10 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
      if (lVar9 == lVar10) {
        if (*plVar5 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar5);
        }
        if ((int)plVar5[0x16] == 0) {
          if (*(int *)(*plVar12 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041e2260(unaff_w19,0,0);
        }
      }
    }
    lVar9 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_022d1bb8;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d1bb8:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    return;
  }
LAB_022d1c18:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


