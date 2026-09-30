/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._WaitGetPoses$$EndInvoke
ENTRY_POINT: 056f72fc
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


void OVR_OpenVR_IVRCompositor__WaitGetPoses__EndInvoke(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  int unaff_w20;
  undefined8 uVar12;
  byte *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  int iVar13;
  long unaff_x24;
  long *unaff_x25;
  long lVar14;
  long lVar15;
  int iStack0000000000000004;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  bVar11 = *(byte *)(*(long *)PTR_DAT_06d380f0 + 0x130);
  if (*(byte *)(*unaff_x23 + 0x130) < bVar11) {
    unaff_x23 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar11 * 8 + -8) !=
           *(long *)PTR_DAT_06d380f0) {
    unaff_x23 = (long *)0x0;
  }
  iStack0000000000000004 = unaff_w20;
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    uVar6 = FUN_0552fb90(unaff_x23,0,0);
    lVar14 = 0;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar14 = FUN_05717658(unaff_x23,0);
    }
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar7 = FUN_03ada6f8();
  lVar8 = FUN_03ada6f8();
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
    lVar15 = unaff_x24;
    if (lVar14 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(long *)(lVar14 + 0x10) != 0;
      if (bVar4) {
        lVar15 = *(long *)(lVar14 + 0x10);
      }
    }
  }
  else {
    bVar4 = true;
    lVar15 = *(long *)(lVar7 + 0x80);
  }
  if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar3 = PTR_DAT_06d01eb0;
  lVar9 = FUN_03ada6f8();
  if (lVar7 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar7 + 0x70);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_0561ab0c(uVar12,0,0);
  if ((uVar6 & 1) == 0) {
    if (lVar9 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(lVar9 + 0x58);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_0561ab0c(uVar12,0,0);
    if ((uVar6 & 1) == 0) {
      plVar10 = (long *)in_stack_00000010[6];
      goto joined_r0x056f769c;
    }
    if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar10 = (long *)FUN_05717d38(lVar9,0);
    if (plVar10 != (long *)0x0) goto LAB_056f74f8;
LAB_056f76a0:
    (**(code **)(*in_stack_00000010 + 0x2a8))
              (in_stack_00000010,lVar15,*(undefined8 *)(*in_stack_00000010 + 0x2b0));
    plVar10 = (long *)PTR_DAT_06d37b88;
    puVar2 = (undefined8 *)PTR_DAT_06d55190;
  }
  else {
    if (lVar7 == 0) goto LAB_056f76bc;
    uVar12 = *(undefined8 *)(lVar7 + 0x70);
    uVar1 = *(undefined8 *)(lVar7 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar10 = (long *)Meta_XR_MetaXRFeature__OnSessionStateChange(uVar12,uVar1,0);
joined_r0x056f769c:
    if (plVar10 == (long *)0x0) goto LAB_056f76a0;
LAB_056f74f8:
    (**(code **)(*plVar10 + 0x178))(plVar10,lVar15,bVar4,*(undefined8 *)(*plVar10 + 0x180));
    plVar10 = (long *)PTR_DAT_06d37b88;
    puVar2 = (undefined8 *)PTR_DAT_06d55190;
  }
  PTR_DAT_06d37b88 = (undefined *)plVar10;
  PTR_DAT_06d55190 = (undefined *)puVar2;
  if (unaff_x22 == 0) {
LAB_056f76bc:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_056f78b4();
  *(long *)(unaff_x22 + 0x60) = unaff_x24;
  thunk_FUN_02f411dc();
  if (lVar7 == 0) {
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
    if (lVar14 == 0) {
      bVar11 = 0;
      iVar13 = iStack0000000000000004;
    }
    else {
      in_stack_00000018 = 0;
      FUN_0431f628(&stack0x00000018,*(undefined1 *)(lVar14 + 0x20),*puVar2);
      *(undefined8 *)(unaff_x22 + 0x10) = in_stack_00000018;
      if (*(int *)(lVar14 + 0x1c) == -1) {
        uVar12 = 0;
      }
      else {
        in_stack_00000018 = 0;
        FUN_0431f26c(&stack0x00000018,*(int *)(lVar14 + 0x1c),*(undefined8 *)PTR_DAT_06d089c0);
        uVar12 = in_stack_00000018;
      }
      *(undefined8 *)(unaff_x22 + 0x58) = uVar12;
      if (*(char *)(lVar14 + 0x21) == '\0') {
        in_stack_00000018 = 0;
        FUN_0431f628(&stack0x00000018,1,*(undefined8 *)PTR_DAT_06d551f0);
        uVar12 = in_stack_00000018;
      }
      else {
        uVar12 = 0;
      }
      bVar11 = 1;
      *(undefined8 *)(unaff_x22 + 0x90) = uVar12;
      iVar13 = iStack0000000000000004;
    }
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(lVar7 + 0x44);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(lVar7 + 0x3c);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar7 + 0x20);
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(lVar7 + 0x30);
    *(undefined2 *)(unaff_x22 + 0x84) = *(undefined2 *)(lVar7 + 0x38);
    *(undefined2 *)(unaff_x22 + 0xd8) = *(undefined2 *)(lVar7 + 0x4c);
    uVar12 = *(undefined8 *)(lVar7 + 0x60);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_0561ab0c(uVar12,0,0);
    uVar12 = 0;
    if ((uVar6 & 1) != 0) {
      uVar12 = *(undefined8 *)(lVar7 + 0x60);
      uVar1 = *(undefined8 *)(lVar7 + 0x68);
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar12 = FUN_05717b50(uVar12,uVar1,0);
    }
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar12;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0xd0));
    *(undefined8 *)(unaff_x22 + 0xe4) = *(undefined8 *)(lVar7 + 0x50);
    *(undefined8 *)(unaff_x22 + 0xdc) = *(undefined8 *)(lVar7 + 0x58);
    bVar11 = 1;
    iVar13 = iStack0000000000000004;
  }
  if (lVar8 != 0) {
    in_stack_00000018 = 0;
    FUN_0431f628(&stack0x00000018,2,*puVar2);
    bVar11 = 1;
    *(undefined8 *)(unaff_x22 + 0x10) = in_stack_00000018;
  }
  *(byte *)(unaff_x22 + 0x83) = bVar11;
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar14 = FUN_03ada6f8();
  if (lVar14 == 0) {
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar14 = FUN_03ada6f8();
    if (lVar14 == 0) {
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      bVar5 = FUN_057182e0();
      bVar5 = bVar5 & 1;
      goto LAB_056f7794;
    }
  }
  bVar5 = 1;
LAB_056f7794:
  if (iVar13 == 1) {
    bVar5 = bVar5 != 0 | bVar11 ^ 1;
  }
  else {
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar14 = FUN_03ada6f8();
    bVar5 = bVar5 | lVar14 != 0;
  }
  *(byte *)(unaff_x22 + 0x80) = bVar5;
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar12 = FUN_05717a30();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar12;
  thunk_FUN_02f411dc();
  plVar10 = (long *)FUN_03ada6f8();
  if (plVar10 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
    *(undefined1 *)(unaff_x22 + 0x18) = 1;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0x20),uVar12);
  }
  *unaff_x21 = 0;
  *unaff_x21 = iVar13 == 2 | bVar11 | (byte)((*(uint *)(in_stack_00000010 + 4) & 0x20) >> 5);
  return;
}


