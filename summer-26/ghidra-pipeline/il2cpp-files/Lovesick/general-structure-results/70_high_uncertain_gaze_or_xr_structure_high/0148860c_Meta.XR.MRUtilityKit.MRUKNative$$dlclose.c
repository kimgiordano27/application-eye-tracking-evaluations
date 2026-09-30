/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNative$$dlclose
ENTRY_POINT: 0148860c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


int Meta_XR_MRUtilityKit_MRUKNative__dlclose(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x25;
  
  FUN_0179519c();
  if (unaff_w23 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0xd8);
    if (lVar2 == 0) goto LAB_01488c50;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
    lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_01488c50;
    if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_01488c54;
    if (*(int *)(lVar2 + 0x2c) != 0) {
      return unaff_w22;
    }
  }
  if (unaff_w21 < 1) {
    lVar2 = *(long *)(unaff_x19 + 0x180);
    if (lVar2 != 0) {
      if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_01488c50;
        if (3 < *(uint *)(lVar2 + 0x18)) {
          FUN_0179519c(*(undefined8 *)(lVar2 + 0x38),0x10,5,0);
          return unaff_w22;
        }
      }
LAB_01488c54:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x180);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_01488c54;
        if (*(long *)(unaff_x19 + 0xc0) != 0) {
          lVar2 = *(long *)(lVar2 + 0x38);
          uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) < 0x11) goto LAB_01488c54;
            *(undefined4 *)(lVar2 + 0x60) = uVar1;
            lVar2 = *(long *)(unaff_x19 + 0x180);
            if (lVar2 != 0) {
              if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
              lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
              if (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_01488c54;
                if (*(long *)(unaff_x19 + 0xc0) != 0) {
                  lVar2 = *(long *)(lVar2 + 0x38);
                  uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
                  if (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x18) < 0x12) goto LAB_01488c54;
                    *(undefined4 *)(lVar2 + 100) = uVar1;
                    lVar2 = *(long *)(unaff_x19 + 0x180);
                    if (lVar2 != 0) {
                      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
                      lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
                      if (lVar2 != 0) {
                        if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_01488c54;
                        if (*(long *)(unaff_x19 + 0xc0) != 0) {
                          lVar2 = *(long *)(lVar2 + 0x38);
                          uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
                          if (lVar2 != 0) {
                            if (*(uint *)(lVar2 + 0x18) < 0x13) goto LAB_01488c54;
                            *(undefined4 *)(lVar2 + 0x68) = uVar1;
                            lVar2 = *(long *)(unaff_x19 + 0x180);
                            if (lVar2 != 0) {
                              if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
                              lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
                              if (lVar2 != 0) {
                                if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_01488c54;
                                if (*(long *)(unaff_x19 + 0xc0) != 0) {
                                  lVar2 = *(long *)(lVar2 + 0x38);
                                  uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
                                  if (lVar2 != 0) {
                                    if (*(uint *)(lVar2 + 0x18) < 0x14) goto LAB_01488c54;
                                    *(undefined4 *)(lVar2 + 0x6c) = uVar1;
                                    lVar2 = *(long *)(unaff_x19 + 0x180);
                                    if (lVar2 != 0) {
                                      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
                                      lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
                                      if (lVar2 != 0) {
                                        if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_01488c54;
                                        if (*(long *)(unaff_x19 + 0xc0) != 0) {
                                          lVar2 = *(long *)(lVar2 + 0x38);
                                          uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21
                                                              );
                                          if (lVar2 != 0) {
                                            if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined4 *)(lVar2 + 0x70) = uVar1;
                                              return unaff_w22 + unaff_w21 * 5;
                                            }
                                            goto LAB_01488c54;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01488c50:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


