/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SetPanelPosition
ENTRY_POINT: 08a039f4
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SetPanelPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint in_w8;
  long unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x26;
  
  if (10 < in_w8) {
    *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)PTR_DAT_0ac51738;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x70));
    if (0xb < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)PTR_DAT_0ac516b8;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x78));
      if (0xc < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)PTR_DAT_0ac51678;
        thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x80));
        if (0xd < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)PTR_DAT_0ac516c0;
          thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x88));
          if (0xe < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)PTR_DAT_0ac51798;
            thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x90));
            if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
              *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)PTR_DAT_0ac51710;
              thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x98));
              if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)PTR_DAT_0ac516e8;
                thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xa0));
                if (0x11 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)PTR_DAT_0ac51728;
                  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xa8));
                  if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)PTR_DAT_0ac516d0;
                    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xb0));
                    if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)PTR_DAT_0ac51690;
                      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xb8));
                      if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)PTR_DAT_0ac51778;
                        thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xc0));
                        if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)PTR_DAT_0ac517a0;
                          thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 200));
                          if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)PTR_DAT_0ac51740;
                            thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xd0));
                            if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0xd8) = *(undefined8 *)PTR_DAT_0ac516a8;
                              thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xd8));
                              if (0x18 < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)PTR_DAT_0ac516f0;
                                thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xe0));
                                if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0xe8) =
                                       *(undefined8 *)PTR_DAT_0ac51750;
                                  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xe8));
                                  if (0x1a < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0xf0) =
                                         *(undefined8 *)PTR_DAT_0ac51720;
                                    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xf0));
                                    if (0x1b < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0xf8) =
                                           *(undefined8 *)PTR_DAT_0ac51770;
                                      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xf8));
                                      if (0x1c < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x100) =
                                             *(undefined8 *)PTR_DAT_0ac51768;
                                        thunk_FUN_049ee3d8(unaff_x19 + 0x100);
                                        if (0x1d < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x108) =
                                               *(undefined8 *)PTR_DAT_0ac51698;
                                          thunk_FUN_049ee3d8(unaff_x19 + 0x108);
                                          if (0x1e < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x110) =
                                                 *(undefined8 *)PTR_DAT_0ac51658;
                                            thunk_FUN_049ee3d8(unaff_x19 + 0x110);
                                            if ((*(uint *)(unaff_x19 + 0x18) & 0xffffffe0) != 0) {
                                              *(undefined8 *)(unaff_x19 + 0x118) =
                                                   *(undefined8 *)PTR_DAT_0ac51700;
                                              thunk_FUN_049ee3d8(unaff_x19 + 0x118);
                                              if (0x20 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x120) =
                                                     *(undefined8 *)PTR_DAT_0ac51670;
                                                thunk_FUN_049ee3d8(unaff_x19 + 0x120);
                                                if (0x21 < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x128) =
                                                       *(undefined8 *)PTR_DAT_0ac51790;
                                                  thunk_FUN_049ee3d8(unaff_x19 + 0x128);
                                                  if (0x22 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x130) =
                                                         *(undefined8 *)PTR_DAT_0ac51708;
                                                    thunk_FUN_049ee3d8(unaff_x19 + 0x130);
                                                    if (0x23 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x138) =
                                                           *(undefined8 *)PTR_DAT_0ac51730;
                                                      thunk_FUN_049ee3d8(unaff_x19 + 0x138);
                                                      if (0x24 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x140) =
                                                             *(undefined8 *)PTR_DAT_0ac51718;
                                                        thunk_FUN_049ee3d8(unaff_x19 + 0x140);
                                                        puVar3 = PTR_DAT_0ac4ce00;
                                                        puVar2 = PTR_DAT_0ac486f0;
                                                        puVar1 = PTR_DAT_0ac0f9e0;
                                                        if (0x25 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x148) =
                                                               *(undefined8 *)PTR_DAT_0ac516a0;
                                                          thunk_FUN_049ee3d8(unaff_x19 + 0x148);
                                                          uVar6 = FUN_08bda330();
                                                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0)
                                                          {
                                                            thunk_FUN_049a583c(*(long *)puVar1);
                                                          }
                                                          uVar6 = FUN_08cd2c20(uVar6,0);
                                                          lVar7 = FUN_04947fd0(*(undefined8 *)puVar2
                                                                               ,1);
                                                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0)
                                                          {
                                                            thunk_FUN_049a583c(*(long *)puVar3);
                                                          }
                                                          if (DAT_0b32ba83 == '\0') {
                                                            FUN_04947ee4(PTR_DAT_0ac4ce00);
                                                            DAT_0b32ba83 = '\x01';
                                                          }
                                                          lVar8 = *(long *)puVar3;
                                                          if (*(int *)(lVar8 + 0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                            lVar8 = *(long *)puVar3;
                                                          }
                                                          puVar3 = PTR_DAT_0ac51650;
                                                          puVar2 = PTR_DAT_0ac4e088;
                                                          puVar1 = PTR_DAT_0ac48700;
                                                          if (lVar7 == 0) {
LAB_08a05774:
                    /* WARNING: Subroutine does not return */
                                                            FUN_0494818c();
                                                          }
                                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar7 + 0x20) =
                                                                 **(undefined8 **)(lVar8 + 0xb8);
                                                            thunk_FUN_049ee3d8();
                                                            lVar8 = FUN_04947fd0(*(undefined8 *)
                                                                                  puVar1,0x19);
                                                            uVar11 = *(undefined8 *)puVar3;
                                                            if (*(int *)(*(long *)(PTR_DAT_0ac09758
                                                                                  + 0xe0) + 0xe4) ==
                                                                0) {
                                                              thunk_FUN_049a583c(*(long *)(
                                                  PTR_DAT_0ac09758 + 0xe0));
                                                  }
                                                  uVar11 = FUN_08d895f0(uVar11,0);
                                                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                    thunk_FUN_049a583c(*(long *)puVar2);
                                                  }
                                                  if (DAT_0b32c208 == '\0') {
                                                    FUN_04947ee4(PTR_DAT_0ac4e088);
                                                    DAT_0b32c208 = '\x01';
                                                  }
                                                  lVar9 = *(long *)puVar2;
                                                  if (*(int *)(lVar9 + 0xe4) == 0) {
                                                    thunk_FUN_049a583c();
                                                    lVar9 = *(long *)puVar2;
                                                  }
                                                  uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                  lVar9 = FUN_04947fd0(*unaff_x26,3);
                                                  puVar1 = PTR_DAT_0ac50328;
                                                  if (lVar9 == 0) goto LAB_08a05774;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_0ac50328;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar9 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_0ac50158;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (lVar9 + 0x28));
                                                      puVar2 = PTR_DAT_0ac48708;
                                                      if (2 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_0ac50508;
                                                        thunk_FUN_049ee3d8();
                                                        uVar10 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,
                                                                     0,0);
                                                        puVar4 = PTR_DAT_0ac51598;
                                                        puVar3 = PTR_DAT_0ac4e090;
                                                        if (lVar8 == 0) goto LAB_08a05774;
                                                        if (*(int *)(lVar8 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar8 + 0x20) = uVar10;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar8 + 0x20),uVar10);
                                                          uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                 puVar4,0);
                                                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0)
                                                          {
                                                            thunk_FUN_049a583c(*(long *)puVar3);
                                                          }
                                                          if (DAT_0b32c209 == '\0') {
                                                            FUN_04947ee4(PTR_DAT_0ac4e090);
                                                            DAT_0b32c209 = '\x01';
                                                          }
                                                          lVar9 = *(long *)puVar3;
                                                          if (*(int *)(lVar9 + 0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                            lVar9 = *(long *)puVar3;
                                                          }
                                                          uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                          lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                          if (lVar9 == 0) goto LAB_08a05774;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar9 + 0x20) =
                                                                 *(undefined8 *)puVar1;
                                                            thunk_FUN_049ee3d8();
                                                            uVar10 = thunk_FUN_04983f60(*(undefined8
                                                                                          *)puVar2);
                                                            FUN_0894403c(uVar10,uVar11,uVar12,lVar9,
                                                                         0,0,0,0);
                                                            puVar4 = PTR_DAT_0ac51618;
                                                            puVar3 = PTR_DAT_0ac4e098;
                                                            if ((*(uint *)(lVar8 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar8 + 0x28) = uVar10
                                                              ;
                                                              thunk_FUN_049ee3d8((undefined8 *)
                                                                                 (lVar8 + 0x28),
                                                                                 uVar10);
                                                              uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                     puVar4,0);
                                                              if (*(int *)(*(long *)puVar3 + 0xe4)
                                                                  == 0) {
                                                                thunk_FUN_049a583c(*(long *)puVar3);
                                                              }
                                                              if (DAT_0b32c20a == '\0') {
                                                                FUN_04947ee4(PTR_DAT_0ac4e098);
                                                                DAT_0b32c20a = '\x01';
                                                              }
                                                              lVar9 = *(long *)puVar3;
                                                              if (*(int *)(lVar9 + 0xe4) == 0) {
                                                                thunk_FUN_049a583c();
                                                                lVar9 = *(long *)puVar3;
                                                              }
                                                              uVar10 = **(undefined8 **)
                                                                         (lVar9 + 0xb8);
                                                              uVar12 = thunk_FUN_04983f60(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0894403c(uVar12,uVar11,uVar10,0,0,0,0,0);
                                                  puVar4 = PTR_DAT_0ac51610;
                                                  puVar3 = PTR_DAT_0ac4e0a0;
                                                  if (2 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x30) = uVar12;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x30),
                                                                       uVar12);
                                                    uVar11 = FUN_08d895f0(*(undefined8 *)puVar4,0);
                                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar3);
                                                    }
                                                    if (DAT_0b32c20b == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e0a0);
                                                      DAT_0b32c20b = '\x01';
                                                    }
                                                    lVar9 = *(long *)puVar3;
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar9 = *(long *)puVar3;
                                                    }
                                                    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                    lVar9 = FUN_04947fd0(*unaff_x26,2);
                                                    if (lVar9 == 0) goto LAB_08a05774;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)PTR_DAT_0ac1b280;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (lVar9 + 0x20));
                                                      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar9 + 0x28) =
                                                             *(undefined8 *)PTR_DAT_0ac500b0;
                                                        thunk_FUN_049ee3d8();
                                                        uVar10 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,
                                                                     0,0);
                                                        puVar4 = PTR_DAT_0ac51630;
                                                        puVar3 = PTR_DAT_0ac4e0a8;
                                                        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar8 + 0x38) = uVar10;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar8 + 0x38),uVar10);
                                                          uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                 puVar4,0);
                                                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0)
                                                          {
                                                            thunk_FUN_049a583c(*(long *)puVar3);
                                                          }
                                                          if (DAT_0b32c20c == '\0') {
                                                            FUN_04947ee4(PTR_DAT_0ac4e0a8);
                                                            DAT_0b32c20c = '\x01';
                                                          }
                                                          lVar9 = *(long *)puVar3;
                                                          if (*(int *)(lVar9 + 0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                            lVar9 = *(long *)puVar3;
                                                          }
                                                          uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                          lVar9 = FUN_04947fd0(*unaff_x26,4);
                                                          if (lVar9 == 0) goto LAB_08a05774;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar9 + 0x20) =
                                                                 *(undefined8 *)PTR_DAT_0ac50410;
                                                            thunk_FUN_049ee3d8((undefined8 *)
                                                                               (lVar9 + 0x20));
                                                            if ((*(uint *)(lVar9 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar9 + 0x28) =
                                                                   *(undefined8 *)PTR_DAT_0ac50238;
                                                              thunk_FUN_049ee3d8((undefined8 *)
                                                                                 (lVar9 + 0x28));
                                                              if (2 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x30) =
                                                                     *(undefined8 *)PTR_DAT_0ac50288
                                                                ;
                                                                thunk_FUN_049ee3d8((undefined8 *)
                                                                                   (lVar9 + 0x30));
                                                                if ((*(uint *)(lVar9 + 0x18) &
                                                                    0xfffffffc) != 0) {
                                                                  *(undefined8 *)(lVar9 + 0x38) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_0ac50100;
                                                                  thunk_FUN_049ee3d8();
                                                                  uVar10 = thunk_FUN_04983f60(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,0);
                                                  puVar4 = PTR_DAT_0ac515a0;
                                                  puVar3 = PTR_DAT_0ac4e0b0;
                                                  if (4 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x40) = uVar10;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x40),
                                                                       uVar10);
                                                    uVar11 = FUN_08d895f0(*(undefined8 *)puVar4,0);
                                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar3);
                                                    }
                                                    if (DAT_0b32c20d == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e0b0);
                                                      DAT_0b32c20d = '\x01';
                                                    }
                                                    lVar9 = *(long *)puVar3;
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar9 = *(long *)puVar3;
                                                    }
                                                    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                    lVar9 = FUN_04947fd0(*unaff_x26,2);
                                                    if (lVar9 == 0) goto LAB_08a05774;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)PTR_DAT_0ac0a398;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (lVar9 + 0x20));
                                                      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar9 + 0x28) =
                                                             *(undefined8 *)PTR_DAT_0ac1af18;
                                                        thunk_FUN_049ee3d8();
                                                        uVar10 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,
                                                                     0,0);
                                                        puVar4 = PTR_DAT_0ac51590;
                                                        puVar3 = PTR_DAT_0ac4e0b8;
                                                        if (5 < *(uint *)(lVar8 + 0x18)) {
                                                          *(undefined8 *)(lVar8 + 0x48) = uVar10;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar8 + 0x48),uVar10);
                                                          uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                 puVar4,0);
                                                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0)
                                                          {
                                                            thunk_FUN_049a583c(*(long *)puVar3);
                                                          }
                                                          if (DAT_0b32c20e == '\0') {
                                                            FUN_04947ee4(PTR_DAT_0ac4e0b8);
                                                            DAT_0b32c20e = '\x01';
                                                          }
                                                          lVar9 = *(long *)puVar3;
                                                          if (*(int *)(lVar9 + 0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                            lVar9 = *(long *)puVar3;
                                                          }
                                                          uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                          lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                          if (lVar9 == 0) goto LAB_08a05774;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar9 + 0x20) =
                                                                 *(undefined8 *)puVar1;
                                                            thunk_FUN_049ee3d8();
                                                            uVar10 = thunk_FUN_04983f60(*(undefined8
                                                                                          *)puVar2);
                                                            FUN_0894403c(uVar10,uVar11,uVar12,lVar9,
                                                                         0,0,0,0);
                                                            puVar4 = PTR_DAT_0ac515b0;
                                                            puVar3 = PTR_DAT_0ac4e0c8;
                                                            if (6 < *(uint *)(lVar8 + 0x18)) {
                                                              *(undefined8 *)(lVar8 + 0x50) = uVar10
                                                              ;
                                                              thunk_FUN_049ee3d8((undefined8 *)
                                                                                 (lVar8 + 0x50),
                                                                                 uVar10);
                                                              uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                     puVar4,0);
                                                              if (*(int *)(*(long *)puVar3 + 0xe4)
                                                                  == 0) {
                                                                thunk_FUN_049a583c(*(long *)puVar3);
                                                              }
                                                              if (DAT_0b32c20f == '\0') {
                                                                FUN_04947ee4(PTR_DAT_0ac4e0c8);
                                                                DAT_0b32c20f = '\x01';
                                                              }
                                                              lVar9 = *(long *)puVar3;
                                                              if (*(int *)(lVar9 + 0xe4) == 0) {
                                                                thunk_FUN_049a583c();
                                                                lVar9 = *(long *)puVar3;
                                                              }
                                                              uVar12 = **(undefined8 **)
                                                                         (lVar9 + 0xb8);
                                                              lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                              if (lVar9 == 0) goto LAB_08a05774;
                                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                                *(undefined8 *)(lVar9 + 0x20) =
                                                                     *(undefined8 *)puVar1;
                                                                thunk_FUN_049ee3d8();
                                                                uVar10 = thunk_FUN_04983f60(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,0);
                                                  puVar4 = PTR_DAT_0ac515b8;
                                                  puVar3 = PTR_DAT_0ac4e0d0;
                                                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffff8) != 0) {
                                                    *(undefined8 *)(lVar8 + 0x58) = uVar10;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x58),
                                                                       uVar10);
                                                    uVar11 = FUN_08d895f0(*(undefined8 *)puVar4,0);
                                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar3);
                                                    }
                                                    if (DAT_0b32c210 == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e0d0);
                                                      DAT_0b32c210 = '\x01';
                                                    }
                                                    lVar9 = *(long *)puVar3;
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar9 = *(long *)puVar3;
                                                    }
                                                    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                    lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                    if (lVar9 == 0) goto LAB_08a05774;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)puVar1;
                                                      thunk_FUN_049ee3d8();
                                                      uVar10 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,
                                                                   0);
                                                      puVar4 = PTR_DAT_0ac515f0;
                                                      puVar3 = PTR_DAT_0ac4e0d8;
                                                      if (8 < *(uint *)(lVar8 + 0x18)) {
                                                        *(undefined8 *)(lVar8 + 0x60) = uVar10;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar8 + 0x60),uVar10);
                                                        uVar11 = FUN_08d895f0(*(undefined8 *)puVar4,
                                                                              0);
                                                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c(*(long *)puVar3);
                                                        }
                                                        if (DAT_0b32c211 == '\0') {
                                                          FUN_04947ee4(PTR_DAT_0ac4e0d8);
                                                          DAT_0b32c211 = '\x01';
                                                        }
                                                        lVar9 = *(long *)puVar3;
                                                        if (*(int *)(lVar9 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                          lVar9 = *(long *)puVar3;
                                                        }
                                                        uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                        lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                        if (lVar9 == 0) goto LAB_08a05774;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar9 + 0x20) =
                                                               *(undefined8 *)puVar1;
                                                          thunk_FUN_049ee3d8();
                                                          uVar10 = thunk_FUN_04983f60(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,
                                                                       0,0,0);
                                                          puVar4 = PTR_DAT_0ac515e8;
                                                          puVar3 = PTR_DAT_0ac4e0e0;
                                                          if (9 < *(uint *)(lVar8 + 0x18)) {
                                                            *(undefined8 *)(lVar8 + 0x68) = uVar10;
                                                            thunk_FUN_049ee3d8((undefined8 *)
                                                                               (lVar8 + 0x68),uVar10
                                                                              );
                                                            uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                   puVar4,0);
                                                            if (*(int *)(*(long *)puVar3 + 0xe4) ==
                                                                0) {
                                                              thunk_FUN_049a583c(*(long *)puVar3);
                                                            }
                                                            if (DAT_0b32c212 == '\0') {
                                                              FUN_04947ee4(PTR_DAT_0ac4e0e0);
                                                              DAT_0b32c212 = '\x01';
                                                            }
                                                            lVar9 = *(long *)puVar3;
                                                            if (*(int *)(lVar9 + 0xe4) == 0) {
                                                              thunk_FUN_049a583c();
                                                              lVar9 = *(long *)puVar3;
                                                            }
                                                            uVar12 = **(undefined8 **)(lVar9 + 0xb8)
                                                            ;
                                                            lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                            if (lVar9 == 0) goto LAB_08a05774;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar9 + 0x20) =
                                                                   *(undefined8 *)puVar1;
                                                              thunk_FUN_049ee3d8();
                                                              uVar10 = thunk_FUN_04983f60(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,0);
                                                  puVar4 = PTR_DAT_0ac515c8;
                                                  puVar3 = PTR_DAT_0ac4e0e8;
                                                  if (10 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x70) = uVar10;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x70),
                                                                       uVar10);
                                                    uVar11 = FUN_08d895f0(*(undefined8 *)puVar4,0);
                                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar3);
                                                    }
                                                    if (DAT_0b32c213 == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e0e8);
                                                      DAT_0b32c213 = '\x01';
                                                    }
                                                    lVar9 = *(long *)puVar3;
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar9 = *(long *)puVar3;
                                                    }
                                                    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                    lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                    if (lVar9 == 0) goto LAB_08a05774;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)puVar1;
                                                      thunk_FUN_049ee3d8();
                                                      uVar10 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,
                                                                   0);
                                                      puVar4 = PTR_DAT_0ac515e0;
                                                      puVar3 = PTR_DAT_0ac4e0f0;
                                                      if (0xb < *(uint *)(lVar8 + 0x18)) {
                                                        *(undefined8 *)(lVar8 + 0x78) = uVar10;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar8 + 0x78),uVar10);
                                                        uVar11 = FUN_08d895f0(*(undefined8 *)puVar4,
                                                                              0);
                                                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c(*(long *)puVar3);
                                                        }
                                                        if (DAT_0b32c214 == '\0') {
                                                          FUN_04947ee4(PTR_DAT_0ac4e0f0);
                                                          DAT_0b32c214 = '\x01';
                                                        }
                                                        lVar9 = *(long *)puVar3;
                                                        if (*(int *)(lVar9 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                          lVar9 = *(long *)puVar3;
                                                        }
                                                        uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                        lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                        if (lVar9 == 0) goto LAB_08a05774;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar9 + 0x20) =
                                                               *(undefined8 *)puVar1;
                                                          thunk_FUN_049ee3d8();
                                                          uVar10 = thunk_FUN_04983f60(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,
                                                                       0,0,0);
                                                          puVar4 = PTR_DAT_0ac515d8;
                                                          puVar3 = PTR_DAT_0ac4e0f8;
                                                          if (0xc < *(uint *)(lVar8 + 0x18)) {
                                                            *(undefined8 *)(lVar8 + 0x80) = uVar10;
                                                            thunk_FUN_049ee3d8((undefined8 *)
                                                                               (lVar8 + 0x80),uVar10
                                                                              );
                                                            uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                   puVar4,0);
                                                            if (*(int *)(*(long *)puVar3 + 0xe4) ==
                                                                0) {
                                                              thunk_FUN_049a583c(*(long *)puVar3);
                                                            }
                                                            if (DAT_0b32c215 == '\0') {
                                                              FUN_04947ee4(PTR_DAT_0ac4e0f8);
                                                              DAT_0b32c215 = '\x01';
                                                            }
                                                            lVar9 = *(long *)puVar3;
                                                            if (*(int *)(lVar9 + 0xe4) == 0) {
                                                              thunk_FUN_049a583c();
                                                              lVar9 = *(long *)puVar3;
                                                            }
                                                            uVar12 = **(undefined8 **)(lVar9 + 0xb8)
                                                            ;
                                                            lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                            if (lVar9 == 0) goto LAB_08a05774;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar9 + 0x20) =
                                                                   *(undefined8 *)puVar1;
                                                              thunk_FUN_049ee3d8();
                                                              uVar10 = thunk_FUN_04983f60(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,0);
                                                  puVar4 = PTR_DAT_0ac515d0;
                                                  puVar3 = PTR_DAT_0ac4e100;
                                                  if (0xd < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x88) = uVar10;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x88),
                                                                       uVar10);
                                                    uVar11 = FUN_08d895f0(*(undefined8 *)puVar4,0);
                                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar3);
                                                    }
                                                    if (DAT_0b32c216 == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e100);
                                                      DAT_0b32c216 = '\x01';
                                                    }
                                                    lVar9 = *(long *)puVar3;
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar9 = *(long *)puVar3;
                                                    }
                                                    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                    lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                    if (lVar9 == 0) goto LAB_08a05774;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)puVar1;
                                                      thunk_FUN_049ee3d8();
                                                      uVar10 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,
                                                                   0);
                                                      puVar4 = PTR_DAT_0ac515f8;
                                                      puVar3 = PTR_DAT_0ac4e108;
                                                      if (0xe < *(uint *)(lVar8 + 0x18)) {
                                                        *(undefined8 *)(lVar8 + 0x90) = uVar10;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar8 + 0x90),uVar10);
                                                        uVar11 = FUN_08d895f0(*(undefined8 *)puVar4,
                                                                              0);
                                                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c(*(long *)puVar3);
                                                        }
                                                        if (DAT_0b32c217 == '\0') {
                                                          FUN_04947ee4(PTR_DAT_0ac4e108);
                                                          DAT_0b32c217 = '\x01';
                                                        }
                                                        lVar9 = *(long *)puVar3;
                                                        if (*(int *)(lVar9 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                          lVar9 = *(long *)puVar3;
                                                        }
                                                        uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                        lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                        if (lVar9 == 0) goto LAB_08a05774;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar9 + 0x20) =
                                                               *(undefined8 *)puVar1;
                                                          thunk_FUN_049ee3d8();
                                                          uVar10 = thunk_FUN_04983f60(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,
                                                                       0,0,0);
                                                          puVar4 = PTR_DAT_0ac515c0;
                                                          puVar3 = PTR_DAT_0ac4e110;
                                                          if ((*(uint *)(lVar8 + 0x18) & 0xfffffff0)
                                                              != 0) {
                                                            *(undefined8 *)(lVar8 + 0x98) = uVar10;
                                                            thunk_FUN_049ee3d8((undefined8 *)
                                                                               (lVar8 + 0x98),uVar10
                                                                              );
                                                            uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                   puVar4,0);
                                                            if (*(int *)(*(long *)puVar3 + 0xe4) ==
                                                                0) {
                                                              thunk_FUN_049a583c(*(long *)puVar3);
                                                            }
                                                            if (DAT_0b32c218 == '\0') {
                                                              FUN_04947ee4(PTR_DAT_0ac4e110);
                                                              DAT_0b32c218 = '\x01';
                                                            }
                                                            lVar9 = *(long *)puVar3;
                                                            if (*(int *)(lVar9 + 0xe4) == 0) {
                                                              thunk_FUN_049a583c();
                                                              lVar9 = *(long *)puVar3;
                                                            }
                                                            uVar12 = **(undefined8 **)(lVar9 + 0xb8)
                                                            ;
                                                            lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                            if (lVar9 == 0) goto LAB_08a05774;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar9 + 0x20) =
                                                                   *(undefined8 *)puVar1;
                                                              thunk_FUN_049ee3d8();
                                                              uVar10 = thunk_FUN_04983f60(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,0);
                                                  puVar3 = PTR_DAT_0ac51638;
                                                  puVar1 = PTR_DAT_0ac4e118;
                                                  if (0x10 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xa0) = uVar10;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0xa0),
                                                                       uVar10);
                                                    uVar11 = FUN_08d895f0(*(undefined8 *)puVar3,0);
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar1);
                                                    }
                                                    if (DAT_0b32c219 == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e118);
                                                      DAT_0b32c219 = '\x01';
                                                    }
                                                    lVar9 = *(long *)puVar1;
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar9 = *(long *)puVar1;
                                                    }
                                                    uVar10 = **(undefined8 **)(lVar9 + 0xb8);
                                                    uVar12 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_0894403c(uVar12,uVar11,uVar10,0,0,0,0,0);
                                                    puVar3 = PTR_DAT_0ac51640;
                                                    puVar1 = PTR_DAT_0ac4e120;
                                                    if (0x11 < *(uint *)(lVar8 + 0x18)) {
                                                      *(undefined8 *)(lVar8 + 0xa8) = uVar12;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (lVar8 + 0xa8),uVar12);
                                                      uVar11 = FUN_08d895f0(*(undefined8 *)puVar3,0)
                                                      ;
                                                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                        thunk_FUN_049a583c(*(long *)puVar1);
                                                      }
                                                      if (DAT_0b32c21a == '\0') {
                                                        FUN_04947ee4(PTR_DAT_0ac4e120);
                                                        DAT_0b32c21a = '\x01';
                                                      }
                                                      lVar9 = *(long *)puVar1;
                                                      if (*(int *)(lVar9 + 0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                        lVar9 = *(long *)puVar1;
                                                      }
                                                      uVar10 = **(undefined8 **)(lVar9 + 0xb8);
                                                      uVar12 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_0894403c(uVar12,uVar11,uVar10,0,0,0,0,0);
                                                      puVar3 = PTR_DAT_0ac51620;
                                                      puVar1 = PTR_DAT_0ac4e128;
                                                      if (0x12 < *(uint *)(lVar8 + 0x18)) {
                                                        *(undefined8 *)(lVar8 + 0xb0) = uVar12;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar8 + 0xb0),uVar12);
                                                        uVar11 = FUN_08d895f0(*(undefined8 *)puVar3,
                                                                              0);
                                                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c(*(long *)puVar1);
                                                        }
                                                        if (DAT_0b32c21b == '\0') {
                                                          FUN_04947ee4(PTR_DAT_0ac4e128);
                                                          DAT_0b32c21b = '\x01';
                                                        }
                                                        lVar9 = *(long *)puVar1;
                                                        if (*(int *)(lVar9 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                          lVar9 = *(long *)puVar1;
                                                        }
                                                        uVar10 = **(undefined8 **)(lVar9 + 0xb8);
                                                        uVar12 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_0894403c(uVar12,uVar11,uVar10,0,0,0,0,0)
                                                        ;
                                                        puVar3 = PTR_DAT_0ac51628;
                                                        puVar1 = PTR_DAT_0ac4e130;
                                                        if (0x13 < *(uint *)(lVar8 + 0x18)) {
                                                          *(undefined8 *)(lVar8 + 0xb8) = uVar12;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar8 + 0xb8),uVar12);
                                                          uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                 puVar3,0);
                                                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0)
                                                          {
                                                            thunk_FUN_049a583c(*(long *)puVar1);
                                                          }
                                                          if (DAT_0b32c21c == '\0') {
                                                            FUN_04947ee4(PTR_DAT_0ac4e130);
                                                            DAT_0b32c21c = '\x01';
                                                          }
                                                          lVar9 = *(long *)puVar1;
                                                          if (*(int *)(lVar9 + 0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                            lVar9 = *(long *)puVar1;
                                                          }
                                                          uVar10 = **(undefined8 **)(lVar9 + 0xb8);
                                                          uVar12 = thunk_FUN_04983f60(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_0894403c(uVar12,uVar11,uVar10,0,0,0,0,
                                                                       0);
                                                          puVar3 = PTR_DAT_0ac51600;
                                                          puVar1 = PTR_DAT_0ac4e138;
                                                          if (0x14 < *(uint *)(lVar8 + 0x18)) {
                                                            *(undefined8 *)(lVar8 + 0xc0) = uVar12;
                                                            thunk_FUN_049ee3d8((undefined8 *)
                                                                               (lVar8 + 0xc0),uVar12
                                                                              );
                                                            uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                   puVar3,0);
                                                            if (*(int *)(*(long *)puVar1 + 0xe4) ==
                                                                0) {
                                                              thunk_FUN_049a583c(*(long *)puVar1);
                                                            }
                                                            if (DAT_0b32c21d == '\0') {
                                                              FUN_04947ee4(PTR_DAT_0ac4e138);
                                                              DAT_0b32c21d = '\x01';
                                                            }
                                                            lVar9 = *(long *)puVar1;
                                                            if (*(int *)(lVar9 + 0xe4) == 0) {
                                                              thunk_FUN_049a583c();
                                                              lVar9 = *(long *)puVar1;
                                                            }
                                                            uVar12 = **(undefined8 **)(lVar9 + 0xb8)
                                                            ;
                                                            lVar9 = FUN_04947fd0(*unaff_x26,3);
                                                            puVar1 = PTR_DAT_0ac51680;
                                                            if (lVar9 == 0) goto LAB_08a05774;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar9 + 0x20) =
                                                                   *(undefined8 *)PTR_DAT_0ac51680;
                                                              thunk_FUN_049ee3d8((undefined8 *)
                                                                                 (lVar9 + 0x20));
                                                              puVar3 = PTR_DAT_0ac51788;
                                                              if ((*(uint *)(lVar9 + 0x18) &
                                                                  0xfffffffe) != 0) {
                                                                *(undefined8 *)(lVar9 + 0x28) =
                                                                     *(undefined8 *)PTR_DAT_0ac51788
                                                                ;
                                                                thunk_FUN_049ee3d8((undefined8 *)
                                                                                   (lVar9 + 0x28));
                                                                if (2 < *(uint *)(lVar9 + 0x18)) {
                                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_0ac516e0;
                                                                  thunk_FUN_049ee3d8();
                                                                  uVar10 = thunk_FUN_04983f60(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,0);
                                                  puVar5 = PTR_DAT_0ac51608;
                                                  puVar4 = PTR_DAT_0ac4e140;
                                                  if (0x15 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 200) = uVar10;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 200),
                                                                       uVar10);
                                                    uVar11 = FUN_08d895f0(*(undefined8 *)puVar5,0);
                                                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar4);
                                                    }
                                                    if (DAT_0b32c21e == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e140);
                                                      DAT_0b32c21e = '\x01';
                                                    }
                                                    lVar9 = *(long *)puVar4;
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar9 = *(long *)puVar4;
                                                    }
                                                    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                    lVar9 = FUN_04947fd0(*unaff_x26,2);
                                                    if (lVar9 == 0) goto LAB_08a05774;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)puVar1;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (lVar9 + 0x20));
                                                      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar9 + 0x28) =
                                                             *(undefined8 *)puVar3;
                                                        thunk_FUN_049ee3d8();
                                                        uVar10 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,
                                                                     0,0);
                                                        puVar3 = PTR_DAT_0ac515a8;
                                                        puVar1 = PTR_DAT_0ac4e0c0;
                                                        if (0x16 < *(uint *)(lVar8 + 0x18)) {
                                                          *(undefined8 *)(lVar8 + 0xd0) = uVar10;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar8 + 0xd0),uVar10);
                                                          uVar11 = FUN_08d895f0(*(undefined8 *)
                                                                                 puVar3,0);
                                                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0)
                                                          {
                                                            thunk_FUN_049a583c(*(long *)puVar1);
                                                          }
                                                          if (DAT_0b32c21f == '\0') {
                                                            FUN_04947ee4(PTR_DAT_0ac4e0c0);
                                                            DAT_0b32c21f = '\x01';
                                                          }
                                                          lVar9 = *(long *)puVar1;
                                                          if (*(int *)(lVar9 + 0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                            lVar9 = *(long *)puVar1;
                                                          }
                                                          uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                          lVar9 = FUN_04947fd0(*unaff_x26,2);
                                                          if (lVar9 == 0) goto LAB_08a05774;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar9 + 0x20) =
                                                                 *(undefined8 *)PTR_DAT_0ac1b680;
                                                            thunk_FUN_049ee3d8((undefined8 *)
                                                                               (lVar9 + 0x20));
                                                            if ((*(uint *)(lVar9 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar9 + 0x28) =
                                                                   *(undefined8 *)PTR_DAT_0ac1b678;
                                                              thunk_FUN_049ee3d8();
                                                              uVar10 = thunk_FUN_04983f60(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,0);
                                                  puVar3 = PTR_DAT_0ac51648;
                                                  puVar1 = PTR_DAT_0ac4e080;
                                                  if (0x17 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xd8) = uVar10;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0xd8),
                                                                       uVar10);
                                                    uVar11 = FUN_08d895f0(*(undefined8 *)puVar3,0);
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar1);
                                                    }
                                                    if (DAT_0b32c220 == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e080);
                                                      DAT_0b32c220 = '\x01';
                                                    }
                                                    lVar9 = *(long *)puVar1;
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar9 = *(long *)puVar1;
                                                    }
                                                    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                                    lVar9 = FUN_04947fd0(*unaff_x26,1);
                                                    if (lVar9 == 0) goto LAB_08a05774;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)PTR_DAT_0ac51748;
                                                      thunk_FUN_049ee3d8();
                                                      uVar10 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_0894403c(uVar10,uVar11,uVar12,lVar9,0,0,0,
                                                                   0);
                                                      puVar3 = PTR_DAT_0ac4d610;
                                                      puVar1 = PTR_DAT_0ac486f8;
                                                      if (0x18 < *(uint *)(lVar8 + 0x18)) {
                                                        *(undefined8 *)(lVar8 + 0xe0) = uVar10;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar8 + 0xe0),uVar10);
                                                        uVar11 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                     puVar2);
                                                        Haptics_Tools_Interpolate__Cubic
                                                                  (uVar11,0,0,lVar8,0);
                                                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                        }
                                                        uVar6 = FUN_08941a14(uVar6,lVar7,uVar11,0);
                                                        **(undefined8 **)(*(long *)puVar3 + 0xb8) =
                                                             uVar6;
                                                        thunk_FUN_049ee3d8(*(undefined8 *)
                                                                            (*(long *)puVar3 + 0xb8)
                                                                           ,uVar6);
                                                        return;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


