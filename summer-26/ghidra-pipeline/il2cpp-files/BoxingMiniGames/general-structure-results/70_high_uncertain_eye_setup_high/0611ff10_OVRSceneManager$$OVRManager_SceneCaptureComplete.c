/*
FUNCTION_NAME: OVRSceneManager$$OVRManager_SceneCaptureComplete
ENTRY_POINT: 0611ff10
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRSceneManager__OVRManager_SceneCaptureComplete(void)

{
  long lVar1;
  undefined8 uVar2;
  uint in_w8;
  uint uVar3;
  uint unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar2 = in_stack_00000018;
  if ((in_w8 & 0xffff | 0x2f420000) < unaff_w19) {
    if (unaff_w19 < 0x387e7f37) {
      if (unaff_w19 < 0x3271abdb) {
        if (0x314c84b8 < unaff_w19) {
          if (unaff_w19 == 0x316509dc) {
            lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25030);
            FUN_06121a10(lVar1,uVar2);
            return lVar1;
          }
          uVar3 = 0x3271abda;
          goto LAB_06120cec;
        }
        if (unaff_w19 == 0x2fdd0ccd) {
          lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25018);
          FUN_06121858(lVar1,uVar2);
          return lVar1;
        }
        uVar3 = 0x314c84b8;
      }
      else {
        if (0x35728882 < unaff_w19) {
          if (unaff_w19 == 0x35f6769b) {
            lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a250b8);
            FUN_06121e30(lVar1,uVar2);
            return lVar1;
          }
          if (unaff_w19 != 0x37f21084) {
            if (unaff_w19 == 0x387e7f36) {
              lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a250e0);
              FUN_06122098(lVar1,uVar2);
              return lVar1;
            }
            goto LAB_06120fb8;
          }
          goto LAB_06120cf4;
        }
        if (unaff_w19 == 0x35692f2b) {
          lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25100);
          FUN_06122778(lVar1,uVar2);
          return lVar1;
        }
        uVar3 = 0x35728882;
      }
    }
    else {
      if (0x3c9e46cd < unaff_w19) {
        if (0x3e20cb57 < unaff_w19) {
          if (unaff_w19 == 0x3f9b0d0d) {
            lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25118);
            FUN_06122250(lVar1,uVar2);
            return lVar1;
          }
          if (unaff_w19 == 0x41cfda50) {
            lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a24ff8);
            FUN_061216a0(lVar1,uVar2);
            return lVar1;
          }
          if (unaff_w19 == 0x420ac1cf) {
            lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25000);
            FUN_06121750(lVar1,uVar2);
            return lVar1;
          }
          goto LAB_06120fb8;
        }
        if (unaff_w19 == 0x3cdbe826) goto LAB_06120f94;
        uVar3 = 0x3e20cb57;
LAB_06120cec:
        if (unaff_w19 == uVar3) {
LAB_06120cf4:
          lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25148);
          FUN_061224b8(lVar1,uVar2);
          return lVar1;
        }
        goto LAB_06120fb8;
      }
      if (unaff_w19 < 0x3a0f841a) {
        if (unaff_w19 == 0x39607bfc) {
          lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a250b0);
          FUN_06121e88(lVar1,uVar2);
          return lVar1;
        }
        if (unaff_w19 == 0x3a0f8419) {
          lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25110);
          FUN_061222a8(lVar1,uVar2);
          return lVar1;
        }
        goto LAB_06120fb8;
      }
      if (unaff_w19 == 0x3aaf591d) goto LAB_06120cf4;
      if (unaff_w19 == 0x3c147509) goto LAB_06120f94;
      uVar3 = 0x3c9e46cd;
    }
  }
  else if (unaff_w19 < 0x24472f6d) {
    if (unaff_w19 < 0x2247596f) {
      if (0x21248069 < unaff_w19) {
        if (unaff_w19 == 0x21cbe0c0) {
          lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25158);
          FUN_061225c0(lVar1,uVar2);
          return lVar1;
        }
        if (unaff_w19 == 0x2247596e) {
          lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a250c8);
          FUN_06121f90(lVar1,uVar2);
          return lVar1;
        }
        goto LAB_06120fb8;
      }
      if (unaff_w19 == 0x1fbb72d9) goto LAB_06120f94;
      uVar3 = 0x21248069;
      goto LAB_06120998;
    }
    if (0x22933297 < unaff_w19) {
      if (unaff_w19 == 0x2309f399) {
        lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25160);
        FUN_06122670(lVar1,uVar2);
        return lVar1;
      }
      if (unaff_w19 == 0x234bc3f1) {
LAB_0612106c:
        lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25168);
        FUN_06122618(lVar1,uVar2);
        return lVar1;
      }
      uVar3 = 0x24472f6c;
      goto LAB_06120cec;
    }
    if (unaff_w19 == 0x22810483) {
      lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25170);
      FUN_061226c8(lVar1,uVar2);
      return lVar1;
    }
    uVar3 = 0x22933297;
  }
  else {
    if (unaff_w19 < 0x296116e6) {
      if (unaff_w19 < 0x267cf744) {
        if (unaff_w19 != 0x264885ca) {
          if (unaff_w19 == 0x267cf743) goto LAB_0612106c;
          goto LAB_06120fb8;
        }
        goto LAB_06120f94;
      }
      if (unaff_w19 == 0x2955af24) goto LAB_06120f94;
      uVar3 = 0x296116e5;
LAB_06120998:
      if (unaff_w19 == uVar3) {
        lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25040);
        FUN_06121960(lVar1,uVar2);
        return lVar1;
      }
      goto LAB_06120fb8;
    }
    if (0x2a8f1055 < unaff_w19) {
      if (unaff_w19 == 0x2d008992) {
        lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25010);
        FUN_06121800(lVar1,uVar2);
        return lVar1;
      }
      if (unaff_w19 == 0x2e4dd8d6) goto LAB_06120f94;
      if (unaff_w19 == 0x2f42e727) {
        lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a24fc0);
        FUN_06121490(lVar1,uVar2);
        return lVar1;
      }
      goto LAB_06120fb8;
    }
    if (unaff_w19 == 0x2a7dd255) {
      lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a24fb8);
      FUN_06121438(lVar1,uVar2);
      return lVar1;
    }
    uVar3 = 0x2a8f1055;
  }
  if (unaff_w19 == uVar3) {
LAB_06120f94:
    lVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a25180);
    FUN_0611f5b4(lVar1,uVar2);
    return lVar1;
  }
LAB_06120fb8:
  lVar1 = FUN_06135a0c(in_stack_00000018,unaff_w19,0);
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_0367fa58(*(undefined8 *)PTR_DAT_07a24fb0,&stack0x0000000c);
    uVar2 = FUN_05c8e390(*(undefined8 *)PTR_DAT_07a25190,uVar2,0);
    if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079f4540);
    }
    FUN_0717994c(uVar2,0);
    lVar1 = 0;
  }
  return lVar1;
}


