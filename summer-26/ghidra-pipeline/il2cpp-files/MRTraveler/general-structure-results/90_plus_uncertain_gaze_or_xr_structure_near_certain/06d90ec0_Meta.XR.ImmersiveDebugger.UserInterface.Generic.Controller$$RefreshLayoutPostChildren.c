/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 06d90ec0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren
               (long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
  if (lVar10 != 0) {
    lVar11 = *unaff_x20;
    uVar4 = FUN_069a0c14(lVar10,0x2f,*unaff_x25);
    if (lVar11 != 0) {
      uVar5 = FUN_085875ac(lVar11,uVar4,0);
      uVar6 = thunk_FUN_03cf5234(*unaff_x26);
      FUN_06d926d0(uVar6,param_2,uVar5,0x2e,0x2f);
      lVar10 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *puVar7 = uVar6;
          thunk_FUN_03d233cc(puVar7,uVar6);
        }
        else {
                    /* try { // try from 06d90f64 to 06e91877 has its CatchHandler @ 06d90f64
                       catch() { ... } // from try @ 06d90f64 with catch @ 06d90f64
                       catch() { ... } // from try @ 06d91900 with catch @ 06d90f64
                       catch() { ... } // from try @ 06d91944 with catch @ 06d90f64
                       catch() { ... } // from try @ 06d91980 with catch @ 06d90f64
                       catch() { ... } // from try @ 06d919d4 with catch @ 06d90f64 */
          FUN_05212cf4();
        }
        lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
        if (lVar10 != 0) {
          lVar11 = *unaff_x20;
          uVar4 = FUN_069a0c14(lVar10,0x2f,*unaff_x25);
          if (lVar11 != 0) {
            uVar5 = FUN_085875ac(lVar11,uVar4,0);
            lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
            if (lVar10 != 0) {
              lVar11 = *unaff_x20;
              uVar4 = FUN_069a0c14(lVar10,0x30,*unaff_x25);
              if (lVar11 != 0) {
                uVar6 = FUN_085875ac(lVar11,uVar4,0);
                uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                FUN_06d926d0(uVar8,uVar5,uVar6,0x2f,0x30);
                lVar10 = *(long *)(unaff_x19 + 0x10);
                *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar2 = *(uint *)(unaff_x19 + 0x18);
                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                    puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                    *puVar7 = uVar8;
                    thunk_FUN_03d233cc(puVar7,uVar8);
                  }
                  else {
                    FUN_05212cf4();
                  }
                  lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                  if (lVar10 != 0) {
                    lVar11 = *unaff_x20;
                    uVar4 = FUN_069a0c14(lVar10,0x2d,*unaff_x25);
                    if (lVar11 != 0) {
                      uVar5 = FUN_085875ac(lVar11,uVar4,0);
                      lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                      if (lVar10 != 0) {
                        lVar11 = *unaff_x20;
                        uVar4 = FUN_069a0c14(lVar10,0x33,*unaff_x25);
                        if (lVar11 != 0) {
                          uVar6 = FUN_085875ac(lVar11,uVar4,0);
                          uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                          FUN_06d926d0(uVar8,uVar5,uVar6,0x2d,0x33);
                          lVar10 = *(long *)(unaff_x19 + 0x10);
                          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                          if (lVar10 != 0) {
                            uVar2 = *(uint *)(unaff_x19 + 0x18);
                            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                              *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                              puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                              *puVar7 = uVar8;
                              thunk_FUN_03d233cc(puVar7,uVar8);
                            }
                            else {
                              FUN_05212cf4();
                            }
                            lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                            if (lVar10 != 0) {
                              lVar11 = *unaff_x20;
                              uVar4 = FUN_069a0c14(lVar10,0x33,*unaff_x25);
                              if (lVar11 != 0) {
                                uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                                if (lVar10 != 0) {
                                  lVar11 = *unaff_x20;
                                  uVar4 = FUN_069a0c14(lVar10,0x34,*unaff_x25);
                                  if (lVar11 != 0) {
                                    uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                    uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                                    FUN_06d926d0(uVar8,uVar5,uVar6,0x33,0x34);
                                    lVar10 = *(long *)(unaff_x19 + 0x10);
                                    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                                    if (lVar10 != 0) {
                                      uVar2 = *(uint *)(unaff_x19 + 0x18);
                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                                        puVar7 = (undefined8 *)
                                                 (lVar10 + (long)(int)uVar2 * 8 + 0x20);
                                        *puVar7 = uVar8;
                                        thunk_FUN_03d233cc(puVar7,uVar8);
                                      }
                                      else {
                                        FUN_05212cf4();
                                      }
                                      lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                                      if (lVar10 != 0) {
                                        lVar11 = *unaff_x20;
                                        uVar4 = FUN_069a0c14(lVar10,0x34,*unaff_x25);
                                        if (lVar11 != 0) {
                                          uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                          lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                                          if (lVar10 != 0) {
                                            lVar11 = *unaff_x20;
                                            uVar4 = FUN_069a0c14(lVar10,0x35,*unaff_x25);
                                            if (lVar11 != 0) {
                                              uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                              uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                                              FUN_06d926d0(uVar8,uVar5,uVar6,0x34,0x35);
                                              lVar10 = *(long *)(unaff_x19 + 0x10);
                                              *(int *)(unaff_x19 + 0x1c) =
                                                   *(int *)(unaff_x19 + 0x1c) + 1;
                                              if (lVar10 != 0) {
                                                uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                  *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                                                  puVar7 = (undefined8 *)
                                                           (lVar10 + (long)(int)uVar2 * 8 + 0x20);
                                                  *puVar7 = uVar8;
                                                  thunk_FUN_03d233cc(puVar7,uVar8);
                                                }
                                                else {
                                                  FUN_05212cf4();
                                                }
                                                lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) +
                                                                  0x10);
                                                if (lVar10 != 0) {
                                                  lVar11 = *unaff_x20;
                                                  uVar4 = FUN_069a0c14(lVar10,0x2d,*unaff_x25);
                                                  if (lVar11 != 0) {
                                                    uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                                    lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8)
                                                                      + 0x10);
                                                    if (lVar10 != 0) {
                                                      lVar11 = *unaff_x20;
                                                      uVar4 = FUN_069a0c14(lVar10,0x38,*unaff_x25);
                                                      if (lVar11 != 0) {
                                                        uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                                        uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                                                        FUN_06d926d0(uVar8,uVar5,uVar6,0x2d,0x38);
                                                        lVar10 = *(long *)(unaff_x19 + 0x10);
                                                        *(int *)(unaff_x19 + 0x1c) =
                                                             *(int *)(unaff_x19 + 0x1c) + 1;
                                                        if (lVar10 != 0) {
                                                          uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                            *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                                                            puVar7 = (undefined8 *)
                                                                     (lVar10 + (long)(int)uVar2 * 8
                                                                     + 0x20);
                                                            *puVar7 = uVar8;
                                                            thunk_FUN_03d233cc(puVar7,uVar8);
                                                          }
                                                          else {
                                                            FUN_05212cf4();
                                                          }
                                                          lVar10 = *(long *)(*(long *)(*unaff_x24 +
                                                                                      0xb8) + 0x10);
                                                          if (lVar10 != 0) {
                                                            lVar11 = *unaff_x20;
                                                            uVar4 = FUN_069a0c14(lVar10,0x38,
                                                                                 *unaff_x25);
                                                            if (lVar11 != 0) {
                                                              uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                                              lVar10 = *(long *)(*(long *)(*
                                                  unaff_x24 + 0xb8) + 0x10);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *unaff_x20;
                                                    uVar4 = FUN_069a0c14(lVar10,0x39,*unaff_x25);
                                                    if (lVar11 != 0) {
                                                      uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                                      uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                                                      FUN_06d926d0(uVar8,uVar5,uVar6,0x38,0x39);
                                                      lVar10 = *(long *)(unaff_x19 + 0x10);
                                                      *(int *)(unaff_x19 + 0x1c) =
                                                           *(int *)(unaff_x19 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                                                          puVar7 = (undefined8 *)
                                                                   (lVar10 + (long)(int)uVar2 * 8 +
                                                                   0x20);
                                                          *puVar7 = uVar8;
                                                          thunk_FUN_03d233cc(puVar7,uVar8);
                                                        }
                                                        else {
                                                          FUN_05212cf4();
                                                        }
                                                        lVar10 = *(long *)(*(long *)(*unaff_x24 +
                                                                                    0xb8) + 0x10);
                                                        if (lVar10 != 0) {
                                                          lVar11 = *unaff_x20;
                                                          uVar4 = FUN_069a0c14(lVar10,0x39,
                                                                               *unaff_x25);
                                                          if (lVar11 != 0) {
                                                            uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                                            lVar10 = *(long *)(*(long *)(*unaff_x24
                                                                                        + 0xb8) +
                                                                              0x10);
                                                            if (lVar10 != 0) {
                                                              lVar11 = *unaff_x20;
                                                              uVar4 = FUN_069a0c14(lVar10,0x3a,
                                                                                   *unaff_x25);
                                                              if (lVar11 != 0) {
                                                                uVar6 = FUN_085875ac(lVar11,uVar4,0)
                                                                ;
                                                                uVar8 = thunk_FUN_03cf5234(*
                                                  unaff_x26);
                                                  FUN_06d926d0(uVar8,uVar5,uVar6,0x39,0x3a);
                                                  lVar10 = *(long *)(unaff_x19 + 0x10);
                                                  *(int *)(unaff_x19 + 0x1c) =
                                                       *(int *)(unaff_x19 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                                                      puVar7 = (undefined8 *)
                                                               (lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               );
                                                      *puVar7 = uVar8;
                                                      thunk_FUN_03d233cc(puVar7,uVar8);
                                                    }
                                                    else {
                                                      FUN_05212cf4();
                                                    }
                                                    lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8)
                                                                      + 0x10);
                                                    if (lVar10 != 0) {
                                                      lVar11 = *unaff_x20;
                                                      uVar4 = FUN_069a0c14(lVar10,0x2d,*unaff_x25);
                                                      if (lVar11 != 0) {
                                                        uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                                        lVar10 = *(long *)(*(long *)(*unaff_x24 +
                                                                                    0xb8) + 0x10);
                                                        if (lVar10 != 0) {
                                                          lVar11 = *unaff_x20;
                                                          uVar4 = FUN_069a0c14(lVar10,0x3d,
                                                                               *unaff_x25);
                                                          if (lVar11 != 0) {
                                                            uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                                            uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                                                            FUN_06d926d0(uVar8,uVar5,uVar6,0x2d,0x3d
                                                                        );
                                                            lVar10 = *(long *)(unaff_x19 + 0x10);
                                                            *(int *)(unaff_x19 + 0x1c) =
                                                                 *(int *)(unaff_x19 + 0x1c) + 1;
                                                            if (lVar10 != 0) {
                                                              uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                              if (uVar2 < *(uint *)(lVar10 + 0x18))
                                                              {
                                                                *(uint *)(unaff_x19 + 0x18) =
                                                                     uVar2 + 1;
                                                                puVar7 = (undefined8 *)
                                                                         (lVar10 + (long)(int)uVar2
                                                                                   * 8 + 0x20);
                                                                *puVar7 = uVar8;
                                                                thunk_FUN_03d233cc(puVar7,uVar8);
                                                              }
                                                              else {
                                                                FUN_05212cf4();
                                                              }
                                                              lVar10 = *(long *)(*(long *)(*
                                                  unaff_x24 + 0xb8) + 0x10);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *unaff_x20;
                                                    uVar4 = FUN_069a0c14(lVar10,0x3d,*unaff_x25);
                                                    if (lVar11 != 0) {
                                                      uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                                      lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8
                                                                                  ) + 0x10);
                                                      if (lVar10 != 0) {
                                                        lVar11 = *unaff_x20;
                                                        uVar4 = FUN_069a0c14(lVar10,0x3e,*unaff_x25)
                                                        ;
                                                        if (lVar11 != 0) {
                                                          uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                                          uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                                                          FUN_06d926d0(uVar8,uVar5,uVar6,0x3d,0x3e);
                                                          lVar10 = *(long *)(unaff_x19 + 0x10);
                                                          *(int *)(unaff_x19 + 0x1c) =
                                                               *(int *)(unaff_x19 + 0x1c) + 1;
                                                          if (lVar10 != 0) {
                                                            uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                              *(uint *)(unaff_x19 + 0x18) =
                                                                   uVar2 + 1;
                                                              puVar7 = (undefined8 *)
                                                                       (lVar10 + (long)(int)uVar2 *
                                                                                 8 + 0x20);
                                                              *puVar7 = uVar8;
                                                              thunk_FUN_03d233cc(puVar7,uVar8);
                                                            }
                                                            else {
                                                              FUN_05212cf4();
                                                            }
                                                            lVar10 = *(long *)(*(long *)(*unaff_x24
                                                                                        + 0xb8) +
                                                                              0x10);
                                                            if (lVar10 != 0) {
                                                              lVar11 = *unaff_x20;
                                                              uVar4 = FUN_069a0c14(lVar10,0x3e,
                                                                                   *unaff_x25);
                                                              if (lVar11 != 0) {
                                                                uVar5 = FUN_085875ac(lVar11,uVar4,0)
                                                                ;
                                                                lVar10 = *(long *)(*(long *)(*
                                                  unaff_x24 + 0xb8) + 0x10);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *unaff_x20;
                                                    uVar4 = FUN_069a0c14(lVar10,0x3f,*unaff_x25);
                                                    if (lVar11 != 0) {
                                                      uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                                      uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                                                      FUN_06d926d0(uVar8,uVar5,uVar6,0x3e,0x3f);
                                                      lVar10 = *(long *)(unaff_x19 + 0x10);
                                                      *(int *)(unaff_x19 + 0x1c) =
                                                           *(int *)(unaff_x19 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                                                          puVar7 = (undefined8 *)
                                                                   (lVar10 + (long)(int)uVar2 * 8 +
                                                                   0x20);
                                                          *puVar7 = uVar8;
                                                          thunk_FUN_03d233cc(puVar7,uVar8);
                                                        }
                                                        else {
                                                          FUN_05212cf4();
                                                        }
                                                        lVar10 = *(long *)(*(long *)(*unaff_x24 +
                                                                                    0xb8) + 0x10);
                                                        if (lVar10 != 0) {
                                                          lVar11 = *unaff_x20;
                                                          uVar4 = FUN_069a0c14(lVar10,0x2d,
                                                                               *unaff_x25);
                                                          if (lVar11 != 0) {
                                                            uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                                            lVar10 = *(long *)(*(long *)(*unaff_x24
                                                                                        + 0xb8) +
                                                                              0x10);
                                                            if (lVar10 != 0) {
                                                              lVar11 = *unaff_x20;
                                                              uVar4 = FUN_069a0c14(lVar10,0x42,
                                                                                   *unaff_x25);
                                                              if (lVar11 != 0) {
                                                                uVar6 = FUN_085875ac(lVar11,uVar4,0)
                                                                ;
                                                                uVar8 = thunk_FUN_03cf5234(*
                                                  unaff_x26);
                                                  FUN_06d926d0(uVar8,uVar5,uVar6,0x2d,0x42);
                                                  lVar10 = *(long *)(unaff_x19 + 0x10);
                                                  *(int *)(unaff_x19 + 0x1c) =
                                                       *(int *)(unaff_x19 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                                                      puVar7 = (undefined8 *)
                                                               (lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               );
                                                      *puVar7 = uVar8;
                                                      thunk_FUN_03d233cc(puVar7,uVar8);
                                                    }
                                                    else {
                                                      FUN_05212cf4();
                                                    }
                                                    lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8)
                                                                      + 0x10);
                                                    if (lVar10 != 0) {
                                                      lVar11 = *unaff_x20;
                                                      uVar4 = FUN_069a0c14(lVar10,0x42,*unaff_x25);
                                                      if (lVar11 != 0) {
                                                        uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                                        lVar10 = *(long *)(*(long *)(*unaff_x24 +
                                                                                    0xb8) + 0x10);
                                                        if (lVar10 != 0) {
                                                          lVar11 = *unaff_x20;
                                                          uVar4 = FUN_069a0c14(lVar10,0x43,
                                                                               *unaff_x25);
                                                          if (lVar11 != 0) {
                                                            uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                                            uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                                                            FUN_06d926d0(uVar8,uVar5,uVar6,0x42,0x43
                                                                        );
                                                            lVar10 = *(long *)(unaff_x19 + 0x10);
                                                            *(int *)(unaff_x19 + 0x1c) =
                                                                 *(int *)(unaff_x19 + 0x1c) + 1;
                                                            if (lVar10 != 0) {
                                                              uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                              if (uVar2 < *(uint *)(lVar10 + 0x18))
                                                              {
                                                                *(uint *)(unaff_x19 + 0x18) =
                                                                     uVar2 + 1;
                                                                puVar7 = (undefined8 *)
                                                                         (lVar10 + (long)(int)uVar2
                                                                                   * 8 + 0x20);
                                                                *puVar7 = uVar8;
                                                                thunk_FUN_03d233cc(puVar7,uVar8);
                                                              }
                                                              else {
                                                                FUN_05212cf4();
                                                              }
                                                              lVar10 = *(long *)(*(long *)(*
                                                  unaff_x24 + 0xb8) + 0x10);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *unaff_x20;
                                                    uVar4 = FUN_069a0c14(lVar10,0x43,*unaff_x25);
                                                    if (lVar11 != 0) {
                                                      uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                                      lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8
                                                                                  ) + 0x10);
                                                      if (lVar10 != 0) {
                                                        lVar11 = *unaff_x20;
                                                        uVar4 = FUN_069a0c14(lVar10,0x44,*unaff_x25)
                                                        ;
                                                        if (lVar11 != 0) {
                                                          uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                                          uVar8 = thunk_FUN_03cf5234(*unaff_x26);
                                                          FUN_06d926d0(uVar8,uVar5,uVar6,0x43,0x44);
                                                          lVar10 = *(long *)(unaff_x19 + 0x10);
                                                          *(int *)(unaff_x19 + 0x1c) =
                                                               *(int *)(unaff_x19 + 0x1c) + 1;
                                                          if (lVar10 != 0) {
                                                            uVar2 = *(uint *)(unaff_x19 + 0x18);
                                                            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                              *(uint *)(unaff_x19 + 0x18) =
                                                                   uVar2 + 1;
                                                              puVar7 = (undefined8 *)
                                                                       (lVar10 + (long)(int)uVar2 *
                                                                                 8 + 0x20);
                                                              *puVar7 = uVar8;
                                                              thunk_FUN_03d233cc(puVar7,uVar8);
                                                            }
                                                            else {
                                                              FUN_05212cf4();
                                                            }
                                                            puVar3 = PTR_DAT_08e68f00;
                                                            iVar1 = *(int *)(unaff_x19 + 0x18);
joined_r0x06d91be8:
                                                            iVar1 = iVar1 + -1;
                                                            if (iVar1 < 0) {
                                                              return;
                                                            }
                                                            lVar10 = FUN_05212a24();
                                                            if (lVar10 != 0) {
                                                              lVar11 = *(long *)puVar3;
                                                              uVar5 = *(undefined8 *)(lVar10 + 0x10)
                                                              ;
                                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                                thunk_FUN_03cd7500(lVar11);
                                                              }
                                                              uVar9 = FUN_085dfaac(uVar5,0,0);
                                                              if ((uVar9 & 1) != 0)
                                                              goto LAB_06d91c84;
                                                              lVar10 = FUN_05212a24();
                                                              if (lVar10 != 0)
                                                              goto code_r0x06d91c58;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_03c8fb30();
code_r0x06d91c58:
  lVar11 = *(long *)puVar3;
  uVar5 = *(undefined8 *)(lVar10 + 0x18);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar11);
  }
  uVar9 = FUN_085dfaac(uVar5,0,0);
  if ((uVar9 & 1) != 0) {
LAB_06d91c84:
    FUN_052143ec();
  }
  goto joined_r0x06d91be8;
}


