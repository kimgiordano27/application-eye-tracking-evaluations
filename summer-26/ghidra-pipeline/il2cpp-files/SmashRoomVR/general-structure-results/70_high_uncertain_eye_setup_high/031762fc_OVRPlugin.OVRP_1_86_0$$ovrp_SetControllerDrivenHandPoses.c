/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetControllerDrivenHandPoses
ENTRY_POINT: 031762fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_SetControllerDrivenHandPoses(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  uint *puVar12;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int *piVar13;
  
  *(undefined1 *)(unaff_x21 + 0x138) = 1;
  lVar6 = thunk_FUN_01afaadc(*unaff_x23);
  FUN_02b591b0(lVar6,*unaff_x19);
  uVar7 = FUN_01b47fd0(*unaff_x22,4);
  FUN_02f80f34(uVar7,*unaff_x20,0);
  puVar2 = PTR_DAT_03d80bb8;
  if (lVar6 != 0) {
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar11 = *(long *)PTR_DAT_03d80bb8;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    puVar3 = PTR_DAT_03d7fdf0;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar7;
        thunk_FUN_01b4f09c(puVar8,uVar7);
      }
      else {
        FUN_02b599e4(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar7 = FUN_01b47fd0(*unaff_x22,3);
      FUN_02f80f34(uVar7,*(undefined8 *)puVar3,0);
      lVar10 = *(long *)(lVar6 + 0x10);
      lVar11 = *(long *)puVar2;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      puVar3 = PTR_DAT_03d7fdf8;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar7;
          thunk_FUN_01b4f09c(puVar8,uVar7);
        }
        else {
          FUN_02b599e4(lVar6,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = FUN_01b47fd0(*unaff_x22,3);
        FUN_02f80f34(uVar7,*(undefined8 *)puVar3,0);
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        puVar3 = PTR_DAT_03d7fdb0;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *puVar8 = uVar7;
            thunk_FUN_01b4f09c(puVar8,uVar7);
          }
          else {
            FUN_02b599e4(lVar6,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = FUN_01b47fd0(*unaff_x22,3);
          FUN_02f80f34(uVar7,*(undefined8 *)puVar3,0);
          lVar10 = *(long *)(lVar6 + 0x10);
          lVar11 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          puVar3 = PTR_DAT_03d80ae8;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *puVar8 = uVar7;
              thunk_FUN_01b4f09c(puVar8,uVar7);
            }
            else {
              FUN_02b599e4(lVar6,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            uVar7 = FUN_01b47fd0(*unaff_x22,4);
            FUN_02f80f34(uVar7,*(undefined8 *)puVar3,0);
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar11 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            puVar5 = PTR_DAT_03d80bd0;
            puVar4 = PTR_DAT_03d80bc8;
            puVar3 = PTR_DAT_03d7fd58;
            puVar2 = PTR_DAT_03d7f3e0;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *puVar8 = uVar7;
                thunk_FUN_01b4f09c(puVar8,uVar7);
              }
              else {
                FUN_02b599e4(lVar6,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
              thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar6);
              uVar7 = FUN_01b47fd0(*unaff_x22,0x18);
              FUN_02f80f34(uVar7,*(undefined8 *)puVar4,0);
              puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar8 = uVar7;
              thunk_FUN_01b4f09c(puVar8,uVar7);
              lVar6 = FUN_01b47fd0(*(undefined8 *)puVar3,0x18);
              uVar7 = FUN_01b47fd0(*unaff_x22,5);
              FUN_02f80f34(uVar7,*(undefined8 *)puVar5,0);
              if (lVar6 != 0) {
                if (*(int *)(lVar6 + 0x18) != 0) {
                  *(undefined8 *)(lVar6 + 0x20) = uVar7;
                  thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x20),uVar7);
                  uVar7 = FUN_01b47fd0(*unaff_x22,0);
                  if (1 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x28) = uVar7;
                    thunk_FUN_01b4f09c();
                    lVar10 = FUN_01b47fd0(*unaff_x22,1);
                    if (lVar10 == 0) goto LAB_0317729c;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      *(undefined4 *)(lVar10 + 0x20) = 3;
                      if (2 < *(uint *)(lVar6 + 0x18)) {
                        *(long *)(lVar6 + 0x30) = lVar10;
                        thunk_FUN_01b4f09c();
                        lVar10 = FUN_01b47fd0(*unaff_x22,1);
                        if (lVar10 == 0) goto LAB_0317729c;
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          *(undefined4 *)(lVar10 + 0x20) = 4;
                          if (3 < *(uint *)(lVar6 + 0x18)) {
                            *(long *)(lVar6 + 0x38) = lVar10;
                            thunk_FUN_01b4f09c();
                            lVar10 = FUN_01b47fd0(*unaff_x22,1);
                            if (lVar10 == 0) goto LAB_0317729c;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              *(undefined4 *)(lVar10 + 0x20) = 5;
                              if (4 < *(uint *)(lVar6 + 0x18)) {
                                *(long *)(lVar6 + 0x40) = lVar10;
                                thunk_FUN_01b4f09c();
                                lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                if (lVar10 == 0) goto LAB_0317729c;
                                if (*(int *)(lVar10 + 0x18) != 0) {
                                  *(undefined4 *)(lVar10 + 0x20) = 0x13;
                                  if (5 < *(uint *)(lVar6 + 0x18)) {
                                    *(long *)(lVar6 + 0x48) = lVar10;
                                    thunk_FUN_01b4f09c();
                                    lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                    if (lVar10 == 0) goto LAB_0317729c;
                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                      *(undefined4 *)(lVar10 + 0x20) = 7;
                                      if (6 < *(uint *)(lVar6 + 0x18)) {
                                        *(long *)(lVar6 + 0x50) = lVar10;
                                        thunk_FUN_01b4f09c();
                                        lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                        if (lVar10 == 0) goto LAB_0317729c;
                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                          *(undefined4 *)(lVar10 + 0x20) = 8;
                                          if (7 < *(uint *)(lVar6 + 0x18)) {
                                            *(long *)(lVar6 + 0x58) = lVar10;
                                            thunk_FUN_01b4f09c();
                                            lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                            if (lVar10 == 0) goto LAB_0317729c;
                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                              *(undefined4 *)(lVar10 + 0x20) = 0x14;
                                              if (8 < *(uint *)(lVar6 + 0x18)) {
                                                *(long *)(lVar6 + 0x60) = lVar10;
                                                thunk_FUN_01b4f09c();
                                                lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                                if (lVar10 == 0) goto LAB_0317729c;
                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar10 + 0x20) = 10;
                                                  if (9 < *(uint *)(lVar6 + 0x18)) {
                                                    *(long *)(lVar6 + 0x68) = lVar10;
                                                    thunk_FUN_01b4f09c();
                                                    lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                                    if (lVar10 == 0) goto LAB_0317729c;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar10 + 0x20) = 0xb;
                                                      if (10 < *(uint *)(lVar6 + 0x18)) {
                                                        *(long *)(lVar6 + 0x70) = lVar10;
                                                        thunk_FUN_01b4f09c();
                                                        lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                                        if (lVar10 == 0) goto LAB_0317729c;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar10 + 0x20) = 0x15;
                                                          if (0xb < *(uint *)(lVar6 + 0x18)) {
                                                            *(long *)(lVar6 + 0x78) = lVar10;
                                                            thunk_FUN_01b4f09c();
                                                            lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                                            if (lVar10 == 0) goto LAB_0317729c;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar10 + 0x20) = 0xd;
                                                              if (0xc < *(uint *)(lVar6 + 0x18)) {
                                                                *(long *)(lVar6 + 0x80) = lVar10;
                                                                thunk_FUN_01b4f09c();
                                                                lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                                                if (lVar10 == 0) goto LAB_0317729c;
                                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar10 + 0x20) =
                                                                       0xe;
                                                                  if (0xd < *(uint *)(lVar6 + 0x18))
                                                                  {
                                                                    *(long *)(lVar6 + 0x88) = lVar10
                                                                    ;
                                                                    thunk_FUN_01b4f09c();
                                                                    lVar10 = FUN_01b47fd0(*unaff_x22
                                                                                          ,1);
                                                                    if (lVar10 == 0)
                                                                    goto LAB_0317729c;
                                                                    if (*(int *)(lVar10 + 0x18) != 0
                                                                       ) {
                                                                      *(undefined4 *)(lVar10 + 0x20)
                                                                           = 0x16;
                                                                      if (0xe < *(uint *)(lVar6 + 
                                                  0x18)) {
                                                    *(long *)(lVar6 + 0x90) = lVar10;
                                                    thunk_FUN_01b4f09c();
                                                    lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                                    if (lVar10 == 0) goto LAB_0317729c;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar10 + 0x20) = 0x10;
                                                      if (0xf < *(uint *)(lVar6 + 0x18)) {
                                                        *(long *)(lVar6 + 0x98) = lVar10;
                                                        thunk_FUN_01b4f09c();
                                                        lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                                        if (lVar10 == 0) goto LAB_0317729c;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar10 + 0x20) = 0x11;
                                                          if (0x10 < *(uint *)(lVar6 + 0x18)) {
                                                            *(long *)(lVar6 + 0xa0) = lVar10;
                                                            thunk_FUN_01b4f09c();
                                                            lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                                            if (lVar10 == 0) goto LAB_0317729c;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar10 + 0x20) = 0x12;
                                                              if (0x11 < *(uint *)(lVar6 + 0x18)) {
                                                                *(long *)(lVar6 + 0xa8) = lVar10;
                                                                thunk_FUN_01b4f09c();
                                                                lVar10 = FUN_01b47fd0(*unaff_x22,1);
                                                                if (lVar10 == 0) goto LAB_0317729c;
                                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar10 + 0x20) =
                                                                       0x17;
                                                                  if (0x12 < *(uint *)(lVar6 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar6 + 0xb0) = lVar10
                                                                    ;
                                                                    thunk_FUN_01b4f09c((long *)(
                                                  lVar6 + 0xb0));
                                                  uVar7 = FUN_01b47fd0(*unaff_x22,0);
                                                  if (0x13 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0xb8) = uVar7;
                                                    thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0xb8),
                                                                       uVar7);
                                                    uVar7 = FUN_01b47fd0(*unaff_x22,0);
                                                    if (0x14 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined8 *)(lVar6 + 0xc0) = uVar7;
                                                      thunk_FUN_01b4f09c((undefined8 *)
                                                                         (lVar6 + 0xc0),uVar7);
                                                      uVar7 = FUN_01b47fd0(*unaff_x22,0);
                                                      if (0x15 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined8 *)(lVar6 + 200) = uVar7;
                                                        thunk_FUN_01b4f09c((undefined8 *)
                                                                           (lVar6 + 200),uVar7);
                                                        uVar7 = FUN_01b47fd0(*unaff_x22,0);
                                                        if (0x16 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined8 *)(lVar6 + 0xd0) = uVar7;
                                                          thunk_FUN_01b4f09c((undefined8 *)
                                                                             (lVar6 + 0xd0),uVar7);
                                                          uVar7 = FUN_01b47fd0(*unaff_x22,0);
                                                          puVar4 = PTR_DAT_03d7ff20;
                                                          puVar3 = PTR_DAT_03d7feb8;
                                                          if (0x17 < *(uint *)(lVar6 + 0x18)) {
                                                            *(undefined8 *)(lVar6 + 0xd8) = uVar7;
                                                            thunk_FUN_01b4f09c();
                                                            plVar9 = (long *)(*(long *)(*(long *)
                                                  puVar2 + 0xb8) + 0x10);
                                                  *plVar9 = lVar6;
                                                  thunk_FUN_01b4f09c(plVar9,lVar6);
                                                  lVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
                                                  FUN_02b2e800(lVar6,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_03d80bc0;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)PTR_DAT_03d80bc0;
                                                    piVar13 = (int *)(lVar6 + 0x1c);
                                                    *piVar13 = *piVar13 + 1;
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    puVar12 = (uint *)(lVar6 + 0x18);
                                                    uVar1 = *puVar12;
                                                    if (lVar11 != 0) {
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *puVar12 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar13 = *piVar13 + 1;
                                                      }
                                                      else {
                                                        FUN_02b2f054(lVar6,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar6 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar6 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar6 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar6 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar6 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar6 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar6 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar6 + 0x10);
                                                  lVar10 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0317729c;
                                                  }
                                                  puVar3 = PTR_DAT_03d7fdd8;
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar6,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8
                                                                             ) + 0x18);
                                                  *plVar9 = lVar6;
                                                  thunk_FUN_01b4f09c(plVar9,lVar6);
                                                  uVar7 = FUN_01b47fd0(*unaff_x22,5);
                                                  FUN_02f80f34(uVar7,*(undefined8 *)puVar3,0);
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           );
                                                  *puVar8 = uVar7;
                                                  thunk_FUN_01b4f09c(puVar8,uVar7);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_0317729c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
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
                FUN_01b48180();
              }
            }
          }
        }
      }
    }
  }
LAB_0317729c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


