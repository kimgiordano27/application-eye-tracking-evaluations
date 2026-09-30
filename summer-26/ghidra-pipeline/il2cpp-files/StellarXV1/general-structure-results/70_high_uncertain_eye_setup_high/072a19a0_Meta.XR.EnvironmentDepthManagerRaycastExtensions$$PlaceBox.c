/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$PlaceBox
ENTRY_POINT: 072a19a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_EnvironmentDepthManagerRaycastExtensions__PlaceBox(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  long unaff_x25;
  
  if (unaff_w24 < 1) {
    lVar2 = *(long *)(unaff_x20 + 0x180);
    if (lVar2 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
    FUN_0769c874(*(undefined8 *)(lVar2 + 0x38),6,5,0);
    if (unaff_w23 == 0) goto LAB_072a1c54;
LAB_072a1c20:
    lVar2 = *(long *)(unaff_x20 + 0xd8);
    if (lVar2 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar3 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_072a2494;
    if (*(int *)(lVar3 + 0x28) == 0) goto LAB_072a1c54;
LAB_072a1e5c:
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
    if (*(int *)(lVar2 + 0x2c) != 0) {
      return unaff_w22;
    }
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x180);
    if (lVar2 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
    if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
    lVar2 = *(long *)(lVar2 + 0x38);
    uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
    if (lVar2 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar2 + 0x18) < 7) goto LAB_072a2494;
    lVar3 = *(long *)(unaff_x20 + 0x180);
    *(undefined4 *)(lVar2 + 0x38) = uVar1;
    if (lVar3 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
    if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
    lVar2 = *(long *)(lVar2 + 0x38);
    uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
    if (lVar2 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) == 0) goto LAB_072a2494;
    lVar3 = *(long *)(unaff_x20 + 0x180);
    *(undefined4 *)(lVar2 + 0x3c) = uVar1;
    if (lVar3 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
    if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
    lVar2 = *(long *)(lVar2 + 0x38);
    uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
    if (lVar2 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar2 + 0x18) < 9) goto LAB_072a2494;
    lVar3 = *(long *)(unaff_x20 + 0x180);
    *(undefined4 *)(lVar2 + 0x40) = uVar1;
    if (lVar3 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
    if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
    lVar2 = *(long *)(lVar2 + 0x38);
    uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
    if (lVar2 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar2 + 0x18) < 10) goto LAB_072a2494;
    lVar3 = *(long *)(unaff_x20 + 0x180);
    *(undefined4 *)(lVar2 + 0x44) = uVar1;
    if (lVar3 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
    lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_072a2490;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
    if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
    lVar2 = *(long *)(lVar2 + 0x38);
    uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w24);
    if (lVar2 == 0) goto LAB_072a2490;
    if (*(uint *)(lVar2 + 0x18) < 0xb) goto LAB_072a2494;
    *(undefined4 *)(lVar2 + 0x48) = uVar1;
    unaff_w22 = unaff_w22 + unaff_w24 * 5;
    if (unaff_w23 != 0) goto LAB_072a1c20;
LAB_072a1c54:
    if (unaff_w21 < 1) {
      lVar2 = *(long *)(unaff_x20 + 0x180);
      if (lVar2 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      FUN_0769c874(*(undefined8 *)(lVar2 + 0x38),0xb,5,0);
    }
    else {
      lVar2 = *(long *)(unaff_x20 + 0x180);
      if (lVar2 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar2 = *(long *)(lVar2 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar2 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar2 + 0x18) < 0xc) goto LAB_072a2494;
      lVar3 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar2 + 0x4c) = uVar1;
      if (lVar3 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar2 = *(long *)(lVar2 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar2 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar2 + 0x18) < 0xd) goto LAB_072a2494;
      lVar3 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar2 + 0x50) = uVar1;
      if (lVar3 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar2 = *(long *)(lVar2 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar2 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar2 + 0x18) < 0xe) goto LAB_072a2494;
      lVar3 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar2 + 0x54) = uVar1;
      if (lVar3 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar2 = *(long *)(lVar2 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar2 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar2 + 0x18) < 0xf) goto LAB_072a2494;
      lVar3 = *(long *)(unaff_x20 + 0x180);
      *(undefined4 *)(lVar2 + 0x58) = uVar1;
      if (lVar3 == 0) goto LAB_072a2490;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_072a2490;
      lVar2 = *(long *)(lVar2 + 0x38);
      uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
      if (lVar2 == 0) goto LAB_072a2490;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffff0) == 0) goto LAB_072a2494;
      *(undefined4 *)(lVar2 + 0x5c) = uVar1;
      unaff_w22 = unaff_w22 + unaff_w21 * 5;
    }
    if (unaff_w23 != 0) {
      lVar2 = *(long *)(unaff_x20 + 0xd8);
      if (lVar2 == 0) goto LAB_072a2490;
      goto LAB_072a1e5c;
    }
  }
  if (unaff_w21 < 1) {
    lVar2 = *(long *)(unaff_x20 + 0x180);
    if (lVar2 != 0) {
      if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_072a2490;
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          FUN_0769c874(*(undefined8 *)(lVar2 + 0x38),0x10,5,0);
          return unaff_w22;
        }
      }
LAB_072a2494:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x180);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_072a2494;
      lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
      if (lVar2 != 0) {
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
        if (*(long *)(unaff_x20 + 0xc0) != 0) {
          lVar2 = *(long *)(lVar2 + 0x38);
          uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) < 0x11) goto LAB_072a2494;
            lVar3 = *(long *)(unaff_x20 + 0x180);
            *(undefined4 *)(lVar2 + 0x60) = uVar1;
            if (lVar3 != 0) {
              if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
              lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
              if (lVar2 != 0) {
                if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
                if (*(long *)(unaff_x20 + 0xc0) != 0) {
                  lVar2 = *(long *)(lVar2 + 0x38);
                  uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
                  if (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x18) < 0x12) goto LAB_072a2494;
                    lVar3 = *(long *)(unaff_x20 + 0x180);
                    *(undefined4 *)(lVar2 + 100) = uVar1;
                    if (lVar3 != 0) {
                      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
                      lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
                      if (lVar2 != 0) {
                        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
                        if (*(long *)(unaff_x20 + 0xc0) != 0) {
                          lVar2 = *(long *)(lVar2 + 0x38);
                          uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
                          if (lVar2 != 0) {
                            if (*(uint *)(lVar2 + 0x18) < 0x13) goto LAB_072a2494;
                            lVar3 = *(long *)(unaff_x20 + 0x180);
                            *(undefined4 *)(lVar2 + 0x68) = uVar1;
                            if (lVar3 != 0) {
                              if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
                              lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
                              if (lVar2 != 0) {
                                if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2494;
                                if (*(long *)(unaff_x20 + 0xc0) != 0) {
                                  lVar2 = *(long *)(lVar2 + 0x38);
                                  uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21);
                                  if (lVar2 != 0) {
                                    if (*(uint *)(lVar2 + 0x18) < 0x14) goto LAB_072a2494;
                                    lVar3 = *(long *)(unaff_x20 + 0x180);
                                    *(undefined4 *)(lVar2 + 0x6c) = uVar1;
                                    if (lVar3 != 0) {
                                      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a2494;
                                      lVar2 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
                                      if (lVar2 != 0) {
                                        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0)
                                        goto LAB_072a2494;
                                        if (*(long *)(unaff_x20 + 0xc0) != 0) {
                                          lVar2 = *(long *)(lVar2 + 0x38);
                                          uVar1 = FUN_07297b50(*(long *)(unaff_x20 + 0xc0),unaff_w21
                                                              );
                                          if (lVar2 != 0) {
                                            if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined4 *)(lVar2 + 0x70) = uVar1;
                                              return unaff_w22 + unaff_w21 * 5;
                                            }
                                            goto LAB_072a2494;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_072a2490:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


