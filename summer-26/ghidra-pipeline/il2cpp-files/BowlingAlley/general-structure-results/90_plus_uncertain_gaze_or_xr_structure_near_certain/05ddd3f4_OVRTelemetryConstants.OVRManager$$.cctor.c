/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 05ddd3f4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetryConstants_OVRManager___cctor(long param_1)

{
  uint uVar1;
  bool in_CY;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_x10;
  long *unaff_x19;
  long lVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  if (in_CY) {
    FUN_041e2c78();
  }
  else {
    *(int *)(unaff_x21 + 0x18) = (int)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x22;
    thunk_FUN_0333a630();
  }
  lVar2 = thunk_FUN_032a56a0(*unaff_x23);
  FUN_059660a0(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = DAT_0139f5d0;
  lVar4 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = lVar2;
      thunk_FUN_0333a630(plVar3,lVar2);
    }
    else {
      FUN_041e2c78();
    }
    lVar2 = thunk_FUN_032a56a0(*unaff_x23);
    FUN_059660a0(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = DAT_0139d910;
    lVar4 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *plVar3 = lVar2;
        thunk_FUN_0333a630(plVar3,lVar2);
      }
      else {
        FUN_041e2c78();
      }
      lVar2 = thunk_FUN_032a56a0(*unaff_x23);
      FUN_059660a0(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = DAT_0139dcd0;
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *plVar3 = lVar2;
          thunk_FUN_0333a630(plVar3,lVar2);
        }
        else {
          FUN_041e2c78();
        }
        lVar2 = thunk_FUN_032a56a0(*unaff_x23);
        FUN_059660a0(lVar2,0);
        *(undefined8 *)(lVar2 + 0x10) = DAT_0139f0b0;
        lVar4 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            *plVar3 = lVar2;
            thunk_FUN_0333a630(plVar3,lVar2);
          }
          else {
            FUN_041e2c78();
          }
          if (unaff_x20 != 0) {
            *(long *)(unaff_x20 + 0x18) = unaff_x21;
            thunk_FUN_0333a630((long *)(unaff_x20 + 0x18));
            if (*unaff_x19 != 0) {
              lVar7 = *(long *)(*unaff_x19 + 0x30);
              lVar2 = thunk_FUN_032a56a0(*unaff_x26);
              System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(lVar2,*unaff_x25);
              lVar4 = thunk_FUN_032a56a0(*unaff_x23);
              FUN_059660a0(lVar4,0);
              *(undefined8 *)(lVar4 + 0x10) = DAT_0139d908;
              if (lVar2 != 0) {
                lVar5 = *(long *)(lVar2 + 0x10);
                lVar6 = *unaff_x24;
                *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                if (lVar5 != 0) {
                  uVar1 = *(uint *)(lVar2 + 0x18);
                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                    plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar3 = lVar4;
                    thunk_FUN_0333a630(plVar3,lVar4);
                  }
                  else {
                    FUN_041e2c78(lVar2,lVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar4 = thunk_FUN_032a56a0(*unaff_x23);
                  FUN_059660a0(lVar4,0);
                  *(undefined8 *)(lVar4 + 0x10) = DAT_0139e5e0;
                  lVar5 = *(long *)(lVar2 + 0x10);
                  lVar6 = *unaff_x24;
                  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                  if (lVar5 != 0) {
                    uVar1 = *(uint *)(lVar2 + 0x18);
                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                      plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar3 = lVar4;
                      thunk_FUN_0333a630(plVar3,lVar4);
                    }
                    else {
                      FUN_041e2c78(lVar2,lVar4,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    lVar4 = thunk_FUN_032a56a0(*unaff_x23);
                    FUN_059660a0(lVar4,0);
                    *(undefined8 *)(lVar4 + 0x10) = DAT_0139e058;
                    lVar5 = *(long *)(lVar2 + 0x10);
                    lVar6 = *unaff_x24;
                    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                    if (lVar5 != 0) {
                      uVar1 = *(uint *)(lVar2 + 0x18);
                      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                        plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar3 = lVar4;
                        thunk_FUN_0333a630(plVar3,lVar4);
                      }
                      else {
                        FUN_041e2c78(lVar2,lVar4,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar4 = thunk_FUN_032a56a0(*unaff_x23);
                      FUN_059660a0(lVar4,0);
                      *(undefined8 *)(lVar4 + 0x10) = DAT_0139ee40;
                      lVar5 = *(long *)(lVar2 + 0x10);
                      lVar6 = *unaff_x24;
                      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                      if (lVar5 != 0) {
                        uVar1 = *(uint *)(lVar2 + 0x18);
                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                          plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar3 = lVar4;
                          thunk_FUN_0333a630(plVar3,lVar4);
                        }
                        else {
                          FUN_041e2c78(lVar2,lVar4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar4 = thunk_FUN_032a56a0(*unaff_x23);
                        FUN_059660a0(lVar4,0);
                        *(undefined8 *)(lVar4 + 0x10) = DAT_0139e3f0;
                        lVar5 = *(long *)(lVar2 + 0x10);
                        lVar6 = *unaff_x24;
                        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                        if (lVar5 != 0) {
                          uVar1 = *(uint *)(lVar2 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                            plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar3 = lVar4;
                            thunk_FUN_0333a630(plVar3,lVar4);
                          }
                          else {
                            FUN_041e2c78(lVar2,lVar4,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar4 = thunk_FUN_032a56a0(*unaff_x23);
                          FUN_059660a0(lVar4,0);
                          *(undefined8 *)(lVar4 + 0x10) = DAT_0139e820;
                          lVar5 = *(long *)(lVar2 + 0x10);
                          lVar6 = *unaff_x24;
                          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                          if (lVar5 != 0) {
                            uVar1 = *(uint *)(lVar2 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                              plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar3 = lVar4;
                              thunk_FUN_0333a630(plVar3,lVar4);
                            }
                            else {
                              FUN_041e2c78(lVar2,lVar4,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            }
                            if (lVar7 != 0) {
                              plVar3 = (long *)(lVar7 + 0x18);
                              *plVar3 = lVar2;
                              thunk_FUN_0333a630(plVar3,lVar2);
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


