/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig$$add_GetCameraHandler
ENTRY_POINT: 0145057c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig__add_GetCameraHandler(ulong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ulong *puVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined1 in_CY;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar20;
  undefined8 unaff_x29;
  ulong uVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  double in_stack_000000e8;
  long in_stack_00000190;
  undefined8 in_stack_00000198;
  int in_stack_000001a8;
  
  while (lVar12 = in_stack_00000190, !(bool)in_CY) {
    *(long *)(unaff_x27 + unaff_x19 * 8) = unaff_x26;
    puVar6 = GoogleSheetsToUnity_GSTU_Cell_TypeInfo;
    unaff_x19 = unaff_x19 + 1;
    if ((long)(int)param_1 <= (long)unaff_x19) {
      **(undefined1 **)(*(long *)StringLiteral_2762 + 0xb8) = 1;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017aa9b4(0);
      if ((lVar12 == 0) ||
         (Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                    (*(undefined8 *)(lVar12 + 0x58),in_stack_00000198,in_stack_00000090,lVar12,0),
         iVar11 = in_stack_000001a8, puVar6 = System_Threading_Timer_TimerComparer_TypeInfo,
         in_stack_00000080 == 0)) goto LAB_01450e70;
      if (*(int *)(in_stack_00000078 + 0x18) < 1) goto LAB_01450d50;
      lVar20 = *(long *)(in_stack_00000080 + 0x20);
      uVar21 = 0;
      uVar17 = (uint)in_stack_00000090;
      goto LAB_01450658;
    }
    unaff_x26 = thunk_FUN_00d62348(*unaff_x22);
    if (unaff_x26 == 0) goto LAB_01450e70;
    FUN_01320e50(unaff_x26,*unaff_x23);
    lVar12 = thunk_FUN_00d6225c(unaff_x26,*(undefined8 *)(*unaff_x25 + 0x40));
    if (lVar12 == 0) goto LAB_01450e78;
    param_1 = (ulong)*(uint *)(unaff_x25 + 3);
    in_CY = param_1 <= unaff_x19;
  }
LAB_01450e74:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
LAB_01450658:
  do {
    FUN_0132138c(in_stack_00000078,uVar21 & 0xffffffff,&stack0x000000e8,
                 *(undefined8 *)PTR_DAT_033ee2d8);
    dVar10 = in_stack_000000e8;
    if ((in_stack_000000e8 == 0.0) ||
       (lVar19 = *(long *)((long)in_stack_000000e8 + 0x10), lVar19 == 0)) goto LAB_01450e70;
    if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_01450e74;
    lVar19 = *(long *)(lVar19 + (long)(int)uVar17 * 8 + 0x20);
    if (4 < iVar11) {
      plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
      if ((lVar19 == 0) || (lVar14 = FUN_01444238(lVar19), plVar13 == (long *)0x0))
      goto LAB_01450e70;
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0)) {
LAB_01450e78:
        uVar16 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar16,0);
      }
      uVar18 = *(uint *)(plVar13 + 3);
      if (uVar18 == 0) goto LAB_01450e74;
      plVar13[4] = lVar14;
      if (unaff_x20 == 0) goto LAB_01450e70;
      lVar14 = *(long *)(unaff_x20 + 0x10);
      if (lVar14 != 0) {
        lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar15 == 0) goto LAB_01450e78;
        uVar18 = *(uint *)(plVar13 + 3);
      }
      if (uVar18 < 2) goto LAB_01450e74;
      plVar13[5] = lVar14;
      in_stack_00000098._4_4_ = (undefined4)uVar21;
      lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,(long)&stack0x00000098 + 4);
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
      goto LAB_01450e78;
      if (*(uint *)(plVar13 + 3) < 3) goto LAB_01450e74;
      plVar13[6] = lVar14;
      lVar14 = *(long *)((long)dVar10 + 0x18);
      if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) ||
         (FUN_0132138c(lVar14,0,&stack0x000000e8,
                       *(undefined8 *)
                        Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                      ), in_stack_000000e8 == 0.0)) goto LAB_01450e70;
      lVar14 = FUN_0144461c();
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
      goto LAB_01450e78;
      if (*(uint *)(plVar13 + 3) < 4) goto LAB_01450e74;
      plVar13[7] = lVar14;
      uVar16 = FUN_01600be4(*(undefined8 *)System_Action<TimerState>_TypeInfo,plVar13,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar16,0);
    }
    if (lVar20 == 0) goto LAB_01450e70;
    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_01450e74;
    puVar4 = (ulong *)(lVar20 + 0x20 + uVar21 * 0x10);
    in_stack_000000d8 = puVar4[1];
    in_stack_000000d0 = *puVar4;
    if (lVar19 == 0) goto LAB_01450e70;
    plVar13 = (long *)FUN_01443ffc(lVar19);
    fVar22 = (float)FUN_02688390(&stack0x000000d0,0);
    if (DAT_03774fe0 == '\0') {
      thunk_FUN_00d48444(puVar6);
      DAT_03774fe0 = '\x01';
    }
    fVar22 = fVar22 * (float)unaff_w24;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar24 = (double)fVar22;
    dVar23 = modf(dVar24,&stack0x000000e8);
    if (0.0 <= fVar22) {
      if (dVar23 == 0.5) {
        dVar23 = 1.0;
        goto LAB_014508b8;
      }
      dVar24 = (double)(long)(dVar24 + 0.5);
    }
    else if (dVar23 == -0.5) {
      dVar23 = -1.0;
LAB_014508b8:
      dVar24 = in_stack_000000e8;
      if (((long)in_stack_000000e8 & 1U) != 0) {
        dVar24 = in_stack_000000e8 + dVar23;
      }
    }
    else {
      dVar24 = (double)(long)(dVar24 + -0.5);
    }
    fVar22 = (float)FUN_026883a0(&stack0x000000d0,0);
    if (DAT_03774fe0 == '\0') {
      thunk_FUN_00d48444(puVar6);
      DAT_03774fe0 = '\x01';
    }
    fVar22 = fVar22 * (float)unaff_w21;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar25 = (double)fVar22;
    dVar23 = modf(dVar25,&stack0x000000e8);
    if (0.0 <= fVar22) {
      if (dVar23 == 0.5) {
        dVar23 = 1.0;
        goto LAB_01450958;
      }
      dVar25 = (double)(long)(dVar25 + 0.5);
    }
    else if (dVar23 == -0.5) {
      dVar23 = -1.0;
LAB_01450958:
      dVar25 = in_stack_000000e8;
      if (((long)in_stack_000000e8 & 1U) != 0) {
        dVar25 = in_stack_000000e8 + dVar23;
      }
    }
    else {
      dVar25 = (double)(long)(dVar25 + -0.5);
    }
    fVar22 = (float)FUN_026884c4(&stack0x000000d0,0);
    if (DAT_03774fe0 == '\0') {
      thunk_FUN_00d48444(puVar6);
      DAT_03774fe0 = '\x01';
    }
    fVar22 = fVar22 * (float)unaff_w24;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar26 = (double)fVar22;
    dVar23 = modf(dVar26,&stack0x000000e8);
    if (0.0 <= fVar22) {
      if (dVar23 == 0.5) {
        dVar23 = 1.0;
        goto LAB_014509f8;
      }
      dVar26 = (double)(long)(dVar26 + 0.5);
    }
    else if (dVar23 == -0.5) {
      dVar23 = -1.0;
LAB_014509f8:
      dVar26 = in_stack_000000e8;
      if (((long)in_stack_000000e8 & 1U) != 0) {
        dVar26 = in_stack_000000e8 + dVar23;
      }
    }
    else {
      dVar26 = (double)(long)(dVar26 + -0.5);
    }
    iVar1 = -0x80000000;
    if (dVar26 != INFINITY) {
      iVar1 = (int)dVar26;
    }
    fVar22 = (float)FUN_026884d4(&stack0x000000d0,0);
    if (DAT_03774fe0 == '\0') {
      thunk_FUN_00d48444(puVar6);
      DAT_03774fe0 = '\x01';
    }
    fVar22 = fVar22 * (float)unaff_w21;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar26 = (double)fVar22;
    dVar23 = modf(dVar26,&stack0x000000e8);
    if (0.0 <= fVar22) {
      if (dVar23 == 0.5) {
        dVar23 = 1.0;
        goto LAB_01450ac0;
      }
      dVar26 = (double)(long)(dVar26 + 0.5);
    }
    else if (dVar23 == -0.5) {
      dVar23 = -1.0;
LAB_01450ac0:
      dVar26 = in_stack_000000e8;
      if (((long)in_stack_000000e8 & 1U) != 0) {
        dVar26 = in_stack_000000e8 + dVar23;
      }
    }
    else {
      dVar26 = (double)(long)(dVar26 + -0.5);
    }
    iVar2 = -0x80000000;
    if (dVar26 != INFINITY) {
      iVar2 = (int)dVar26;
    }
    fVar22 = -2.1474836e+09;
    if (dVar24 != INFINITY) {
      fVar22 = (float)(int)dVar24;
    }
    fVar5 = -2.1474836e+09;
    if (dVar25 != INFINITY) {
      fVar5 = (float)(int)dVar25;
    }
    FUN_0268834c(fVar22,fVar5,&stack0x000000d0,0);
    if ((iVar1 == 0) || (iVar2 == 0)) {
      in_stack_000000a8 = in_stack_000000d8;
      in_stack_000000a0 = in_stack_000000d0;
      uVar16 = FUN_02688894(&stack0x000000a0,0);
      uVar16 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033ebdf0,uVar16,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_026610e4(uVar16,0);
    }
    lVar19 = *(long *)((long)dVar10 + 0x10);
    if (lVar19 == 0) goto LAB_01450e70;
    if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_01450e74;
    lVar19 = *(long *)(lVar19 + (long)(int)uVar17 * 8 + 0x20);
    if (lVar19 == 0) goto LAB_01450e70;
    in_stack_000000b8 = *(undefined8 *)(lVar19 + 0x28);
    in_stack_000000b0 = *(undefined8 *)(lVar19 + 0x20);
    in_stack_000000c8 = *(undefined8 *)(lVar19 + 0x38);
    in_stack_000000c0 = *(undefined8 *)(lVar19 + 0x30);
    lVar19 = *(long *)(in_stack_00000080 + 0x28);
    if (lVar19 == 0) goto LAB_01450e70;
    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_01450e74;
    lVar19 = lVar19 + uVar21 * 8;
    uVar27 = in_stack_000000d0 & 0xffffffff;
    uVar8 = in_stack_000000d0._4_4_;
    iVar1 = *(int *)(lVar19 + 0x20);
    iVar2 = *(int *)(lVar19 + 0x24);
    uVar28 = in_stack_000000d8 & 0xffffffff;
    uVar9 = in_stack_000000d8._4_4_;
    FUN_014315a4(&stack0x000000b0,0);
    if (*(uint *)(unaff_x25 + 3) <= uVar21) goto LAB_01450e74;
    if (plVar13 == (long *)0x0) goto LAB_01450e70;
    lVar19 = unaff_x25[uVar21 + 4];
    (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
    (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
    FUN_0268b6ac(plVar13,0);
    FUN_01451550(uVar27,uVar8,uVar28,uVar9,(float)iVar2,(float)iVar1,in_stack_00000070,
                 in_stack_00000068,lVar19);
    uVar16 = FUN_0267c994(*(undefined8 *)
                           Method_UnityEngine_GameObject_AddComponent<MoveTowardsTargetProvider>__,0
                         );
    lVar19 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
    if ((lVar19 == 0) || (FUN_0267d648(lVar19,uVar16,0), unaff_x20 == 0)) goto LAB_01450e70;
    cVar3 = '\0';
    if (*(char *)(unaff_x20 + 0x18) != '\0') {
      cVar3 = *(char *)(lVar12 + 0x2c);
    }
    Meta_WitAi_Json_WitResponseNode__SaveToCompressedStream(0);
    FUN_01451cd4(lVar19,plVar13,cVar3 != '\0',iVar11);
    FUN_00ac9cc0(unaff_x29,lVar19,
                 *(undefined8 *)Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__);
    uVar21 = uVar21 + 1;
  } while ((long)uVar21 < (long)*(int *)(in_stack_00000078 + 0x18));
LAB_01450d50:
  puVar7 = StringLiteral_12929;
  puVar6 = StringLiteral_10012;
  if (unaff_x28 == 0) {
LAB_01450e70:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0266ed50(unaff_x28,0);
  uVar16 = FUN_01325140(in_stack_00000070,*(undefined8 *)puVar7);
  FUN_0266b9c4(unaff_x28,uVar16,0);
  uVar16 = FUN_01325140(in_stack_00000068,*(undefined8 *)puVar6);
  FUN_0266bbc8(unaff_x28,uVar16,0);
  FUN_0266ad68(unaff_x28,(int)unaff_x25[3],0);
  iVar11 = FUN_02666048(unaff_x28,0);
  puVar6 = StringLiteral_10837;
  if (0 < iVar11) {
    uVar21 = 0;
    do {
      if (*(uint *)(unaff_x25 + 3) <= (uint)uVar21) goto LAB_01450e74;
      if (unaff_x25[uVar21 + 4] == 0) goto LAB_01450e70;
      uVar16 = FUN_01325140(unaff_x25[uVar21 + 4],*(undefined8 *)puVar6);
      FUN_0266e648(unaff_x28,uVar16,0,uVar21 & 0xffffffff,0);
      iVar11 = FUN_02666048(unaff_x28,0);
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < iVar11);
  }
  **(undefined1 **)(*(long *)StringLiteral_2762 + 0xb8) = 0;
  return;
}


