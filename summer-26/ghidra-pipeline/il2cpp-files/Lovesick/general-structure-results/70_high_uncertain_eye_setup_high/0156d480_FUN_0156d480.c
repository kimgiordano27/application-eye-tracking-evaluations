/*
FUNCTION_NAME: FUN_0156d480
ENTRY_POINT: 0156d480
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0156d480(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_03777c42 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(Method_Autohand_HandTriggerAreaEvents_<OnEnable>b__19_0__);
    thunk_FUN_00d48444(PTR_DAT_033f44b0);
    DAT_03777c42 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x18) == 0) {
      return 0;
    }
    if (param_3 != 0) {
      if (*(long *)(param_3 + 0x18) == 0) {
        return 0;
      }
      uVar7 = *(undefined8 *)PTR_DAT_033f44b0;
      uVar8 = *(undefined8 *)Method_Autohand_HandTriggerAreaEvents_<OnEnable>b__19_0__;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
      if (lVar3 != 0) {
        if ((param_6 & 1) == 0) {
          uVar7 = uVar8;
        }
        FUN_0268afbc(lVar3,uVar7,0);
        lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                          (lVar3,0);
        uVar7 = FUN_0268fd10(param_1,0);
        puVar2 = OVRPlugin_OVRP_1_93_0_TypeInfo;
        puVar1 = UnityEngine_Pose___TypeInfo;
        if (lVar4 != 0) {
          FUN_026a0040(lVar4,uVar7,0,0);
          lVar4 = FUN_010e5800(lVar3,*(undefined8 *)puVar2);
          lVar5 = FUN_010e5800(lVar3,*(undefined8 *)puVar1);
          if ((lVar4 != 0) && (lVar6 = FUN_026774f4(lVar4,0), lVar6 != 0)) {
            FUN_0266c424(lVar6,param_2,0);
            lVar6 = FUN_026774f4(lVar4,0);
            if (lVar6 != 0) {
              FUN_0266e648(lVar6,param_3,0,0,0);
              lVar6 = FUN_026774f4(lVar4,0);
              if (lVar6 != 0) {
                FUN_0266c740(lVar6,param_5,0);
                lVar4 = FUN_026774f4(lVar4,0);
                if ((lVar4 != 0) && (FUN_0266cfd4(lVar4,0,param_4,0), lVar5 != 0)) {
                  FUN_02668990(lVar5,*(undefined8 *)(param_1 + 0x28),0);
                  return lVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


