/*
FUNCTION_NAME: FUN_01cf1df0
ENTRY_POINT: 01cf1df0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01cf1df0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_033ea8a0;
  if ((DAT_0377f15c & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_OVRManager_<>c_<FindMainCamera>b__467_0__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_<CreateAlbedoHueTolerance>b__1__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__
                      );
    thunk_FUN_00d48444(StringLiteral_12935);
    DAT_0377f15c = 1;
  }
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,6);
  lVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_01cf2008:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  puVar1 = 
  Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__;
  uVar7 = *(uint *)(plVar3 + 3);
  if (uVar7 != 0) {
    plVar3[4] = lVar4;
    lVar4 = *(long *)puVar1;
    if (lVar4 != 0) {
      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_01cf2008;
      uVar7 = *(uint *)(plVar3 + 3);
    }
    puVar2 = Method_OVRManager_<>c_<FindMainCamera>b__467_0__;
    if (1 < uVar7) {
      plVar3[5] = *(long *)puVar1;
      local_48 = *(undefined8 *)puVar2;
      uStack_40 = 0xffffffffffffffff;
      local_38 = (undefined4)param_1[2];
      lVar4 = FUN_017a7f78(&local_48,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_01cf2008;
      puVar1 = 
      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_<CreateAlbedoHueTolerance>b__1__
      ;
      uVar7 = *(uint *)(plVar3 + 3);
      if (2 < uVar7) {
        plVar3[6] = lVar4;
        lVar4 = *(long *)puVar1;
        if (lVar4 != 0) {
          lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) goto LAB_01cf2008;
          uVar7 = *(uint *)(plVar3 + 3);
        }
        if (3 < uVar7) {
          plVar3[7] = *(long *)puVar1;
          local_60 = *(undefined8 *)puVar2;
          uStack_58 = 0xffffffffffffffff;
          local_50 = *(undefined4 *)((long)param_1 + 0x14);
          lVar4 = FUN_017a7f78(&local_60,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_01cf2008;
          puVar1 = StringLiteral_12935;
          uVar7 = *(uint *)(plVar3 + 3);
          if (4 < uVar7) {
            plVar3[8] = lVar4;
            lVar4 = *(long *)puVar1;
            if (lVar4 != 0) {
              lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar4 == 0) goto LAB_01cf2008;
              uVar7 = *(uint *)(plVar3 + 3);
            }
            if (5 < uVar7) {
              plVar3[9] = *(long *)puVar1;
              FUN_01600844(plVar3,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


