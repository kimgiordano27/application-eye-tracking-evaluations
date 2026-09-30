/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<VisualTreeAsset.SlotUsageEntry>
ENTRY_POINT: 022d3cfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d4204) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<VisualTreeAsset_SlotUsageEntry>
               (void)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  undefined4 unaff_w19;
  int iVar14;
  long *plVar15;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x26;
  long unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  
  plVar5 = (long *)FUN_04224ea4();
  if (DAT_0482ee9c == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0482ee9c = '\x01';
  }
  puVar10 = *(undefined8 **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
  ;
  *(undefined8 *)(unaff_x29 + -0x80) = *puVar10;
  *(undefined8 *)(unaff_x29 + -0x88) = *puVar10;
  puVar3 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  if (plVar5 == (long *)0x0) {
LAB_022d3d7c:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_0424f664(0);
    if (lVar6 == 0) goto LAB_022d4200;
    iVar14 = *(int *)(lVar6 + 0x18) + -1;
    if (iVar14 < 0) {
      plVar5 = (long *)0x0;
      unaff_x23 = (long *)Method_System_Char_IsUpper__;
    }
    else {
      *(long *)(unaff_x29 + -0xb8) = unaff_x26;
      puVar4 = Method_System_Char_ConvertToUtf32__;
      uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
      do {
        plVar5 = (long *)FUN_030f28e4(lVar6,iVar14,*(undefined8 *)puVar4);
        if (plVar5 != (long *)0x0) {
          lVar12 = *(long *)puVar3;
          bVar2 = *(byte *)(lVar12 + 0x130);
          if ((((bVar2 <= *(byte *)(*plVar5 + 0x130)) &&
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) == lVar12)) &&
              (((*(ulong *)(unaff_x29 + -0x90) & 0xff) == 0 ||
               ((int)plVar5[0x3b] == (int)((ulong)uVar11 >> 0x20))))) &&
             ((uVar9 = FUN_041f75ac(plVar5,unaff_x29 + -0x80,unaff_x29 + -0x88,0,0),
              (uVar9 & 1) != 0 &&
              (lVar12 = (**(code **)(*plVar5 + 0x418))
                                  (*(undefined4 *)(unaff_x29 + -0x80),
                                   *(undefined4 *)(unaff_x29 + -0x7c),plVar5,
                                   *(undefined8 *)(*plVar5 + 0x420)), lVar12 != 0))))
          goto LAB_022d3e88;
        }
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
      plVar5 = (long *)0x0;
LAB_022d3e88:
      unaff_x26 = *(long *)(unaff_x29 + -0xb8);
      unaff_x23 = (long *)Method_System_Char_IsUpper__;
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
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar7 == (long *)0x0) {
LAB_022d3f1c:
    plVar7 = (long *)0x0;
  }
  else {
    lVar6 = *(long *)puVar3;
    bVar2 = *(byte *)(lVar6 + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar2) goto LAB_022d3f1c;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar6) {
      plVar7 = (long *)0x0;
    }
  }
  if (plVar7 == plVar5) {
    if (plVar5 == (long *)0x0) goto LAB_022d40b8;
  }
  else {
    if (plVar7 != (long *)0x0) {
      FUN_041f7574(plVar7,0);
      FUN_041f76d0(plVar7,unaff_w19,0);
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
  lVar6 = *(long *)(unaff_x26 + 0x38);
  puVar10 = *(undefined8 **)(unaff_x29 + -0x98);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar16 = *(undefined8 *)(unaff_x29 + -0x80);
  if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
    unaff_x28 = (void *)(unaff_x29 + -0x78);
  }
  memcpy(puVar10,unaff_x28,*(size_t *)(unaff_x29 + -0xa0));
  if (unaff_x27 == 0) {
LAB_022d4200:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar1 = *(undefined8 **)(lVar6 + 0x10);
  uVar8 = *puVar1;
  if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
    puVar10 = (undefined8 *)*puVar10;
  }
  *(undefined8 *)(unaff_x29 + -0x40) = uVar16;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar11;
  *(undefined4 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x40;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
  *(undefined8 **)(unaff_x29 + -0x60) = puVar10;
  (*(code *)puVar1[2])(uVar8,puVar1,unaff_x27,unaff_x29 + -0x70,unaff_x29 + -0x58);
  plVar15 = *(long **)(unaff_x29 + -0x58);
  plVar7 = (long *)(**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar7 + 0x198))(plVar7,plVar15,*(undefined8 *)(*plVar7 + 0x1a0));
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = FUN_041d84e4(plVar15,0);
  if ((uVar9 & 1) != 0) {
    FUN_041c73ec(*(undefined8 *)(unaff_x29 + -0xa8),plVar5,0);
  }
  lVar6 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar12 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar6 == lVar12) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19,plVar5,0);
  }
  else {
    lVar6 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar12 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar6 == lVar12) {
      if (*plVar15 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar15);
      }
      if ((int)plVar15[0x16] == 0) {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar6 = *plVar15;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_022d4190;
      }
      uVar9 = uVar9 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_022d4190:
  (*(code *)*puVar10)(plVar15,puVar10[1]);
LAB_022d41a0:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


