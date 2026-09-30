/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetLastPoses$$BeginInvoke
ENTRY_POINT: 056f73ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void OVR_OpenVR_IVRCompositor__GetLastPoses__BeginInvoke(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte bVar8;
  undefined8 uVar9;
  byte *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000000;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar3 = PTR_DAT_06d01eb0;
  lVar5 = FUN_03ada6f8();
  if (unaff_x27 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x27 + 0x70);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_0561ab0c(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    if (lVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar5 + 0x58);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_0561ab0c(uVar9,0,0);
    if ((uVar6 & 1) == 0) {
      plVar7 = (long *)in_stack_00000010[6];
      goto joined_r0x056f769c;
    }
    if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar7 = (long *)FUN_05717d38(lVar5,0);
    if (plVar7 != (long *)0x0) goto LAB_056f74f8;
LAB_056f76a0:
    (**(code **)(*in_stack_00000010 + 0x2a8))();
    plVar7 = (long *)PTR_DAT_06d37b88;
    puVar2 = (undefined8 *)PTR_DAT_06d55190;
  }
  else {
    if (unaff_x27 == 0) goto LAB_056f76bc;
    uVar9 = *(undefined8 *)(unaff_x27 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x27 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar7 = (long *)Meta_XR_MetaXRFeature__OnSessionStateChange(uVar9,uVar1,0);
joined_r0x056f769c:
    if (plVar7 == (long *)0x0) goto LAB_056f76a0;
LAB_056f74f8:
    (**(code **)(*plVar7 + 0x178))();
    plVar7 = (long *)PTR_DAT_06d37b88;
    puVar2 = (undefined8 *)PTR_DAT_06d55190;
  }
  PTR_DAT_06d37b88 = (undefined *)plVar7;
  PTR_DAT_06d55190 = (undefined *)puVar2;
  if (unaff_x22 == 0) {
LAB_056f76bc:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_056f78b4();
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x24;
  thunk_FUN_02f411dc();
  if (unaff_x27 == 0) {
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
    if (unaff_x26 == 0) {
      bVar8 = 0;
    }
    else {
      in_stack_00000018 = 0;
      FUN_0431f628(&stack0x00000018,*(undefined1 *)(unaff_x26 + 0x20),*puVar2);
      *(undefined8 *)(unaff_x22 + 0x10) = in_stack_00000018;
      if (*(int *)(unaff_x26 + 0x1c) == -1) {
        uVar9 = 0;
      }
      else {
        in_stack_00000018 = 0;
        FUN_0431f26c(&stack0x00000018,*(int *)(unaff_x26 + 0x1c),*(undefined8 *)PTR_DAT_06d089c0);
        uVar9 = in_stack_00000018;
      }
      *(undefined8 *)(unaff_x22 + 0x58) = uVar9;
      if (*(char *)(unaff_x26 + 0x21) == '\0') {
        in_stack_00000018 = 0;
        FUN_0431f628(&stack0x00000018,1,*(undefined8 *)PTR_DAT_06d551f0);
        uVar9 = in_stack_00000018;
      }
      else {
        uVar9 = 0;
      }
      bVar8 = 1;
      *(undefined8 *)(unaff_x22 + 0x90) = uVar9;
    }
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x27 + 0x44);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x27 + 0x3c);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x27 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x27 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x27 + 0x20);
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x27 + 0x28);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x27 + 0x30);
    *(undefined2 *)(unaff_x22 + 0x84) = *(undefined2 *)(unaff_x27 + 0x38);
    *(undefined2 *)(unaff_x22 + 0xd8) = *(undefined2 *)(unaff_x27 + 0x4c);
    uVar9 = *(undefined8 *)(unaff_x27 + 0x60);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_0561ab0c(uVar9,0,0);
    uVar9 = 0;
    if ((uVar6 & 1) != 0) {
      uVar9 = *(undefined8 *)(unaff_x27 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x27 + 0x68);
      if (*(int *)(*plVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_05717b50(uVar9,uVar1,0);
    }
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar9;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0xd0));
    *(undefined8 *)(unaff_x22 + 0xe4) = *(undefined8 *)(unaff_x27 + 0x50);
    *(undefined8 *)(unaff_x22 + 0xdc) = *(undefined8 *)(unaff_x27 + 0x58);
    bVar8 = 1;
  }
  if (unaff_x25 != 0) {
    in_stack_00000018 = 0;
    FUN_0431f628(&stack0x00000018,2,*puVar2);
    bVar8 = 1;
    *(undefined8 *)(unaff_x22 + 0x10) = in_stack_00000018;
  }
  *(byte *)(unaff_x22 + 0x83) = bVar8;
  if (*(int *)(*plVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar5 = FUN_03ada6f8();
  if (lVar5 == 0) {
    if (*(int *)(*plVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar5 = FUN_03ada6f8();
    if (lVar5 == 0) {
      if (*(int *)(*plVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      bVar4 = FUN_057182e0();
      bVar4 = bVar4 & 1;
      goto LAB_056f7794;
    }
  }
  bVar4 = 1;
LAB_056f7794:
  if (in_stack_00000000._4_4_ == 1) {
    bVar4 = bVar4 != 0 | bVar8 ^ 1;
  }
  else {
    if (*(int *)(*plVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar5 = FUN_03ada6f8();
    bVar4 = bVar4 | lVar5 != 0;
  }
  *(byte *)(unaff_x22 + 0x80) = bVar4;
  if (*(int *)(*plVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_05717a30();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar9;
  thunk_FUN_02f411dc();
  plVar7 = (long *)FUN_03ada6f8();
  if (plVar7 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
    *(undefined1 *)(unaff_x22 + 0x18) = 1;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0x20),uVar9);
  }
  *unaff_x21 = 0;
  *unaff_x21 = in_stack_00000000._4_4_ == 2 |
               bVar8 | (byte)((*(uint *)(in_stack_00000010 + 4) & 0x20) >> 5);
  return;
}


