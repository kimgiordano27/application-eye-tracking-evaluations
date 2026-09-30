/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_2
ENTRY_POINT: 06da90b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar6 = PTR_DAT_08e8fe20;
  puVar5 = PTR_DAT_08e8fe18;
  puVar4 = PTR_DAT_08e8fae8;
  puVar3 = PTR_DAT_08e8afd0;
  puVar2 = PTR_DAT_08e6baa0;
  puVar1 = PTR_DAT_08e6abb8;
  if ((DAT_09419ae6 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8fb80);
    FUN_03c8f898(PTR_DAT_08e8afd0);
    FUN_03c8f898(PTR_DAT_08e6baa0);
    FUN_03c8f898(PTR_DAT_08e8fae8);
    FUN_03c8f898(PTR_DAT_08e8fb90);
    FUN_03c8f898(PTR_DAT_08e8fb60);
    FUN_03c8f898(PTR_DAT_08e6abb8);
    FUN_03c8f898(PTR_DAT_08e8fe28);
    FUN_03c8f898(PTR_DAT_08e8fe30);
    FUN_03c8f898(PTR_DAT_08e8fe38);
    FUN_03c8f898(PTR_DAT_08e8fe40);
    FUN_03c8f898(PTR_DAT_08e8fe48);
    FUN_03c8f898(PTR_DAT_08e8fe50);
    FUN_03c8f898(PTR_DAT_08e8fe58);
    FUN_03c8f898(PTR_DAT_08e8fe60);
    FUN_03c8f898(PTR_DAT_08e8fe68);
    FUN_03c8f898(PTR_DAT_08e8fe70);
    FUN_03c8f898(PTR_DAT_08e8fe78);
    FUN_03c8f898(PTR_DAT_08e8fe80);
    FUN_03c8f898(PTR_DAT_08e8fe88);
    FUN_03c8f898(PTR_DAT_08e8fe90);
    FUN_03c8f898(PTR_DAT_08e8fe98);
    FUN_03c8f898(PTR_DAT_08e8fea0);
    FUN_03c8f898(PTR_DAT_08e8fea8);
    FUN_03c8f898(PTR_DAT_08e8feb0);
    FUN_03c8f898(PTR_DAT_08e8feb8);
    FUN_03c8f898(PTR_DAT_08e8fec0);
    FUN_03c8f898(PTR_DAT_08e8fec8);
    FUN_03c8f898(PTR_DAT_08e8fed0);
    FUN_03c8f898(PTR_DAT_08e8fed8);
    FUN_03c8f898(PTR_DAT_08e8fee0);
    FUN_03c8f898(PTR_DAT_08e8fe18);
    FUN_03c8f898(PTR_DAT_08e8fee8);
    FUN_03c8f898(PTR_DAT_08e8fe20);
    FUN_03c8f898(PTR_DAT_08e8fef0);
    FUN_03c8f898(PTR_DAT_08e8fef8);
    FUN_03c8f898(PTR_DAT_08e8ff00);
    FUN_03c8f898(PTR_DAT_08e8ff08);
    FUN_03c8f898(PTR_DAT_08e8ff10);
    FUN_03c8f898(PTR_DAT_08e8ff18);
    FUN_03c8f898(PTR_DAT_08e8ff20);
    FUN_03c8f898(PTR_DAT_08e8ff28);
    FUN_03c8f898(PTR_DAT_08e8ff30);
    FUN_03c8f898(PTR_DAT_08e8ff38);
    FUN_03c8f898(PTR_DAT_08e8ff40);
    FUN_03c8f898(PTR_DAT_08e8ff48);
    FUN_03c8f898(PTR_DAT_08e8ff50);
    FUN_03c8f898(PTR_DAT_08e8ff58);
    DAT_09419ae6 = 1;
  }
  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar1,0x100);
  FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar8;
  thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar8);
  lVar9 = FUN_03c8f97c(*(undefined8 *)puVar3,9);
  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x17);
  FUN_0701f51c(uVar8,*(undefined8 *)puVar6,0);
  puVar5 = PTR_DAT_08e8fe90;
  if (lVar9 == 0) goto LAB_06daa268;
  if (*(int *)(lVar9 + 0x18) != 0) {
    *(undefined8 *)(lVar9 + 0x20) = uVar8;
    thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x20),uVar8);
    uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x17);
    FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
    puVar5 = PTR_DAT_08e8ff00;
    if (1 < *(uint *)(lVar9 + 0x18)) {
      *(undefined8 *)(lVar9 + 0x28) = uVar8;
      thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x28),uVar8);
      uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x17);
      FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
      puVar5 = PTR_DAT_08e8fe68;
      if (2 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + 0x30) = uVar8;
        thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x30),uVar8);
        uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x17);
        FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
        puVar6 = PTR_DAT_08e8fef0;
        if (3 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x38) = uVar8;
          thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x38),uVar8);
          uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x17);
          FUN_0701f51c(uVar8,*(undefined8 *)puVar6,0);
          if (4 < *(uint *)(lVar9 + 0x18)) {
            *(undefined8 *)(lVar9 + 0x40) = uVar8;
            thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x40),uVar8);
            uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x17);
            FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
            if (5 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x48) = uVar8;
              thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x48),uVar8);
              uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x17);
              FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
              if (6 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x50) = uVar8;
                thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x50),uVar8);
                uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x17);
                FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                puVar5 = PTR_DAT_08e8ff08;
                if (7 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x58) = uVar8;
                  thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x58),uVar8);
                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x17);
                  FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                  puVar5 = PTR_DAT_08e8ff28;
                  if (8 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x60) = uVar8;
                    thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x60),uVar8);
                    plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                    *plVar10 = lVar9;
                    thunk_FUN_03d233cc(plVar10,lVar9);
                    lVar9 = FUN_03c8f97c(*(undefined8 *)puVar3,9);
                    uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0xe);
                    FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                    puVar5 = PTR_DAT_08e8ff10;
                    if (lVar9 == 0) goto LAB_06daa268;
                    if (*(int *)(lVar9 + 0x18) != 0) {
                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                      thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x20),uVar8);
                      uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0xe);
                      FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                      puVar5 = PTR_DAT_08e8fea0;
                      if (1 < *(uint *)(lVar9 + 0x18)) {
                        *(undefined8 *)(lVar9 + 0x28) = uVar8;
                        thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x28),uVar8);
                        uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0xe);
                        FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                        puVar5 = PTR_DAT_08e8fef8;
                        if (2 < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x30) = uVar8;
                          thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x30),uVar8);
                          uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0xe);
                          FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                          puVar5 = PTR_DAT_08e8ff50;
                          if (3 < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x38) = uVar8;
                            thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x38),uVar8);
                            uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0xe);
                            FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                            puVar5 = PTR_DAT_08e8ff58;
                            if (4 < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x40) = uVar8;
                              thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x40),uVar8);
                              uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0xe);
                              FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                              if (5 < *(uint *)(lVar9 + 0x18)) {
                                *(undefined8 *)(lVar9 + 0x48) = uVar8;
                                thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x48),uVar8);
                                uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0xe);
                                FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                if (6 < *(uint *)(lVar9 + 0x18)) {
                                  *(undefined8 *)(lVar9 + 0x50) = uVar8;
                                  thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x50),uVar8);
                                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0xe);
                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                  puVar5 = PTR_DAT_08e8fe40;
                                  if (7 < *(uint *)(lVar9 + 0x18)) {
                                    *(undefined8 *)(lVar9 + 0x58) = uVar8;
                                    thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x58),uVar8);
                                    uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0xe);
                                    FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                    puVar5 = PTR_DAT_08e8fe58;
                                    if (8 < *(uint *)(lVar9 + 0x18)) {
                                      *(undefined8 *)(lVar9 + 0x60) = uVar8;
                                      thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x60),uVar8);
                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                                      *plVar10 = lVar9;
                                      thunk_FUN_03d233cc(plVar10,lVar9);
                                      lVar9 = FUN_03c8f97c(*(undefined8 *)puVar3,2);
                                      uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x10);
                                      FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                      puVar5 = PTR_DAT_08e8fee0;
                                      if (lVar9 == 0) goto LAB_06daa268;
                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                        *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                        thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x20),uVar8);
                                        uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x10);
                                        FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                        puVar6 = PTR_DAT_08e8fee8;
                                        puVar5 = PTR_DAT_08e8fb80;
                                        if (1 < *(uint *)(lVar9 + 0x18)) {
                                          *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                          thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x28),uVar8);
                                          plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                            0x18);
                                          *plVar10 = lVar9;
                                          thunk_FUN_03d233cc(plVar10,lVar9);
                                          lVar9 = FUN_03c8f97c(*(undefined8 *)puVar5,6);
                                          lVar11 = FUN_03c8f97c(*(undefined8 *)puVar3,3);
                                          uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                          FUN_0701f51c(uVar8,*(undefined8 *)puVar6,0);
                                          puVar5 = PTR_DAT_08e8fe48;
                                          if (lVar11 == 0) goto LAB_06daa268;
                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                            *(undefined8 *)(lVar11 + 0x20) = uVar8;
                                            thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x20),uVar8);
                                            uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                            FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                            puVar5 = PTR_DAT_08e8fe88;
                                            if (1 < *(uint *)(lVar11 + 0x18)) {
                                              *(undefined8 *)(lVar11 + 0x28) = uVar8;
                                              thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x28),uVar8
                                                                );
                                              uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                              FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                              if (2 < *(uint *)(lVar11 + 0x18)) {
                                                *(undefined8 *)(lVar11 + 0x30) = uVar8;
                                                thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x30),
                                                                   uVar8);
                                                puVar5 = PTR_DAT_08e8fe50;
                                                if (lVar9 == 0) {
LAB_06daa268:
                    /* WARNING: Subroutine does not return */
                                                  FUN_03c8fb30();
                                                }
                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                  *(long *)(lVar9 + 0x20) = lVar11;
                                                  thunk_FUN_03d233cc((long *)(lVar9 + 0x20),lVar11);
                                                  lVar11 = FUN_03c8f97c(*(undefined8 *)puVar3,3);
                                                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                                  puVar5 = PTR_DAT_08e8ff38;
                                                  if (lVar11 == 0) goto LAB_06daa268;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar8;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x20)
                                                                       ,uVar8);
                                                    uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                                    FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                                    puVar5 = PTR_DAT_08e8fec8;
                                                    if (1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x28) = uVar8;
                                                      thunk_FUN_03d233cc((undefined8 *)
                                                                         (lVar11 + 0x28),uVar8);
                                                      uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                                      FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                                      if (2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x30) = uVar8;
                                                        thunk_FUN_03d233cc((undefined8 *)
                                                                           (lVar11 + 0x30),uVar8);
                                                        if (1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(long *)(lVar9 + 0x28) = lVar11;
                                                          thunk_FUN_03d233cc((long *)(lVar9 + 0x28),
                                                                             lVar11);
                                                          lVar11 = FUN_03c8f97c(*(undefined8 *)
                                                                                 puVar3,3);
                                                          lVar12 = FUN_03c8f97c(*(undefined8 *)
                                                                                 puVar2,4);
                                                          if (lVar12 == 0) goto LAB_06daa268;
                                                          if ((*(int *)(lVar12 + 0x18) != 0) &&
                                                             (*(undefined4 *)(lVar12 + 0x20) = 0xb,
                                                             *(int *)(lVar12 + 0x18) != 1)) {
                                                            *(undefined4 *)(lVar12 + 0x24) = 10;
                                                            if (lVar11 == 0) goto LAB_06daa268;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              *(long *)(lVar11 + 0x20) = lVar12;
                                                              thunk_FUN_03d233cc();
                                                              lVar12 = FUN_03c8f97c(*(undefined8 *)
                                                                                     puVar2,4);
                                                              if (lVar12 == 0) goto LAB_06daa268;
                                                              if ((*(int *)(lVar12 + 0x18) != 0) &&
                                                                 (*(undefined4 *)(lVar12 + 0x20) =
                                                                       0x12,
                                                                 *(int *)(lVar12 + 0x18) != 1)) {
                                                                *(undefined4 *)(lVar12 + 0x24) =
                                                                     0x12;
                                                                if (1 < *(uint *)(lVar11 + 0x18)) {
                                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                                  thunk_FUN_03d233cc();
                                                                  lVar12 = FUN_03c8f97c(*(undefined8
                                                                                          *)puVar2,4
                                                                                       );
                                                                  if (lVar12 == 0)
                                                                  goto LAB_06daa268;
                                                                  if ((*(int *)(lVar12 + 0x18) != 0)
                                                                     && (*(undefined4 *)
                                                                          (lVar12 + 0x20) = 0xf,
                                                                        *(int *)(lVar12 + 0x18) != 1
                                                                        )) {
                                                                    *(undefined4 *)(lVar12 + 0x24) =
                                                                         0x12;
                                                                    if (2 < *(uint *)(lVar11 + 0x18)
                                                                       ) {
                                                                      *(long *)(lVar11 + 0x30) =
                                                                           lVar12;
                                                                      thunk_FUN_03d233cc();
                                                                      puVar5 = PTR_DAT_08e8fed0;
                                                                      if (2 < *(uint *)(lVar9 + 0x18
                                                                                       )) {
                                                                        *(long *)(lVar9 + 0x30) =
                                                                             lVar11;
                                                                        thunk_FUN_03d233cc((long *)(
                                                  lVar9 + 0x30),lVar11);
                                                  lVar11 = FUN_03c8f97c(*(undefined8 *)puVar3,3);
                                                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                                  puVar5 = PTR_DAT_08e8fe98;
                                                  if (lVar11 == 0) goto LAB_06daa268;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar8;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x20)
                                                                       ,uVar8);
                                                    uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                                    FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                                    puVar5 = PTR_DAT_08e8fe30;
                                                    if (1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x28) = uVar8;
                                                      thunk_FUN_03d233cc((undefined8 *)
                                                                         (lVar11 + 0x28),uVar8);
                                                      uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                                      FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                                      if (2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x30) = uVar8;
                                                        thunk_FUN_03d233cc((undefined8 *)
                                                                           (lVar11 + 0x30),uVar8);
                                                        puVar5 = PTR_DAT_08e8fe78;
                                                        if (3 < *(uint *)(lVar9 + 0x18)) {
                                                          *(long *)(lVar9 + 0x38) = lVar11;
                                                          thunk_FUN_03d233cc((long *)(lVar9 + 0x38),
                                                                             lVar11);
                                                          lVar11 = FUN_03c8f97c(*(undefined8 *)
                                                                                 puVar3,3);
                                                          uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2
                                                                               ,4);
                                                          FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0
                                                                      );
                                                          puVar5 = PTR_DAT_08e8ff20;
                                                          if (lVar11 == 0) goto LAB_06daa268;
                                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar11 + 0x20) = uVar8;
                                                            thunk_FUN_03d233cc((undefined8 *)
                                                                               (lVar11 + 0x20),uVar8
                                                                              );
                                                            uVar8 = FUN_03c8f97c(*(undefined8 *)
                                                                                  puVar2,4);
                                                            FUN_0701f51c(uVar8,*(undefined8 *)puVar5
                                                                         ,0);
                                                            puVar5 = PTR_DAT_08e8fe60;
                                                            if (1 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x28) = uVar8
                                                              ;
                                                              thunk_FUN_03d233cc((undefined8 *)
                                                                                 (lVar11 + 0x28),
                                                                                 uVar8);
                                                              uVar8 = FUN_03c8f97c(*(undefined8 *)
                                                                                    puVar2,4);
                                                              FUN_0701f51c(uVar8,*(undefined8 *)
                                                                                  puVar5,0);
                                                              if (2 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x30) =
                                                                     uVar8;
                                                                thunk_FUN_03d233cc((undefined8 *)
                                                                                   (lVar11 + 0x30),
                                                                                   uVar8);
                                                                puVar5 = PTR_DAT_08e8fe70;
                                                                if (4 < *(uint *)(lVar9 + 0x18)) {
                                                                  *(long *)(lVar9 + 0x40) = lVar11;
                                                                  thunk_FUN_03d233cc((long *)(lVar9 
                                                  + 0x40),lVar11);
                                                  lVar11 = FUN_03c8f97c(*(undefined8 *)puVar3,3);
                                                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                                  puVar3 = PTR_DAT_08e8ff30;
                                                  if (lVar11 == 0) goto LAB_06daa268;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar8;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x20)
                                                                       ,uVar8);
                                                    uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                                    FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
                                                    puVar3 = PTR_DAT_08e8fed8;
                                                    if (1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x28) = uVar8;
                                                      thunk_FUN_03d233cc((undefined8 *)
                                                                         (lVar11 + 0x28),uVar8);
                                                      uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,4);
                                                      FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
                                                      if (2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x30) = uVar8;
                                                        thunk_FUN_03d233cc((undefined8 *)
                                                                           (lVar11 + 0x30),uVar8);
                                                        puVar7 = PTR_DAT_08e8ff48;
                                                        puVar6 = PTR_DAT_08e8fe80;
                                                        puVar5 = PTR_DAT_08e8fe28;
                                                        puVar3 = PTR_DAT_08e8fb60;
                                                        if (5 < *(uint *)(lVar9 + 0x18)) {
                                                          *(long *)(lVar9 + 0x48) = lVar11;
                                                          thunk_FUN_03d233cc((long *)(lVar9 + 0x48),
                                                                             lVar11);
                                                          plVar10 = (long *)(*(long *)(*(long *)
                                                  puVar4 + 0xb8) + 0x20);
                                                  *plVar10 = lVar9;
                                                  thunk_FUN_03d233cc(plVar10,lVar9);
                                                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar2,0x16);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar6,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar4 + 0xb8) +
                                                            0x28);
                                                  *puVar13 = uVar8;
                                                  thunk_FUN_03d233cc(puVar13,uVar8);
                                                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar1,0x40);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar4 + 0xb8) +
                                                            0x30);
                                                  *puVar13 = uVar8;
                                                  thunk_FUN_03d233cc(puVar13,uVar8);
                                                  lVar9 = FUN_03c8f97c(*(undefined8 *)puVar3,2);
                                                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar1,7);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar7,0);
                                                  puVar2 = PTR_DAT_08e8ff40;
                                                  if (lVar9 == 0) goto LAB_06daa268;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x20),
                                                                       uVar8);
                                                    uVar8 = FUN_03c8f97c(*(undefined8 *)puVar1,7);
                                                    FUN_0701f51c(uVar8,*(undefined8 *)puVar2,0);
                                                    puVar5 = PTR_DAT_08e8fe38;
                                                    puVar2 = PTR_DAT_08e8fb90;
                                                    if (1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                      thunk_FUN_03d233cc((undefined8 *)
                                                                         (lVar9 + 0x28),uVar8);
                                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 +
                                                                                  0xb8) + 0x38);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_03d233cc(plVar10,lVar9);
                                                      lVar9 = FUN_03c8f97c(*(undefined8 *)puVar2,2);
                                                      lVar11 = FUN_03c8f97c(*(undefined8 *)puVar3,2)
                                                      ;
                                                      uVar8 = FUN_03c8f97c(*(undefined8 *)puVar1,
                                                                           0x20);
                                                      FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
                                                      puVar2 = PTR_DAT_08e8fec0;
                                                      if (lVar11 == 0) goto LAB_06daa268;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar11 + 0x20) = uVar8;
                                                        thunk_FUN_03d233cc((undefined8 *)
                                                                           (lVar11 + 0x20),uVar8);
                                                        uVar8 = FUN_03c8f97c(*(undefined8 *)puVar1,
                                                                             0x20);
                                                        FUN_0701f51c(uVar8,*(undefined8 *)puVar2,0);
                                                        if (1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x28) = uVar8;
                                                          thunk_FUN_03d233cc((undefined8 *)
                                                                             (lVar11 + 0x28),uVar8);
                                                          puVar2 = PTR_DAT_08e8feb8;
                                                          if (lVar9 == 0) goto LAB_06daa268;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            *(long *)(lVar9 + 0x20) = lVar11;
                                                            thunk_FUN_03d233cc((long *)(lVar9 + 0x20
                                                                                       ),lVar11);
                                                            lVar11 = FUN_03c8f97c(*(undefined8 *)
                                                                                   puVar3,2);
                                                            uVar8 = FUN_03c8f97c(*(undefined8 *)
                                                                                  puVar1,0x20);
                                                            FUN_0701f51c(uVar8,*(undefined8 *)puVar2
                                                                         ,0);
                                                            puVar2 = PTR_DAT_08e8ff18;
                                                            if (lVar11 == 0) goto LAB_06daa268;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar11 + 0x20) = uVar8
                                                              ;
                                                              thunk_FUN_03d233cc((undefined8 *)
                                                                                 (lVar11 + 0x20),
                                                                                 uVar8);
                                                              uVar8 = FUN_03c8f97c(*(undefined8 *)
                                                                                    puVar1,0x20);
                                                              FUN_0701f51c(uVar8,*(undefined8 *)
                                                                                  puVar2,0);
                                                              if (1 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x28) =
                                                                     uVar8;
                                                                thunk_FUN_03d233cc((undefined8 *)
                                                                                   (lVar11 + 0x28),
                                                                                   uVar8);
                                                                puVar3 = PTR_DAT_08e8feb0;
                                                                puVar2 = PTR_DAT_08e8fea8;
                                                                if (1 < *(uint *)(lVar9 + 0x18)) {
                                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                                  thunk_FUN_03d233cc((long *)(lVar9 
                                                  + 0x28),lVar11);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar4 +
                                                                              0xb8) + 0x40);
                                                  *plVar10 = lVar9;
                                                  thunk_FUN_03d233cc(plVar10,lVar9);
                                                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar1,8);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar4 + 0xb8) +
                                                            0x48);
                                                  *puVar13 = uVar8;
                                                  thunk_FUN_03d233cc(puVar13,uVar8);
                                                  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar1,8);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar2,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar4 + 0xb8) +
                                                            0x50);
                                                  *puVar13 = uVar8;
                                                  thunk_FUN_03d233cc(puVar13,uVar8);
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


