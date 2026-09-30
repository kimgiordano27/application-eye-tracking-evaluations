/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 090d517c
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardDirtyTextures(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  FUN_04947ee4();
  *(undefined1 *)(unaff_x23 + 0x583) = 1;
  lVar8 = thunk_FUN_04983f60(*unaff_x21);
  FUN_06b7f60c(lVar8,*unaff_x19);
  uVar9 = FUN_04947fd0(*unaff_x22,5);
  FUN_08c82ec4(uVar9,*unaff_x20,0);
  puVar2 = PTR_DAT_0ac798c0;
  if (lVar8 != 0) {
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)PTR_DAT_0ac798c0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    puVar3 = PTR_DAT_0ac798f8;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_049ee3d8(puVar10,uVar9);
      }
      else {
        FUN_06b7fe74(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = FUN_04947fd0(*unaff_x22,4);
      FUN_08c82ec4(uVar9,*(undefined8 *)puVar3,0);
      lVar12 = *(long *)(lVar8 + 0x10);
      lVar13 = *(long *)puVar2;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      puVar3 = PTR_DAT_0ac798d8;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *puVar10 = uVar9;
          thunk_FUN_049ee3d8(puVar10,uVar9);
        }
        else {
          FUN_06b7fe74(lVar8,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar9 = FUN_04947fd0(*unaff_x22,4);
        FUN_08c82ec4(uVar9,*(undefined8 *)puVar3,0);
        lVar12 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        puVar3 = PTR_DAT_0ac798e0;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *puVar10 = uVar9;
            thunk_FUN_049ee3d8(puVar10,uVar9);
          }
          else {
            FUN_06b7fe74(lVar8,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = FUN_04947fd0(*unaff_x22,4);
          FUN_08c82ec4(uVar9,*(undefined8 *)puVar3,0);
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          puVar3 = PTR_DAT_0ac798e8;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *puVar10 = uVar9;
              thunk_FUN_049ee3d8(puVar10,uVar9);
            }
            else {
              FUN_06b7fe74(lVar8,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = FUN_04947fd0(*unaff_x22,5);
            FUN_08c82ec4(uVar9,*(undefined8 *)puVar3,0);
            lVar12 = *(long *)(lVar8 + 0x10);
            lVar13 = *(long *)puVar2;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            puVar7 = PTR_DAT_0ac79910;
            puVar6 = PTR_DAT_0ac79900;
            puVar5 = PTR_DAT_0ac798f0;
            puVar4 = PTR_DAT_0ac798b0;
            puVar3 = PTR_DAT_0ac798a8;
            puVar2 = PTR_DAT_0ac75870;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *puVar10 = uVar9;
                thunk_FUN_049ee3d8(puVar10,uVar9);
              }
              else {
                FUN_06b7fe74(lVar8,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
              thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar8);
              uVar9 = FUN_04947fd0(*(undefined8 *)puVar3,0x18);
              FUN_08c82ec4(uVar9,*(undefined8 *)puVar7,0);
              puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar10 = uVar9;
              thunk_FUN_049ee3d8(puVar10,uVar9);
              uVar9 = FUN_04947fd0(*unaff_x22,0x18);
              FUN_08c82ec4(uVar9,*(undefined8 *)puVar6,0);
              puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar10 = uVar9;
              thunk_FUN_049ee3d8(puVar10,uVar9);
              lVar8 = FUN_04947fd0(*(undefined8 *)puVar4,0x18);
              uVar9 = FUN_04947fd0(*unaff_x22,6);
              FUN_08c82ec4(uVar9,*(undefined8 *)puVar5,0);
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(undefined8 *)(lVar8 + 0x20) = uVar9;
                  thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x20),uVar9);
                  uVar9 = FUN_04947fd0(*unaff_x22,0);
                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar8 + 0x28) = uVar9;
                    thunk_FUN_049ee3d8();
                    lVar12 = FUN_04947fd0(*unaff_x22,1);
                    if (lVar12 == 0) goto LAB_090d615c;
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      *(undefined4 *)(lVar12 + 0x20) = 3;
                      if (2 < uVar1) {
                        *(long *)(lVar8 + 0x30) = lVar12;
                        thunk_FUN_049ee3d8();
                        lVar12 = FUN_04947fd0(*unaff_x22,1);
                        if (lVar12 == 0) goto LAB_090d615c;
                        if (*(int *)(lVar12 + 0x18) != 0) {
                          *(undefined4 *)(lVar12 + 0x20) = 4;
                          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
                            *(long *)(lVar8 + 0x38) = lVar12;
                            thunk_FUN_049ee3d8();
                            lVar12 = FUN_04947fd0(*unaff_x22,1);
                            if (lVar12 == 0) goto LAB_090d615c;
                            if (*(int *)(lVar12 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar8 + 0x18);
                              *(undefined4 *)(lVar12 + 0x20) = 5;
                              if (4 < uVar1) {
                                *(long *)(lVar8 + 0x40) = lVar12;
                                thunk_FUN_049ee3d8();
                                lVar12 = FUN_04947fd0(*unaff_x22,1);
                                if (lVar12 == 0) goto LAB_090d615c;
                                if (*(int *)(lVar12 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                  *(undefined4 *)(lVar12 + 0x20) = 0x13;
                                  if (5 < uVar1) {
                                    *(long *)(lVar8 + 0x48) = lVar12;
                                    thunk_FUN_049ee3d8();
                                    lVar12 = FUN_04947fd0(*unaff_x22,1);
                                    if (lVar12 == 0) goto LAB_090d615c;
                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                      *(undefined4 *)(lVar12 + 0x20) = 7;
                                      if (6 < uVar1) {
                                        *(long *)(lVar8 + 0x50) = lVar12;
                                        thunk_FUN_049ee3d8();
                                        lVar12 = FUN_04947fd0(*unaff_x22,1);
                                        if (lVar12 == 0) goto LAB_090d615c;
                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                          *(undefined4 *)(lVar12 + 0x20) = 8;
                                          if ((*(uint *)(lVar8 + 0x18) & 0xfffffff8) != 0) {
                                            *(long *)(lVar8 + 0x58) = lVar12;
                                            thunk_FUN_049ee3d8();
                                            lVar12 = FUN_04947fd0(*unaff_x22,1);
                                            if (lVar12 == 0) goto LAB_090d615c;
                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                              uVar1 = *(uint *)(lVar8 + 0x18);
                                              *(undefined4 *)(lVar12 + 0x20) = 0x14;
                                              if (8 < uVar1) {
                                                *(long *)(lVar8 + 0x60) = lVar12;
                                                thunk_FUN_049ee3d8();
                                                lVar12 = FUN_04947fd0(*unaff_x22,1);
                                                if (lVar12 == 0) goto LAB_090d615c;
                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined4 *)(lVar12 + 0x20) = 10;
                                                  if (9 < uVar1) {
                                                    *(long *)(lVar8 + 0x68) = lVar12;
                                                    thunk_FUN_049ee3d8();
                                                    lVar12 = FUN_04947fd0(*unaff_x22,1);
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                                      *(undefined4 *)(lVar12 + 0x20) = 0xb;
                                                      if (10 < uVar1) {
                                                        *(long *)(lVar8 + 0x70) = lVar12;
                                                        thunk_FUN_049ee3d8();
                                                        lVar12 = FUN_04947fd0(*unaff_x22,1);
                                                        if (lVar12 == 0) goto LAB_090d615c;
                                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar8 + 0x18);
                                                          *(undefined4 *)(lVar12 + 0x20) = 0x15;
                                                          if (0xb < uVar1) {
                                                            *(long *)(lVar8 + 0x78) = lVar12;
                                                            thunk_FUN_049ee3d8();
                                                            lVar12 = FUN_04947fd0(*unaff_x22,1);
                                                            if (lVar12 == 0) goto LAB_090d615c;
                                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar8 + 0x18);
                                                              *(undefined4 *)(lVar12 + 0x20) = 0xd;
                                                              if (0xc < uVar1) {
                                                                *(long *)(lVar8 + 0x80) = lVar12;
                                                                thunk_FUN_049ee3d8();
                                                                lVar12 = FUN_04947fd0(*unaff_x22,1);
                                                                if (lVar12 == 0) goto LAB_090d615c;
                                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                                  *(undefined4 *)(lVar12 + 0x20) =
                                                                       0xe;
                                                                  if (0xd < uVar1) {
                                                                    *(long *)(lVar8 + 0x88) = lVar12
                                                                    ;
                                                                    thunk_FUN_049ee3d8();
                                                                    lVar12 = FUN_04947fd0(*unaff_x22
                                                                                          ,1);
                                                                    if (lVar12 == 0)
                                                                    goto LAB_090d615c;
                                                                    if (*(int *)(lVar12 + 0x18) != 0
                                                                       ) {
                                                                      uVar1 = *(uint *)(lVar8 + 0x18
                                                                                       );
                                                                      *(undefined4 *)(lVar12 + 0x20)
                                                                           = 0x16;
                                                                      if (0xe < uVar1) {
                                                                        *(long *)(lVar8 + 0x90) =
                                                                             lVar12;
                                                                        thunk_FUN_049ee3d8();
                                                                        lVar12 = FUN_04947fd0(*
                                                  unaff_x22,1);
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar12 + 0x20) = 0x10;
                                                    if ((*(uint *)(lVar8 + 0x18) & 0xfffffff0) != 0)
                                                    {
                                                      *(long *)(lVar8 + 0x98) = lVar12;
                                                      thunk_FUN_049ee3d8();
                                                      lVar12 = FUN_04947fd0(*unaff_x22,1);
                                                      if (lVar12 == 0) goto LAB_090d615c;
                                                      if (*(int *)(lVar12 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                                        *(undefined4 *)(lVar12 + 0x20) = 0x11;
                                                        if (0x10 < uVar1) {
                                                          *(long *)(lVar8 + 0xa0) = lVar12;
                                                          thunk_FUN_049ee3d8();
                                                          lVar12 = FUN_04947fd0(*unaff_x22,1);
                                                          if (lVar12 == 0) goto LAB_090d615c;
                                                          if (*(int *)(lVar12 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar8 + 0x18);
                                                            *(undefined4 *)(lVar12 + 0x20) = 0x12;
                                                            if (0x11 < uVar1) {
                                                              *(long *)(lVar8 + 0xa8) = lVar12;
                                                              thunk_FUN_049ee3d8();
                                                              lVar12 = FUN_04947fd0(*unaff_x22,1);
                                                              if (lVar12 == 0) goto LAB_090d615c;
                                                              if (*(int *)(lVar12 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar8 + 0x18);
                                                                *(undefined4 *)(lVar12 + 0x20) =
                                                                     0x17;
                                                                if (0x12 < uVar1) {
                                                                  *(long *)(lVar8 + 0xb0) = lVar12;
                                                                  thunk_FUN_049ee3d8((long *)(lVar8 
                                                  + 0xb0));
                                                  uVar9 = FUN_04947fd0(*unaff_x22,0);
                                                  if (0x13 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xb8) = uVar9;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0xb8),
                                                                       uVar9);
                                                    uVar9 = FUN_04947fd0(*unaff_x22,0);
                                                    if (0x14 < *(uint *)(lVar8 + 0x18)) {
                                                      *(undefined8 *)(lVar8 + 0xc0) = uVar9;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (lVar8 + 0xc0),uVar9);
                                                      uVar9 = FUN_04947fd0(*unaff_x22,0);
                                                      if (0x15 < *(uint *)(lVar8 + 0x18)) {
                                                        *(undefined8 *)(lVar8 + 200) = uVar9;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar8 + 200),uVar9);
                                                        uVar9 = FUN_04947fd0(*unaff_x22,0);
                                                        if (0x16 < *(uint *)(lVar8 + 0x18)) {
                                                          *(undefined8 *)(lVar8 + 0xd0) = uVar9;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar8 + 0xd0),uVar9);
                                                          uVar9 = FUN_04947fd0(*unaff_x22,0);
                                                          puVar4 = PTR_DAT_0ac798d0;
                                                          puVar3 = PTR_DAT_0ac798c8;
                                                          if (0x17 < *(uint *)(lVar8 + 0x18)) {
                                                            *(undefined8 *)(lVar8 + 0xd8) = uVar9;
                                                            thunk_FUN_049ee3d8();
                                                            plVar11 = (long *)(*(long *)(*(long *)
                                                  puVar2 + 0xb8) + 0x18);
                                                  *plVar11 = lVar8;
                                                  thunk_FUN_049ee3d8(plVar11,lVar8);
                                                  lVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
                                                  FUN_06b13594(lVar8,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_0ac798b8;
                                                  if (lVar8 != 0) {
                                                    lVar12 = *(long *)(lVar8 + 0x10);
                                                    lVar13 = *(long *)PTR_DAT_0ac798b8;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar8 + 0x1c) =
                                                             *(int *)(lVar8 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_06b13e24(lVar8,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar8 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar8 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar8 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar8 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar8 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar8 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar8 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar8 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  puVar3 = PTR_DAT_0ac79908;
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar8,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar11 = lVar8;
                                                  thunk_FUN_049ee3d8(plVar11,lVar8);
                                                  uVar9 = FUN_04947fd0(*unaff_x22,5);
                                                  FUN_08c82ec4(uVar9,*(undefined8 *)puVar3,0);
                                                  puVar10 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x28);
                                                  *puVar10 = uVar9;
                                                  thunk_FUN_049ee3d8(puVar10,uVar9);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_090d615c;
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
            }
          }
        }
      }
    }
  }
LAB_090d615c:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


