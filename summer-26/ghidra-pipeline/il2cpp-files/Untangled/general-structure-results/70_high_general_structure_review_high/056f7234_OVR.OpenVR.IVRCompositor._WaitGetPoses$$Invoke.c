/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._WaitGetPoses$$Invoke
ENTRY_POINT: 056f7234
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void OVR_OpenVR_IVRCompositor__WaitGetPoses__Invoke(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar13;
  byte *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  int iVar14;
  long unaff_x24;
  long *unaff_x25;
  long lVar15;
  int iStack0000000000000004;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d573e8);
    FUN_02f07e70(PTR_DAT_06d573f0);
    FUN_02f07e70(PTR_DAT_06d573f8);
    FUN_02f07e70(PTR_DAT_06d57400);
    FUN_02f07e70(PTR_DAT_06d57408);
    FUN_02f07e70(PTR_DAT_06d57220);
    FUN_02f07e70(PTR_DAT_06d57228);
    FUN_02f07e70(PTR_DAT_06d37b88);
    FUN_02f07e70(PTR_DAT_06d380f0);
    FUN_02f07e70(PTR_DAT_06d089c0);
    FUN_02f07e70(PTR_DAT_06d551f0);
    FUN_02f07e70(PTR_DAT_06d55190);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    *(undefined1 *)(unaff_x19 + 0x73f) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar6 = FUN_0571758c();
  if (unaff_x23 == (long *)0x0) {
LAB_056f731c:
    unaff_x23 = (long *)0x0;
  }
  else {
    bVar12 = *(byte *)(*(long *)PTR_DAT_06d380f0 + 0x130);
    if (*(byte *)(*unaff_x23 + 0x130) < bVar12) goto LAB_056f731c;
    if (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar12 * 8 + -8) != *(long *)PTR_DAT_06d380f0
       ) {
      unaff_x23 = (long *)0x0;
    }
  }
  iStack0000000000000004 = unaff_w20;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    uVar7 = FUN_0552fb90(unaff_x23,0,0);
    lVar6 = 0;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar6 = FUN_05717658(unaff_x23,0);
    }
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar8 = FUN_03ada6f8();
  lVar9 = FUN_03ada6f8();
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) {
    lVar15 = unaff_x24;
    if (lVar6 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(long *)(lVar6 + 0x10) != 0;
      if (bVar4) {
        lVar15 = *(long *)(lVar6 + 0x10);
      }
    }
  }
  else {
    bVar4 = true;
    lVar15 = *(long *)(lVar8 + 0x80);
  }
  if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar3 = PTR_DAT_06d01eb0;
  lVar10 = FUN_03ada6f8();
  if (lVar8 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar8 + 0x70);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar7 = FUN_0561ab0c(uVar13,0,0);
  if ((uVar7 & 1) == 0) {
    if (lVar10 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(lVar10 + 0x58);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar7 = FUN_0561ab0c(uVar13,0,0);
    if ((uVar7 & 1) == 0) {
      plVar11 = (long *)in_stack_00000010[6];
      goto joined_r0x056f769c;
    }
    if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar11 = (long *)FUN_05717d38(lVar10,0);
    if (plVar11 != (long *)0x0) goto LAB_056f74f8;
LAB_056f76a0:
    (**(code **)(*in_stack_00000010 + 0x2a8))
              (in_stack_00000010,lVar15,*(undefined8 *)(*in_stack_00000010 + 0x2b0));
    plVar11 = (long *)PTR_DAT_06d37b88;
    puVar2 = (undefined8 *)PTR_DAT_06d55190;
  }
  else {
    if (lVar8 == 0) goto LAB_056f76bc;
    uVar13 = *(undefined8 *)(lVar8 + 0x70);
    uVar1 = *(undefined8 *)(lVar8 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar11 = (long *)Meta_XR_MetaXRFeature__OnSessionStateChange(uVar13,uVar1,0);
joined_r0x056f769c:
    if (plVar11 == (long *)0x0) goto LAB_056f76a0;
LAB_056f74f8:
    (**(code **)(*plVar11 + 0x178))(plVar11,lVar15,bVar4,*(undefined8 *)(*plVar11 + 0x180));
    plVar11 = (long *)PTR_DAT_06d37b88;
    puVar2 = (undefined8 *)PTR_DAT_06d55190;
  }
  PTR_DAT_06d37b88 = (undefined *)plVar11;
  PTR_DAT_06d55190 = (undefined *)puVar2;
  if (unaff_x22 == 0) {
LAB_056f76bc:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_056f78b4();
  *(long *)(unaff_x22 + 0x60) = unaff_x24;
  thunk_FUN_02f411dc();
  if (lVar8 == 0) {
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined2 *)(unaff_x22 + 0x84) = 0;
    *(undefined2 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0xd0),0);
    *(undefined8 *)(unaff_x22 + 0xe4) = 0;
    *(undefined8 *)(unaff_x22 + 0xdc) = 0;
    if (lVar6 == 0) {
      bVar12 = 0;
      iVar14 = iStack0000000000000004;
    }
    else {
      in_stack_00000018 = 0;
      FUN_0431f628(&stack0x00000018,*(undefined1 *)(lVar6 + 0x20),*puVar2);
      *(undefined8 *)(unaff_x22 + 0x10) = in_stack_00000018;
      if (*(int *)(lVar6 + 0x1c) == -1) {
        uVar13 = 0;
      }
      else {
        in_stack_00000018 = 0;
        FUN_0431f26c(&stack0x00000018,*(int *)(lVar6 + 0x1c),*(undefined8 *)PTR_DAT_06d089c0);
        uVar13 = in_stack_00000018;
      }
      *(undefined8 *)(unaff_x22 + 0x58) = uVar13;
      if (*(char *)(lVar6 + 0x21) == '\0') {
        in_stack_00000018 = 0;
        FUN_0431f628(&stack0x00000018,1,*(undefined8 *)PTR_DAT_06d551f0);
        uVar13 = in_stack_00000018;
      }
      else {
        uVar13 = 0;
      }
      bVar12 = 1;
      *(undefined8 *)(unaff_x22 + 0x90) = uVar13;
      iVar14 = iStack0000000000000004;
    }
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(lVar8 + 0x44);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(lVar8 + 0x3c);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(lVar8 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar8 + 0x20);
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(lVar8 + 0x30);
    *(undefined2 *)(unaff_x22 + 0x84) = *(undefined2 *)(lVar8 + 0x38);
    *(undefined2 *)(unaff_x22 + 0xd8) = *(undefined2 *)(lVar8 + 0x4c);
    uVar13 = *(undefined8 *)(lVar8 + 0x60);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar7 = FUN_0561ab0c(uVar13,0,0);
    uVar13 = 0;
    if ((uVar7 & 1) != 0) {
      uVar13 = *(undefined8 *)(lVar8 + 0x60);
      uVar1 = *(undefined8 *)(lVar8 + 0x68);
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar13 = FUN_05717b50(uVar13,uVar1,0);
    }
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar13;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0xd0));
    *(undefined8 *)(unaff_x22 + 0xe4) = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(unaff_x22 + 0xdc) = *(undefined8 *)(lVar8 + 0x58);
    bVar12 = 1;
    iVar14 = iStack0000000000000004;
  }
  if (lVar9 != 0) {
    in_stack_00000018 = 0;
    FUN_0431f628(&stack0x00000018,2,*puVar2);
    bVar12 = 1;
    *(undefined8 *)(unaff_x22 + 0x10) = in_stack_00000018;
  }
  *(byte *)(unaff_x22 + 0x83) = bVar12;
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar6 = FUN_03ada6f8();
  if (lVar6 == 0) {
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = FUN_03ada6f8();
    if (lVar6 == 0) {
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      bVar5 = FUN_057182e0();
      bVar5 = bVar5 & 1;
      goto LAB_056f7794;
    }
  }
  bVar5 = 1;
LAB_056f7794:
  if (iVar14 == 1) {
    bVar5 = bVar5 != 0 | bVar12 ^ 1;
  }
  else {
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar6 = FUN_03ada6f8();
    bVar5 = bVar5 | lVar6 != 0;
  }
  *(byte *)(unaff_x22 + 0x80) = bVar5;
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar13 = FUN_05717a30();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar13;
  thunk_FUN_02f411dc();
  plVar11 = (long *)FUN_03ada6f8();
  if (plVar11 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
    *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
    *(undefined1 *)(unaff_x22 + 0x18) = 1;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0x20),uVar13);
  }
  *unaff_x21 = 0;
  *unaff_x21 = iVar14 == 2 | bVar12 | (byte)((*(uint *)(in_stack_00000010 + 4) & 0x20) >> 5);
  return;
}


