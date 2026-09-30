/*
FUNCTION_NAME: UnityEngine.QualitySettings$$get_activeColorSpace
ENTRY_POINT: 0358e42c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_QualitySettings__get_activeColorSpace(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  
  uVar4 = FUN_036c1d60(param_1,0);
  if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRPlugin_Media_TypeInfo);
  }
  uVar12 = (uint)unaff_x22;
  if (uVar12 < *(uint *)(unaff_x25 + 0x18)) {
    FUN_03595b9c(unaff_x26 + 0x20,uVar4,0);
    lVar6 = *(long *)(unaff_x19 + 0x368);
    if ((lVar6 == 0) || (lVar5 = *(long *)(lVar6 + 0x38), lVar5 == 0)) {
LAB_0358ea94:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (unaff_w20 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar5 + unaff_x23 * 0x178 + 0x6c) = unaff_w24;
      lVar6 = *(long *)(lVar6 + 0x60);
      if (lVar6 == 0) goto LAB_0358ea94;
      if (uVar12 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x30);
        if (lVar6 == 0) goto LAB_0358ea94;
        if (unaff_w24 < *(uint *)(lVar6 + 0x18)) {
          lVar8 = lVar5 + unaff_x23 * 0x178;
          uVar4 = *(undefined4 *)(lVar8 + 0x78);
          lVar7 = (long)(int)unaff_w24;
          lVar6 = lVar6 + lVar7 * 0xc;
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar8 + 0x70);
          *(undefined4 *)(lVar6 + 0x28) = uVar4;
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar6 == 0))
          goto LAB_0358ea94;
          if ((uVar12 < *(uint *)(lVar6 + 0x18)) && (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
            lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x30);
            if (lVar6 == 0) goto LAB_0358ea94;
            uVar1 = unaff_w24 + 1;
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              lVar9 = lVar5 + unaff_x23 * 0x178;
              uVar4 = *(undefined4 *)(lVar9 + 0xa0);
              lVar8 = (long)(int)uVar1;
              lVar6 = lVar6 + lVar8 * 0xc;
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar9 + 0x98);
              *(undefined4 *)(lVar6 + 0x28) = uVar4;
              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                 (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar6 == 0))
              goto LAB_0358ea94;
              if ((uVar12 < *(uint *)(lVar6 + 0x18)) && (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x30);
                if (lVar6 == 0) goto LAB_0358ea94;
                uVar2 = unaff_w24 + 2;
                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                  lVar10 = lVar5 + unaff_x23 * 0x178;
                  uVar4 = *(undefined4 *)(lVar10 + 200);
                  lVar9 = (long)(int)uVar2;
                  lVar6 = lVar6 + lVar9 * 0xc;
                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar10 + 0xc0);
                  *(undefined4 *)(lVar6 + 0x28) = uVar4;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar6 == 0))
                  goto LAB_0358ea94;
                  if ((uVar12 < *(uint *)(lVar6 + 0x18)) && (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                    lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x30);
                    if (lVar6 == 0) goto LAB_0358ea94;
                    uVar3 = unaff_w24 + 3;
                    if (uVar3 < *(uint *)(lVar6 + 0x18)) {
                      lVar11 = lVar5 + unaff_x23 * 0x178;
                      uVar4 = *(undefined4 *)(lVar11 + 0xf0);
                      lVar10 = (long)(int)uVar3;
                      lVar6 = lVar6 + lVar10 * 0xc;
                      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar11 + 0xe8);
                      *(undefined4 *)(lVar6 + 0x28) = uVar4;
                      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar6 == 0))
                      goto LAB_0358ea94;
                      if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                         (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                        lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x48);
                        if (lVar6 == 0) goto LAB_0358ea94;
                        if (unaff_w24 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + lVar7 * 8 + 0x20) =
                               *(undefined8 *)(lVar5 + unaff_x23 * 0x178 + 0x7c);
                          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar6 == 0))
                          goto LAB_0358ea94;
                          if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                             (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                            lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x48);
                            if (lVar6 == 0) goto LAB_0358ea94;
                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                              *(undefined8 *)(lVar6 + lVar8 * 8 + 0x20) =
                                   *(undefined8 *)(lVar5 + unaff_x23 * 0x178 + 0xa4);
                              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                 (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar6 == 0
                                 )) goto LAB_0358ea94;
                              if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                 (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                                lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x48);
                                if (lVar6 == 0) goto LAB_0358ea94;
                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                  *(undefined8 *)(lVar6 + lVar9 * 8 + 0x20) =
                                       *(undefined8 *)(lVar5 + unaff_x23 * 0x178 + 0xcc);
                                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60),
                                     lVar6 == 0)) goto LAB_0358ea94;
                                  if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                     (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                                    lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x48);
                                    if (lVar6 == 0) goto LAB_0358ea94;
                                    if (uVar3 < *(uint *)(lVar6 + 0x18)) {
                                      *(undefined8 *)(lVar6 + lVar10 * 8 + 0x20) =
                                           *(undefined8 *)(lVar5 + unaff_x23 * 0x178 + 0xf4);
                                      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60),
                                         lVar6 == 0)) goto LAB_0358ea94;
                                      if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                         (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                                        lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x50);
                                        if (lVar6 == 0) goto LAB_0358ea94;
                                        if (unaff_w24 < *(uint *)(lVar6 + 0x18)) {
                                          *(undefined8 *)(lVar6 + lVar7 * 8 + 0x20) =
                                               *(undefined8 *)(lVar5 + unaff_x23 * 0x178 + 0x84);
                                          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60)
                                             , lVar6 == 0)) goto LAB_0358ea94;
                                          if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                             (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                                            lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x50);
                                            if (lVar6 == 0) goto LAB_0358ea94;
                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                              *(undefined8 *)(lVar6 + lVar8 * 8 + 0x20) =
                                                   *(undefined8 *)(lVar5 + unaff_x23 * 0x178 + 0xac)
                                              ;
                                              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                                 (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) +
                                                                   0x60), lVar6 == 0))
                                              goto LAB_0358ea94;
                                              if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                                 (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                                                lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 + 0x50);
                                                if (lVar6 == 0) goto LAB_0358ea94;
                                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                  *(undefined8 *)(lVar6 + lVar9 * 8 + 0x20) =
                                                       *(undefined8 *)
                                                        (lVar5 + unaff_x23 * 0x178 + 0xd4);
                                                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                                     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368)
                                                                       + 0x60), lVar6 == 0))
                                                  goto LAB_0358ea94;
                                                  if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                                     (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                                                    lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 +
                                                                     0x50);
                                                    if (lVar6 == 0) goto LAB_0358ea94;
                                                    if (uVar3 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined8 *)(lVar6 + lVar10 * 8 + 0x20) =
                                                           *(undefined8 *)
                                                            (lVar5 + unaff_x23 * 0x178 + 0xfc);
                                                      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                                         (lVar6 = *(long *)(*(long *)(unaff_x19 +
                                                                                     0x368) + 0x60),
                                                         lVar6 == 0)) goto LAB_0358ea94;
                                                      if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                                         (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                                                        lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 +
                                                                         0x58);
                                                        if (lVar6 == 0) goto LAB_0358ea94;
                                                        if (unaff_w24 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + lVar7 * 4 + 0x20)
                                                               = *(undefined4 *)
                                                                  (lVar5 + unaff_x23 * 0x178 + 0x94)
                                                          ;
                                                          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                                             (lVar6 = *(long *)(*(long *)(unaff_x19
                                                                                         + 0x368) +
                                                                               0x60), lVar6 == 0))
                                                          goto LAB_0358ea94;
                                                          if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                                             (unaff_w20 < *(uint *)(lVar5 + 0x18)))
                                                          {
                                                            lVar6 = *(long *)(lVar6 + unaff_x22 *
                                                                                      0x50 + 0x58);
                                                            if (lVar6 == 0) goto LAB_0358ea94;
                                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                              *(undefined4 *)
                                                               (lVar6 + lVar8 * 4 + 0x20) =
                                                                   *(undefined4 *)
                                                                    (lVar5 + unaff_x23 * 0x178 +
                                                                    0xbc);
                                                              if ((*(long *)(unaff_x19 + 0x368) == 0
                                                                  ) || (lVar6 = *(long *)(*(long *)(
                                                  unaff_x19 + 0x368) + 0x60), lVar6 == 0))
                                                  goto LAB_0358ea94;
                                                  if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                                     (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                                                    lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 +
                                                                     0x58);
                                                    if (lVar6 == 0) goto LAB_0358ea94;
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined4 *)(lVar6 + lVar9 * 4 + 0x20) =
                                                           *(undefined4 *)
                                                            (lVar5 + unaff_x23 * 0x178 + 0xe4);
                                                      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                                         (lVar6 = *(long *)(*(long *)(unaff_x19 +
                                                                                     0x368) + 0x60),
                                                         lVar6 == 0)) goto LAB_0358ea94;
                                                      if ((uVar12 < *(uint *)(lVar6 + 0x18)) &&
                                                         (unaff_w20 < *(uint *)(lVar5 + 0x18))) {
                                                        lVar6 = *(long *)(lVar6 + unaff_x22 * 0x50 +
                                                                         0x58);
                                                        if (lVar6 == 0) goto LAB_0358ea94;
                                                        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined4 *)(lVar6 + lVar10 * 4 + 0x20)
                                                               = *(undefined4 *)
                                                                  (lVar5 + unaff_x23 * 0x178 + 0x10c
                                                                  );
                                                          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                                                             (lVar6 = *(long *)(*(long *)(unaff_x19
                                                                                         + 0x368) +
                                                                               0x60), lVar6 == 0))
                                                          goto LAB_0358ea94;
                                                          if (uVar12 < *(uint *)(lVar6 + 0x18)) {
                                                            *(uint *)(lVar6 + unaff_x22 * 0x50 +
                                                                     0x28) = unaff_w24 + 4;
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


