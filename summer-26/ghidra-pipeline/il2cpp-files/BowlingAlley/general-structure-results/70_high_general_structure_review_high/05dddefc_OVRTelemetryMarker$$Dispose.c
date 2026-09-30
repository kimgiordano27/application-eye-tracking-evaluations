/*
FUNCTION_NAME: OVRTelemetryMarker$$Dispose
ENTRY_POINT: 05dddefc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OVRTelemetryMarker__Dispose(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long lVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  lVar2 = thunk_FUN_032a56a0(*unaff_x23);
  FUN_059660a0(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = DAT_0139ef98;
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
    *(undefined8 *)(lVar2 + 0x10) = DAT_0139eb00;
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
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
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
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
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
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


