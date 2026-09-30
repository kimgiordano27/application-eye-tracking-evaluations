/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._IsQuitUserPromptRequested$$BeginInvoke
ENTRY_POINT: 056f45b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


long OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested__BeginInvoke(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d57260);
  FUN_02f07e70(PTR_DAT_06d060e0);
  FUN_02f07e70(PTR_DAT_06d57268);
  FUN_02f07e70(PTR_DAT_06d555f8);
  FUN_02f07e70(PTR_DAT_06d57270);
  FUN_02f07e70(PTR_DAT_06d1c7d0);
  FUN_02f07e70(PTR_DAT_06d57278);
  FUN_02f07e70(PTR_DAT_06d57280);
  FUN_02f07e70(PTR_DAT_06d57258);
  FUN_02f07e70(PTR_DAT_06d57288);
  FUN_02f07e70(PTR_DAT_06d37b88);
  FUN_02f07e70(PTR_DAT_06d57290);
  FUN_02f07e70(PTR_DAT_06d01eb0);
  FUN_02f07e70(PTR_DAT_06d57298);
  FUN_02f07e70(PTR_DAT_06d572a0);
  *(undefined1 *)(unaff_x19 + 0x71e) = 1;
  lVar8 = thunk_FUN_02ef1808(*unaff_x22);
  FUN_056f4b64();
  FUN_056f4be8();
  puVar2 = PTR_DAT_06d57288;
  puVar5 = PTR_DAT_06d57260;
  puVar4 = PTR_DAT_06d37b88;
  if (lVar8 == 0) goto LAB_056f4b60;
  cVar1 = *(char *)((long)unaff_x21 + 0x26);
  uVar15 = *(undefined8 *)(lVar8 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar3 = PTR_DAT_06d1c7d0;
  uVar6 = FUN_057178dc(uVar15,cVar1 != '\0',0);
  *(undefined4 *)(lVar8 + 0xbc) = uVar6;
  uVar16 = *(undefined8 *)(lVar8 + 0xd8);
  uVar15 = (**(code **)(*unaff_x21 + 0x268))();
  FUN_037ee9cc(uVar16,uVar15,*(undefined8 *)puVar5);
  lVar9 = FUN_03ada9ec(*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)puVar2);
  if (lVar9 == 0) {
OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__EndInvoke:
    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
    FUN_0513ca78();
  }
  else {
    *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar9 + 0x74);
    *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar9 + 0x7c);
    puVar2 = PTR_DAT_06d01eb0;
    *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)(lVar9 + 0x6c);
    uVar15 = *(undefined8 *)(lVar9 + 0x58);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar10 = FUN_0561ab0c(uVar15,0,0);
    if ((uVar10 & 1) == 0) goto OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__EndInvoke;
    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d572a0);
    FUN_05645a04(lVar11,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar15 = FUN_05717d38(lVar9,0);
    if (lVar11 == 0) goto LAB_056f4b60;
    *(undefined8 *)(lVar11 + 0x10) = uVar15;
    thunk_FUN_02f411dc();
    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
    FUN_0513ca78(lVar9,lVar11,*(undefined8 *)PTR_DAT_06d57298,0);
    if (lVar9 == 0) goto OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__EndInvoke;
  }
  *(long *)(lVar8 + 0xf0) = lVar9;
  uVar15 = thunk_FUN_02f411dc((long *)(lVar8 + 0xf0),lVar9);
  puVar2 = PTR_DAT_06d060e0;
  if (*(char *)(lVar8 + 0x2a) != '\0') {
    uVar15 = FUN_056f4e5c(uVar15,*(undefined8 *)(lVar8 + 0x18));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar2);
    }
    uVar10 = FUN_0552db84(uVar15,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(lVar8 + 0xbc) == 2) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar10 = FUN_05716998(0);
        if ((uVar10 & 1) != 0) {
          uVar15 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57270);
          FUN_05131310(uVar15,lVar8,*(undefined8 *)PTR_DAT_06d57280,0);
          *(undefined8 *)(lVar8 + 0x80) = uVar15;
          thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x80),uVar15);
        }
      }
      else if ((*(long *)(lVar8 + 0x80) == 0) || (*(char *)(lVar8 + 0x88) != '\0')) {
        uVar15 = FUN_056f5400(uVar10,*(undefined8 *)(lVar8 + 0x18));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar2);
        }
        uVar10 = FUN_0552db84(uVar15,0,0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          plVar12 = (long *)FUN_05717f90(0);
          if (plVar12 == (long *)0x0) goto LAB_056f4b60;
          uVar15 = (**(code **)(*plVar12 + 0x188))(plVar12,uVar15,*(undefined8 *)(*plVar12 + 400));
          lVar9 = lVar8 + 0x108;
          *(undefined8 *)(lVar8 + 0x108) = uVar15;
          goto LAB_056f4894;
        }
      }
      else {
        if (*(long *)(lVar8 + 0x18) == 0) goto LAB_056f4b60;
        uVar10 = FUN_0561bef0(*(long *)(lVar8 + 0x18),0);
        if ((uVar10 & 1) != 0) {
          uVar15 = FUN_056f5448();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*(long *)puVar2);
          }
          uVar10 = FUN_0552db84(uVar15,0,0);
          if ((uVar10 & 1) != 0) goto LAB_056f485c;
        }
      }
    }
    else {
LAB_056f485c:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      plVar12 = (long *)FUN_05717f90(0);
      if (plVar12 == (long *)0x0) goto LAB_056f4b60;
      uVar15 = (**(code **)(*plVar12 + 0x188))(plVar12,uVar15,*(undefined8 *)(*plVar12 + 400));
      lVar9 = lVar8 + 0x100;
      *(undefined8 *)(lVar8 + 0x100) = uVar15;
LAB_056f4894:
      thunk_FUN_02f411dc(lVar9);
      uVar15 = FUN_056f5380(lVar8);
      uVar16 = (**(code **)(*unaff_x21 + 0x1b8))();
      FUN_037ee9cc(uVar15,uVar16,*(undefined8 *)puVar5);
    }
  }
  puVar4 = PTR_DAT_06d555f8;
  uVar15 = FUN_056f56fc();
  uVar10 = FUN_0552fb90(uVar15,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_056f58c8(lVar8,uVar15);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar5 = PTR_DAT_06d3cf60;
  if (unaff_x20 == (long *)0x0) {
LAB_056f4b60:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  uVar15 = (**(code **)(*unaff_x20 + 0x2d8))();
  iVar7 = FUN_03b36560(uVar16,uVar15,*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_06d57290;
  puVar4 = PTR_DAT_06d57268;
  if (iVar7 != -1) {
    plVar12 = (long *)FUN_056f614c(lVar8);
    uVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
    FUN_056f61d0(uVar15,0,*(undefined8 *)puVar4);
    if (plVar12 == (long *)0x0) goto LAB_056f4b60;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06d57278) {
          puVar13 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_056f4a60;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)PTR_DAT_06d57278,2);
LAB_056f4a60:
    (*(code *)*puVar13)(plVar12,uVar15,puVar13[1]);
  }
  return lVar8;
}


