/*
FUNCTION_NAME: Meta.WitAi.TTS.Debugger.TTSDebugger.TTSDebuggerFileStream$$Dispose
ENTRY_POINT: 06d39f78
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Meta_WitAi_TTS_Debugger_TTSDebugger_TTSDebuggerFileStream__Dispose(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  uint *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  int *unaff_x28;
  long *unaff_x29;
  
  uVar3 = thunk_FUN_03cf5234(param_1);
  FUN_06d3af78();
  *unaff_x28 = *unaff_x28 + 1;
  lVar9 = *unaff_x29;
  if (lVar9 != 0) {
    uVar1 = *unaff_x24;
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *unaff_x24 = uVar1 + 1;
      puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
      *puVar4 = uVar3;
      thunk_FUN_03d233cc(puVar4,uVar3);
    }
    else {
      FUN_05212cf4();
    }
    if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
      uVar3 = FUN_05212a24(lVar9,0x35,*unaff_x25);
      if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
        uVar5 = FUN_05212a24(lVar9,0x36,*unaff_x25);
        uVar6 = thunk_FUN_03cf5234(*unaff_x26);
        FUN_06d3af78(uVar6,uVar3,uVar5,0x35,0x36,0);
        *unaff_x28 = *unaff_x28 + 1;
        lVar9 = *unaff_x29;
        if (lVar9 != 0) {
          uVar1 = *unaff_x24;
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *unaff_x24 = uVar1 + 1;
            puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *puVar4 = uVar6;
            thunk_FUN_03d233cc(puVar4,uVar6);
          }
          else {
            FUN_05212cf4();
          }
          if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
            uVar3 = FUN_05212a24(lVar9,0x2d,*unaff_x25);
            if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
              uVar5 = FUN_05212a24(lVar9,0x38,*unaff_x25);
              uVar6 = thunk_FUN_03cf5234(*unaff_x26);
              FUN_06d3af78(uVar6,uVar3,uVar5,0x2d,0x38,0);
              *unaff_x28 = *unaff_x28 + 1;
              lVar9 = *unaff_x29;
              if (lVar9 != 0) {
                uVar1 = *unaff_x24;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *unaff_x24 = uVar1 + 1;
                  puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar4 = uVar6;
                  thunk_FUN_03d233cc(puVar4,uVar6);
                }
                else {
                  FUN_05212cf4();
                }
                if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
                  uVar3 = FUN_05212a24(lVar9,0x37,*unaff_x25);
                  if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
                    uVar5 = FUN_05212a24(lVar9,0x38,*unaff_x25);
                    uVar6 = thunk_FUN_03cf5234(*unaff_x26);
                    FUN_06d3af78(uVar6,uVar3,uVar5,0x37,0x38,0);
                    *unaff_x28 = *unaff_x28 + 1;
                    lVar9 = *unaff_x29;
                    if (lVar9 != 0) {
                      uVar1 = *unaff_x24;
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *unaff_x24 = uVar1 + 1;
                        puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                        *puVar4 = uVar6;
                        thunk_FUN_03d233cc(puVar4,uVar6);
                      }
                      else {
                        FUN_05212cf4();
                      }
                      if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
                        uVar3 = FUN_05212a24(lVar9,0x38,*unaff_x25);
                        if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0))
                        {
                          uVar5 = FUN_05212a24(lVar9,0x39,*unaff_x25);
                          uVar6 = thunk_FUN_03cf5234(*unaff_x26);
                          FUN_06d3af78(uVar6,uVar3,uVar5,0x38,0x39,0);
                          *unaff_x28 = *unaff_x28 + 1;
                          lVar9 = *unaff_x29;
                          if (lVar9 != 0) {
                            uVar1 = *unaff_x24;
                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                              *unaff_x24 = uVar1 + 1;
                              puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar4 = uVar6;
                              thunk_FUN_03d233cc(puVar4,uVar6);
                            }
                            else {
                              FUN_05212cf4();
                            }
                            if ((*unaff_x20 != 0) &&
                               (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
                              uVar3 = FUN_05212a24(lVar9,0x39,*unaff_x25);
                              if ((*unaff_x20 != 0) &&
                                 (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
                                uVar5 = FUN_05212a24(lVar9,0x3a,*unaff_x25);
                                uVar6 = thunk_FUN_03cf5234(*unaff_x26);
                                FUN_06d3af78(uVar6,uVar3,uVar5,0x39,0x3a,0);
                                *unaff_x28 = *unaff_x28 + 1;
                                lVar9 = *unaff_x29;
                                if (lVar9 != 0) {
                                  uVar1 = *unaff_x24;
                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                    *unaff_x24 = uVar1 + 1;
                                    puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                    *puVar4 = uVar6;
                                    thunk_FUN_03d233cc(puVar4,uVar6);
                                  }
                                  else {
                                    FUN_05212cf4();
                                  }
                                  if ((*unaff_x20 != 0) &&
                                     (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
                                    uVar3 = FUN_05212a24(lVar9,0x3a,*unaff_x25);
                                    if ((*unaff_x20 != 0) &&
                                       (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
                                      uVar5 = FUN_05212a24(lVar9,0x3b,*unaff_x25);
                                      uVar6 = thunk_FUN_03cf5234(*unaff_x26);
                                      FUN_06d3af78(uVar6,uVar3,uVar5,0x3a,0x3b,0);
                                      *unaff_x28 = *unaff_x28 + 1;
                                      lVar9 = *unaff_x29;
                                      if (lVar9 != 0) {
                                        uVar1 = *unaff_x24;
                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                          *unaff_x24 = uVar1 + 1;
                                          puVar4 = (undefined8 *)
                                                   (lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                          *puVar4 = uVar6;
                                          thunk_FUN_03d233cc(puVar4,uVar6);
                                        }
                                        else {
                                          FUN_05212cf4();
                                        }
                                        if ((*unaff_x20 != 0) &&
                                           (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
                                          uVar3 = FUN_05212a24(lVar9,0x2d,*unaff_x25);
                                          if ((*unaff_x20 != 0) &&
                                             (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0)) {
                                            uVar5 = FUN_05212a24(lVar9,0x3d,*unaff_x25);
                                            uVar6 = thunk_FUN_03cf5234(*unaff_x26);
                                            FUN_06d3af78(uVar6,uVar3,uVar5,0x2d,0x3d,0);
                                            *unaff_x28 = *unaff_x28 + 1;
                                            lVar9 = *unaff_x29;
                                            if (lVar9 != 0) {
                                              uVar1 = *unaff_x24;
                                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                *unaff_x24 = uVar1 + 1;
                                                puVar4 = (undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                                *puVar4 = uVar6;
                                                thunk_FUN_03d233cc(puVar4,uVar6);
                                              }
                                              else {
                                                FUN_05212cf4();
                                              }
                                              if ((*unaff_x20 != 0) &&
                                                 (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0))
                                              {
                                                uVar3 = FUN_05212a24(lVar9,0x3c,*unaff_x25);
                                                if ((*unaff_x20 != 0) &&
                                                   (lVar9 = *(long *)(*unaff_x20 + 0xc0), lVar9 != 0
                                                   )) {
                                                  uVar5 = FUN_05212a24(lVar9,0x3d,*unaff_x25);
                                                  uVar6 = thunk_FUN_03cf5234(*unaff_x26);
                                                  FUN_06d3af78(uVar6,uVar3,uVar5,0x3c,0x3d,0);
                                                  *unaff_x28 = *unaff_x28 + 1;
                                                  lVar9 = *unaff_x29;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *unaff_x24;
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *unaff_x24 = uVar1 + 1;
                                                      puVar4 = (undefined8 *)
                                                               (lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                      ;
                                                      *puVar4 = uVar6;
                                                      thunk_FUN_03d233cc(puVar4,uVar6);
                                                    }
                                                    else {
                                                      FUN_05212cf4();
                                                    }
                                                    if ((*unaff_x20 != 0) &&
                                                       (lVar9 = *(long *)(*unaff_x20 + 0xc0),
                                                       lVar9 != 0)) {
                                                      uVar3 = FUN_05212a24(lVar9,0x3d,*unaff_x25);
                                                      if ((*unaff_x20 != 0) &&
                                                         (lVar9 = *(long *)(*unaff_x20 + 0xc0),
                                                         lVar9 != 0)) {
                                                        uVar5 = FUN_05212a24(lVar9,0x3e,*unaff_x25);
                                                        uVar6 = thunk_FUN_03cf5234(*unaff_x26);
                                                        FUN_06d3af78(uVar6,uVar3,uVar5,0x3d,0x3e,0);
                                                        *unaff_x28 = *unaff_x28 + 1;
                                                        lVar9 = *unaff_x29;
                                                        if (lVar9 != 0) {
                                                          uVar1 = *unaff_x24;
                                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                            *unaff_x24 = uVar1 + 1;
                                                            puVar4 = (undefined8 *)
                                                                     (lVar9 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                            *puVar4 = uVar6;
                                                            thunk_FUN_03d233cc(puVar4,uVar6);
                                                          }
                                                          else {
                                                            FUN_05212cf4();
                                                          }
                                                          if ((*unaff_x20 != 0) &&
                                                             (lVar9 = *(long *)(*unaff_x20 + 0xc0),
                                                             lVar9 != 0)) {
                                                            uVar3 = FUN_05212a24(lVar9,0x3e,
                                                                                 *unaff_x25);
                                                            if ((*unaff_x20 != 0) &&
                                                               (lVar9 = *(long *)(*unaff_x20 + 0xc0)
                                                               , lVar9 != 0)) {
                                                              uVar5 = FUN_05212a24(lVar9,0x3f,
                                                                                   *unaff_x25);
                                                              uVar6 = thunk_FUN_03cf5234(*unaff_x26)
                                                              ;
                                                              FUN_06d3af78(uVar6,uVar3,uVar5,0x3e,
                                                                           0x3f,0);
                                                              *unaff_x28 = *unaff_x28 + 1;
                                                              lVar9 = *unaff_x29;
                                                              if (lVar9 != 0) {
                                                                uVar1 = *unaff_x24;
                                                                if (uVar1 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *unaff_x24 = uVar1 + 1;
                                                                  puVar4 = (undefined8 *)
                                                                           (lVar9 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                                  *puVar4 = uVar6;
                                                                  thunk_FUN_03d233cc(puVar4,uVar6);
                                                                }
                                                                else {
                                                                  FUN_05212cf4();
                                                                }
                                                                if ((*unaff_x20 != 0) &&
                                                                   (lVar9 = *(long *)(*unaff_x20 +
                                                                                     0xc0),
                                                                   lVar9 != 0)) {
                                                                  uVar3 = FUN_05212a24(lVar9,0x3f,
                                                                                       *unaff_x25);
                                                                  if ((*unaff_x20 != 0) &&
                                                                     (lVar9 = *(long *)(*unaff_x20 +
                                                                                       0xc0),
                                                                     lVar9 != 0)) {
                                                                    uVar5 = FUN_05212a24(lVar9,0x40,
                                                                                         *unaff_x25)
                                                                    ;
                                                                    uVar6 = thunk_FUN_03cf5234(*
                                                  unaff_x26);
                                                  FUN_06d3af78(uVar6,uVar3,uVar5,0x3f,0x40,0);
                                                  *unaff_x28 = *unaff_x28 + 1;
                                                  lVar9 = *unaff_x29;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *unaff_x24;
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *unaff_x24 = uVar1 + 1;
                                                      puVar4 = (undefined8 *)
                                                               (lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                      ;
                                                      *puVar4 = uVar6;
                                                      thunk_FUN_03d233cc(puVar4,uVar6);
                                                    }
                                                    else {
                                                      FUN_05212cf4();
                                                    }
                                                    if ((*unaff_x20 != 0) &&
                                                       (lVar9 = *(long *)(*unaff_x20 + 0xc0),
                                                       lVar9 != 0)) {
                                                      uVar3 = FUN_05212a24(lVar9,0x2d,*unaff_x25);
                                                      if ((*unaff_x20 != 0) &&
                                                         (lVar9 = *(long *)(*unaff_x20 + 0xc0),
                                                         lVar9 != 0)) {
                                                        uVar5 = FUN_05212a24(lVar9,0x41,*unaff_x25);
                                                        uVar6 = thunk_FUN_03cf5234(*unaff_x26);
                                                        FUN_06d3af78(uVar6,uVar3,uVar5,0x2d,0x41,0);
                                                        *unaff_x28 = *unaff_x28 + 1;
                                                        lVar9 = *unaff_x29;
                                                        if (lVar9 != 0) {
                                                          uVar1 = *unaff_x24;
                                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                            *unaff_x24 = uVar1 + 1;
                                                            puVar4 = (undefined8 *)
                                                                     (lVar9 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                            *puVar4 = uVar6;
                                                            thunk_FUN_03d233cc(puVar4,uVar6);
                                                          }
                                                          else {
                                                            FUN_05212cf4();
                                                          }
                                                          if ((*unaff_x20 != 0) &&
                                                             (lVar9 = *(long *)(*unaff_x20 + 0xc0),
                                                             lVar9 != 0)) {
                                                            uVar3 = FUN_05212a24(lVar9,0x41,
                                                                                 *unaff_x25);
                                                            if ((*unaff_x20 != 0) &&
                                                               (lVar9 = *(long *)(*unaff_x20 + 0xc0)
                                                               , lVar9 != 0)) {
                                                              uVar5 = FUN_05212a24(lVar9,0x42,
                                                                                   *unaff_x25);
                                                              uVar6 = thunk_FUN_03cf5234(*unaff_x26)
                                                              ;
                                                              FUN_06d3af78(uVar6,uVar3,uVar5,0x41,
                                                                           0x42,0);
                                                              *unaff_x28 = *unaff_x28 + 1;
                                                              lVar9 = *unaff_x29;
                                                              if (lVar9 != 0) {
                                                                uVar1 = *unaff_x24;
                                                                if (uVar1 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *unaff_x24 = uVar1 + 1;
                                                                  puVar4 = (undefined8 *)
                                                                           (lVar9 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                                  *puVar4 = uVar6;
                                                                  thunk_FUN_03d233cc(puVar4,uVar6);
                                                                }
                                                                else {
                                                                  FUN_05212cf4();
                                                                }
                                                                if ((*unaff_x20 != 0) &&
                                                                   (lVar9 = *(long *)(*unaff_x20 +
                                                                                     0xc0),
                                                                   lVar9 != 0)) {
                                                                  uVar3 = FUN_05212a24(lVar9,0x42,
                                                                                       *unaff_x25);
                                                                  if ((*unaff_x20 != 0) &&
                                                                     (lVar9 = *(long *)(*unaff_x20 +
                                                                                       0xc0),
                                                                     lVar9 != 0)) {
                                                                    uVar5 = FUN_05212a24(lVar9,0x43,
                                                                                         *unaff_x25)
                                                                    ;
                                                                    uVar6 = thunk_FUN_03cf5234(*
                                                  unaff_x26);
                                                  FUN_06d3af78(uVar6,uVar3,uVar5,0x42,0x43,0);
                                                  *unaff_x28 = *unaff_x28 + 1;
                                                  lVar9 = *unaff_x29;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *unaff_x24;
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *unaff_x24 = uVar1 + 1;
                                                      puVar4 = (undefined8 *)
                                                               (lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                      ;
                                                      *puVar4 = uVar6;
                                                      thunk_FUN_03d233cc(puVar4,uVar6);
                                                    }
                                                    else {
                                                      FUN_05212cf4();
                                                    }
                                                    if ((*unaff_x20 != 0) &&
                                                       (lVar9 = *(long *)(*unaff_x20 + 0xc0),
                                                       lVar9 != 0)) {
                                                      uVar3 = FUN_05212a24(lVar9,0x43,*unaff_x25);
                                                      if ((*unaff_x20 != 0) &&
                                                         (lVar9 = *(long *)(*unaff_x20 + 0xc0),
                                                         lVar9 != 0)) {
                                                        uVar5 = FUN_05212a24(lVar9,0x44,*unaff_x25);
                                                        uVar6 = thunk_FUN_03cf5234(*unaff_x26);
                                                        FUN_06d3af78(uVar6,uVar3,uVar5,0x43,0x44,0);
                                                        *unaff_x28 = *unaff_x28 + 1;
                                                        lVar9 = *unaff_x29;
                                                        if (lVar9 != 0) {
                                                          uVar1 = *unaff_x24;
                                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                            *unaff_x24 = uVar1 + 1;
                                                            puVar4 = (undefined8 *)
                                                                     (lVar9 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                            *puVar4 = uVar6;
                                                            thunk_FUN_03d233cc(puVar4,uVar6);
                                                          }
                                                          else {
                                                            FUN_05212cf4();
                                                          }
                                                          if ((*unaff_x20 != 0) &&
                                                             (lVar9 = *(long *)(*unaff_x20 + 0xc0),
                                                             lVar9 != 0)) {
                                                            uVar3 = FUN_05212a24(lVar9,0x44,
                                                                                 *unaff_x25);
                                                            if ((*unaff_x20 != 0) &&
                                                               (lVar9 = *(long *)(*unaff_x20 + 0xc0)
                                                               , lVar9 != 0)) {
                                                              uVar5 = FUN_05212a24(lVar9,0x45,
                                                                                   *unaff_x25);
                                                              uVar6 = thunk_FUN_03cf5234(*unaff_x26)
                                                              ;
                                                              FUN_06d3af78(uVar6,uVar3,uVar5,0x44,
                                                                           0x45,0);
                                                              *unaff_x28 = *unaff_x28 + 1;
                                                              lVar9 = *unaff_x29;
                                                              if (lVar9 != 0) {
                                                                uVar1 = *unaff_x24;
                                                                if (uVar1 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *unaff_x24 = uVar1 + 1;
                                                                  puVar4 = (undefined8 *)
                                                                           (lVar9 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                                  *puVar4 = uVar6;
                                                                  thunk_FUN_03d233cc(puVar4,uVar6);
                                                                }
                                                                else {
                                                                  FUN_05212cf4();
                                                                }
                                                                puVar2 = PTR_DAT_08e68f00;
                                                                uVar1 = *unaff_x24;
joined_r0x06d3ac40:
                                                                uVar1 = uVar1 - 1;
                                                                if ((int)uVar1 < 0) {
                                                                  return;
                                                                }
                                                                lVar9 = FUN_05212a24();
                                                                if (lVar9 != 0) {
                                                                  lVar8 = *(long *)puVar2;
                                                                  uVar3 = *(undefined8 *)
                                                                           (lVar9 + 0x10);
                                                                  if (*(int *)(lVar8 + 0xe0) == 0) {
                                                                    thunk_FUN_03cd7500(lVar8);
                                                                  }
                                                                  uVar7 = FUN_085dfaac(uVar3,0,0);
                                                                  if ((uVar7 & 1) != 0)
                                                                  goto LAB_06d3acdc;
                                                                  lVar9 = FUN_05212a24();
                                                                  if (lVar9 != 0)
                                                                  goto 
                                                  Meta_WitAi_TTS_Data_TTSEventContainerDelegate___ctor
                                                  ;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
Meta_WitAi_TTS_Data_TTSEventContainerDelegate___ctor:
  lVar8 = *(long *)puVar2;
  uVar3 = *(undefined8 *)(lVar9 + 0x18);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar8);
  }
  uVar7 = FUN_085dfaac(uVar3,0,0);
  if ((uVar7 & 1) != 0) {
LAB_06d3acdc:
    FUN_052143ec();
  }
  goto joined_r0x06d3ac40;
}


