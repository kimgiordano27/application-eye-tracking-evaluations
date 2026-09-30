/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$get_Counter
ENTRY_POINT: 08a04094
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__get_Counter(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x21;
  long *unaff_x23;
  undefined8 uVar8;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c(param_1);
  }
  if (DAT_0b32c209 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac4e090);
    DAT_0b32c209 = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar5 = FUN_04947fd0(*unaff_x26,1);
  if (lVar5 == 0) goto LAB_08a05774;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = *unaff_x28;
    thunk_FUN_049ee3d8();
    uVar6 = thunk_FUN_04983f60(*unaff_x27);
    FUN_0894403c();
    puVar2 = PTR_DAT_0ac51618;
    puVar1 = PTR_DAT_0ac4e098;
    if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(unaff_x21 + 0x28) = uVar6;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x28),uVar6);
      uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)puVar1);
      }
      if (DAT_0b32c20a == '\0') {
        FUN_04947ee4(PTR_DAT_0ac4e098);
        DAT_0b32c20a = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      uVar7 = thunk_FUN_04983f60(*unaff_x27);
      FUN_0894403c(uVar7,uVar6,uVar8,0,0,0,0,0);
      puVar2 = PTR_DAT_0ac51610;
      puVar1 = PTR_DAT_0ac4e0a0;
      if (2 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x30) = uVar7;
        thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x30),uVar7);
        uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)puVar1);
        }
        if (DAT_0b32c20b == '\0') {
          FUN_04947ee4(PTR_DAT_0ac4e0a0);
          DAT_0b32c20b = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar5 = *(long *)puVar1;
        }
        uVar7 = **(undefined8 **)(lVar5 + 0xb8);
        lVar5 = FUN_04947fd0(*unaff_x26,2);
        if (lVar5 == 0) goto LAB_08a05774;
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_0ac1b280;
          thunk_FUN_049ee3d8((undefined8 *)(lVar5 + 0x20));
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_0ac500b0;
            thunk_FUN_049ee3d8();
            uVar8 = thunk_FUN_04983f60(*unaff_x27);
            FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
            puVar2 = PTR_DAT_0ac51630;
            puVar1 = PTR_DAT_0ac4e0a8;
            if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(unaff_x21 + 0x38) = uVar8;
              thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x38),uVar8);
              uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_049a583c(*(long *)puVar1);
              }
              if (DAT_0b32c20c == '\0') {
                FUN_04947ee4(PTR_DAT_0ac4e0a8);
                DAT_0b32c20c = '\x01';
              }
              lVar5 = *(long *)puVar1;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_049a583c();
                lVar5 = *(long *)puVar1;
              }
              uVar7 = **(undefined8 **)(lVar5 + 0xb8);
              lVar5 = FUN_04947fd0(*unaff_x26,4);
              if (lVar5 == 0) goto LAB_08a05774;
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_0ac50410;
                thunk_FUN_049ee3d8((undefined8 *)(lVar5 + 0x20));
                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_0ac50238;
                  thunk_FUN_049ee3d8((undefined8 *)(lVar5 + 0x28));
                  if (2 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_0ac50288;
                    thunk_FUN_049ee3d8((undefined8 *)(lVar5 + 0x30));
                    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)PTR_DAT_0ac50100;
                      thunk_FUN_049ee3d8();
                      uVar8 = thunk_FUN_04983f60(*unaff_x27);
                      FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                      puVar2 = PTR_DAT_0ac515a0;
                      puVar1 = PTR_DAT_0ac4e0b0;
                      if (4 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined8 *)(unaff_x21 + 0x40) = uVar8;
                        thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x40),uVar8);
                        uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                          thunk_FUN_049a583c(*(long *)puVar1);
                        }
                        if (DAT_0b32c20d == '\0') {
                          FUN_04947ee4(PTR_DAT_0ac4e0b0);
                          DAT_0b32c20d = '\x01';
                        }
                        lVar5 = *(long *)puVar1;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_049a583c();
                          lVar5 = *(long *)puVar1;
                        }
                        uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar5 = FUN_04947fd0(*unaff_x26,2);
                        if (lVar5 == 0) goto LAB_08a05774;
                        if (*(int *)(lVar5 + 0x18) != 0) {
                          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_0ac0a398;
                          thunk_FUN_049ee3d8((undefined8 *)(lVar5 + 0x20));
                          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                            *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_0ac1af18;
                            thunk_FUN_049ee3d8();
                            uVar8 = thunk_FUN_04983f60(*unaff_x27);
                            FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                            puVar2 = PTR_DAT_0ac51590;
                            puVar1 = PTR_DAT_0ac4e0b8;
                            if (5 < *(uint *)(unaff_x21 + 0x18)) {
                              *(undefined8 *)(unaff_x21 + 0x48) = uVar8;
                              thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x48),uVar8);
                              uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                thunk_FUN_049a583c(*(long *)puVar1);
                              }
                              if (DAT_0b32c20e == '\0') {
                                FUN_04947ee4(PTR_DAT_0ac4e0b8);
                                DAT_0b32c20e = '\x01';
                              }
                              lVar5 = *(long *)puVar1;
                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                thunk_FUN_049a583c();
                                lVar5 = *(long *)puVar1;
                              }
                              uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                              lVar5 = FUN_04947fd0(*unaff_x26,1);
                              if (lVar5 == 0) {
LAB_08a05774:
                    /* WARNING: Subroutine does not return */
                                FUN_0494818c();
                              }
                              if (*(int *)(lVar5 + 0x18) != 0) {
                                *(undefined8 *)(lVar5 + 0x20) = *unaff_x28;
                                thunk_FUN_049ee3d8();
                                uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                                puVar2 = PTR_DAT_0ac515b0;
                                puVar1 = PTR_DAT_0ac4e0c8;
                                if (6 < *(uint *)(unaff_x21 + 0x18)) {
                                  *(undefined8 *)(unaff_x21 + 0x50) = uVar8;
                                  thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x50),uVar8);
                                  uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                    thunk_FUN_049a583c(*(long *)puVar1);
                                  }
                                  if (DAT_0b32c20f == '\0') {
                                    FUN_04947ee4(PTR_DAT_0ac4e0c8);
                                    DAT_0b32c20f = '\x01';
                                  }
                                  lVar5 = *(long *)puVar1;
                                  if (*(int *)(lVar5 + 0xe4) == 0) {
                                    thunk_FUN_049a583c();
                                    lVar5 = *(long *)puVar1;
                                  }
                                  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                  lVar5 = FUN_04947fd0(*unaff_x26,1);
                                  if (lVar5 == 0) goto LAB_08a05774;
                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                    *(undefined8 *)(lVar5 + 0x20) = *unaff_x28;
                                    thunk_FUN_049ee3d8();
                                    uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                    FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                                    puVar2 = PTR_DAT_0ac515b8;
                                    puVar1 = PTR_DAT_0ac4e0d0;
                                    if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffff8) != 0) {
                                      *(undefined8 *)(unaff_x21 + 0x58) = uVar8;
                                      thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x58),uVar8);
                                      uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                        thunk_FUN_049a583c(*(long *)puVar1);
                                      }
                                      if (DAT_0b32c210 == '\0') {
                                        FUN_04947ee4(PTR_DAT_0ac4e0d0);
                                        DAT_0b32c210 = '\x01';
                                      }
                                      lVar5 = *(long *)puVar1;
                                      if (*(int *)(lVar5 + 0xe4) == 0) {
                                        thunk_FUN_049a583c();
                                        lVar5 = *(long *)puVar1;
                                      }
                                      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                      lVar5 = FUN_04947fd0(*unaff_x26,1);
                                      if (lVar5 == 0) goto LAB_08a05774;
                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                        *(undefined8 *)(lVar5 + 0x20) = *unaff_x28;
                                        thunk_FUN_049ee3d8();
                                        uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                        FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                                        puVar2 = PTR_DAT_0ac515f0;
                                        puVar1 = PTR_DAT_0ac4e0d8;
                                        if (8 < *(uint *)(unaff_x21 + 0x18)) {
                                          *(undefined8 *)(unaff_x21 + 0x60) = uVar8;
                                          thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x60),uVar8)
                                          ;
                                          uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                            thunk_FUN_049a583c(*(long *)puVar1);
                                          }
                                          if (DAT_0b32c211 == '\0') {
                                            FUN_04947ee4(PTR_DAT_0ac4e0d8);
                                            DAT_0b32c211 = '\x01';
                                          }
                                          lVar5 = *(long *)puVar1;
                                          if (*(int *)(lVar5 + 0xe4) == 0) {
                                            thunk_FUN_049a583c();
                                            lVar5 = *(long *)puVar1;
                                          }
                                          uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                          lVar5 = FUN_04947fd0(*unaff_x26,1);
                                          if (lVar5 == 0) goto LAB_08a05774;
                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                            *(undefined8 *)(lVar5 + 0x20) = *unaff_x28;
                                            thunk_FUN_049ee3d8();
                                            uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                            FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                                            puVar2 = PTR_DAT_0ac515e8;
                                            puVar1 = PTR_DAT_0ac4e0e0;
                                            if (9 < *(uint *)(unaff_x21 + 0x18)) {
                                              *(undefined8 *)(unaff_x21 + 0x68) = uVar8;
                                              thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x68),
                                                                 uVar8);
                                              uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                thunk_FUN_049a583c(*(long *)puVar1);
                                              }
                                              if (DAT_0b32c212 == '\0') {
                                                FUN_04947ee4(PTR_DAT_0ac4e0e0);
                                                DAT_0b32c212 = '\x01';
                                              }
                                              lVar5 = *(long *)puVar1;
                                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                                thunk_FUN_049a583c();
                                                lVar5 = *(long *)puVar1;
                                              }
                                              uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                              lVar5 = FUN_04947fd0(*unaff_x26,1);
                                              if (lVar5 == 0) goto LAB_08a05774;
                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                *(undefined8 *)(lVar5 + 0x20) = *unaff_x28;
                                                thunk_FUN_049ee3d8();
                                                uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                                FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                                                puVar2 = PTR_DAT_0ac515c8;
                                                puVar1 = PTR_DAT_0ac4e0e8;
                                                if (10 < *(uint *)(unaff_x21 + 0x18)) {
                                                  *(undefined8 *)(unaff_x21 + 0x70) = uVar8;
                                                  thunk_FUN_049ee3d8((undefined8 *)
                                                                     (unaff_x21 + 0x70),uVar8);
                                                  uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                    thunk_FUN_049a583c(*(long *)puVar1);
                                                  }
                                                  if (DAT_0b32c213 == '\0') {
                                                    FUN_04947ee4(PTR_DAT_0ac4e0e8);
                                                    DAT_0b32c213 = '\x01';
                                                  }
                                                  lVar5 = *(long *)puVar1;
                                                  if (*(int *)(lVar5 + 0xe4) == 0) {
                                                    thunk_FUN_049a583c();
                                                    lVar5 = *(long *)puVar1;
                                                  }
                                                  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                                  lVar5 = FUN_04947fd0(*unaff_x26,1);
                                                  if (lVar5 == 0) goto LAB_08a05774;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = *unaff_x28;
                                                    thunk_FUN_049ee3d8();
                                                    uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                                    FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                                                    puVar2 = PTR_DAT_0ac515e0;
                                                    puVar1 = PTR_DAT_0ac4e0f0;
                                                    if (0xb < *(uint *)(unaff_x21 + 0x18)) {
                                                      *(undefined8 *)(unaff_x21 + 0x78) = uVar8;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (unaff_x21 + 0x78),uVar8);
                                                      uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                        thunk_FUN_049a583c(*(long *)puVar1);
                                                      }
                                                      if (DAT_0b32c214 == '\0') {
                                                        FUN_04947ee4(PTR_DAT_0ac4e0f0);
                                                        DAT_0b32c214 = '\x01';
                                                      }
                                                      lVar5 = *(long *)puVar1;
                                                      if (*(int *)(lVar5 + 0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                        lVar5 = *(long *)puVar1;
                                                      }
                                                      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                                      lVar5 = FUN_04947fd0(*unaff_x26,1);
                                                      if (lVar5 == 0) goto LAB_08a05774;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) = *unaff_x28;
                                                        thunk_FUN_049ee3d8();
                                                        uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                                        FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0
                                                                    );
                                                        puVar2 = PTR_DAT_0ac515d8;
                                                        puVar1 = PTR_DAT_0ac4e0f8;
                                                        if (0xc < *(uint *)(unaff_x21 + 0x18)) {
                                                          *(undefined8 *)(unaff_x21 + 0x80) = uVar8;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (unaff_x21 + 0x80),
                                                                             uVar8);
                                                          uVar6 = FUN_08d895f0(*(undefined8 *)puVar2
                                                                               ,0);
                                                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0)
                                                          {
                                                            thunk_FUN_049a583c(*(long *)puVar1);
                                                          }
                                                          if (DAT_0b32c215 == '\0') {
                                                            FUN_04947ee4(PTR_DAT_0ac4e0f8);
                                                            DAT_0b32c215 = '\x01';
                                                          }
                                                          lVar5 = *(long *)puVar1;
                                                          if (*(int *)(lVar5 + 0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                            lVar5 = *(long *)puVar1;
                                                          }
                                                          uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                                          lVar5 = FUN_04947fd0(*unaff_x26,1);
                                                          if (lVar5 == 0) goto LAB_08a05774;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 *unaff_x28;
                                                            thunk_FUN_049ee3d8();
                                                            uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                                            FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0
                                                                         ,0,0);
                                                            puVar2 = PTR_DAT_0ac515d0;
                                                            puVar1 = PTR_DAT_0ac4e100;
                                                            if (0xd < *(uint *)(unaff_x21 + 0x18)) {
                                                              *(undefined8 *)(unaff_x21 + 0x88) =
                                                                   uVar8;
                                                              thunk_FUN_049ee3d8((undefined8 *)
                                                                                 (unaff_x21 + 0x88),
                                                                                 uVar8);
                                                              uVar6 = FUN_08d895f0(*(undefined8 *)
                                                                                    puVar2,0);
                                                              if (*(int *)(*(long *)puVar1 + 0xe4)
                                                                  == 0) {
                                                                thunk_FUN_049a583c(*(long *)puVar1);
                                                              }
                                                              if (DAT_0b32c216 == '\0') {
                                                                FUN_04947ee4(PTR_DAT_0ac4e100);
                                                                DAT_0b32c216 = '\x01';
                                                              }
                                                              lVar5 = *(long *)puVar1;
                                                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                                                thunk_FUN_049a583c();
                                                                lVar5 = *(long *)puVar1;
                                                              }
                                                              uVar7 = **(undefined8 **)
                                                                        (lVar5 + 0xb8);
                                                              lVar5 = FUN_04947fd0(*unaff_x26,1);
                                                              if (lVar5 == 0) goto LAB_08a05774;
                                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                                *(undefined8 *)(lVar5 + 0x20) =
                                                                     *unaff_x28;
                                                                thunk_FUN_049ee3d8();
                                                                uVar8 = thunk_FUN_04983f60(*
                                                  unaff_x27);
                                                  FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                                                  puVar2 = PTR_DAT_0ac515f8;
                                                  puVar1 = PTR_DAT_0ac4e108;
                                                  if (0xe < *(uint *)(unaff_x21 + 0x18)) {
                                                    *(undefined8 *)(unaff_x21 + 0x90) = uVar8;
                                                    thunk_FUN_049ee3d8((undefined8 *)
                                                                       (unaff_x21 + 0x90),uVar8);
                                                    uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar1);
                                                    }
                                                    if (DAT_0b32c217 == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e108);
                                                      DAT_0b32c217 = '\x01';
                                                    }
                                                    lVar5 = *(long *)puVar1;
                                                    if (*(int *)(lVar5 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar5 = *(long *)puVar1;
                                                    }
                                                    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                                    lVar5 = FUN_04947fd0(*unaff_x26,1);
                                                    if (lVar5 == 0) goto LAB_08a05774;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = *unaff_x28;
                                                      thunk_FUN_049ee3d8();
                                                      uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                                      FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                                                      puVar2 = PTR_DAT_0ac515c0;
                                                      puVar1 = PTR_DAT_0ac4e110;
                                                      if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffff0)
                                                          != 0) {
                                                        *(undefined8 *)(unaff_x21 + 0x98) = uVar8;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (unaff_x21 + 0x98),uVar8)
                                                        ;
                                                        uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0
                                                                            );
                                                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c(*(long *)puVar1);
                                                        }
                                                        if (DAT_0b32c218 == '\0') {
                                                          FUN_04947ee4(PTR_DAT_0ac4e110);
                                                          DAT_0b32c218 = '\x01';
                                                        }
                                                        lVar5 = *(long *)puVar1;
                                                        if (*(int *)(lVar5 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                          lVar5 = *(long *)puVar1;
                                                        }
                                                        uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                                        lVar5 = FUN_04947fd0(*unaff_x26,1);
                                                        if (lVar5 == 0) goto LAB_08a05774;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) = *unaff_x28
                                                          ;
                                                          thunk_FUN_049ee3d8();
                                                          uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                                          FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0
                                                                       ,0);
                                                          puVar2 = PTR_DAT_0ac51638;
                                                          puVar1 = PTR_DAT_0ac4e118;
                                                          if (0x10 < *(uint *)(unaff_x21 + 0x18)) {
                                                            *(undefined8 *)(unaff_x21 + 0xa0) =
                                                                 uVar8;
                                                            thunk_FUN_049ee3d8((undefined8 *)
                                                                               (unaff_x21 + 0xa0),
                                                                               uVar8);
                                                            uVar6 = FUN_08d895f0(*(undefined8 *)
                                                                                  puVar2,0);
                                                            if (*(int *)(*(long *)puVar1 + 0xe4) ==
                                                                0) {
                                                              thunk_FUN_049a583c(*(long *)puVar1);
                                                            }
                                                            if (DAT_0b32c219 == '\0') {
                                                              FUN_04947ee4(PTR_DAT_0ac4e118);
                                                              DAT_0b32c219 = '\x01';
                                                            }
                                                            lVar5 = *(long *)puVar1;
                                                            if (*(int *)(lVar5 + 0xe4) == 0) {
                                                              thunk_FUN_049a583c();
                                                              lVar5 = *(long *)puVar1;
                                                            }
                                                            uVar8 = **(undefined8 **)(lVar5 + 0xb8);
                                                            uVar7 = thunk_FUN_04983f60(*unaff_x27);
                                                            FUN_0894403c(uVar7,uVar6,uVar8,0,0,0,0,0
                                                                        );
                                                            puVar2 = PTR_DAT_0ac51640;
                                                            puVar1 = PTR_DAT_0ac4e120;
                                                            if (0x11 < *(uint *)(unaff_x21 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x21 + 0xa8) =
                                                                   uVar7;
                                                              thunk_FUN_049ee3d8((undefined8 *)
                                                                                 (unaff_x21 + 0xa8),
                                                                                 uVar7);
                                                              uVar6 = FUN_08d895f0(*(undefined8 *)
                                                                                    puVar2,0);
                                                              if (*(int *)(*(long *)puVar1 + 0xe4)
                                                                  == 0) {
                                                                thunk_FUN_049a583c(*(long *)puVar1);
                                                              }
                                                              if (DAT_0b32c21a == '\0') {
                                                                FUN_04947ee4(PTR_DAT_0ac4e120);
                                                                DAT_0b32c21a = '\x01';
                                                              }
                                                              lVar5 = *(long *)puVar1;
                                                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                                                thunk_FUN_049a583c();
                                                                lVar5 = *(long *)puVar1;
                                                              }
                                                              uVar8 = **(undefined8 **)
                                                                        (lVar5 + 0xb8);
                                                              uVar7 = thunk_FUN_04983f60(*unaff_x27)
                                                              ;
                                                              FUN_0894403c(uVar7,uVar6,uVar8,0,0,0,0
                                                                           ,0);
                                                              puVar2 = PTR_DAT_0ac51620;
                                                              puVar1 = PTR_DAT_0ac4e128;
                                                              if (0x12 < *(uint *)(unaff_x21 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x21 + 0xb0) =
                                                                     uVar7;
                                                                thunk_FUN_049ee3d8((undefined8 *)
                                                                                   (unaff_x21 + 0xb0
                                                                                   ),uVar7);
                                                                uVar6 = FUN_08d895f0(*(undefined8 *)
                                                                                      puVar2,0);
                                                                if (*(int *)(*(long *)puVar1 + 0xe4)
                                                                    == 0) {
                                                                  thunk_FUN_049a583c(*(long *)puVar1
                                                                                    );
                                                                }
                                                                if (DAT_0b32c21b == '\0') {
                                                                  FUN_04947ee4(PTR_DAT_0ac4e128);
                                                                  DAT_0b32c21b = '\x01';
                                                                }
                                                                lVar5 = *(long *)puVar1;
                                                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                                                  thunk_FUN_049a583c();
                                                                  lVar5 = *(long *)puVar1;
                                                                }
                                                                uVar8 = **(undefined8 **)
                                                                          (lVar5 + 0xb8);
                                                                uVar7 = thunk_FUN_04983f60(*
                                                  unaff_x27);
                                                  FUN_0894403c(uVar7,uVar6,uVar8,0,0,0,0,0);
                                                  puVar2 = PTR_DAT_0ac51628;
                                                  puVar1 = PTR_DAT_0ac4e130;
                                                  if (0x13 < *(uint *)(unaff_x21 + 0x18)) {
                                                    *(undefined8 *)(unaff_x21 + 0xb8) = uVar7;
                                                    thunk_FUN_049ee3d8((undefined8 *)
                                                                       (unaff_x21 + 0xb8),uVar7);
                                                    uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar1);
                                                    }
                                                    if (DAT_0b32c21c == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e130);
                                                      DAT_0b32c21c = '\x01';
                                                    }
                                                    lVar5 = *(long *)puVar1;
                                                    if (*(int *)(lVar5 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar5 = *(long *)puVar1;
                                                    }
                                                    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
                                                    uVar7 = thunk_FUN_04983f60(*unaff_x27);
                                                    FUN_0894403c(uVar7,uVar6,uVar8,0,0,0,0,0);
                                                    puVar2 = PTR_DAT_0ac51600;
                                                    puVar1 = PTR_DAT_0ac4e138;
                                                    if (0x14 < *(uint *)(unaff_x21 + 0x18)) {
                                                      *(undefined8 *)(unaff_x21 + 0xc0) = uVar7;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (unaff_x21 + 0xc0),uVar7);
                                                      uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                        thunk_FUN_049a583c(*(long *)puVar1);
                                                      }
                                                      if (DAT_0b32c21d == '\0') {
                                                        FUN_04947ee4(PTR_DAT_0ac4e138);
                                                        DAT_0b32c21d = '\x01';
                                                      }
                                                      lVar5 = *(long *)puVar1;
                                                      if (*(int *)(lVar5 + 0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                        lVar5 = *(long *)puVar1;
                                                      }
                                                      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                                      lVar5 = FUN_04947fd0(*unaff_x26,3);
                                                      puVar1 = PTR_DAT_0ac51680;
                                                      if (lVar5 == 0) goto LAB_08a05774;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) =
                                                             *(undefined8 *)PTR_DAT_0ac51680;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar5 + 0x20));
                                                        puVar2 = PTR_DAT_0ac51788;
                                                        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(undefined8 *)(lVar5 + 0x28) =
                                                               *(undefined8 *)PTR_DAT_0ac51788;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar5 + 0x28));
                                                          if (2 < *(uint *)(lVar5 + 0x18)) {
                                                            *(undefined8 *)(lVar5 + 0x30) =
                                                                 *(undefined8 *)PTR_DAT_0ac516e0;
                                                            thunk_FUN_049ee3d8();
                                                            uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                                            FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0
                                                                         ,0,0);
                                                            puVar4 = PTR_DAT_0ac51608;
                                                            puVar3 = PTR_DAT_0ac4e140;
                                                            if (0x15 < *(uint *)(unaff_x21 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x21 + 200) =
                                                                   uVar8;
                                                              thunk_FUN_049ee3d8((undefined8 *)
                                                                                 (unaff_x21 + 200),
                                                                                 uVar8);
                                                              uVar6 = FUN_08d895f0(*(undefined8 *)
                                                                                    puVar4,0);
                                                              if (*(int *)(*(long *)puVar3 + 0xe4)
                                                                  == 0) {
                                                                thunk_FUN_049a583c(*(long *)puVar3);
                                                              }
                                                              if (DAT_0b32c21e == '\0') {
                                                                FUN_04947ee4(PTR_DAT_0ac4e140);
                                                                DAT_0b32c21e = '\x01';
                                                              }
                                                              lVar5 = *(long *)puVar3;
                                                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                                                thunk_FUN_049a583c();
                                                                lVar5 = *(long *)puVar3;
                                                              }
                                                              uVar7 = **(undefined8 **)
                                                                        (lVar5 + 0xb8);
                                                              lVar5 = FUN_04947fd0(*unaff_x26,2);
                                                              if (lVar5 == 0) goto LAB_08a05774;
                                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                                *(undefined8 *)(lVar5 + 0x20) =
                                                                     *(undefined8 *)puVar1;
                                                                thunk_FUN_049ee3d8((undefined8 *)
                                                                                   (lVar5 + 0x20));
                                                                if ((*(uint *)(lVar5 + 0x18) &
                                                                    0xfffffffe) != 0) {
                                                                  *(undefined8 *)(lVar5 + 0x28) =
                                                                       *(undefined8 *)puVar2;
                                                                  thunk_FUN_049ee3d8();
                                                                  uVar8 = thunk_FUN_04983f60(*
                                                  unaff_x27);
                                                  FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0);
                                                  puVar2 = PTR_DAT_0ac515a8;
                                                  puVar1 = PTR_DAT_0ac4e0c0;
                                                  if (0x16 < *(uint *)(unaff_x21 + 0x18)) {
                                                    *(undefined8 *)(unaff_x21 + 0xd0) = uVar8;
                                                    thunk_FUN_049ee3d8((undefined8 *)
                                                                       (unaff_x21 + 0xd0),uVar8);
                                                    uVar6 = FUN_08d895f0(*(undefined8 *)puVar2,0);
                                                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c(*(long *)puVar1);
                                                    }
                                                    if (DAT_0b32c21f == '\0') {
                                                      FUN_04947ee4(PTR_DAT_0ac4e0c0);
                                                      DAT_0b32c21f = '\x01';
                                                    }
                                                    lVar5 = *(long *)puVar1;
                                                    if (*(int *)(lVar5 + 0xe4) == 0) {
                                                      thunk_FUN_049a583c();
                                                      lVar5 = *(long *)puVar1;
                                                    }
                                                    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                                    lVar5 = FUN_04947fd0(*unaff_x26,2);
                                                    if (lVar5 == 0) goto LAB_08a05774;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) =
                                                           *(undefined8 *)PTR_DAT_0ac1b680;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (lVar5 + 0x20));
                                                      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar5 + 0x28) =
                                                             *(undefined8 *)PTR_DAT_0ac1b678;
                                                        thunk_FUN_049ee3d8();
                                                        uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                                        FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0,0,0
                                                                    );
                                                        puVar2 = PTR_DAT_0ac51648;
                                                        puVar1 = PTR_DAT_0ac4e080;
                                                        if (0x17 < *(uint *)(unaff_x21 + 0x18)) {
                                                          *(undefined8 *)(unaff_x21 + 0xd8) = uVar8;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (unaff_x21 + 0xd8),
                                                                             uVar8);
                                                          uVar6 = FUN_08d895f0(*(undefined8 *)puVar2
                                                                               ,0);
                                                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0)
                                                          {
                                                            thunk_FUN_049a583c(*(long *)puVar1);
                                                          }
                                                          if (DAT_0b32c220 == '\0') {
                                                            FUN_04947ee4(PTR_DAT_0ac4e080);
                                                            DAT_0b32c220 = '\x01';
                                                          }
                                                          lVar5 = *(long *)puVar1;
                                                          if (*(int *)(lVar5 + 0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                            lVar5 = *(long *)puVar1;
                                                          }
                                                          uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                                                          lVar5 = FUN_04947fd0(*unaff_x26,1);
                                                          if (lVar5 == 0) goto LAB_08a05774;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 *(undefined8 *)PTR_DAT_0ac51748;
                                                            thunk_FUN_049ee3d8();
                                                            uVar8 = thunk_FUN_04983f60(*unaff_x27);
                                                            FUN_0894403c(uVar8,uVar6,uVar7,lVar5,0,0
                                                                         ,0,0);
                                                            puVar2 = PTR_DAT_0ac4d610;
                                                            puVar1 = PTR_DAT_0ac486f8;
                                                            if (0x18 < *(uint *)(unaff_x21 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x21 + 0xe0) =
                                                                   uVar8;
                                                              thunk_FUN_049ee3d8((undefined8 *)
                                                                                 (unaff_x21 + 0xe0),
                                                                                 uVar8);
                                                              uVar6 = thunk_FUN_04983f60(*unaff_x27)
                                                              ;
                                                              Haptics_Tools_Interpolate__Cubic
                                                                        (uVar6,0,0);
                                                              if (*(int *)(*(long *)puVar1 + 0xe4)
                                                                  == 0) {
                                                                thunk_FUN_049a583c();
                                                              }
                                                              uVar6 = FUN_08941a14();
                                                              **(undefined8 **)
                                                                (*(long *)puVar2 + 0xb8) = uVar6;
                                                              thunk_FUN_049ee3d8(*(undefined8 *)
                                                                                  (*(long *)puVar2 +
                                                                                  0xb8),uVar6);
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
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


