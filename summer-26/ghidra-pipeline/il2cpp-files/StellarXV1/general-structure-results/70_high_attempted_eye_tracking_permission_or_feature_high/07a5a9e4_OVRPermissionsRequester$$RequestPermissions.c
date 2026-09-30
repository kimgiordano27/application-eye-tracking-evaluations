/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 07a5a9e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  uVar4 = FUN_04077674(*unaff_x27,0x18);
  FUN_07593f88(uVar4,*unaff_x26,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_040ec700(puVar5,uVar4);
  uVar4 = FUN_04077674(*unaff_x22,0x18);
  FUN_07593f88(uVar4,*unaff_x25,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  thunk_FUN_040ec700(puVar5,uVar4);
  lVar6 = FUN_04077674(*unaff_x24,0x18);
  uVar4 = FUN_04077674(*unaff_x22,6);
  FUN_07593f88(uVar4,*unaff_x21,0);
  if (lVar6 == 0) goto LAB_07a5b6d4;
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),uVar4);
    uVar4 = FUN_04077674(*unaff_x22,0);
                    /* try { // try from 07a5aaa8 to 07b5ab8f has its CatchHandler @ 07a5aaa8
                       catch() { ... } // from try @ 07a5aaa8 with catch @ 07a5aaa8
                       catch() { ... } // from try @ 07a5ac04 with catch @ 07a5aaa8
                       catch() { ... } // from try @ 07a5ac50 with catch @ 07a5aaa8
                       catch() { ... } // from try @ 07a5ac90 with catch @ 07a5aaa8
                       catch() { ... } // from try @ 07a5acb4 with catch @ 07a5aaa8 */
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      thunk_FUN_040ec700();
      lVar7 = FUN_04077674(*unaff_x22,1);
      if (lVar7 == 0) goto LAB_07a5b6d4;
      if (*(int *)(lVar7 + 0x18) != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        *(undefined4 *)(lVar7 + 0x20) = 3;
        if (2 < uVar1) {
          *(long *)(lVar6 + 0x30) = lVar7;
          thunk_FUN_040ec700();
          lVar7 = FUN_04077674(*unaff_x22,1);
          if (lVar7 == 0) goto LAB_07a5b6d4;
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(undefined4 *)(lVar7 + 0x20) = 4;
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
              *(long *)(lVar6 + 0x38) = lVar7;
              thunk_FUN_040ec700();
              lVar7 = FUN_04077674(*unaff_x22,1);
              if (lVar7 == 0) goto LAB_07a5b6d4;
              if (*(int *)(lVar7 + 0x18) != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                *(undefined4 *)(lVar7 + 0x20) = 5;
                if (4 < uVar1) {
                  *(long *)(lVar6 + 0x40) = lVar7;
                  thunk_FUN_040ec700();
                  lVar7 = FUN_04077674(*unaff_x22,1);
                  if (lVar7 == 0) goto LAB_07a5b6d4;
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 07a5ab90 to 07b5ab97 has its CatchHandler @ 07a5ac58 */
                    *(undefined4 *)(lVar7 + 0x20) = 0x13;
                    if (5 < uVar1) {
                      *(long *)(lVar6 + 0x48) = lVar7;
                      thunk_FUN_040ec700();
                      lVar7 = FUN_04077674(*unaff_x22,1);
                      if (lVar7 == 0) goto LAB_07a5b6d4;
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        uVar1 = *(uint *)(lVar6 + 0x18);
                        *(undefined4 *)(lVar7 + 0x20) = 7;
                    /* try { // try from 07a5abd8 to 07b5abdb has its CatchHandler @ 07a5ac5c */
                        if (6 < uVar1) {
                    /* try { // try from 07a5abdc to 07b5abe7 has its CatchHandler @ 07a5ac6c */
                          *(long *)(lVar6 + 0x50) = lVar7;
                          thunk_FUN_040ec700();
                          lVar7 = FUN_04077674(*unaff_x22,1);
                          if (lVar7 == 0) goto LAB_07a5b6d4;
                    /* try { // try from 07a5abf8 to 07b5ac03 has its CatchHandler @ 07a5ac68 */
                          if (*(int *)(lVar7 + 0x18) != 0) {
                    /* try { // try from 07a5ac04 to 07b5ac3b has its CatchHandler @ 07a5aaa8 */
                            *(undefined4 *)(lVar7 + 0x20) = 8;
                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                              *(long *)(lVar6 + 0x58) = lVar7;
                              thunk_FUN_040ec700();
                              lVar7 = FUN_04077674(*unaff_x22,1);
                              if (lVar7 == 0) goto LAB_07a5b6d4;
                    /* try { // try from 07a5ac3c to 07b5ac43 has its CatchHandler @ 07a5ac70 */
                              if (*(int *)(lVar7 + 0x18) != 0) {
                                uVar1 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 07a5ac44 to 07b5ac47 has its CatchHandler @ 07a5ac64 */
                    /* try { // try from 07a5ac48 to 07b5ac4b has its CatchHandler @ 07a5ac60 */
                                *(undefined4 *)(lVar7 + 0x20) = 0x14;
                    /* try { // try from 07a5ac4c to 07b5ac4f has its CatchHandler @ 07a5ac54 */
                    /* try { // try from 07a5ac50 to 07b5ac8b has its CatchHandler @ 07a5aaa8 */
                                if (8 < uVar1) {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a5ac4c with catch @ 07a5ac54
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a5ab90 with catch @ 07a5ac58
                        */
                                  *(long *)(lVar6 + 0x60) = lVar7;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a5abd8 with catch @ 07a5ac5c
                        */
                                  thunk_FUN_040ec700();
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a5ac48 with catch @ 07a5ac60
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a5ac44 with catch @ 07a5ac64
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a5abf8 with catch @ 07a5ac68
                        */
                                  lVar7 = FUN_04077674(*unaff_x22,1);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a5abdc with catch @ 07a5ac6c
                        */
                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a5ac3c with catch @ 07a5ac70
                        */
                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    *(undefined4 *)(lVar7 + 0x20) = 10;
                    /* try { // try from 07a5ac8c to 07b5ac8f has its CatchHandler @ 07a5aca8 */
                                    if (9 < uVar1) {
                    /* try { // try from 07a5ac90 to 07b5acab has its CatchHandler @ 07a5aaa8 */
                                      *(long *)(lVar6 + 0x68) = lVar7;
                                      thunk_FUN_040ec700();
                                      lVar7 = FUN_04077674(*unaff_x22,1);
                    /* catch() { ... } // from try @ 07a5ac8c with catch @ 07a5aca8 */
                                      if (lVar7 == 0) goto LAB_07a5b6d4;
                    /* try { // try from 07a5acac to 07b5acb3 has its CatchHandler @ 07a5acbc */
                    /* try { // try from 07a5acb4 to 07b5acbf has its CatchHandler @ 07a5aaa8 */
                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                        uVar1 = *(uint *)(lVar6 + 0x18);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07a5acac with catch @ 07a5acbc
                        */
                                        *(undefined4 *)(lVar7 + 0x20) = 0xb;
                                        if (10 < uVar1) {
                                          *(long *)(lVar6 + 0x70) = lVar7;
                                          thunk_FUN_040ec700();
                                          lVar7 = FUN_04077674(*unaff_x22,1);
                                          if (lVar7 == 0) goto LAB_07a5b6d4;
                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            *(undefined4 *)(lVar7 + 0x20) = 0x15;
                                            if (0xb < uVar1) {
                                              *(long *)(lVar6 + 0x78) = lVar7;
                                              thunk_FUN_040ec700();
                                              lVar7 = FUN_04077674(*unaff_x22,1);
                                              if (lVar7 == 0) goto LAB_07a5b6d4;
                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                *(undefined4 *)(lVar7 + 0x20) = 0xd;
                                                if (0xc < uVar1) {
                                                  *(long *)(lVar6 + 0x80) = lVar7;
                                                  thunk_FUN_040ec700();
                                                  lVar7 = FUN_04077674(*unaff_x22,1);
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    *(undefined4 *)(lVar7 + 0x20) = 0xe;
                                                    if (0xd < uVar1) {
                                                      *(long *)(lVar6 + 0x88) = lVar7;
                                                      thunk_FUN_040ec700();
                                                      lVar7 = FUN_04077674(*unaff_x22,1);
                                                      if (lVar7 == 0) goto LAB_07a5b6d4;
                                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        *(undefined4 *)(lVar7 + 0x20) = 0x16;
                                                        if (0xe < uVar1) {
                                                          *(long *)(lVar6 + 0x90) = lVar7;
                                                          thunk_FUN_040ec700();
                                                          lVar7 = FUN_04077674(*unaff_x22,1);
                                                          if (lVar7 == 0) goto LAB_07a5b6d4;
                                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar7 + 0x20) = 0x10;
                                                            if ((*(uint *)(lVar6 + 0x18) &
                                                                0xfffffff0) != 0) {
                                                              *(long *)(lVar6 + 0x98) = lVar7;
                                                              thunk_FUN_040ec700();
                                                              lVar7 = FUN_04077674(*unaff_x22,1);
                                                              if (lVar7 == 0) goto LAB_07a5b6d4;
                                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                                *(undefined4 *)(lVar7 + 0x20) = 0x11
                                                                ;
                                                                if (0x10 < uVar1) {
                                                                  *(long *)(lVar6 + 0xa0) = lVar7;
                                                                  thunk_FUN_040ec700();
                                                                  lVar7 = FUN_04077674(*unaff_x22,1)
                                                                  ;
                                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                                    *(undefined4 *)(lVar7 + 0x20) =
                                                                         0x12;
                                                                    if (0x11 < uVar1) {
                                                                      *(long *)(lVar6 + 0xa8) =
                                                                           lVar7;
                                                                      thunk_FUN_040ec700();
                                                                      lVar7 = FUN_04077674(*
                                                  unaff_x22,1);
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x17;
                                                    if (0x12 < uVar1) {
                                                      *(long *)(lVar6 + 0xb0) = lVar7;
                                                      thunk_FUN_040ec700((long *)(lVar6 + 0xb0));
                                                      uVar4 = FUN_04077674(*unaff_x22,0);
                                                      if (0x13 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined8 *)(lVar6 + 0xb8) = uVar4;
                                                        thunk_FUN_040ec700((undefined8 *)
                                                                           (lVar6 + 0xb8),uVar4);
                                                        uVar4 = FUN_04077674(*unaff_x22,0);
                                                        if (0x14 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined8 *)(lVar6 + 0xc0) = uVar4;
                                                          thunk_FUN_040ec700((undefined8 *)
                                                                             (lVar6 + 0xc0),uVar4);
                                                          uVar4 = FUN_04077674(*unaff_x22,0);
                                                          if (0x15 < *(uint *)(lVar6 + 0x18)) {
                                                            *(undefined8 *)(lVar6 + 200) = uVar4;
                                                            thunk_FUN_040ec700((undefined8 *)
                                                                               (lVar6 + 200),uVar4);
                                                            uVar4 = FUN_04077674(*unaff_x22,0);
                                                            if (0x16 < *(uint *)(lVar6 + 0x18)) {
                                                              *(undefined8 *)(lVar6 + 0xd0) = uVar4;
                                                              thunk_FUN_040ec700((undefined8 *)
                                                                                 (lVar6 + 0xd0),
                                                                                 uVar4);
                                                              uVar4 = FUN_04077674(*unaff_x22,0);
                                                              puVar3 = PTR_DAT_092ef4d8;
                                                              puVar2 = PTR_DAT_092ef480;
                                                              if (0x17 < *(uint *)(lVar6 + 0x18)) {
                                                                *(undefined8 *)(lVar6 + 0xd8) =
                                                                     uVar4;
                                                                thunk_FUN_040ec700();
                                                                plVar8 = (long *)(*(long *)(*
                                                  unaff_x23 + 0xb8) + 0x18);
                                                  *plVar8 = lVar6;
                                                  thunk_FUN_040ec700(plVar8,lVar6);
                                                  lVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
                                                  FUN_05bcc4ec(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_092f0a58;
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_092f0a58;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar6 + 0x1c) =
                                                             *(int *)(lVar6 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_05bccd7c(lVar6,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_07a5b6d4;
                                                  }
                                                  puVar2 = PTR_DAT_092f0a78;
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar6,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar8 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar8 = lVar6;
                                                  thunk_FUN_040ec700(plVar8,lVar6);
                                                  uVar4 = FUN_04077674(*unaff_x22,5);
                                                  FUN_07593f88(uVar4,*(undefined8 *)puVar2,0);
                                                  puVar5 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar5 = uVar4;
                                                  thunk_FUN_040ec700(puVar5,uVar4);
                                                  return;
                                                  }
                                                  }
LAB_07a5b6d4:
                    /* WARNING: Subroutine does not return */
                                                  FUN_04077830();
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_04077838();
}


