/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 05db11a8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_3
*/


long OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar3 = in_stack_00000018;
  if (unaff_w19 < 0x6a85abf) {
    if (unaff_w19 < 0x3e76232) {
      if (unaff_w19 < 0x2d32f61) {
        if (unaff_w19 == 0xe38aef) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d10);
          FUN_05db368c(lVar2,uVar3);
          return lVar2;
        }
        if (unaff_w19 == 0x2d32f60) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bd0);
          FUN_05db2924(lVar2,uVar3);
          return lVar2;
        }
      }
      else {
        if (unaff_w19 == 0x3d3458d) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1b90);
          FUN_05db26bc(lVar2,uVar3);
          return lVar2;
        }
        if (unaff_w19 == 0x3e76231) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ba0);
          OVRPlugin_OVRP_1_72_0__ovrp_EraseSpace(lVar2,uVar3);
          return lVar2;
        }
      }
      goto LAB_05db2120;
    }
    if (unaff_w19 < 0x4e5cf63) {
      if (unaff_w19 != 0x4b34ca3) {
        if (unaff_w19 == 0x4e5cf62) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cd0);
          FUN_05db3424(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_05db2120;
      }
      goto LAB_05db1edc;
    }
    if (unaff_w19 == 0x4f8c0f2) {
LAB_05db22cc:
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bb8);
      FUN_05db2874(lVar2,uVar3);
      return lVar2;
    }
    if (unaff_w19 == 0x5f1e153) {
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bf8);
      FUN_05db2b34(lVar2,uVar3);
      return lVar2;
    }
    uVar1 = 0x6a85abe;
  }
  else {
    if (unaff_w19 < 0x8891a80) {
      if (unaff_w19 < 0x80ad3c8) {
        if (unaff_w19 == 0x73484ca) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ca8);
          FUN_05db326c(lVar2,uVar3);
          return lVar2;
        }
        if (unaff_w19 == 0x80ad3c7) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1be0);
          FUN_05db2a2c(lVar2,uVar3);
          return lVar2;
        }
      }
      else {
        if (unaff_w19 == 0x8260ab1) goto LAB_05db22cc;
        if (unaff_w19 == 0x8891a7f) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c08);
          FUN_05db2c94(lVar2,uVar3);
          return lVar2;
        }
      }
      goto LAB_05db2120;
    }
    if (0x9956693 < unaff_w19) {
      if (unaff_w19 == 0xdcbd364) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d08);
        FUN_05db3634(lVar2,uVar3);
        return lVar2;
      }
      if (unaff_w19 == 0xdf93113) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c30);
        FUN_05db2d9c(lVar2,uVar3);
        return lVar2;
      }
      if (unaff_w19 == 0xeb4040d) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c10);
        FUN_05db2c3c(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_05db2120;
    }
    if (unaff_w19 == 0x904b598) {
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c68);
      FUN_05db2fac(lVar2,uVar3);
      return lVar2;
    }
    uVar1 = 0x9956693;
  }
  if (unaff_w19 == uVar1) {
LAB_05db1edc:
    lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d18);
    FUN_05db36e4(lVar2,uVar3);
    return lVar2;
  }
LAB_05db2120:
  lVar2 = FUN_05db39fc(in_stack_00000018,unaff_w19);
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_072b1b88,&stack0x0000000c);
    uVar3 = FUN_057a25c4(*(undefined8 *)PTR_DAT_072b1d58,uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
    }
    FUN_06bb2a00(uVar3,0);
    lVar2 = 0;
  }
  return lVar2;
}


