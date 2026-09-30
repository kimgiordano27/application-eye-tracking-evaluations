/*
FUNCTION_NAME: FUN_022d3ad8
ENTRY_POINT: 022d3ad8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x022d4204) */

void FUN_022d3ad8(undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],undefined8 param_4,
                 undefined8 param_5,long param_6,undefined4 param_7,ulong param_8,long param_9,
                 undefined8 ****param_10,uint param_11,long param_12)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  undefined8 *puVar14;
  long *plVar15;
  long alStack_120 [2];
  uint local_10c;
  long local_108;
  ulong local_100;
  undefined8 *local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 ***local_d8;
  ulong *local_d0;
  ulong *puStack_c8;
  undefined8 *local_c0;
  long *local_b8;
  ulong local_b0;
  undefined4 local_a8;
  ulong local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)(param_12 + 0x38);
  local_10c = param_11;
  local_f0 = param_8;
  local_d8 = param_10;
  if (lVar10 == 0) {
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
    lVar10 = *(long *)(param_12 + 0x38);
    if (lVar10 == 0) {
      FUN_01ecafa0(param_12);
      lVar10 = *(long *)(param_12 + 0x38);
    }
  }
  local_100 = (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0xfc);
  local_f8 = (undefined8 *)((long)alStack_120 - (local_100 + 0xf & 0x1fffffff0));
  local_e8 = 0;
  local_e0 = 0;
  if (*(long *)(param_6 + 0x50) != 0) {
    FUN_041c73ec(param_6,*(long *)(param_6 + 0x50),0);
  }
  plVar15 = (long *)Method_System_Char_IsUpper__;
  local_108 = param_6;
  if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_041e2310(param_7,0);
  puVar4 = Method_System_Char_System_IConvertible_ToBoolean__;
  lVar10 = *(long *)Method_System_Char_System_IConvertible_ToBoolean__;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar10);
    lVar10 = *(long *)puVar4;
  }
  if ((**(long **)(lVar10 + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(lVar10 + 0xb8) + 0x28), lVar10 == 0)) goto LAB_022d4200;
  plVar7 = (long *)FUN_041f1618(lVar10,param_7,0);
  if (plVar7 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                     + 0x130);
    if ((bVar2 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__)) {
      plVar6 = (long *)FUN_04224ea4(plVar7,0);
    }
  }
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  puVar4 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  local_e0 = **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  local_e8 = **(ulong **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  if (plVar6 == (long *)0x0) {
LAB_022d3d7c:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar10 = FUN_0424f664(0);
    uVar9 = local_f0;
    puVar5 = Method_System_Char_ConvertToUtf32__;
    if (lVar10 == 0) goto LAB_022d4200;
    iVar13 = *(int *)(lVar10 + 0x18) + -1;
    lVar11 = param_12;
    if (iVar13 < 0) {
      plVar6 = (long *)0x0;
      plVar15 = (long *)Method_System_Char_IsUpper__;
    }
    else {
      do {
        alStack_120[1] = lVar11;
        plVar6 = (long *)FUN_030f28e4(lVar10,iVar13,*(undefined8 *)puVar5);
        if (plVar6 != (long *)0x0) {
          lVar11 = *(long *)puVar4;
          bVar2 = *(byte *)(lVar11 + 0x130);
          if ((((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == lVar11)) &&
              (((local_f0 & 0xff) == 0 || ((int)plVar6[0x3b] == (int)(uVar9 >> 0x20))))) &&
             (uVar8 = FUN_041f75ac(param_1,param_2,param_4,param_5,plVar6,&local_e0,&local_e8,0,0),
             (uVar8 & 1) != 0)) {
            lVar11 = (**(code **)(*plVar6 + 0x418))
                               (local_e0 & 0xffffffff,local_e0._4_4_,plVar6,
                                *(undefined8 *)(*plVar6 + 0x420));
            plVar15 = (long *)Method_System_Char_IsUpper__;
            param_12 = alStack_120[1];
            if (lVar11 != 0) goto LAB_022d3ee0;
          }
        }
        iVar13 = iVar13 + -1;
        lVar11 = alStack_120[1];
      } while (-1 < iVar13);
      plVar6 = (long *)0x0;
      plVar15 = (long *)Method_System_Char_IsUpper__;
      param_12 = alStack_120[1];
    }
  }
  else {
    bVar2 = *(byte *)(*(long *)
                       Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                     + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__))
    goto LAB_022d3d7c;
    FUN_041f75ac(param_1,param_2,param_4,param_5,plVar6,&local_e0,&local_e8,0,0);
  }
LAB_022d3ee0:
  if (*(int *)(*plVar15 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_041e202c(param_7,0,0);
  if (plVar7 == (long *)0x0) {
LAB_022d3f1c:
    plVar7 = (long *)0x0;
  }
  else {
    lVar10 = *(long *)puVar4;
    bVar2 = *(byte *)(lVar10 + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar2) goto LAB_022d3f1c;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar10) {
      plVar7 = (long *)0x0;
    }
  }
  if (plVar7 == plVar6) {
    if (plVar6 == (long *)0x0) goto LAB_022d40b8;
  }
  else {
    if (plVar7 != (long *)0x0) {
      FUN_041f7574(param_1,param_2,plVar7,0);
      FUN_041f76d0(plVar7,param_7,0);
    }
    if (plVar6 == (long *)0x0) {
LAB_022d40b8:
      if ((local_10c & 1) != 0) {
        FUN_041c5278(local_108,0,0);
      }
      goto LAB_022d41a0;
    }
    FUN_041f7788(local_e0 & 0xffffffff,local_e0._4_4_,plVar6,param_7,0);
  }
  uVar8 = local_e0;
  uVar9 = local_e8;
  puVar14 = local_f8;
  lVar10 = *(long *)(param_12 + 0x38);
  if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
    param_10 = &local_d8;
  }
  memcpy(local_f8,param_10,local_100);
  if (param_9 == 0) {
LAB_022d4200:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar1 = *(undefined8 **)(lVar10 + 0x10);
  if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
    puVar14 = (undefined8 *)*puVar14;
  }
  local_d0 = &local_a0;
  puStack_c8 = &local_b0;
  local_a0 = uVar8;
  local_98 = 0;
  local_b0 = uVar9;
  local_a8 = 0;
  local_c0 = puVar14;
  (*(code *)puVar1[2])(*puVar1,puVar1,param_9,&local_d0,&local_b8);
  plVar7 = (long *)(**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar7 + 0x198))(plVar7,local_b8,*(undefined8 *)(*plVar7 + 0x1a0));
  if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = FUN_041d84e4(local_b8,0);
  if ((uVar9 & 1) != 0) {
    FUN_041c73ec(local_108,plVar6,0);
  }
  lVar10 = (**(code **)(*local_b8 + 0x188))(local_b8,*(undefined8 *)(*local_b8 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar11 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar10 == lVar11) {
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(param_7,plVar6,0);
  }
  else {
    lVar10 = (**(code **)(*local_b8 + 0x188))(local_b8,*(undefined8 *)(*local_b8 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar10 == lVar11) {
      if (*local_b8 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(local_b8);
      }
      if ((int)local_b8[0x16] == 0) {
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(param_7,0,0);
      }
    }
  }
  lVar10 = *local_b8;
  uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar9 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar14 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_022d4190;
      }
      uVar9 = uVar9 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar9 != 0);
  }
  puVar14 = (undefined8 *)
            FUN_01ecb238(local_b8,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_022d4190:
  (*(code *)*puVar14)(local_b8,puVar14[1]);
LAB_022d41a0:
  if (*(long *)(lVar3 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


