/*
FUNCTION_NAME: FUN_0515c978
ENTRY_POINT: 0515c978
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_0515c978(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 local_58;
  
  if ((DAT_06b79e1b & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067822b8);
    FUN_02d6084c(PTR_DAT_067822c0);
    FUN_02d6084c(PTR_DAT_067822c8);
    FUN_02d6084c(PTR_DAT_067635c0);
    FUN_02d6084c(PTR_DAT_06782298);
    FUN_02d6084c(PTR_DAT_067822a0);
    DAT_06b79e1b = 1;
  }
  local_58 = 0;
  if (param_2 == (long *)0x0) {
OVRPlugin_BodyJointLocation__get_OrientationTracked:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar9 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  puVar6 = PTR_DAT_067822c8;
  puVar5 = PTR_DAT_067822b8;
  puVar4 = PTR_DAT_067822a0;
  puVar3 = PTR_DAT_06782298;
  puVar2 = PTR_DAT_067635c0;
  puVar1 = PTR_DAT_0675e258;
  puVar12 = PTR_DAT_067822d0;
  if ((uVar9 & 1) != 0) {
    plVar14 = (long *)0x0;
    do {
      iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if (iVar7 == 4) {
        plVar10 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250))
        ;
        if (plVar10 == (long *)0x0) goto OVRPlugin_BodyJointLocation__get_OrientationTracked;
        uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        uVar9 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
        puVar12 = PTR_DAT_067822d0;
        if ((uVar9 & 1) == 0) break;
        uVar9 = FUN_04e8bd88(uVar11,*(undefined8 *)puVar3,5,0);
        if ((uVar9 & 1) == 0) {
          uVar9 = FUN_04e8bd88(uVar11,*(undefined8 *)puVar4,5,0);
          if ((uVar9 & 1) == 0) {
            FUN_05098d24(param_2,0);
          }
          else {
            if (param_3 == 0) goto OVRPlugin_BodyJointLocation__get_OrientationTracked;
            uVar8 = FUN_03468d5c(param_3,param_2,*(undefined8 *)puVar5);
            FUN_03dce408(&local_58,uVar8,*(undefined8 *)puVar6);
          }
        }
        else {
          plVar14 = (long *)(**(code **)(*param_2 + 0x248))
                                      (param_2,*(undefined8 *)(*param_2 + 0x250));
          if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)(puVar1 + 0x90))) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar14);
          }
        }
      }
      else if (iVar7 == 0xd) {
        puVar12 = PTR_DAT_067822e0;
        if (plVar14 != (long *)0x0) {
          uVar8 = local_58._4_4_;
          uVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
          FUN_056f476c(uVar11,plVar14,uVar8,0);
          return uVar11;
        }
        break;
      }
      uVar9 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      puVar12 = PTR_DAT_067822d0;
    } while ((uVar9 & 1) != 0);
  }
  uVar11 = thunk_FUN_02dc61f4(puVar12);
  uVar11 = FUN_050924a8(param_2,uVar11,0);
  uVar13 = thunk_FUN_02dc61f4(PTR_DAT_067822d8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar11,uVar13);
}


