/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EnumerateSpaceSupportedComponents
ENTRY_POINT: 01f9e33c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
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
OVRPlugin_OVRP_1_72_0__ovrp_EnumerateSpaceSupportedComponents
          (ulong param_1,long *param_2,uint param_3,ulong param_4,uint param_5,uint param_6,
          undefined8 param_7)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong unaff_x24;
  uint uVar6;
  long unaff_x26;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027bacc8);
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    *(undefined1 *)(unaff_x26 + 0xf5a) = 1;
  }
  if ((param_4 & 1) == 0) {
    uVar6 = param_3 >> 5;
  }
  else {
    uVar6 = param_3 >> 4;
  }
  if ((uVar6 & 1) != 0) {
    if (param_2 == (long *)0x0) {
LAB_01f9e504:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar3 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    lVar4 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    uVar6 = (uint)(lVar3 != lVar4);
    if ((uVar6 & param_3 >> 1) == 0) {
      iVar2 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
      if ((iVar2 != 0x20) &&
         (iVar2 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0)),
         iVar2 != 0x80)) {
        if ((param_6 & 1) == 0) {
          if ((param_3 >> 2 & 1) == 0) {
            return 0;
          }
        }
        else {
          if ((param_3 >> 3 & 1) == 0) {
            return 0;
          }
          if ((uVar6 & (param_3 >> 6 ^ 0xffffffff)) != 0) {
            return 0;
          }
        }
      }
      if ((unaff_x24 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar5 = FUN_01f9e2bc(param_2,param_7,param_3 & 1);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
      if (((((param_3 >> 2 & 1) == 0) || ((param_3 >> 5 & 1) == 0)) ||
          ((param_5 & (param_3 >> 1 ^ 0xffffffff) & (uint)(lVar3 != lVar4)) == 0)) ||
         ((param_6 & 1) != 0)) {
        return 1;
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
      if (*(byte *)(*param_2 + 0x130) < bVar1) {
        uVar5 = FUN_01ee57ec(0,0,0);
        if ((uVar5 & 1) == 0) goto LAB_01f9e504;
      }
      else {
        if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_027bacc8) {
          param_2 = (long *)0x0;
        }
        uVar5 = FUN_01ee57ec(param_2,0,0);
        if ((uVar5 & 1) == 0) {
          if (param_2 == (long *)0x0) goto LAB_01f9e504;
          uVar5 = FUN_01ee56bc(param_2,0);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
          uVar5 = FUN_01ee55d8(param_2,0);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


