/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$OnConsoleLineClicked
ENTRY_POINT: 076dbe18
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__OnConsoleLineClicked(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 *unaff_x19;
  uint uVar27;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f2eed0);
  FUN_04447ba8(PTR_DAT_09f2eed8);
  FUN_04447ba8(PTR_DAT_09f2eee0);
  FUN_04447ba8(PTR_DAT_09f2eee8);
  FUN_04447ba8(PTR_DAT_09f2eef0);
  FUN_04447ba8(PTR_DAT_09f2eef8);
  FUN_04447ba8(PTR_DAT_09f2ef00);
  FUN_04447ba8(PTR_DAT_09f2ef08);
  FUN_04447ba8(PTR_DAT_09f2ef10);
  FUN_04447ba8(PTR_DAT_09f2ef18);
  *(undefined1 *)(unaff_x24 + 0xe54) = 1;
  puVar3 = PTR_DAT_09f2ede8;
  puVar5 = PTR_DAT_09f2ed78;
  uVar12 = thunk_FUN_0448520c(*unaff_x23);
  FUN_05bad610(uVar12,*unaff_x19);
  **(undefined8 **)(*unaff_x26 + 0xb8) = uVar12;
  thunk_FUN_044bb4b4(*(undefined8 *)(*unaff_x26 + 0xb8),uVar12);
  uVar12 = thunk_FUN_0448520c(*unaff_x23);
  FUN_05bad680(uVar12,4,*unaff_x22);
  puVar13 = (undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 8);
  *puVar13 = uVar12;
  thunk_FUN_044bb4b4(puVar13,uVar12);
  lVar14 = thunk_FUN_0448520c(*unaff_x21);
  FUN_07441bc0(lVar14,*unaff_x20);
  puVar2 = PTR_DAT_09f1e5b8;
  lVar23 = *(long *)(PTR_DAT_09f1e5b8 + 0x90);
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar12 = FUN_07a4ce38(lVar23 + 0x20,0);
  uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_076dd3bc(uVar15,0,*(undefined8 *)puVar5);
  puVar9 = PTR_DAT_09f2edc0;
  puVar8 = PTR_DAT_09f2ed88;
  puVar7 = PTR_DAT_09f2ed80;
  puVar6 = PTR_DAT_09f2ed40;
  puVar4 = PTR_DAT_09f2ed38;
  puVar5 = PTR_DAT_09f2ece0;
  if (lVar14 != 0) {
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)PTR_DAT_09f2edc0);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x28) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)puVar5);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x48) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)puVar4);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x50) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)puVar7);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x68) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)puVar6);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x70) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)puVar8);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x18) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ecf8);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x30) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed68);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x38) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed70);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x40) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed90);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x88) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed00);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x78) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed28);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x80) + 0x20,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed20);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f21c90,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed18);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f27048,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2eda0);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f27068,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2edb0);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f27078,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2edb8);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f27010,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed48);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f26fe0,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed10);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2a3d0,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed08);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f27028,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed60);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f27018,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed58);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2eca8,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ecf0);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f1f2a0,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed30);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2edf8,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed98);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2ee00,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2eda8);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2edf0,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ed50);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2eca0,0);
    uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_076dd3bc(uVar15,0,*(undefined8 *)PTR_DAT_09f2ece8);
    FUN_0744298c(lVar14,uVar12,uVar15,*(undefined8 *)puVar9);
    puVar5 = PTR_DAT_09f259c8;
    plVar16 = (long *)(*(long *)(*(long *)PTR_DAT_09f259c8 + 0xb8) + 0x10);
    *plVar16 = lVar14;
    thunk_FUN_044bb4b4(plVar16,lVar14);
    lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2edd8);
    FUN_07441bc0(lVar14,*(undefined8 *)PTR_DAT_09f2edd0);
    uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x90) + 0x20,0);
    puVar11 = PTR_DAT_09f2eef0;
    puVar10 = PTR_DAT_09f2eee0;
    puVar9 = PTR_DAT_09f2ee80;
    puVar8 = PTR_DAT_09f2ee70;
    puVar7 = PTR_DAT_09f2ee58;
    puVar6 = PTR_DAT_09f2ee18;
    puVar4 = PTR_DAT_09f2ee08;
    puVar3 = PTR_DAT_09f2edc8;
    if (lVar14 != 0) {
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)PTR_DAT_09f2eec0,*(undefined8 *)PTR_DAT_09f2edc8);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x28) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)puVar7,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x48) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)puVar11,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x50) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)puVar8,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x68) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)puVar9,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x70) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)puVar10,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x18) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)puVar4,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x30) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)puVar6,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x38) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)PTR_DAT_09f2ee50,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x40) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)PTR_DAT_09f2ee30,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x88) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)PTR_DAT_09f2ef00,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x78) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)PTR_DAT_09f2ee68,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(long *)(puVar2 + 0x80) + 0x20,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)PTR_DAT_09f2ef08,*(undefined8 *)puVar3);
      uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f21c90,0);
      FUN_0744298c(lVar14,uVar12,*(undefined8 *)PTR_DAT_09f2ee38,*(undefined8 *)puVar3);
      plVar16 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
      *plVar16 = lVar14;
      thunk_FUN_044bb4b4(plVar16,lVar14);
      uVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ee00);
      FUN_05bad680(uVar12,8,*(undefined8 *)PTR_DAT_09f2ede0);
      puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
      *puVar13 = uVar12;
      thunk_FUN_044bb4b4(puVar13,uVar12);
      lVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x18) != 0) {
          *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_09f2ef18;
          thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x20));
          if (1 < *(uint *)(lVar14 + 0x18)) {
            *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)PTR_DAT_09f2ee48;
            thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x28));
            if (2 < *(uint *)(lVar14 + 0x18)) {
              *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_09f2eea8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x30));
              if (3 < *(uint *)(lVar14 + 0x18)) {
                *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)PTR_DAT_09f27f70;
                thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x38));
                puVar4 = PTR_DAT_09f2ee28;
                puVar3 = PTR_DAT_09f21428;
                if (4 < *(uint *)(lVar14 + 0x18)) {
                  *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_09f215b8;
                  thunk_FUN_044bb4b4();
                  plVar16 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
                  *plVar16 = lVar14;
                  thunk_FUN_044bb4b4(plVar16,lVar14);
                  plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar3);
                  FUN_079caa98(plVar16,*(undefined8 *)puVar4,0);
                  puVar11 = PTR_DAT_09f2ef10;
                  puVar10 = PTR_DAT_09f2ee98;
                  puVar9 = PTR_DAT_09f2ee90;
                  puVar8 = PTR_DAT_09f2ecd0;
                  puVar7 = PTR_DAT_09f2ecc8;
                  puVar6 = PTR_DAT_09f2ecc0;
                  puVar4 = PTR_DAT_09f22468;
                  puVar3 = PTR_DAT_09f1ea48;
                  if (plVar16 != (long *)0x0) {
                    uVar12 = (**(code **)(*plVar16 + 0x1f8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x200));
                    puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
                    *puVar13 = uVar12;
                    thunk_FUN_044bb4b4(puVar13,uVar12);
                    uVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                    FUN_0799ce68(uVar12,0,*(undefined8 *)puVar8,0);
                    FUN_076dd470(*(undefined8 *)puVar10,*(undefined8 *)puVar9,uVar12);
                    uVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
                    FUN_073ab0a8(uVar12,0,*(undefined8 *)puVar7,0);
                    FUN_04cb4e94(*(undefined8 *)puVar10,*(undefined8 *)puVar11,uVar12,
                                 *(undefined8 *)puVar6);
                    uVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                    FUN_0799ce68(uVar12,0,*(undefined8 *)PTR_DAT_09f2ecd8,0);
                    FUN_076dd470(*(undefined8 *)PTR_DAT_09f2ee10,*(undefined8 *)PTR_DAT_09f2ee20,
                                 uVar12);
                    lVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xc);
                    if (lVar14 != 0) {
                      if (*(int *)(lVar14 + 0x18) != 0) {
                        *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_09f2eea0;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x20));
                        if (1 < *(uint *)(lVar14 + 0x18)) {
                          *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)PTR_DAT_09f2ee40;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x28));
                          if (2 < *(uint *)(lVar14 + 0x18)) {
                            *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_09f2eef8;
                            thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x30));
                            if (3 < *(uint *)(lVar14 + 0x18)) {
                              *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)PTR_DAT_09f2ee78;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x38));
                              if (4 < *(uint *)(lVar14 + 0x18)) {
                                *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_09f2ee60;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x40));
                                if (5 < *(uint *)(lVar14 + 0x18)) {
                                  *(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)PTR_DAT_09f2eec8;
                                  thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x48));
                                  if (6 < *(uint *)(lVar14 + 0x18)) {
                                    *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)PTR_DAT_09f2eeb0
                                    ;
                                    thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x50));
                                    if (7 < *(uint *)(lVar14 + 0x18)) {
                                      *(undefined8 *)(lVar14 + 0x58) =
                                           *(undefined8 *)PTR_DAT_09f2eed8;
                                      thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x58));
                                      if (8 < *(uint *)(lVar14 + 0x18)) {
                                        *(undefined8 *)(lVar14 + 0x60) =
                                             *(undefined8 *)PTR_DAT_09f2eeb8;
                                        thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x60));
                                        if (9 < *(uint *)(lVar14 + 0x18)) {
                                          *(undefined8 *)(lVar14 + 0x68) =
                                               *(undefined8 *)PTR_DAT_09f2eee8;
                                          thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x68));
                                          if (10 < *(uint *)(lVar14 + 0x18)) {
                                            *(undefined8 *)(lVar14 + 0x70) =
                                                 *(undefined8 *)PTR_DAT_09f2ee88;
                                            thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x70));
                                            if (0xb < *(uint *)(lVar14 + 0x18)) {
                                              *(undefined8 *)(lVar14 + 0x78) =
                                                   *(undefined8 *)PTR_DAT_09f2eed0;
                                              thunk_FUN_044bb4b4();
                                              lVar23 = thunk_FUN_04456be0(0);
                                              if ((lVar23 != 0) &&
                                                 (lVar23 = FUN_07a832e8(lVar23,0),
                                                 puVar3 = PTR_DAT_09f2ecb8,
                                                 puVar5 = PTR_DAT_09f2ecb0, lVar23 != 0)) {
                                                uVar22 = *(uint *)(lVar23 + 0x18);
                                                if (0 < (int)uVar22) {
                                                  uVar25 = 0;
                                                  do {
                                                    if (uVar22 <= uVar25) goto LAB_076dd34c;
                                                    plVar16 = *(long **)(lVar23 + (long)(int)uVar25
                                                                                  * 8 + 0x20);
                                                    if (plVar16 == (long *)0x0) {
LAB_076dd338:
                    /* WARNING: Subroutine does not return */
                                                      FUN_04447e44();
                                                    }
                                                    uVar17 = (**(code **)(*plVar16 + 0x338))
                                                                       (plVar16,*(undefined8 *)
                                                                                 (*plVar16 + 0x340))
                                                    ;
                                                    if ((uVar17 & 1) == 0) {
                                                      lVar18 = (**(code **)(*plVar16 + 0x2a8))
                                                                         (plVar16,*(undefined8 *)
                                                                                   (*plVar16 + 0x2b0
                                                                                   ));
                                                      if (lVar18 == 0) goto LAB_076dd338;
                                                      uVar12 = *(undefined8 *)(lVar18 + 0x10);
                                                      if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
                                                        uVar17 = 0;
                                                        uVar24 = *(ulong *)(lVar14 + 0x18) &
                                                                 0xffffffff;
                                                        do {
                                                          if (uVar24 <= uVar17) goto LAB_076dd34c;
                                                          plVar19 = *(long **)(*(long *)(*(long *)
                                                  PTR_DAT_09f259c8 + 0xb8) + 0x30);
                                                  if (plVar19 == (long *)0x0) goto LAB_076dd338;
                                                  uVar24 = (**(code **)(*plVar19 + 0x1c8))
                                                                     (plVar19,uVar12,
                                                                      *(undefined8 *)
                                                                       (lVar14 + 0x20 + uVar17 * 8),
                                                                      1,*(undefined8 *)
                                                                         (*plVar19 + 0x1d0));
                                                  if ((uVar24 & 1) != 0) goto LAB_076dd160;
                                                  uVar17 = uVar17 + 1;
                                                  uVar24 = (ulong)*(uint *)(lVar14 + 0x18);
                                                  } while ((long)uVar17 <
                                                           (long)(int)*(uint *)(lVar14 + 0x18));
                                                  }
                                                  lVar18 = (**(code **)(*plVar16 + 0x268))
                                                                     (plVar16,*(undefined8 *)
                                                                               (*plVar16 + 0x270));
                                                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44();
                                                  }
                                                  uVar22 = *(uint *)(lVar18 + 0x18);
                                                  if (0 < (int)uVar22) {
                                                    uVar26 = 0;
                                                    do {
                                                      if (uVar22 <= uVar26) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_04447e4c();
                                                      }
                                                      plVar16 = *(long **)(lVar18 + (long)(int)
                                                  uVar26 * 8 + 0x20);
                                                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44();
                                                  }
                                                  lVar20 = (**(code **)(*plVar16 + 0x7b8))
                                                                     (plVar16,0x1a,
                                                                      *(undefined8 *)
                                                                       (*plVar16 + 0x7c0));
                                                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44();
                                                  }
                                                  uVar22 = *(uint *)(lVar20 + 0x18);
                                                  if (0 < (int)uVar22) {
                                                    uVar27 = 0;
                                                    do {
                                                      if (uVar22 <= uVar27) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_04447e4c();
                                                      }
                                                      plVar16 = *(long **)(lVar20 + (long)(int)
                                                  uVar27 * 8 + 0x20);
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_044a54b4();
                                                  }
                                                  uVar12 = FUN_07a4ce38(uVar12,0);
                                                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44(uVar12,uVar12);
                                                  }
                                                  lVar21 = (**(code **)(*plVar16 + 0x218))
                                                                     (plVar16,uVar12,0,
                                                                      *(undefined8 *)
                                                                       (*plVar16 + 0x220));
                                                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44();
                                                  }
                                                  if (0 < (int)*(ulong *)(lVar21 + 0x18)) {
                                                    uVar17 = 0;
                                                    uVar24 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
                                                    do {
                                                      if (uVar24 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_04447e4c();
                                                      }
                                                      plVar19 = *(long **)(lVar21 + 0x20 +
                                                                          uVar17 * 8);
                                                      if (plVar19 != (long *)0x0) {
                                                        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                                                        if ((bVar1 <= *(byte *)(*plVar19 + 0x130))
                                                           && (*(long *)(*(long *)(*plVar19 + 200) +
                                                                         (ulong)bVar1 * 8 + -8) ==
                                                               *(long *)puVar3)) {
                                                          FUN_076dd504(plVar19[2],plVar19[3],plVar16
                                                                       ,0,plVar19[4]);
                                                        }
                                                      }
                                                      uVar24 = (ulong)*(uint *)(lVar21 + 0x18);
                                                      uVar17 = uVar17 + 1;
                                                    } while ((long)uVar17 <
                                                             (long)(int)*(uint *)(lVar21 + 0x18));
                                                  }
                                                  uVar22 = *(uint *)(lVar20 + 0x18);
                                                  uVar27 = uVar27 + 1;
                                                  } while ((int)uVar27 < (int)uVar22);
                                                  }
                                                  uVar22 = *(uint *)(lVar18 + 0x18);
                                                  uVar26 = uVar26 + 1;
                                                  } while ((int)uVar26 < (int)uVar22);
                                                  }
                                                  }
LAB_076dd160:
                                                  uVar22 = *(uint *)(lVar23 + 0x18);
                                                  uVar25 = uVar25 + 1;
                                                  } while ((int)uVar25 < (int)uVar22);
                                                }
                                                return;
                                              }
                                              goto LAB_076dd350;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_076dd34c;
                    }
                  }
                  goto LAB_076dd350;
                }
              }
            }
          }
        }
LAB_076dd34c:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
    }
  }
LAB_076dd350:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


