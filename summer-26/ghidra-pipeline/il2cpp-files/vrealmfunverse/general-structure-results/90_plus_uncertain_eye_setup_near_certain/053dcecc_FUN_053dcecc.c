/*
FUNCTION_NAME: FUN_053dcecc
ENTRY_POINT: 053dcecc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_053dcecc(undefined8 param_1)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  if ((DAT_066d0a13 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631c570);
    FUN_02b3c81c(PTR_DAT_0631a6c0);
    FUN_02b3c81c(PTR_DAT_0631c5b8);
    FUN_02b3c81c(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    FUN_02b3c81c(OVRRaycaster_<>c_TypeInfo);
    DAT_066d0a13 = 1;
  }
  plVar6 = (long *)FUN_04c24d1c(0);
  puVar4 = PTR_DAT_0631c5b8;
  puVar3 = PTR_DAT_0631c570;
  puVar2 = PTR_DAT_0631a6c0;
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x248))(plVar6,param_1,*(undefined8 *)(*plVar6 + 0x250));
    uVar7 = FUN_05421144(uVar7,0);
    lVar8 = FUN_02b3c908(*(undefined8 *)puVar3,0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar2);
    }
    uVar5 = FUN_04d02bf8(uVar7,0,6,lVar8,0,0);
    plVar6 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_04c149dc(plVar6,0);
    puVar3 = OVRRaycaster_<>c_TypeInfo;
    puVar2 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
    if (0 < (int)uVar5) {
      if (lVar8 == 0) goto LAB_053dd08c;
      uVar9 = 0;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        sVar1 = *(short *)(lVar8 + 0x20 + uVar9 * 2);
        if (sVar1 == 0x2b) {
          if (plVar6 == (long *)0x0) goto LAB_053dd08c;
          uVar7 = *(undefined8 *)puVar3;
LAB_053dd038:
          FUN_04c1633c(plVar6,uVar7,0);
        }
        else if (sVar1 != 0x3d) {
          if (sVar1 == 0x2f) {
            if (plVar6 != (long *)0x0) {
              uVar7 = *(undefined8 *)puVar2;
              goto LAB_053dd038;
            }
            goto LAB_053dd08c;
          }
          if (plVar6 == (long *)0x0) goto LAB_053dd08c;
          FUN_04c171d4(plVar6,sVar1,0);
        }
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x053dd084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      return;
    }
  }
LAB_053dd08c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


