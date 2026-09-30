/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$ovrp_GetPassthroughCapabilities
ENTRY_POINT: 031761f8
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


void OVRPlugin_OVRP_1_85_0__ovrp_GetPassthroughCapabilities(void)

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
  long lVar11;
  long lVar12;
  uint *puVar13;
  int *piVar14;
  
  puVar5 = PTR_DAT_03d80bb0;
  puVar4 = PTR_DAT_03d80ba8;
  puVar3 = PTR_DAT_03d80ac8;
  puVar2 = PTR_DAT_03d7f170;
  if ((DAT_03ff2138 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7fd58);
    thunk_FUN_01ad9084(PTR_DAT_03d7f170);
    thunk_FUN_01ad9084(PTR_DAT_03d7f3e0);
    thunk_FUN_01ad9084(PTR_DAT_03d80bb8);
    thunk_FUN_01ad9084(PTR_DAT_03d80bc0);
    thunk_FUN_01ad9084(PTR_DAT_03d80bb0);
    thunk_FUN_01ad9084(PTR_DAT_03d7ff20);
    thunk_FUN_01ad9084(PTR_DAT_03d7feb8);
    thunk_FUN_01ad9084(PTR_DAT_03d80ba8);
    thunk_FUN_01ad9084(PTR_DAT_03d80ac8);
    thunk_FUN_01ad9084(PTR_DAT_03d7fdb0);
    thunk_FUN_01ad9084(PTR_DAT_03d80bc8);
    thunk_FUN_01ad9084(PTR_DAT_03d80ae8);
    thunk_FUN_01ad9084(PTR_DAT_03d80bd0);
    thunk_FUN_01ad9084(PTR_DAT_03d7fdd8);
    thunk_FUN_01ad9084(PTR_DAT_03d7fdf0);
    thunk_FUN_01ad9084(PTR_DAT_03d7fdf8);
    DAT_03ff2138 = 1;
  }
  lVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
  FUN_02b591b0(lVar7,*(undefined8 *)puVar5);
  uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,4);
  FUN_02f80f34(uVar8,*(undefined8 *)puVar3,0);
  puVar3 = PTR_DAT_03d80bb8;
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x10);
    lVar12 = *(long *)PTR_DAT_03d80bb8;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar4 = PTR_DAT_03d7fdf0;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar8;
        thunk_FUN_01b4f09c(puVar9,uVar8);
      }
      else {
        FUN_02b599e4(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,3);
      FUN_02f80f34(uVar8,*(undefined8 *)puVar4,0);
      lVar11 = *(long *)(lVar7 + 0x10);
      lVar12 = *(long *)puVar3;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      puVar4 = PTR_DAT_03d7fdf8;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar8;
          thunk_FUN_01b4f09c(puVar9,uVar8);
        }
        else {
          FUN_02b599e4(lVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,3);
        FUN_02f80f34(uVar8,*(undefined8 *)puVar4,0);
        lVar11 = *(long *)(lVar7 + 0x10);
        lVar12 = *(long *)puVar3;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        puVar4 = PTR_DAT_03d7fdb0;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar8;
            thunk_FUN_01b4f09c(puVar9,uVar8);
          }
          else {
            FUN_02b599e4(lVar7,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,3);
          FUN_02f80f34(uVar8,*(undefined8 *)puVar4,0);
          lVar11 = *(long *)(lVar7 + 0x10);
          lVar12 = *(long *)puVar3;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar4 = PTR_DAT_03d80ae8;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *puVar9 = uVar8;
              thunk_FUN_01b4f09c(puVar9,uVar8);
            }
            else {
              FUN_02b599e4(lVar7,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,4);
            FUN_02f80f34(uVar8,*(undefined8 *)puVar4,0);
            lVar11 = *(long *)(lVar7 + 0x10);
            lVar12 = *(long *)puVar3;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            puVar6 = PTR_DAT_03d80bd0;
            puVar5 = PTR_DAT_03d80bc8;
            puVar4 = PTR_DAT_03d7fd58;
            puVar3 = PTR_DAT_03d7f3e0;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *puVar9 = uVar8;
                thunk_FUN_01b4f09c(puVar9,uVar8);
              }
              else {
                FUN_02b599e4(lVar7,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar3 + 0xb8) = lVar7;
              thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar7);
              uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,0x18);
              FUN_02f80f34(uVar8,*(undefined8 *)puVar5,0);
              puVar9 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
              *puVar9 = uVar8;
              thunk_FUN_01b4f09c(puVar9,uVar8);
              lVar7 = FUN_01b47fd0(*(undefined8 *)puVar4,0x18);
              uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,5);
              FUN_02f80f34(uVar8,*(undefined8 *)puVar6,0);
              if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x18) != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = uVar8;
                  thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x20),uVar8);
                  uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,0);
                  if (1 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined8 *)(lVar7 + 0x28) = uVar8;
                    thunk_FUN_01b4f09c();
                    lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1);
                    if (lVar11 == 0) goto LAB_0317729c;
                    if (*(int *)(lVar11 + 0x18) != 0) {
                      *(undefined4 *)(lVar11 + 0x20) = 3;
                      if (2 < *(uint *)(lVar7 + 0x18)) {
                        *(long *)(lVar7 + 0x30) = lVar11;
                        thunk_FUN_01b4f09c();
                        lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1);
                        if (lVar11 == 0) goto LAB_0317729c;
                        if (*(int *)(lVar11 + 0x18) != 0) {
                          *(undefined4 *)(lVar11 + 0x20) = 4;
                          if (3 < *(uint *)(lVar7 + 0x18)) {
                            *(long *)(lVar7 + 0x38) = lVar11;
                            thunk_FUN_01b4f09c();
                            lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1);
                            if (lVar11 == 0) goto LAB_0317729c;
                            if (*(int *)(lVar11 + 0x18) != 0) {
                              *(undefined4 *)(lVar11 + 0x20) = 5;
                              if (4 < *(uint *)(lVar7 + 0x18)) {
                                *(long *)(lVar7 + 0x40) = lVar11;
                                thunk_FUN_01b4f09c();
                                lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1);
                                if (lVar11 == 0) goto LAB_0317729c;
                                if (*(int *)(lVar11 + 0x18) != 0) {
                                  *(undefined4 *)(lVar11 + 0x20) = 0x13;
                                  if (5 < *(uint *)(lVar7 + 0x18)) {
                                    *(long *)(lVar7 + 0x48) = lVar11;
                                    thunk_FUN_01b4f09c();
                                    lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1);
                                    if (lVar11 == 0) goto LAB_0317729c;
                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                      *(undefined4 *)(lVar11 + 0x20) = 7;
                                      if (6 < *(uint *)(lVar7 + 0x18)) {
                                        *(long *)(lVar7 + 0x50) = lVar11;
                                        thunk_FUN_01b4f09c();
                                        lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1);
                                        if (lVar11 == 0) goto LAB_0317729c;
                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                          *(undefined4 *)(lVar11 + 0x20) = 8;
                                          if (7 < *(uint *)(lVar7 + 0x18)) {
                                            *(long *)(lVar7 + 0x58) = lVar11;
                                            thunk_FUN_01b4f09c();
                                            lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1);
                                            if (lVar11 == 0) goto LAB_0317729c;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              *(undefined4 *)(lVar11 + 0x20) = 0x14;
                                              if (8 < *(uint *)(lVar7 + 0x18)) {
                                                *(long *)(lVar7 + 0x60) = lVar11;
                                                thunk_FUN_01b4f09c();
                                                lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1);
                                                if (lVar11 == 0) goto LAB_0317729c;
                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar11 + 0x20) = 10;
                                                  if (9 < *(uint *)(lVar7 + 0x18)) {
                                                    *(long *)(lVar7 + 0x68) = lVar11;
                                                    thunk_FUN_01b4f09c();
                                                    lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1);
                                                    if (lVar11 == 0) goto LAB_0317729c;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0xb;
                                                      if (10 < *(uint *)(lVar7 + 0x18)) {
                                                        *(long *)(lVar7 + 0x70) = lVar11;
                                                        thunk_FUN_01b4f09c();
                                                        lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,
                                                                              1);
                                                        if (lVar11 == 0) goto LAB_0317729c;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar11 + 0x20) = 0x15;
                                                          if (0xb < *(uint *)(lVar7 + 0x18)) {
                                                            *(long *)(lVar7 + 0x78) = lVar11;
                                                            thunk_FUN_01b4f09c();
                                                            lVar11 = FUN_01b47fd0(*(undefined8 *)
                                                                                   puVar2,1);
                                                            if (lVar11 == 0) goto LAB_0317729c;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar11 + 0x20) = 0xd;
                                                              if (0xc < *(uint *)(lVar7 + 0x18)) {
                                                                *(long *)(lVar7 + 0x80) = lVar11;
                                                                thunk_FUN_01b4f09c();
                                                                lVar11 = FUN_01b47fd0(*(undefined8 *
                                                                                       )puVar2,1);
                                                                if (lVar11 == 0) goto LAB_0317729c;
                                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar11 + 0x20) =
                                                                       0xe;
                                                                  if (0xd < *(uint *)(lVar7 + 0x18))
                                                                  {
                                                                    *(long *)(lVar7 + 0x88) = lVar11
                                                                    ;
                                                                    thunk_FUN_01b4f09c();
                                                                    lVar11 = FUN_01b47fd0(*(
                                                  undefined8 *)puVar2,1);
                                                  if (lVar11 == 0) goto LAB_0317729c;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar11 + 0x20) = 0x16;
                                                    if (0xe < *(uint *)(lVar7 + 0x18)) {
                                                      *(long *)(lVar7 + 0x90) = lVar11;
                                                      thunk_FUN_01b4f09c();
                                                      lVar11 = FUN_01b47fd0(*(undefined8 *)puVar2,1)
                                                      ;
                                                      if (lVar11 == 0) goto LAB_0317729c;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar11 + 0x20) = 0x10;
                                                        if (0xf < *(uint *)(lVar7 + 0x18)) {
                                                          *(long *)(lVar7 + 0x98) = lVar11;
                                                          thunk_FUN_01b4f09c();
                                                          lVar11 = FUN_01b47fd0(*(undefined8 *)
                                                                                 puVar2,1);
                                                          if (lVar11 == 0) goto LAB_0317729c;
                                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar11 + 0x20) = 0x11;
                                                            if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                                              *(long *)(lVar7 + 0xa0) = lVar11;
                                                              thunk_FUN_01b4f09c();
                                                              lVar11 = FUN_01b47fd0(*(undefined8 *)
                                                                                     puVar2,1);
                                                              if (lVar11 == 0) goto LAB_0317729c;
                                                              if (*(int *)(lVar11 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar11 + 0x20) =
                                                                     0x12;
                                                                if (0x11 < *(uint *)(lVar7 + 0x18))
                                                                {
                                                                  *(long *)(lVar7 + 0xa8) = lVar11;
                                                                  thunk_FUN_01b4f09c();
                                                                  lVar11 = FUN_01b47fd0(*(undefined8
                                                                                          *)puVar2,1
                                                                                       );
                                                                  if (lVar11 == 0)
                                                                  goto LAB_0317729c;
                                                                  if (*(int *)(lVar11 + 0x18) != 0)
                                                                  {
                                                                    *(undefined4 *)(lVar11 + 0x20) =
                                                                         0x17;
                                                                    if (0x12 < *(uint *)(lVar7 + 
                                                  0x18)) {
                                                    *(long *)(lVar7 + 0xb0) = lVar11;
                                                    thunk_FUN_01b4f09c((long *)(lVar7 + 0xb0));
                                                    uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,0);
                                                    if (0x13 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0xb8) = uVar8;
                                                      thunk_FUN_01b4f09c((undefined8 *)
                                                                         (lVar7 + 0xb8),uVar8);
                                                      uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,0);
                                                      if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0xc0) = uVar8;
                                                        thunk_FUN_01b4f09c((undefined8 *)
                                                                           (lVar7 + 0xc0),uVar8);
                                                        uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,0
                                                                            );
                                                        if (0x15 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 200) = uVar8;
                                                          thunk_FUN_01b4f09c((undefined8 *)
                                                                             (lVar7 + 200),uVar8);
                                                          uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2
                                                                               ,0);
                                                          if (0x16 < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0xd0) = uVar8;
                                                            thunk_FUN_01b4f09c((undefined8 *)
                                                                               (lVar7 + 0xd0),uVar8)
                                                            ;
                                                            uVar8 = FUN_01b47fd0(*(undefined8 *)
                                                                                  puVar2,0);
                                                            puVar5 = PTR_DAT_03d7ff20;
                                                            puVar4 = PTR_DAT_03d7feb8;
                                                            if (0x17 < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 0xd8) = uVar8;
                                                              thunk_FUN_01b4f09c();
                                                              plVar10 = (long *)(*(long *)(*(long *)
                                                  puVar3 + 0xb8) + 0x10);
                                                  *plVar10 = lVar7;
                                                  thunk_FUN_01b4f09c(plVar10,lVar7);
                                                  lVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
                                                  FUN_02b2e800(lVar7,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_03d80bc0;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)PTR_DAT_03d80bc0;
                                                    piVar14 = (int *)(lVar7 + 0x1c);
                                                    *piVar14 = *piVar14 + 1;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    puVar13 = (uint *)(lVar7 + 0x18);
                                                    uVar1 = *puVar13;
                                                    if (lVar12 != 0) {
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *puVar13 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar14 = *piVar14 + 1;
                                                      }
                                                      else {
                                                        FUN_02b2f054(lVar7,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar11 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0317729c;
                                                  }
                                                  puVar4 = PTR_DAT_03d7fdd8;
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_02b2f054(lVar7,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x18);
                                                  *plVar10 = lVar7;
                                                  thunk_FUN_01b4f09c(plVar10,lVar7);
                                                  uVar8 = FUN_01b47fd0(*(undefined8 *)puVar2,5);
                                                  FUN_02f80f34(uVar8,*(undefined8 *)puVar4,0);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar3 + 0xb8) + 0x20
                                                           );
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_01b4f09c(puVar9,uVar8);
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


