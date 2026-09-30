/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<VisualTreeAsset.SlotDefinition>
ENTRY_POINT: 022d3bfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d4204) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<VisualTreeAsset_SlotDefinition>
               (long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 unaff_w19;
  long unaff_x20;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long unaff_x24;
  long unaff_x26;
  long unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  undefined8 uVar17;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x7a0));
  lVar8 = *(long *)(unaff_x26 + 0x38);
  if (lVar8 == 0) {
    FUN_01ecafa0();
    lVar8 = *(long *)(unaff_x26 + 0x38);
  }
  uVar12 = (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0xfc);
  *(ulong *)(unaff_x29 + -0xa0) = uVar12;
  *(ulong *)(unaff_x29 + -0x98) = (long)&stack0x00000000 - (uVar12 + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    FUN_041c73ec();
  }
  *(long *)(unaff_x29 + -0xa8) = unaff_x20;
  plVar16 = (long *)Method_System_Char_IsUpper__;
  if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_041e2310(unaff_w19,0);
  puVar3 = Method_System_Char_System_IConvertible_ToBoolean__;
  lVar8 = *(long *)Method_System_Char_System_IConvertible_ToBoolean__;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *(long *)puVar3;
  }
  if ((**(long **)(lVar8 + 0xb8) == 0) ||
     (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x28), lVar8 == 0)) goto LAB_022d4200;
  plVar6 = (long *)FUN_041f1618(lVar8,unaff_w19,0);
  if (plVar6 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                     + 0x130);
    if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__)) {
      plVar5 = (long *)FUN_04224ea4(plVar6,0);
    }
  }
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  puVar9 = *(undefined8 **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  *(undefined8 *)(unaff_x29 + -0x80) = *puVar9;
  *(undefined8 *)(unaff_x29 + -0x88) = *puVar9;
  puVar3 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  if (plVar5 == (long *)0x0) {
LAB_022d3d7c:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_0424f664(0);
    if (lVar8 == 0) goto LAB_022d4200;
    iVar14 = *(int *)(lVar8 + 0x18) + -1;
    if (iVar14 < 0) {
      plVar5 = (long *)0x0;
      plVar16 = (long *)Method_System_Char_IsUpper__;
    }
    else {
      *(long *)(unaff_x29 + -0xb8) = unaff_x26;
      puVar4 = Method_System_Char_ConvertToUtf32__;
      uVar10 = *(undefined8 *)(unaff_x29 + -0x90);
      do {
        plVar5 = (long *)FUN_030f28e4(lVar8,iVar14,*(undefined8 *)puVar4);
        if (plVar5 != (long *)0x0) {
          lVar11 = *(long *)puVar3;
          bVar2 = *(byte *)(lVar11 + 0x130);
          if ((((bVar2 <= *(byte *)(*plVar5 + 0x130)) &&
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) == lVar11)) &&
              (((*(ulong *)(unaff_x29 + -0x90) & 0xff) == 0 ||
               ((int)plVar5[0x3b] == (int)((ulong)uVar10 >> 0x20))))) &&
             ((uVar12 = FUN_041f75ac(plVar5,unaff_x29 + -0x80,unaff_x29 + -0x88,0,0),
              (uVar12 & 1) != 0 &&
              (lVar11 = (**(code **)(*plVar5 + 0x418))
                                  (*(undefined4 *)(unaff_x29 + -0x80),
                                   *(undefined4 *)(unaff_x29 + -0x7c),plVar5,
                                   *(undefined8 *)(*plVar5 + 0x420)), lVar11 != 0))))
          goto LAB_022d3e88;
        }
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
      plVar5 = (long *)0x0;
LAB_022d3e88:
      unaff_x26 = *(long *)(unaff_x29 + -0xb8);
      plVar16 = (long *)Method_System_Char_IsUpper__;
    }
  }
  else {
    bVar2 = *(byte *)(*(long *)
                       Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                     + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__))
    goto LAB_022d3d7c;
    FUN_041f75ac(plVar5,unaff_x29 + -0x80,unaff_x29 + -0x88,0,0);
  }
  if (*(int *)(*plVar16 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar6 == (long *)0x0) {
LAB_022d3f1c:
    plVar6 = (long *)0x0;
  }
  else {
    lVar8 = *(long *)puVar3;
    bVar2 = *(byte *)(lVar8 + 0x130);
    if (*(byte *)(*plVar6 + 0x130) < bVar2) goto LAB_022d3f1c;
    if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar8) {
      plVar6 = (long *)0x0;
    }
  }
  if (plVar6 == plVar5) {
    if (plVar5 == (long *)0x0) goto LAB_022d40b8;
  }
  else {
    if (plVar6 != (long *)0x0) {
      FUN_041f7574(plVar6,0);
      FUN_041f76d0(plVar6,unaff_w19,0);
    }
    if (plVar5 == (long *)0x0) {
LAB_022d40b8:
      if ((*(uint *)(unaff_x29 + -0xac) & 1) != 0) {
        FUN_041c5278(*(undefined8 *)(unaff_x29 + -0xa8),0,0);
      }
      goto LAB_022d41a0;
    }
    FUN_041f7788(*(undefined4 *)(unaff_x29 + -0x80),*(undefined4 *)(unaff_x29 + -0x7c),plVar5,
                 unaff_w19,0);
  }
  lVar8 = *(long *)(unaff_x26 + 0x38);
  puVar9 = *(undefined8 **)(unaff_x29 + -0x98);
  uVar10 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar17 = *(undefined8 *)(unaff_x29 + -0x80);
  if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
    unaff_x28 = (void *)(unaff_x29 + -0x78);
  }
  memcpy(puVar9,unaff_x28,*(size_t *)(unaff_x29 + -0xa0));
  if (unaff_x27 == 0) {
LAB_022d4200:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar1 = *(undefined8 **)(lVar8 + 0x10);
  uVar7 = *puVar1;
  if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  *(undefined8 *)(unaff_x29 + -0x40) = uVar17;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar10;
  *(undefined4 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x40;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
  *(undefined8 **)(unaff_x29 + -0x60) = puVar9;
  (*(code *)puVar1[2])(uVar7,puVar1,unaff_x27,unaff_x29 + -0x70,unaff_x29 + -0x58);
  plVar15 = *(long **)(unaff_x29 + -0x58);
  plVar6 = (long *)(**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar6 + 0x198))(plVar6,plVar15,*(undefined8 *)(*plVar6 + 0x1a0));
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = FUN_041d84e4(plVar15,0);
  if ((uVar12 & 1) != 0) {
    FUN_041c73ec(*(undefined8 *)(unaff_x29 + -0xa8),plVar5,0);
  }
  lVar8 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar11 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar8 == lVar11) {
    if (*(int *)(*plVar16 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19,plVar5,0);
  }
  else {
    lVar8 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar8 == lVar11) {
      if (*plVar15 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar15);
      }
      if ((int)plVar15[0x16] == 0) {
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar8 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_022d4190;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar15,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d4190:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
LAB_022d41a0:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


