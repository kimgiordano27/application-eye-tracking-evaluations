/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 05db12d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
  uint unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar3 = in_stack_00000018;
  if ((in_w8 & 0xffff | 0x675f0000) < unaff_w19) {
    if (unaff_w19 < 0x68f2f200) {
      if (unaff_w19 < 0x6859d642) {
        if (unaff_w19 == 0x679a84b6) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c70);
          FUN_05db3004(lVar2,uVar3);
          return lVar2;
        }
        if (unaff_w19 == 0x6859d641) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c18);
          FUN_05db2be4(lVar2,uVar3);
          return lVar2;
        }
      }
      else {
        if (unaff_w19 == 0x68670a0e) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bc0);
          FUN_05db28cc(lVar2,uVar3);
          return lVar2;
        }
        if (unaff_w19 == 0x68f2f1ff) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c28);
          FUN_05db2d44(lVar2,uVar3);
          return lVar2;
        }
      }
    }
    else if (unaff_w19 < 0x6bcf9e48) {
      if (unaff_w19 == 0x6ad44ef8) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c90);
        FUN_05db30b4(lVar2,uVar3);
        return lVar2;
      }
      if (unaff_w19 == 0x6bcf9e47) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d48);
        FUN_05db3794(lVar2,uVar3);
        return lVar2;
      }
    }
    else {
      if (unaff_w19 == 0x6d1c8906) goto LAB_05db20fc;
      if (unaff_w19 == 0x6d5d7886) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bd8);
        FUN_05db29d4(lVar2,uVar3);
        return lVar2;
      }
      if (unaff_w19 == 0x6da7ba8f) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cd8);
        FUN_05db39a4(lVar2,uVar3);
        return lVar2;
      }
    }
  }
  else {
    if (unaff_w19 < 0x6388a555) {
      if (unaff_w19 < 0x6336cefb) {
        if (unaff_w19 == 0x629101bc) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1b90);
          FUN_05db26bc(lVar2,uVar3);
          return lVar2;
        }
        if (unaff_w19 == 0x6336cefa) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1be8);
          FUN_05db2a84(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_05db2120;
      }
      if (unaff_w19 == 0x63599e2b) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ce8);
        FUN_05db352c(lVar2,uVar3);
        return lVar2;
      }
      uVar1 = 0x6388a554;
    }
    else {
      if (unaff_w19 < 0x66093982) {
        if (unaff_w19 == 0x651b4884) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c30);
          FUN_05db2d9c(lVar2,uVar3);
          return lVar2;
        }
        if (unaff_w19 == 0x66093981) {
          lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d18);
          FUN_05db36e4(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_05db2120;
      }
      if (unaff_w19 == 0x67367f45) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c38);
        FUN_05db2df4(lVar2,uVar3);
        return lVar2;
      }
      if (unaff_w19 == 0x67526a83) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d00);
        FUN_05db35dc(lVar2,uVar3);
        return lVar2;
      }
      uVar1 = 0x675f5c24;
    }
    if (unaff_w19 == uVar1) {
LAB_05db20fc:
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d50);
      FUN_05db0920(lVar2,uVar3);
      return lVar2;
    }
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


