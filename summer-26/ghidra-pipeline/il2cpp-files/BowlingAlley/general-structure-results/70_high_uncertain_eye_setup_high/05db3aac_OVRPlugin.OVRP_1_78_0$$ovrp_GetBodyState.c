/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyState
ENTRY_POINT: 05db3aac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetBodyState(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint unaff_w20;
  long unaff_x21;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0xcc0));
  thunk_FUN_032e1da0(PTR_DAT_072b1f78);
  thunk_FUN_032e1da0(PTR_DAT_072b1d18);
  thunk_FUN_032e1da0(PTR_DAT_072b1d30);
  thunk_FUN_032e1da0(PTR_DAT_072b1f80);
  thunk_FUN_032e1da0(PTR_DAT_072b1d50);
  *(undefined1 *)(unaff_x21 + 0x8fc) = 1;
  if (unaff_w20 < 0x4e83f2de) {
    if (unaff_w20 < 0x267db4f5) {
      if (unaff_w20 < 0x1569feb6) {
        if (unaff_w20 < 0x102fa3df) {
          if (unaff_w20 == 0x3e0d149) goto LAB_05db40f0;
          if (unaff_w20 == 0xb6d8d76) {
            uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f40);
            FUN_05db7158();
            return uVar1;
          }
          uVar2 = 0x102fa3de;
        }
        else {
          if (0x11741f03 < unaff_w20) {
            if (unaff_w20 == 0x121c317c) {
              uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d30);
              FUN_05db389c();
              return uVar1;
            }
            if (unaff_w20 != 0x1569feb5) {
              return 0;
            }
LAB_05db3f98:
            uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ca8);
            FUN_05db326c();
            return uVar1;
          }
          if (unaff_w20 == 0x112aca17) goto LAB_05db4184;
          uVar2 = 0x11741f03;
        }
        goto LAB_05db4010;
      }
      if (unaff_w20 < 0x19c2b32c) {
        if ((unaff_w20 == 0x185251ce) || (unaff_w20 == 0x186dc4dd)) goto LAB_05db40f0;
        uVar2 = 0x19c2b32b;
        goto LAB_05db3dc8;
      }
      if (unaff_w20 < 0x1c577d88) {
        if (unaff_w20 == 0x1ad31b4f) goto LAB_05db3f58;
        uVar2 = 0x1c577d87;
      }
      else {
        if (unaff_w20 == 0x1ed726c7) goto LAB_05db4018;
        uVar2 = 0x267db4f4;
      }
    }
    else {
      if (unaff_w20 < 0x34557eb3) {
        if (unaff_w20 < 0x30ff006f) {
          if ((unaff_w20 == 0x27670f58) || (unaff_w20 == 0x2dafcdd5)) goto LAB_05db40f0;
          uVar2 = 0x30ff006e;
        }
        else {
          if (unaff_w20 < 0x329206d2) {
            if (unaff_w20 == 0x3215666d) goto LAB_05db40f0;
            uVar2 = 0x329206d1;
            goto FUN_05db40e8;
          }
          if (unaff_w20 == 0x3302f770) goto LAB_05db40f0;
          uVar2 = 0x34557eb2;
        }
LAB_05db4010:
        if (unaff_w20 != uVar2) {
          return 0;
        }
LAB_05db4018:
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d18);
        FUN_05db36e4();
        return uVar1;
      }
      if (unaff_w20 < 0x3e9b1f62) {
        if (unaff_w20 < 0x35b5c4e4) {
          if (unaff_w20 == 0x3497d7f6) goto LAB_05db40f0;
          uVar2 = 0x35b5c4e3;
LAB_05db3f50:
          if (unaff_w20 != uVar2) {
            return 0;
          }
LAB_05db3f58:
          uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f70);
          FUN_05db7e50();
          return uVar1;
        }
        if (unaff_w20 == 0x36e84f8c) goto LAB_05db4018;
        uVar2 = 0x3e9b1f61;
      }
      else {
        if (unaff_w20 < 0x4cb13a6f) {
          if (unaff_w20 == 0x44e40dca) {
            uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f50);
            FUN_05db7478();
            return uVar1;
          }
          uVar2 = 0x4cb13a6e;
LAB_05db4128:
          if (unaff_w20 != uVar2) {
            return 0;
          }
          uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f30);
          FUN_05db6c98();
          return uVar1;
        }
        if (unaff_w20 == 0x4e81dc59) goto LAB_05db4018;
        uVar2 = 0x4e83f2dd;
      }
    }
  }
  else if (unaff_w20 < 0x63dffc8f) {
    if (unaff_w20 < 0x5793f457) {
      if (unaff_w20 < 0x520f744d) {
        if (unaff_w20 != 0x4f32e10d) {
          if (unaff_w20 != 0x501ac7be) {
            if (unaff_w20 != 0x520f744c) {
              return 0;
            }
            uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f28);
            FUN_05db6830();
            return uVar1;
          }
LAB_05db3ee0:
          uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f48);
          FUN_05db7280();
          return uVar1;
        }
        goto LAB_05db40f0;
      }
      if (0x5662a011 < unaff_w20) {
        if (unaff_w20 != 0x577ba8a0) {
          if (unaff_w20 != 0x5793f456) {
            return 0;
          }
          uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f38);
          FUN_05db7030();
          return uVar1;
        }
LAB_05db4184:
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f68);
        FUN_05db7a60();
        return uVar1;
      }
      if (unaff_w20 == 0x5585ff0a) {
LAB_05db4164:
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f60);
        FUN_05db7938();
        return uVar1;
      }
      uVar2 = 0x5662a011;
LAB_05db3dc8:
      if (unaff_w20 != uVar2) {
        return 0;
      }
LAB_05db40b0:
      uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f80);
      FUN_05db8c38();
      return uVar1;
    }
    if (unaff_w20 < 0x5c95a4f4) {
      if (unaff_w20 < 0x5842d211) {
        if (unaff_w20 == 0x58129c8e) goto LAB_05db40f0;
        uVar2 = 0x5842d210;
        goto LAB_05db4010;
      }
      if (unaff_w20 == 0x58cbff2a) {
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cc0);
        FUN_05db3374();
        return uVar1;
      }
      uVar2 = 0x5c95a4f3;
    }
    else if (unaff_w20 < 0x5ed0ea33) {
      if (unaff_w20 == 0x5e8953bd) {
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f78);
        FUN_05db7c58();
        return uVar1;
      }
      uVar2 = 0x5ed0ea32;
    }
    else {
      if (unaff_w20 == 0x60788c8b) goto LAB_05db40b0;
      uVar2 = 0x63dffc8e;
    }
  }
  else {
    if (0x6c6e33e3 < unaff_w20) {
      if (0x7287c183 < unaff_w20) {
        if (unaff_w20 < 0x7b2f5cdd) {
          if (unaff_w20 != 0x76a5a7c4) {
            if (unaff_w20 != 0x7b2f5cdc) {
              return 0;
            }
            goto LAB_05db3ee0;
          }
        }
        else if (unaff_w20 != 0x7bcfd98e) {
          uVar2 = 0x7f835863;
          goto LAB_05db4128;
        }
        goto LAB_05db4018;
      }
      if (0x6fb63223 < unaff_w20) {
        if (unaff_w20 == 0x71010917) goto LAB_05db40f0;
        uVar2 = 0x7287c183;
        goto LAB_05db3f50;
      }
      if (unaff_w20 == 0x6ed60a35) {
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f58);
        FUN_05db7740();
        return uVar1;
      }
      uVar2 = 0x6fb63223;
      goto LAB_05db4010;
    }
    if (unaff_w20 < 0x67e19d38) {
      if (unaff_w20 == 0x646d855f) goto LAB_05db3f98;
      if (unaff_w20 != 0x6570b2bd) {
        if (unaff_w20 != 0x67e19d37) {
          return 0;
        }
        goto LAB_05db4164;
      }
      goto LAB_05db40f0;
    }
    if (0x6a94ad8e < unaff_w20) {
      if (unaff_w20 != 0x6b36a54f) {
        if (unaff_w20 != 0x6c6e33e3) {
          return 0;
        }
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f20);
        FUN_05db45c4();
        return uVar1;
      }
      goto LAB_05db4018;
    }
    if (unaff_w20 == 0x68027c73) goto LAB_05db3f58;
    uVar2 = 0x6a94ad8e;
  }
FUN_05db40e8:
  if (unaff_w20 != uVar2) {
    return 0;
  }
LAB_05db40f0:
  uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d50);
  FUN_05db0920();
  return uVar1;
}


