/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$.ctor
ENTRY_POINT: 01eab874
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w9;
  long unaff_x19;
  long *unaff_x26;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  
  if (in_w9 == 0) {
    thunk_FUN_01022c14(param_1);
  }
  uVar3 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY();
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_01d91120();
    if ((uVar3 & 1) == 0) {
      iVar2 = FUN_01eaae90();
      if (iVar2 == 1) {
        in_stack_00000008 = 0;
        if (unaff_x19 != 0) {
          in_stack_00000008 = FUN_01cbacec();
          FUN_01cbabfc(&stack0x00000008,0);
        }
        uVar3 = FUN_01d91120();
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01022c14(*unaff_x26);
        }
        uVar4 = FUN_01e79184(0);
        puVar1 = PTR_DAT_0235f540;
        lVar7 = *(long *)PTR_DAT_0235f540;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14(lVar7);
          lVar7 = *(long *)puVar1;
        }
        uVar5 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                          (uVar4,**(undefined8 **)(lVar7 + 0xb8),0);
        if ((uVar3 & 1) == 0) {
          if ((uVar5 & 1) == 0) {
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            iVar2 = FUN_01eabb94();
          }
          else {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            iVar2 = FUN_01eb6e08();
          }
        }
        else if ((uVar5 & 1) == 0) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iVar2 = FUN_01eabad8();
        }
        else {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iVar2 = FUN_01eb6d44();
        }
        if (unaff_x19 != 0) {
          FUN_01cbad00(&stack0x00000008,0);
        }
        return iVar2 == 0;
      }
      puVar6 = (undefined8 *)PTR_DAT_02360170;
      if (*(int *)(*(long *)PTR_DAT_0234ba20 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        puVar6 = (undefined8 *)PTR_DAT_02360170;
      }
    }
    else {
      puVar6 = (undefined8 *)PTR_DAT_02360178;
      if (*(int *)(*(long *)PTR_DAT_0234ba20 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        puVar6 = (undefined8 *)PTR_DAT_02360178;
      }
    }
    FUN_01fd09b0(*puVar6,0);
  }
  return false;
}


