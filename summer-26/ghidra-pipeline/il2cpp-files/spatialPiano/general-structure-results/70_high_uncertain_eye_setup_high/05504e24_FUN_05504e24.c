/*
FUNCTION_NAME: FUN_05504e24
ENTRY_POINT: 05504e24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05504e24(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_24;
  
  if ((DAT_06bbf561 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ca3c0);
    DAT_06bbf561 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*param_2 != *(long *)PTR_DAT_067ca3c0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    uVar2 = FUN_05016eec(param_2[5],0,0);
    if ((uVar2 & 1) != 0) {
      FUN_055050fc(param_1,param_2);
      return;
    }
    uVar1 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (0x2c < (int)uVar1) {
      if (0x36 < uVar1) {
        if (uVar1 == 0x52) {
LAB_05504f90:
          FUN_05504dcc(param_1,param_2);
          return;
        }
        if (0xfffffffd < uVar1 - 0x55) {
          FUN_0550522c(param_1,param_2);
          return;
        }
LAB_0550507c:
        local_24 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
        uVar3 = thunk_FUN_02f6ef30(OVR_OpenVR_IVRCompositor__ClearSkyboxOverride_TypeInfo);
        uVar3 = thunk_FUN_02f44ec4(uVar3,&local_24);
        uVar4 = thunk_FUN_02f6ef30(OVRPlugin_OVRP_1_0_0_TypeInfo);
        uVar3 = FUN_054b64ac(uVar4,uVar3,0);
        thunk_FUN_02f6ef30(PTR_DAT_067ce3c8);
        uVar4 = thunk_FUN_02f45270();
        FUN_050e6000(uVar4,uVar3,0);
        uVar3 = thunk_FUN_02f6ef30(OVRPlugin_OVRP_1_111_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar4,uVar3);
      }
      if (uVar1 == 0x31) {
        FUN_05500c08(param_1,param_2[4]);
        lVar5 = *(long *)(param_1 + 0x10);
        uVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if (lVar5 == 0) goto LAB_05505070;
        uVar3 = FUN_054eed90(uVar3,0);
      }
      else {
        if (uVar1 != 0x36) goto LAB_0550507c;
        FUN_05500c08(param_1,param_2[4]);
        lVar5 = *(long *)(param_1 + 0x10);
        (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if (lVar5 == 0) goto LAB_05505070;
        uVar3 = FUN_054f5c3c();
      }
LAB_05505058:
      FUN_054f6d80(lVar5,uVar3);
      return;
    }
    if ((int)uVar1 < 0x1e) {
      if (uVar1 == 4) {
        FUN_05500c08(param_1,param_2[4]);
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_054fb2b4();
          return;
        }
      }
      else {
        if (uVar1 != 0x1c) {
          if (uVar1 == 0x1d) {
            FUN_05500c08(param_1,param_2[4]);
            return;
          }
          goto LAB_0550507c;
        }
        FUN_05500c08(param_1,param_2[4]);
        lVar5 = *(long *)(param_1 + 0x10);
        uVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if (lVar5 != 0) {
          uVar3 = FUN_05516074(uVar3,0);
          goto LAB_05505058;
        }
      }
    }
    else {
      if (uVar1 != 0x1e) {
        if (uVar1 == 0x22) goto LAB_05504f90;
        if (uVar1 == 0x2c) {
          FUN_055051e0(param_1,param_2);
          return;
        }
        goto LAB_0550507c;
      }
      FUN_05500c08(param_1,param_2[4]);
      lVar5 = *(long *)(param_1 + 0x10);
      uVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      if (lVar5 != 0) {
        uVar3 = FUN_05516624(uVar3,0);
        goto LAB_05505058;
      }
    }
  }
LAB_05505070:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


