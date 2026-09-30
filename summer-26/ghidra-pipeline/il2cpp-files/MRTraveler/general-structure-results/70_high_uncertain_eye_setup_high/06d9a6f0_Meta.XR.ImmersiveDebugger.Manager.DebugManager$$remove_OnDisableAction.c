/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$remove_OnDisableAction
ENTRY_POINT: 06d9a6f0
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


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__remove_OnDisableAction(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  *(undefined8 *)(unaff_x19 + 0xb0) = param_1;
  thunk_FUN_03d233cc();
  uVar4 = thunk_FUN_03cf5234(*unaff_x20);
  FUN_06da23d4();
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xb8),uVar4);
  uVar4 = thunk_FUN_03cf5234(*unaff_x21);
  FUN_06d9c380();
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xc0),uVar4);
  lVar5 = FUN_03c8f97c(*unaff_x25,2);
  uVar4 = FUN_03c8f97c(*unaff_x24,4);
  if (lVar5 == 0) goto LAB_06d9b2f8;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
    uVar4 = FUN_03c8f97c(*unaff_x24,4);
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x28) = uVar4;
      thunk_FUN_03d233cc();
      *(long *)(unaff_x19 + 0xd8) = lVar5;
      thunk_FUN_03d233cc((long *)(unaff_x19 + 0xd8),lVar5);
      lVar5 = FUN_03c8f97c(*unaff_x25,2);
      uVar4 = FUN_03c8f97c(*unaff_x24,2);
      if (lVar5 == 0) goto LAB_06d9b2f8;
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = uVar4;
        thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
        uVar4 = FUN_03c8f97c(*unaff_x24,2);
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = uVar4;
          thunk_FUN_03d233cc();
          *(long *)(unaff_x19 + 0xe0) = lVar5;
          thunk_FUN_03d233cc((long *)(unaff_x19 + 0xe0),lVar5);
          lVar5 = FUN_03c8f97c(*unaff_x25,2);
          uVar4 = FUN_03c8f97c(*unaff_x24,2);
          if (lVar5 == 0) goto LAB_06d9b2f8;
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = uVar4;
            thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
            uVar4 = FUN_03c8f97c(*unaff_x24,2);
            puVar2 = PTR_DAT_08e6abb8;
            if (1 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x28) = uVar4;
              thunk_FUN_03d233cc();
              *(long *)(unaff_x19 + 0xe8) = lVar5;
              thunk_FUN_03d233cc((long *)(unaff_x19 + 0xe8),lVar5);
              lVar5 = FUN_03c8f97c(*unaff_x23,2);
              uVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,2);
              if (lVar5 == 0) goto LAB_06d9b2f8;
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) = uVar4;
                thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
                uVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,2);
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x28) = uVar4;
                  thunk_FUN_03d233cc();
                  *(long *)(unaff_x19 + 0xf0) = lVar5;
                  thunk_FUN_03d233cc((long *)(unaff_x19 + 0xf0),lVar5);
                  lVar5 = FUN_03c8f97c(*unaff_x25,2);
                  uVar4 = FUN_03c8f97c(*unaff_x24,2);
                  if (lVar5 == 0) goto LAB_06d9b2f8;
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined8 *)(lVar5 + 0x20) = uVar4;
                    thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
                    uVar4 = FUN_03c8f97c(*unaff_x24,2);
                    puVar3 = PTR_DAT_08e8fb78;
                    puVar1 = PTR_DAT_08e6abb0;
                    if (1 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x28) = uVar4;
                      thunk_FUN_03d233cc();
                      *(long *)(unaff_x19 + 0xf8) = lVar5;
                      thunk_FUN_03d233cc((long *)(unaff_x19 + 0xf8),lVar5);
                      lVar5 = FUN_03c8f97c(*(undefined8 *)puVar3,2);
                      uVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
                      if (lVar5 == 0) goto LAB_06d9b2f8;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined8 *)(lVar5 + 0x20) = uVar4;
                        thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
                        uVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
                        if (1 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x28) = uVar4;
                          thunk_FUN_03d233cc();
                          *(long *)(unaff_x19 + 0x100) = lVar5;
                          thunk_FUN_03d233cc(unaff_x19 + 0x100,lVar5);
                          lVar5 = FUN_03c8f97c(*(undefined8 *)puVar3,2);
                          uVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
                          if (lVar5 == 0) goto LAB_06d9b2f8;
                          if (*(int *)(lVar5 + 0x18) != 0) {
                            *(undefined8 *)(lVar5 + 0x20) = uVar4;
                            thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
                            uVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
                            if (1 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x28) = uVar4;
                              thunk_FUN_03d233cc();
                              *(long *)(unaff_x19 + 0x108) = lVar5;
                              thunk_FUN_03d233cc(unaff_x19 + 0x108,lVar5);
                              lVar5 = FUN_03c8f97c(*unaff_x25,2);
                              uVar4 = FUN_03c8f97c(*unaff_x24,2);
                              if (lVar5 == 0) goto LAB_06d9b2f8;
                              if (*(int *)(lVar5 + 0x18) != 0) {
                                *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
                                uVar4 = FUN_03c8f97c(*unaff_x24,2);
                                if (1 < *(uint *)(lVar5 + 0x18)) {
                                  *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                  thunk_FUN_03d233cc();
                                  *(long *)(unaff_x19 + 0x110) = lVar5;
                                  thunk_FUN_03d233cc(unaff_x19 + 0x110,lVar5);
                                  lVar5 = FUN_03c8f97c(*unaff_x25,2);
                                  uVar4 = FUN_03c8f97c(*unaff_x24,2);
                                  if (lVar5 == 0) goto LAB_06d9b2f8;
                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                    *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                    thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
                                    uVar4 = FUN_03c8f97c(*unaff_x24,2);
                                    if (1 < *(uint *)(lVar5 + 0x18)) {
                                      *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                      thunk_FUN_03d233cc();
                                      *(long *)(unaff_x19 + 0x128) = lVar5;
                                      thunk_FUN_03d233cc(unaff_x19 + 0x128,lVar5);
                                      lVar5 = FUN_03c8f97c(*unaff_x25,2);
                                      uVar4 = FUN_03c8f97c(*unaff_x24,2);
                                      if (lVar5 == 0) goto LAB_06d9b2f8;
                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                        *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                        thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
                                        uVar4 = FUN_03c8f97c(*unaff_x24,2);
                                        if (1 < *(uint *)(lVar5 + 0x18)) {
                                          *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                          thunk_FUN_03d233cc();
                                          *(long *)(unaff_x19 + 0x130) = lVar5;
                                          thunk_FUN_03d233cc(unaff_x19 + 0x130,lVar5);
                                          lVar5 = FUN_03c8f97c(*unaff_x25,2);
                                          uVar4 = FUN_03c8f97c(*unaff_x24,2);
                                          if (lVar5 == 0) goto LAB_06d9b2f8;
                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                            *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                            thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar4);
                                            uVar4 = FUN_03c8f97c(*unaff_x24,2);
                                            if (1 < *(uint *)(lVar5 + 0x18)) {
                                              *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                              thunk_FUN_03d233cc();
                                              *(long *)(unaff_x19 + 0x138) = lVar5;
                                              thunk_FUN_03d233cc(unaff_x19 + 0x138,lVar5);
                                              lVar5 = FUN_03c8f97c(*unaff_x23,2);
                                              uVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,2);
                                              if (lVar5 == 0) goto LAB_06d9b2f8;
                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                                thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),
                                                                   uVar4);
                                                uVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,2);
                                                if (1 < *(uint *)(lVar5 + 0x18)) {
                                                  *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                                  thunk_FUN_03d233cc();
                                                  *(long *)(unaff_x19 + 0x140) = lVar5;
                                                  thunk_FUN_03d233cc(unaff_x19 + 0x140,lVar5);
                                                  lVar5 = FUN_03c8f97c(*unaff_x25,2);
                                                  uVar4 = FUN_03c8f97c(*unaff_x24,2);
                                                  if (lVar5 == 0) goto LAB_06d9b2f8;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),
                                                                       uVar4);
                                                    uVar4 = FUN_03c8f97c(*unaff_x24,2);
                                                    puVar3 = PTR_DAT_08e8fb80;
                                                    puVar1 = PTR_DAT_08e68ce0;
                                                    if (1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                                      thunk_FUN_03d233cc();
                                                      *(long *)(unaff_x19 + 0x148) = lVar5;
                                                      thunk_FUN_03d233cc(unaff_x19 + 0x148,lVar5);
                                                      uVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,
                                                                           0x240);
                                                      *(undefined8 *)(unaff_x19 + 0x160) = uVar4;
                                                      thunk_FUN_03d233cc(unaff_x19 + 0x160);
                                                      uVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,
                                                                           0x240);
                                                      *(undefined8 *)(unaff_x19 + 0x168) = uVar4;
                                                      thunk_FUN_03d233cc(unaff_x19 + 0x168);
                                                      uVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,
                                                                           0x240);
                                                      *(undefined8 *)(unaff_x19 + 0x170) = uVar4;
                                                      thunk_FUN_03d233cc(unaff_x19 + 0x170);
                                                      lVar5 = FUN_03c8f97c(*(undefined8 *)puVar3,2);
                                                      lVar6 = FUN_03c8f97c(*unaff_x25,4);
                                                      uVar4 = FUN_03c8f97c(*unaff_x24,0xd);
                                                      if (lVar6 == 0) goto LAB_06d9b2f8;
                                                      if (*(int *)(lVar6 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                        thunk_FUN_03d233cc((undefined8 *)
                                                                           (lVar6 + 0x20),uVar4);
                                                        uVar4 = FUN_03c8f97c(*unaff_x24,0xd);
                                                        if (1 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                          thunk_FUN_03d233cc((undefined8 *)
                                                                             (lVar6 + 0x28),uVar4);
                                                          uVar4 = FUN_03c8f97c(*unaff_x24,0xd);
                                                          if (2 < *(uint *)(lVar6 + 0x18)) {
                                                            *(undefined8 *)(lVar6 + 0x30) = uVar4;
                                                            thunk_FUN_03d233cc((undefined8 *)
                                                                               (lVar6 + 0x30),uVar4)
                                                            ;
                                                            uVar4 = FUN_03c8f97c(*unaff_x24,0x17);
                                                            if (3 < *(uint *)(lVar6 + 0x18)) {
                                                              *(undefined8 *)(lVar6 + 0x38) = uVar4;
                                                              thunk_FUN_03d233cc();
                                                              if (lVar5 == 0) {
LAB_06d9b2f8:
                    /* WARNING: Subroutine does not return */
                                                                FUN_03c8fb30();
                                                              }
                                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                                *(long *)(lVar5 + 0x20) = lVar6;
                                                                thunk_FUN_03d233cc((long *)(lVar5 + 
                                                  0x20),lVar6);
                                                  lVar6 = FUN_03c8f97c(*unaff_x25,4);
                                                  uVar4 = FUN_03c8f97c(*unaff_x24,0xd);
                                                  if (lVar6 == 0) goto LAB_06d9b2f8;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x20),
                                                                       uVar4);
                                                    uVar4 = FUN_03c8f97c(*unaff_x24,0xd);
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                      thunk_FUN_03d233cc((undefined8 *)
                                                                         (lVar6 + 0x28),uVar4);
                                                      uVar4 = FUN_03c8f97c(*unaff_x24,0xd);
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined8 *)(lVar6 + 0x30) = uVar4;
                                                        thunk_FUN_03d233cc((undefined8 *)
                                                                           (lVar6 + 0x30),uVar4);
                                                        uVar4 = FUN_03c8f97c(*unaff_x24,0x17);
                                                        if (3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined8 *)(lVar6 + 0x38) = uVar4;
                                                          thunk_FUN_03d233cc();
                                                          if (1 < *(uint *)(lVar5 + 0x18)) {
                                                            *(long *)(lVar5 + 0x28) = lVar6;
                                                            thunk_FUN_03d233cc((long *)(lVar5 + 0x28
                                                                                       ),lVar6);
                                                            *(long *)(unaff_x19 + 0x180) = lVar5;
                                                            thunk_FUN_03d233cc(unaff_x19 + 0x180,
                                                                               lVar5);
                                                            lVar5 = FUN_03c8f97c(*unaff_x23,2);
                                                            uVar4 = FUN_03c8f97c(*(undefined8 *)
                                                                                  puVar2,0x243);
                                                            if (lVar5 == 0) goto LAB_06d9b2f8;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                                              thunk_FUN_03d233cc((undefined8 *)
                                                                                 (lVar5 + 0x20),
                                                                                 uVar4);
                                                              uVar4 = FUN_03c8f97c(*(undefined8 *)
                                                                                    puVar2,0x243);
                                                              puVar1 = PTR_DAT_08e8fb88;
                                                              if (1 < *(uint *)(lVar5 + 0x18)) {
                                                                *(undefined8 *)(lVar5 + 0x28) =
                                                                     uVar4;
                                                                thunk_FUN_03d233cc();
                                                                *(long *)(unaff_x19 + 0x188) = lVar5
                                                                ;
                                                                thunk_FUN_03d233cc(unaff_x19 + 0x188
                                                                                   ,lVar5);
                                                                uVar4 = FUN_03c8f97c(*(undefined8 *)
                                                                                      puVar2,0x240);
                                                                *(undefined8 *)(unaff_x19 + 400) =
                                                                     uVar4;
                                                                thunk_FUN_03d233cc(unaff_x19 + 400);
                                                                uVar4 = FUN_03c8f97c(*(undefined8 *)
                                                                                      puVar2,0x20);
                                                                *(undefined8 *)(unaff_x19 + 0x198) =
                                                                     uVar4;
                                                                thunk_FUN_03d233cc(unaff_x19 + 0x198
                                                                                  );
                                                                if (*(int *)(*(long *)puVar1 + 0xe0)
                                                                    == 0) {
                                                                  thunk_FUN_03cd7500();
                                                                }
                                                                FUN_06d9e1e8();
                                                                lVar5 = FUN_03c8f97c(*(undefined8 *)
                                                                                      puVar3,2);
                                                                lVar6 = FUN_03c8f97c(*unaff_x25,2);
                                                                uVar4 = FUN_03c8f97c(*unaff_x24,3);
                                                                if (lVar6 == 0) goto LAB_06d9b2f8;
                                                                if (*(int *)(lVar6 + 0x18) != 0) {
                                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                                       uVar4;
                                                                  thunk_FUN_03d233cc((undefined8 *)
                                                                                     (lVar6 + 0x20),
                                                                                     uVar4);
                                                                  uVar4 = FUN_03c8f97c(*unaff_x24,3)
                                                                  ;
                                                                  if (1 < *(uint *)(lVar6 + 0x18)) {
                                                                    *(undefined8 *)(lVar6 + 0x28) =
                                                                         uVar4;
                                                                    thunk_FUN_03d233cc();
                                                                    if (lVar5 == 0)
                                                                    goto LAB_06d9b2f8;
                                                                    if (*(int *)(lVar5 + 0x18) != 0)
                                                                    {
                                                                      *(long *)(lVar5 + 0x20) =
                                                                           lVar6;
                                                                      thunk_FUN_03d233cc((long *)(
                                                  lVar5 + 0x20),lVar6);
                                                  lVar6 = FUN_03c8f97c(*unaff_x25,2);
                                                  uVar4 = FUN_03c8f97c(*unaff_x24,3);
                                                  if (lVar6 == 0) goto LAB_06d9b2f8;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x20),
                                                                       uVar4);
                                                    uVar4 = FUN_03c8f97c(*unaff_x24,3);
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                      thunk_FUN_03d233cc();
                                                      puVar1 = PTR_DAT_08e8fb90;
                                                      if (1 < *(uint *)(lVar5 + 0x18)) {
                                                        *(long *)(lVar5 + 0x28) = lVar6;
                                                        thunk_FUN_03d233cc((long *)(lVar5 + 0x28),
                                                                           lVar6);
                                                        *(long *)(unaff_x19 + 0x118) = lVar5;
                                                        thunk_FUN_03d233cc(unaff_x19 + 0x118,lVar5);
                                                        lVar5 = FUN_03c8f97c(*(undefined8 *)puVar1,2
                                                                            );
                                                        lVar6 = FUN_03c8f97c(*unaff_x23,2);
                                                        uVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,3
                                                                            );
                                                        if (lVar6 == 0) goto LAB_06d9b2f8;
                                                        if (*(int *)(lVar6 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                          thunk_FUN_03d233cc((undefined8 *)
                                                                             (lVar6 + 0x20),uVar4);
                                                          uVar4 = FUN_03c8f97c(*(undefined8 *)puVar2
                                                                               ,3);
                                                          if (1 < *(uint *)(lVar6 + 0x18)) {
                                                            *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                            thunk_FUN_03d233cc();
                                                            if (lVar5 == 0) goto LAB_06d9b2f8;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(long *)(lVar5 + 0x20) = lVar6;
                                                              thunk_FUN_03d233cc((long *)(lVar5 + 
                                                  0x20),lVar6);
                                                  lVar6 = FUN_03c8f97c(*unaff_x23,2);
                                                  uVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,3);
                                                  if (lVar6 == 0) goto LAB_06d9b2f8;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x20),
                                                                       uVar4);
                                                    uVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,3);
                                                    if (1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                      thunk_FUN_03d233cc();
                                                      if (1 < *(uint *)(lVar5 + 0x18)) {
                                                        *(long *)(lVar5 + 0x28) = lVar6;
                                                        thunk_FUN_03d233cc((long *)(lVar5 + 0x28),
                                                                           lVar6);
                                                        *(long *)(unaff_x19 + 0x120) = lVar5;
                                                        thunk_FUN_03d233cc(unaff_x19 + 0x120,lVar5);
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


