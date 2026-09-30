/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$ovrp_GetPassthroughCapabilities
ENTRY_POINT: 033f8c74
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f8f30) */
/* WARNING: Removing unreachable block (ram,0x033f90e0) */

void OVRPlugin_OVRP_1_85_0__ovrp_GetPassthroughCapabilities(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar8;
  long *plVar9;
  int unaff_w24;
  undefined8 uVar10;
  long *unaff_x25;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x19 + 0x12) = *(undefined8 *)(unaff_x19 + 10);
  thunk_FUN_01e10808();
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  _in_stack_00000020 = FUN_026ca578(param_1,0,*(undefined8 *)StringLiteral_9459);
  uVar4 = FUN_029c174c(&stack0x00000020,*(undefined8 *)StringLiteral_9456);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
    thunk_FUN_01e10808(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_01ee95a4(unaff_x19 + 2,&stack0x00000020);
    return;
  }
  lVar5 = FUN_029c1798(&stack0x00000020,*(undefined8 *)StringLiteral_9454);
  plVar9 = (long *)(unaff_x19 + 0x12);
  if (*plVar9 == lVar5) {
    *plVar9 = 0;
    thunk_FUN_01e10808(plVar9,0);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_033f5cc4(lVar5);
    FUN_033f5da8(lVar5,0);
    uVar3 = 1;
    iVar11 = 10;
    iVar8 = 10;
    if (unaff_w24 < 0) goto LAB_033f9070;
LAB_033f8d38:
    iVar11 = iVar8;
    bVar1 = true;
  }
  else {
    uVar3 = 0;
    iVar11 = 0xb;
    iVar8 = 0xb;
    if (-1 < unaff_w24) goto LAB_033f8d38;
LAB_033f9070:
    plVar9 = *(long **)(unaff_x19 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads)
          {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_033f90cc;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01dde8fc(plVar9,*(long *)
                                    Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                            ,0);
LAB_033f90cc:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    bVar1 = false;
  }
  if (iVar11 != 0xb) {
    if (iVar11 == 10) goto LAB_033f8ec8;
    if (iVar11 != 0) {
      return;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01e10808(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000018._4_1_ = '\0';
  FUN_033f4894(uVar10,(long)&stack0x00000018 + 4);
  uVar4 = FUN_033f81c0();
  if ((uVar4 & 1) == 0) {
    iVar8 = 0xd;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f3e58(unaff_x19 + 8);
    uVar3 = 0;
    iVar8 = 10;
  }
  if (!bVar1 && in_stack_00000018._4_1_ != '\0') {
    FUN_01dccd6c(uVar10);
  }
  if (iVar8 != 0xd) {
    if (iVar8 == 10) goto LAB_033f8ec8;
    if (iVar8 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  auVar12 = FUN_026c53b8(*(long *)(unaff_x19 + 10),0,*(undefined8 *)StringLiteral_9460);
  uVar4 = FUN_029c1214();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar12;
    thunk_FUN_01e10808(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_01ee9390(unaff_x19 + 2);
    return;
  }
  uVar3 = FUN_029c1260();
LAB_033f8ec8:
  *unaff_x19 = 0xfffffffe;
  puVar2 = StringLiteral_9451;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0253d68c(unaff_x19 + 2,uVar3 & 1,*(undefined8 *)puVar2);
  return;
}


