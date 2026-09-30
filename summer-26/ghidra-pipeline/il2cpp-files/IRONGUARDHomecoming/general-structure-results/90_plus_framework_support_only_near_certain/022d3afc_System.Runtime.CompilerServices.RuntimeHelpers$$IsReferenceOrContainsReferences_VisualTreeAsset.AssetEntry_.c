/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<VisualTreeAsset.AssetEntry>
ENTRY_POINT: 022d3afc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x022d4204) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<VisualTreeAsset_AssetEntry>
               (undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],undefined8 param_4,
               undefined8 param_5,long param_6,undefined4 param_7,undefined8 param_8,long param_9,
               void *param_10,undefined4 param_11,long param_12)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  long unaff_x29;
  undefined8 uVar18;
  undefined1 auStack_a0 [160];
  
  *(undefined4 *)(unaff_x29 + -0xac) = param_11;
  *(undefined8 *)(unaff_x29 + -0x90) = param_8;
  lVar3 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(lVar3 + 0x28);
  *(void **)(unaff_x29 + -0x78) = param_10;
  lVar9 = *(long *)(param_12 + 0x38);
  if (lVar9 == 0) {
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
    lVar9 = *(long *)(param_12 + 0x38);
    if (lVar9 == 0) {
      FUN_01ecafa0(param_12);
      lVar9 = *(long *)(param_12 + 0x38);
    }
  }
  uVar13 = (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0xfc);
  *(ulong *)(unaff_x29 + -0xa0) = uVar13;
  *(undefined1 **)(unaff_x29 + -0x98) = auStack_a0 + -(uVar13 + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  if (*(long *)(param_6 + 0x50) != 0) {
    FUN_041c73ec(param_6,*(long *)(param_6 + 0x50),0);
  }
  *(long *)(unaff_x29 + -0xa8) = param_6;
  plVar17 = (long *)Method_System_Char_IsUpper__;
  if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_041e2310(param_7,0);
  puVar4 = Method_System_Char_System_IConvertible_ToBoolean__;
  lVar9 = *(long *)Method_System_Char_System_IConvertible_ToBoolean__;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  if ((**(long **)(lVar9 + 0xb8) == 0) ||
     (lVar9 = *(long *)(**(long **)(lVar9 + 0xb8) + 0x28), lVar9 == 0)) goto LAB_022d4200;
  plVar7 = (long *)FUN_041f1618(lVar9,param_7,0);
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
  puVar10 = *(undefined8 **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
  ;
  *(undefined8 *)(unaff_x29 + -0x80) = *puVar10;
  *(undefined8 *)(unaff_x29 + -0x88) = *puVar10;
  puVar4 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  if (plVar6 == (long *)0x0) {
LAB_022d3d7c:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar9 = FUN_0424f664(0);
    if (lVar9 == 0) goto LAB_022d4200;
    iVar15 = *(int *)(lVar9 + 0x18) + -1;
    if (iVar15 < 0) {
      plVar6 = (long *)0x0;
      plVar17 = (long *)Method_System_Char_IsUpper__;
    }
    else {
      *(long *)(unaff_x29 + -0xb8) = param_12;
      puVar5 = Method_System_Char_ConvertToUtf32__;
      uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
      do {
        plVar6 = (long *)FUN_030f28e4(lVar9,iVar15,*(undefined8 *)puVar5);
        if (plVar6 != (long *)0x0) {
          lVar12 = *(long *)puVar4;
          bVar2 = *(byte *)(lVar12 + 0x130);
          if ((((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == lVar12)) &&
              (((*(ulong *)(unaff_x29 + -0x90) & 0xff) == 0 ||
               ((int)plVar6[0x3b] == (int)((ulong)uVar11 >> 0x20))))) &&
             ((uVar13 = FUN_041f75ac(param_1,param_2,param_4,param_5,plVar6,unaff_x29 + -0x80,
                                     unaff_x29 + -0x88,0,0), (uVar13 & 1) != 0 &&
              (lVar12 = (**(code **)(*plVar6 + 0x418))
                                  (*(undefined4 *)(unaff_x29 + -0x80),
                                   *(undefined4 *)(unaff_x29 + -0x7c),plVar6,
                                   *(undefined8 *)(*plVar6 + 0x420)), lVar12 != 0))))
          goto LAB_022d3e88;
        }
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
      plVar6 = (long *)0x0;
LAB_022d3e88:
      param_12 = *(long *)(unaff_x29 + -0xb8);
      plVar17 = (long *)Method_System_Char_IsUpper__;
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
    FUN_041f75ac(param_1,param_2,param_4,param_5,plVar6,unaff_x29 + -0x80,unaff_x29 + -0x88,0,0);
  }
  if (*(int *)(*plVar17 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_041e202c(param_7,0,0);
  if (plVar7 == (long *)0x0) {
LAB_022d3f1c:
    plVar7 = (long *)0x0;
  }
  else {
    lVar9 = *(long *)puVar4;
    bVar2 = *(byte *)(lVar9 + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar2) goto LAB_022d3f1c;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
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
      if ((*(uint *)(unaff_x29 + -0xac) & 1) != 0) {
        FUN_041c5278(*(undefined8 *)(unaff_x29 + -0xa8),0,0);
      }
      goto LAB_022d41a0;
    }
    FUN_041f7788(*(undefined4 *)(unaff_x29 + -0x80),*(undefined4 *)(unaff_x29 + -0x7c),plVar6,
                 param_7,0);
  }
  lVar9 = *(long *)(param_12 + 0x38);
  puVar10 = *(undefined8 **)(unaff_x29 + -0x98);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar18 = *(undefined8 *)(unaff_x29 + -0x80);
  if (-1 < *(int *)(*(long *)(lVar9 + 8) + 0x28)) {
    param_10 = (void *)(unaff_x29 + -0x78);
  }
  memcpy(puVar10,param_10,*(size_t *)(unaff_x29 + -0xa0));
  if (param_9 == 0) {
LAB_022d4200:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar1 = *(undefined8 **)(lVar9 + 0x10);
  uVar8 = *puVar1;
  if (-1 < *(int *)(*(long *)(lVar9 + 8) + 0x28)) {
    puVar10 = (undefined8 *)*puVar10;
  }
  *(undefined8 *)(unaff_x29 + -0x40) = uVar18;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar11;
  *(undefined4 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x40;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
  *(undefined8 **)(unaff_x29 + -0x60) = puVar10;
  (*(code *)puVar1[2])(uVar8,puVar1,param_9,unaff_x29 + -0x70,unaff_x29 + -0x58);
  plVar16 = *(long **)(unaff_x29 + -0x58);
  plVar7 = (long *)(**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar7 + 0x198))(plVar7,plVar16,*(undefined8 *)(*plVar7 + 0x1a0));
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar13 = FUN_041d84e4(plVar16,0);
  if ((uVar13 & 1) != 0) {
    FUN_041c73ec(*(undefined8 *)(unaff_x29 + -0xa8),plVar6,0);
  }
  lVar9 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar12 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar9 == lVar12) {
    if (*(int *)(*plVar17 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(param_7,plVar6,0);
  }
  else {
    lVar9 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar12 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar9 == lVar12) {
      if (*plVar16 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar16);
      }
      if ((int)plVar16[0x16] == 0) {
        if (*(int *)(*plVar17 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(param_7,0,0);
      }
    }
  }
  lVar9 = *plVar16;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_022d4190;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar16,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_022d4190:
  (*(code *)*puVar10)(plVar16,puVar10[1]);
LAB_022d41a0:
  if (*(long *)(lVar3 + 0x28) == *(long *)(unaff_x29 + -0x30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


