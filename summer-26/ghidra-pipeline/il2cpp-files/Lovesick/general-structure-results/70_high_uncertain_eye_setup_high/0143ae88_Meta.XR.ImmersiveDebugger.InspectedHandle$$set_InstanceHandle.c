/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedHandle$$set_InstanceHandle
ENTRY_POINT: 0143ae88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedHandle__set_InstanceHandle(long param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 in_stack_00000078;
  int iStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint uStack00000000000000b0;
  float fStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  int iStack00000000000000e0;
  int iStack00000000000000e4;
  
  do {
    if ((*(byte *)(param_1 + 0x132) & 1) == 0) {
      param_1 = FUN_00d5941c();
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = *(long *)(*(long *)(unaff_x23 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    FUN_013f38b0(unaff_x22,**(undefined8 **)(lVar7 + 0xb8),0);
    do {
      in_stack_000000c8._4_4_ = in_stack_000000c8._4_4_ + 1;
      if (*(int *)(unaff_x27 + 0x18) <= (int)in_stack_000000c8._4_4_) {
        FUN_014359a0();
        return;
      }
      FUN_0132138c();
      uVar9 = in_stack_000000c8._4_4_;
      uVar5 = _iStack0000000000000088;
      if (_iStack0000000000000088 == 0) goto LAB_0143af6c;
      piVar1 = (int *)(_iStack0000000000000088 + 0x1c);
      piVar3 = (int *)(_iStack0000000000000088 + 0x20);
      piVar2 = (int *)(_iStack0000000000000088 + 0x14);
      piVar4 = (int *)(_iStack0000000000000088 + 0x18);
      lVar7 = *(long *)(unaff_x21 + 0x20);
      lVar10 = (long)(int)in_stack_000000c8._4_4_;
      _iStack0000000000000088 = 0;
      _uStack0000000000000090 = 0;
      FUN_0268834c(unaff_s8 + (float)*piVar1 / (float)iStack00000000000000e4,
                   unaff_s9 + (float)*piVar3 / (float)iStack00000000000000e0,
                   (float)*piVar2 / (float)iStack00000000000000e4 - unaff_s10,
                   (float)*piVar4 / (float)iStack00000000000000e0 - unaff_s11,&stack0x00000088,0);
      if (lVar7 == 0) goto LAB_0143af6c;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0143af70;
      lVar7 = lVar7 + lVar10 * 0x10;
      *(int *)(lVar7 + 0x20) = iStack0000000000000088;
      *(undefined4 *)(lVar7 + 0x24) = uStack000000000000008c;
      *(undefined4 *)(lVar7 + 0x28) = uStack0000000000000090;
      *(undefined4 *)(lVar7 + 0x2c) = uStack0000000000000094;
      uStack00000000000000b8 = iStack0000000000000088;
      uStack00000000000000bc = uStack000000000000008c;
      uStack00000000000000c0 = uStack0000000000000090;
      uStack00000000000000c4 = uStack0000000000000094;
      lVar7 = *(long *)(unaff_x21 + 0x30);
      if (lVar7 == 0) goto LAB_0143af6c;
      if (*(uint *)(lVar7 + 0x18) <= in_stack_000000c8._4_4_) goto LAB_0143af70;
      *(undefined4 *)(lVar7 + (long)(int)in_stack_000000c8._4_4_ * 4 + 0x20) =
           *(undefined4 *)(uVar5 + 0x10);
    } while (*(int *)(unaff_x20 + 0x10) < 4);
    plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0x10);
    if (plVar6 == (long *)0x0) {
LAB_0143af6c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(long *)Method_UnityEngine_Component_GetComponent<NavMeshSurface>__ != 0) &&
       (lVar7 = thunk_FUN_00d6225c(*(long *)
                                    Method_UnityEngine_Component_GetComponent<NavMeshSurface>__,
                                   *(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_0143af74:
      uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,0);
    }
    if ((int)plVar6[3] == 0) {
LAB_0143af70:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar6[4] = *(long *)Method_UnityEngine_Component_GetComponent<NavMeshSurface>__;
    lVar7 = FUN_0176eb1c((long)&stack0x000000c8 + 4,0);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_0143af74;
    uVar9 = *(uint *)(plVar6 + 3);
    if (uVar9 < 2) goto LAB_0143af70;
    plVar6[5] = lVar7;
    if (*(long *)System_Collections_Generic_List<Link>_TypeInfo != 0) {
      lVar7 = thunk_FUN_00d6225c(*(long *)System_Collections_Generic_List<Link>_TypeInfo,
                                 *(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_0143af74;
      uVar9 = *(uint *)(plVar6 + 3);
    }
    if (uVar9 < 3) goto LAB_0143af70;
    plVar6[6] = *(long *)System_Collections_Generic_List<Link>_TypeInfo;
    lVar7 = FUN_0176eb1c((undefined4 *)(uVar5 + 0x10),0);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_0143af74;
    uVar9 = *(uint *)(plVar6 + 3);
    if (uVar9 < 4) goto LAB_0143af70;
    plVar6[7] = lVar7;
    if (*unaff_x29 != 0) {
      lVar7 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_0143af74;
      uVar9 = *(uint *)(plVar6 + 3);
    }
    if (uVar9 < 5) goto LAB_0143af70;
    plVar6[8] = *unaff_x29;
    fStack00000000000000b4 = (float)FUN_02688390(&stack0x000000b8,0);
    fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e4;
    lVar7 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_0143af74;
    uVar9 = *(uint *)(plVar6 + 3);
    if (uVar9 < 6) goto LAB_0143af70;
    plVar6[9] = lVar7;
    if (*unaff_x25 != 0) {
      lVar7 = thunk_FUN_00d6225c(*unaff_x25,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_0143af74;
      uVar9 = *(uint *)(plVar6 + 3);
    }
    if (uVar9 < 7) goto LAB_0143af70;
    plVar6[10] = *unaff_x25;
    fStack00000000000000b4 = (float)FUN_026883a0(&stack0x000000b8,0);
    fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e0;
    lVar7 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_0143af74;
    uVar9 = *(uint *)(plVar6 + 3);
    if (uVar9 < 8) goto LAB_0143af70;
    plVar6[0xb] = lVar7;
    if (*(long *)PTR_DAT_033f5960 != 0) {
      lVar7 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_0143af74;
      uVar9 = *(uint *)(plVar6 + 3);
    }
    if (uVar9 < 9) goto LAB_0143af70;
    plVar6[0xc] = *(long *)PTR_DAT_033f5960;
    fStack00000000000000b4 = (float)FUN_026884c4(&stack0x000000b8,0);
    fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e4;
    lVar7 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_0143af74;
    uVar9 = *(uint *)(plVar6 + 3);
    if (uVar9 < 10) goto LAB_0143af70;
    plVar6[0xd] = lVar7;
    if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
      lVar7 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                 *(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_0143af74;
      uVar9 = *(uint *)(plVar6 + 3);
    }
    if (uVar9 < 0xb) goto LAB_0143af70;
    plVar6[0xe] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
    fStack00000000000000b4 = (float)FUN_026884d4(&stack0x000000b8,0);
    fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e0;
    lVar7 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_0143af74;
    uVar9 = *(uint *)(plVar6 + 3);
    if (uVar9 < 0xc) goto LAB_0143af70;
    plVar6[0xf] = lVar7;
    if (*unaff_x26 != 0) {
      lVar7 = thunk_FUN_00d6225c(*unaff_x26,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_0143af74;
      uVar9 = *(uint *)(plVar6 + 3);
    }
    if (uVar9 < 0xd) goto LAB_0143af70;
    plVar6[0x10] = *unaff_x26;
    FUN_0132138c(in_stack_00000078,in_stack_000000c8._4_4_,&stack0x00000088,
                 *(undefined8 *)StringLiteral_4419);
    uStack00000000000000b0 = (uint)(_iStack0000000000000088 >> 0x1f) & 0xfffffffe;
    lVar7 = FUN_0176eb1c(&stack0x000000b0,0);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_0143af74;
    uVar9 = *(uint *)(plVar6 + 3);
    if (uVar9 < 0xe) goto LAB_0143af70;
    plVar6[0x11] = lVar7;
    if (*unaff_x28 != 0) {
      lVar7 = thunk_FUN_00d6225c(*unaff_x28,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_0143af74;
      uVar9 = *(uint *)(plVar6 + 3);
    }
    if (uVar9 < 0xf) goto LAB_0143af70;
    plVar6[0x12] = *unaff_x28;
    FUN_0132138c(in_stack_00000078,in_stack_000000c8._4_4_,&stack0x00000088,
                 *(undefined8 *)StringLiteral_4419);
    uStack00000000000000b0 = iStack0000000000000088 << 1;
    lVar7 = FUN_0176eb1c(&stack0x000000b0,0);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_0143af74;
    if (*(uint *)(plVar6 + 3) < 0x10) goto LAB_0143af70;
    plVar6[0x13] = lVar7;
    unaff_x22 = FUN_01600844(plVar6,0);
    unaff_x23 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
    lVar7 = *(long *)(unaff_x23 + 0x38);
    if (lVar7 == 0) {
      FUN_00d59478(unaff_x23);
      lVar7 = *(long *)(unaff_x23 + 0x38);
    }
    param_1 = *(long *)(lVar7 + 0x10);
  } while( true );
}


