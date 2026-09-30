/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetControllerState6
ENTRY_POINT: 090d507c
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetControllerState6(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  undefined8 *puVar14;
  long unaff_x21;
  undefined8 *puVar15;
  long unaff_x23;
  
  puVar2 = PTR_DAT_0ac798a0;
  puVar3 = PTR_DAT_0ac79898;
  puVar15 = *(undefined8 **)(unaff_x21 + 0x888);
  puVar14 = *(undefined8 **)(unaff_x19 + 0x890);
  if ((*(byte *)(unaff_x23 + 0x583) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac798a8);
    FUN_04947ee4(PTR_DAT_0ac798b0);
    FUN_04947ee4(PTR_DAT_0ac79898);
    FUN_04947ee4(PTR_DAT_0ac75870);
    FUN_04947ee4(PTR_DAT_0ac798b8);
    FUN_04947ee4(PTR_DAT_0ac798c0);
    FUN_04947ee4(PTR_DAT_0ac79890);
                    /* catch() { ... } // from try @ 090d4fc4 with catch @ 090d50f8 */
    FUN_04947ee4(PTR_DAT_0ac798c8);
                    /* try { // try from 090d50fc to 091d5103 has its CatchHandler @ 090d510c */
    FUN_04947ee4(PTR_DAT_0ac798d0);
    FUN_04947ee4(PTR_DAT_0ac79888);
    FUN_04947ee4(PTR_DAT_0ac798d8);
    FUN_04947ee4(PTR_DAT_0ac798e0);
    FUN_04947ee4(PTR_DAT_0ac798e8);
    FUN_04947ee4(PTR_DAT_0ac798f0);
    FUN_04947ee4(PTR_DAT_0ac798f8);
    FUN_04947ee4(PTR_DAT_0ac79900);
    FUN_04947ee4(PTR_DAT_0ac798a0);
    FUN_04947ee4(PTR_DAT_0ac79908);
    FUN_04947ee4(PTR_DAT_0ac79910);
    *(undefined1 *)(unaff_x23 + 0x583) = 1;
  }
  lVar9 = thunk_FUN_04983f60(*puVar15);
  FUN_06b7f60c(lVar9,*puVar14);
  uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,5);
  FUN_08c82ec4(uVar10,*(undefined8 *)puVar2,0);
  puVar2 = PTR_DAT_0ac798c0;
  if (lVar9 != 0) {
    lVar12 = *(long *)(lVar9 + 0x10);
    lVar13 = *(long *)PTR_DAT_0ac798c0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar4 = PTR_DAT_0ac798f8;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        puVar14 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar14 = uVar10;
        thunk_FUN_049ee3d8(puVar14,uVar10);
      }
      else {
        FUN_06b7fe74(lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,4);
      FUN_08c82ec4(uVar10,*(undefined8 *)puVar4,0);
      lVar12 = *(long *)(lVar9 + 0x10);
      lVar13 = *(long *)puVar2;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      puVar4 = PTR_DAT_0ac798d8;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          puVar14 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *puVar14 = uVar10;
          thunk_FUN_049ee3d8(puVar14,uVar10);
        }
        else {
          FUN_06b7fe74(lVar9,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,4);
        FUN_08c82ec4(uVar10,*(undefined8 *)puVar4,0);
        lVar12 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        puVar4 = PTR_DAT_0ac798e0;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar14 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *puVar14 = uVar10;
            thunk_FUN_049ee3d8(puVar14,uVar10);
          }
          else {
            FUN_06b7fe74(lVar9,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,4);
          FUN_08c82ec4(uVar10,*(undefined8 *)puVar4,0);
          lVar12 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          puVar4 = PTR_DAT_0ac798e8;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              puVar14 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *puVar14 = uVar10;
              thunk_FUN_049ee3d8(puVar14,uVar10);
            }
            else {
              FUN_06b7fe74(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,5);
            FUN_08c82ec4(uVar10,*(undefined8 *)puVar4,0);
            lVar12 = *(long *)(lVar9 + 0x10);
            lVar13 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            puVar8 = PTR_DAT_0ac79910;
            puVar7 = PTR_DAT_0ac79900;
            puVar6 = PTR_DAT_0ac798f0;
            puVar5 = PTR_DAT_0ac798b0;
            puVar4 = PTR_DAT_0ac798a8;
            puVar2 = PTR_DAT_0ac75870;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                puVar14 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *puVar14 = uVar10;
                thunk_FUN_049ee3d8(puVar14,uVar10);
              }
              else {
                FUN_06b7fe74(lVar9,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar9;
              thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar9);
              uVar10 = FUN_04947fd0(*(undefined8 *)puVar4,0x18);
              FUN_08c82ec4(uVar10,*(undefined8 *)puVar8,0);
              puVar14 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar14 = uVar10;
              thunk_FUN_049ee3d8(puVar14,uVar10);
              uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,0x18);
              FUN_08c82ec4(uVar10,*(undefined8 *)puVar7,0);
              puVar14 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar14 = uVar10;
              thunk_FUN_049ee3d8(puVar14,uVar10);
              lVar9 = FUN_04947fd0(*(undefined8 *)puVar5,0x18);
              uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,6);
              FUN_08c82ec4(uVar10,*(undefined8 *)puVar6,0);
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) != 0) {
                  *(undefined8 *)(lVar9 + 0x20) = uVar10;
                  thunk_FUN_049ee3d8((undefined8 *)(lVar9 + 0x20),uVar10);
                  uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,0);
                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar9 + 0x28) = uVar10;
                    thunk_FUN_049ee3d8();
                    lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1);
                    if (lVar12 == 0) goto LAB_090d615c;
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      *(undefined4 *)(lVar12 + 0x20) = 3;
                      if (2 < uVar1) {
                        *(long *)(lVar9 + 0x30) = lVar12;
                        thunk_FUN_049ee3d8();
                        lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1);
                        if (lVar12 == 0) goto LAB_090d615c;
                        if (*(int *)(lVar12 + 0x18) != 0) {
                          *(undefined4 *)(lVar12 + 0x20) = 4;
                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                            *(long *)(lVar9 + 0x38) = lVar12;
                            thunk_FUN_049ee3d8();
                            lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1);
                            if (lVar12 == 0) goto LAB_090d615c;
                            if (*(int *)(lVar12 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar9 + 0x18);
                              *(undefined4 *)(lVar12 + 0x20) = 5;
                              if (4 < uVar1) {
                                *(long *)(lVar9 + 0x40) = lVar12;
                                thunk_FUN_049ee3d8();
                                lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1);
                                if (lVar12 == 0) goto LAB_090d615c;
                                if (*(int *)(lVar12 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                  *(undefined4 *)(lVar12 + 0x20) = 0x13;
                                  if (5 < uVar1) {
                                    *(long *)(lVar9 + 0x48) = lVar12;
                                    thunk_FUN_049ee3d8();
                                    lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1);
                                    if (lVar12 == 0) goto LAB_090d615c;
                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                      *(undefined4 *)(lVar12 + 0x20) = 7;
                                      if (6 < uVar1) {
                                        *(long *)(lVar9 + 0x50) = lVar12;
                                        thunk_FUN_049ee3d8();
                                        lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1);
                                        if (lVar12 == 0) goto LAB_090d615c;
                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                          *(undefined4 *)(lVar12 + 0x20) = 8;
                                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                                            *(long *)(lVar9 + 0x58) = lVar12;
                                            thunk_FUN_049ee3d8();
                                            lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1);
                                            if (lVar12 == 0) goto LAB_090d615c;
                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                              *(undefined4 *)(lVar12 + 0x20) = 0x14;
                                              if (8 < uVar1) {
                                                *(long *)(lVar9 + 0x60) = lVar12;
                                                thunk_FUN_049ee3d8();
                                                lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1);
                                                if (lVar12 == 0) goto LAB_090d615c;
                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  *(undefined4 *)(lVar12 + 0x20) = 10;
                                                  if (9 < uVar1) {
                                                    *(long *)(lVar9 + 0x68) = lVar12;
                                                    thunk_FUN_049ee3d8();
                                                    lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1);
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      *(undefined4 *)(lVar12 + 0x20) = 0xb;
                                                      if (10 < uVar1) {
                                                        *(long *)(lVar9 + 0x70) = lVar12;
                                                        thunk_FUN_049ee3d8();
                                                        lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,
                                                                              1);
                                                        if (lVar12 == 0) goto LAB_090d615c;
                                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                                          *(undefined4 *)(lVar12 + 0x20) = 0x15;
                                                          if (0xb < uVar1) {
                                                            *(long *)(lVar9 + 0x78) = lVar12;
                                                            thunk_FUN_049ee3d8();
                                                            lVar12 = FUN_04947fd0(*(undefined8 *)
                                                                                   puVar3,1);
                                                            if (lVar12 == 0) goto LAB_090d615c;
                                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                                              *(undefined4 *)(lVar12 + 0x20) = 0xd;
                                                              if (0xc < uVar1) {
                                                                *(long *)(lVar9 + 0x80) = lVar12;
                                                                thunk_FUN_049ee3d8();
                                                                lVar12 = FUN_04947fd0(*(undefined8 *
                                                                                       )puVar3,1);
                                                                if (lVar12 == 0) goto LAB_090d615c;
                                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                                  *(undefined4 *)(lVar12 + 0x20) =
                                                                       0xe;
                                                                  if (0xd < uVar1) {
                                                                    *(long *)(lVar9 + 0x88) = lVar12
                                                                    ;
                                                                    thunk_FUN_049ee3d8();
                                                                    lVar12 = FUN_04947fd0(*(
                                                  undefined8 *)puVar3,1);
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    *(undefined4 *)(lVar12 + 0x20) = 0x16;
                                                    if (0xe < uVar1) {
                                                      *(long *)(lVar9 + 0x90) = lVar12;
                                                      thunk_FUN_049ee3d8();
                                                      lVar12 = FUN_04947fd0(*(undefined8 *)puVar3,1)
                                                      ;
                                                      if (lVar12 == 0) goto LAB_090d615c;
                                                      if (*(int *)(lVar12 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar12 + 0x20) = 0x10;
                                                        if ((*(uint *)(lVar9 + 0x18) & 0xfffffff0)
                                                            != 0) {
                                                          *(long *)(lVar9 + 0x98) = lVar12;
                                                          thunk_FUN_049ee3d8();
                                                          lVar12 = FUN_04947fd0(*(undefined8 *)
                                                                                 puVar3,1);
                                                          if (lVar12 == 0) goto LAB_090d615c;
                                                          if (*(int *)(lVar12 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar9 + 0x18);
                                                            *(undefined4 *)(lVar12 + 0x20) = 0x11;
                                                            if (0x10 < uVar1) {
                                                              *(long *)(lVar9 + 0xa0) = lVar12;
                                                              thunk_FUN_049ee3d8();
                                                              lVar12 = FUN_04947fd0(*(undefined8 *)
                                                                                     puVar3,1);
                                                              if (lVar12 == 0) goto LAB_090d615c;
                                                              if (*(int *)(lVar12 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar9 + 0x18);
                                                                *(undefined4 *)(lVar12 + 0x20) =
                                                                     0x12;
                                                                if (0x11 < uVar1) {
                                                                  *(long *)(lVar9 + 0xa8) = lVar12;
                                                                  thunk_FUN_049ee3d8();
                                                                  lVar12 = FUN_04947fd0(*(undefined8
                                                                                          *)puVar3,1
                                                                                       );
                                                                  if (lVar12 == 0)
                                                                  goto LAB_090d615c;
                                                                  if (*(int *)(lVar12 + 0x18) != 0)
                                                                  {
                                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                                    *(undefined4 *)(lVar12 + 0x20) =
                                                                         0x17;
                                                                    if (0x12 < uVar1) {
                                                                      *(long *)(lVar9 + 0xb0) =
                                                                           lVar12;
                                                                      thunk_FUN_049ee3d8((long *)(
                                                  lVar9 + 0xb0));
                                                  uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,0);
                                                  if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xb8) = uVar10;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar9 + 0xb8),
                                                                       uVar10);
                                                    uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,0);
                                                    if (0x14 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0xc0) = uVar10;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (lVar9 + 0xc0),uVar10);
                                                      uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,0)
                                                      ;
                                                      if (0x15 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 200) = uVar10;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar9 + 200),uVar10);
                                                        uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,
                                                                              0);
                                                        if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0xd0) = uVar10;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar9 + 0xd0),uVar10);
                                                          uVar10 = FUN_04947fd0(*(undefined8 *)
                                                                                 puVar3,0);
                                                          puVar5 = PTR_DAT_0ac798d0;
                                                          puVar4 = PTR_DAT_0ac798c8;
                                                          if (0x17 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0xd8) = uVar10;
                                                            thunk_FUN_049ee3d8();
                                                            plVar11 = (long *)(*(long *)(*(long *)
                                                  puVar2 + 0xb8) + 0x18);
                                                  *plVar11 = lVar9;
                                                  thunk_FUN_049ee3d8(plVar11,lVar9);
                                                  lVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar5);
                                                  FUN_06b13594(lVar9,*(undefined8 *)puVar4);
                                                  puVar4 = PTR_DAT_0ac798b8;
                                                  if (lVar9 != 0) {
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)PTR_DAT_0ac798b8;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar9 + 0x1c) =
                                                             *(int *)(lVar9 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_06b13e24(lVar9,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_090d615c;
                                                  }
                                                  puVar4 = PTR_DAT_0ac79908;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar9,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar11 = lVar9;
                                                  thunk_FUN_049ee3d8(plVar11,lVar9);
                                                  uVar10 = FUN_04947fd0(*(undefined8 *)puVar3,5);
                                                  FUN_08c82ec4(uVar10,*(undefined8 *)puVar4,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x28);
                                                  *puVar14 = uVar10;
                                                  thunk_FUN_049ee3d8(puVar14,uVar10);
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


