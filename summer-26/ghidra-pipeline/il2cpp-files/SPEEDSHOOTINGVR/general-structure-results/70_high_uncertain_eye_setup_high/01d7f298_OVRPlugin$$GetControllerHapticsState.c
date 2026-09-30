/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsState
ENTRY_POINT: 01d7f298
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetControllerHapticsState
          (long *param_1,uint param_2,ulong param_3,uint param_4,uint param_5,undefined8 param_6,
          uint param_7)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((DAT_0247d7d2 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234ebc0);
    FUN_00fdc2e4(PTR_DAT_0234bce0);
    DAT_0247d7d2 = 1;
  }
  if ((param_3 & 1) == 0) {
    uVar6 = param_2 >> 5;
  }
  else {
    uVar6 = param_2 >> 4;
  }
  if ((uVar6 & 1) != 0) {
    if (param_1 == (long *)0x0) {
LAB_01d7f46c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    uVar6 = (uint)(lVar3 != lVar4);
    if ((uVar6 & param_2 >> 1) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
      if ((iVar2 != 0x20) &&
         (iVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0)),
         iVar2 != 0x80)) {
        if ((param_5 & 1) == 0) {
          if ((param_2 >> 2 & 1) == 0) {
            return 0;
          }
        }
        else {
          if ((param_2 >> 3 & 1) == 0) {
            return 0;
          }
          if ((uVar6 & (param_2 >> 6 ^ 0xffffffff)) != 0) {
            return 0;
          }
        }
      }
      if ((param_7 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0234bce0 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar5 = FUN_01d7f224(param_1,param_6,param_2 & 1);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
      if (((((param_2 >> 2 & 1) == 0) || ((param_2 >> 5 & 1) == 0)) ||
          ((param_4 & (param_2 >> 1 ^ 0xffffffff) & (uint)(lVar3 != lVar4)) == 0)) ||
         ((param_5 & 1) != 0)) {
        return 1;
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_0234ebc0 + 0x130);
      if (*(byte *)(*param_1 + 0x130) < bVar1) {
        uVar5 = FUN_01cc86b0(0,0,0);
        if ((uVar5 & 1) == 0) goto LAB_01d7f46c;
      }
      else {
        if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_0234ebc0) {
          param_1 = (long *)0x0;
        }
        uVar5 = FUN_01cc86b0(param_1,0,0);
        if ((uVar5 & 1) == 0) {
          if (param_1 == (long *)0x0) goto LAB_01d7f46c;
          uVar5 = FUN_01cc8530(param_1,0);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
          uVar5 = FUN_01cc844c(param_1,0);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


