/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 07a61504
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 in_w8;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0x554) = in_w8;
  lVar7 = thunk_FUN_040b4efc(*unaff_x21);
  FUN_05c26520(lVar7,*unaff_x19);
  uVar8 = FUN_04077674(*unaff_x22,4);
  FUN_07593f88(uVar8,*unaff_x20,0);
  puVar2 = PTR_DAT_092f0c70;
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x10);
    lVar12 = *(long *)PTR_DAT_092f0c70;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar3 = PTR_DAT_092f0cb0;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar8;
        thunk_FUN_040ec700(puVar9,uVar8);
      }
      else {
        FUN_05c26d88(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar8 = FUN_04077674(*unaff_x22,5);
      FUN_07593f88(uVar8,*(undefined8 *)puVar3,0);
      lVar11 = *(long *)(lVar7 + 0x10);
      lVar12 = *(long *)puVar2;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      puVar3 = PTR_DAT_092f0c90;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar8;
          thunk_FUN_040ec700(puVar9,uVar8);
        }
        else {
          FUN_05c26d88(lVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = FUN_04077674(*unaff_x22,5);
        FUN_07593f88(uVar8,*(undefined8 *)puVar3,0);
        lVar11 = *(long *)(lVar7 + 0x10);
        lVar12 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        puVar3 = PTR_DAT_092f0c98;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar8;
            thunk_FUN_040ec700(puVar9,uVar8);
          }
          else {
            FUN_05c26d88(lVar7,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = FUN_04077674(*unaff_x22,5);
          FUN_07593f88(uVar8,*(undefined8 *)puVar3,0);
          lVar11 = *(long *)(lVar7 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar3 = PTR_DAT_092f0cc8;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *puVar9 = uVar8;
              thunk_FUN_040ec700(puVar9,uVar8);
            }
            else {
              FUN_05c26d88(lVar7,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = FUN_04077674(*unaff_x22,5);
            FUN_07593f88(uVar8,*(undefined8 *)puVar3,0);
            lVar11 = *(long *)(lVar7 + 0x10);
            lVar12 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            puVar6 = PTR_DAT_092f0cb8;
            puVar5 = PTR_DAT_092f0ca0;
            puVar4 = PTR_DAT_092f0c68;
            puVar3 = PTR_DAT_092f0c60;
            puVar2 = PTR_DAT_092ecf00;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *puVar9 = uVar8;
                thunk_FUN_040ec700(puVar9,uVar8);
              }
              else {
                FUN_05c26d88(lVar7,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
              thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar7);
              uVar8 = FUN_04077674(*(undefined8 *)puVar3,0x1a);
              FUN_07593f88(uVar8,*(undefined8 *)puVar6,0);
              puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar9 = uVar8;
              thunk_FUN_040ec700(puVar9,uVar8);
              uVar8 = FUN_04077674(*unaff_x22,0x1a);
              FUN_07593f88(uVar8,*(undefined8 *)puVar5,0);
              puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar9 = uVar8;
              thunk_FUN_040ec700(puVar9,uVar8);
              lVar7 = FUN_04077674(*(undefined8 *)puVar4,0x1a);
              uVar8 = FUN_04077674(*unaff_x22,0);
              puVar3 = PTR_DAT_092f0cc0;
              if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x18) != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = uVar8;
                  thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x20),uVar8);
                  uVar8 = FUN_04077674(*unaff_x22,6);
                  FUN_07593f88(uVar8,*(undefined8 *)puVar3,0);
                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar7 + 0x28) = uVar8;
                    thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x28),uVar8);
                    lVar11 = FUN_04077674(*unaff_x22,1);
                    if (lVar11 == 0) goto LAB_07a6261c;
                    if (*(int *)(lVar11 + 0x18) != 0) {
                      uVar1 = *(uint *)(lVar7 + 0x18);
                      *(undefined4 *)(lVar11 + 0x20) = 3;
                      if (2 < uVar1) {
                        *(long *)(lVar7 + 0x30) = lVar11;
                        thunk_FUN_040ec700();
                        lVar11 = FUN_04077674(*unaff_x22,1);
                        if (lVar11 == 0) goto LAB_07a6261c;
                        if (*(int *)(lVar11 + 0x18) != 0) {
                          *(undefined4 *)(lVar11 + 0x20) = 4;
                          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                            *(long *)(lVar7 + 0x38) = lVar11;
                            thunk_FUN_040ec700();
                            lVar11 = FUN_04077674(*unaff_x22,1);
                            if (lVar11 == 0) goto LAB_07a6261c;
                            if (*(int *)(lVar11 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar7 + 0x18);
                              *(undefined4 *)(lVar11 + 0x20) = 5;
                              if (4 < uVar1) {
                                *(long *)(lVar7 + 0x40) = lVar11;
                                thunk_FUN_040ec700((long *)(lVar7 + 0x40));
                                uVar8 = FUN_04077674(*unaff_x22,0);
                                if (5 < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x48) = uVar8;
                                  thunk_FUN_040ec700();
                                  lVar11 = FUN_04077674(*unaff_x22,1);
                                  if (lVar11 == 0) goto LAB_07a6261c;
                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                    *(undefined4 *)(lVar11 + 0x20) = 7;
                                    if (6 < uVar1) {
                                      *(long *)(lVar7 + 0x50) = lVar11;
                                      thunk_FUN_040ec700();
                                      lVar11 = FUN_04077674(*unaff_x22,1);
                                      if (lVar11 == 0) goto LAB_07a6261c;
                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                        *(undefined4 *)(lVar11 + 0x20) = 8;
                                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) != 0) {
                                          *(long *)(lVar7 + 0x58) = lVar11;
                                          thunk_FUN_040ec700();
                                          lVar11 = FUN_04077674(*unaff_x22,1);
                                          if (lVar11 == 0) goto LAB_07a6261c;
                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar7 + 0x18);
                                            *(undefined4 *)(lVar11 + 0x20) = 9;
                                            if (8 < uVar1) {
                                              *(long *)(lVar7 + 0x60) = lVar11;
                                              thunk_FUN_040ec700();
                                              lVar11 = FUN_04077674(*unaff_x22,1);
                                              if (lVar11 == 0) goto LAB_07a6261c;
                                              if (*(int *)(lVar11 + 0x18) != 0) {
                                                uVar1 = *(uint *)(lVar7 + 0x18);
                                                *(undefined4 *)(lVar11 + 0x20) = 10;
                                                if (9 < uVar1) {
                                                  *(long *)(lVar7 + 0x68) = lVar11;
                                                  thunk_FUN_040ec700((long *)(lVar7 + 0x68));
                                                  uVar8 = FUN_04077674(*unaff_x22,0);
                                                  if (10 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x70) = uVar8;
                                                    thunk_FUN_040ec700();
                                                    lVar11 = FUN_04077674(*unaff_x22,1);
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      *(undefined4 *)(lVar11 + 0x20) = 0xc;
                                                      if (0xb < uVar1) {
                                                        *(long *)(lVar7 + 0x78) = lVar11;
                                                        thunk_FUN_040ec700();
                                                        lVar11 = FUN_04077674(*unaff_x22,1);
                                                        if (lVar11 == 0) goto LAB_07a6261c;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar7 + 0x18);
                                                          *(undefined4 *)(lVar11 + 0x20) = 0xd;
                                                          if (0xc < uVar1) {
                                                            *(long *)(lVar7 + 0x80) = lVar11;
                                                            thunk_FUN_040ec700();
                                                            lVar11 = FUN_04077674(*unaff_x22,1);
                                                            if (lVar11 == 0) goto LAB_07a6261c;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar7 + 0x18);
                                                              *(undefined4 *)(lVar11 + 0x20) = 0xe;
                                                              if (0xd < uVar1) {
                                                                *(long *)(lVar7 + 0x88) = lVar11;
                                                                thunk_FUN_040ec700();
                                                                lVar11 = FUN_04077674(*unaff_x22,1);
                                                                if (lVar11 == 0) goto LAB_07a6261c;
                                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                                  *(undefined4 *)(lVar11 + 0x20) =
                                                                       0xf;
                                                                  if (0xe < uVar1) {
                                                                    *(long *)(lVar7 + 0x90) = lVar11
                                                                    ;
                                                                    thunk_FUN_040ec700((long *)(
                                                  lVar7 + 0x90));
                                                  uVar8 = FUN_04077674(*unaff_x22,0);
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffff0) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x98) = uVar8;
                                                    thunk_FUN_040ec700();
                                                    lVar11 = FUN_04077674(*unaff_x22,1);
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x11;
                                                      if (0x10 < uVar1) {
                                                        *(long *)(lVar7 + 0xa0) = lVar11;
                                                        thunk_FUN_040ec700();
                                                        lVar11 = FUN_04077674(*unaff_x22,1);
                                                        if (lVar11 == 0) goto LAB_07a6261c;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar7 + 0x18);
                                                          *(undefined4 *)(lVar11 + 0x20) = 0x12;
                                                          if (0x11 < uVar1) {
                                                            *(long *)(lVar7 + 0xa8) = lVar11;
                                                            thunk_FUN_040ec700();
                                                            lVar11 = FUN_04077674(*unaff_x22,1);
                                                            if (lVar11 == 0) goto LAB_07a6261c;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar7 + 0x18);
                                                              *(undefined4 *)(lVar11 + 0x20) = 0x13;
                                                              if (0x12 < uVar1) {
                                                                *(long *)(lVar7 + 0xb0) = lVar11;
                                                                thunk_FUN_040ec700();
                                                                lVar11 = FUN_04077674(*unaff_x22,1);
                                                                if (lVar11 == 0) goto LAB_07a6261c;
                                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                                  *(undefined4 *)(lVar11 + 0x20) =
                                                                       0x14;
                                                                  if (0x13 < uVar1) {
                                                                    *(long *)(lVar7 + 0xb8) = lVar11
                                                                    ;
                                                                    thunk_FUN_040ec700((long *)(
                                                  lVar7 + 0xb8));
                                                  uVar8 = FUN_04077674(*unaff_x22,0);
                                                  if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xc0) = uVar8;
                                                    thunk_FUN_040ec700();
                                                    lVar11 = FUN_04077674(*unaff_x22,1);
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x16;
                                                      if (0x15 < uVar1) {
                                                        *(long *)(lVar7 + 200) = lVar11;
                                                        thunk_FUN_040ec700();
                                                        lVar11 = FUN_04077674(*unaff_x22,1);
                                                        if (lVar11 == 0) goto LAB_07a6261c;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar7 + 0x18);
                                                          *(undefined4 *)(lVar11 + 0x20) = 0x17;
                                                          if (0x16 < uVar1) {
                                                            *(long *)(lVar7 + 0xd0) = lVar11;
                                                            thunk_FUN_040ec700();
                                                            lVar11 = FUN_04077674(*unaff_x22,1);
                                                            if (lVar11 == 0) goto LAB_07a6261c;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar7 + 0x18);
                                                              *(undefined4 *)(lVar11 + 0x20) = 0x18;
                                                              if (0x17 < uVar1) {
                                                                *(long *)(lVar7 + 0xd8) = lVar11;
                                                                thunk_FUN_040ec700();
                                                                lVar11 = FUN_04077674(*unaff_x22,1);
                                                                if (lVar11 == 0) goto LAB_07a6261c;
                                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                                  *(undefined4 *)(lVar11 + 0x20) =
                                                                       0x19;
                                                                  if (0x18 < uVar1) {
                                                                    *(long *)(lVar7 + 0xe0) = lVar11
                                                                    ;
                                                                    thunk_FUN_040ec700((long *)(
                                                  lVar7 + 0xe0));
                                                  uVar8 = FUN_04077674(*unaff_x22,0);
                                                  puVar4 = PTR_DAT_092f0c88;
                                                  puVar3 = PTR_DAT_092f0c80;
                                                  if (0x19 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xe8) = uVar8;
                                                    thunk_FUN_040ec700();
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                                0xb8) + 0x18);
                                                    *plVar10 = lVar7;
                                                    thunk_FUN_040ec700(plVar10,lVar7);
                                                    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_05bcc4ec(lVar7,*(undefined8 *)puVar3);
                                                    puVar3 = PTR_DAT_092f0c78;
                                                    if (lVar7 != 0) {
                                                      lVar11 = *(long *)(lVar7 + 0x10);
                                                      lVar12 = *(long *)PTR_DAT_092f0c78;
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      if (lVar11 != 0) {
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                          *(undefined4 *)
                                                           (lVar11 + (long)(int)uVar1 * 4 + 0x20) =
                                                               6;
                                                          *(int *)(lVar7 + 0x1c) =
                                                               *(int *)(lVar7 + 0x1c) + 1;
                                                        }
                                                        else {
                                                          FUN_05bccd7c(lVar7,6,*(undefined8 *)
                                                                                (*(long *)(*(long *)
                                                  (lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_07a6261c;
                                                  }
                                                  puVar3 = PTR_DAT_092f0ca8;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar7,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar10 = lVar7;
                                                  thunk_FUN_040ec700(plVar10,lVar7);
                                                  uVar8 = FUN_04077674(*unaff_x22,5);
                                                  FUN_07593f88(uVar8,*(undefined8 *)puVar3,0);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           );
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_040ec700(puVar9,uVar8);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_07a6261c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
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
            }
          }
        }
      }
    }
  }
LAB_07a6261c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


