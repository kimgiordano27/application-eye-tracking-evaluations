/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$.cctor
ENTRY_POINT: 0515cbf8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_BodyJointLocation___cctor(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_06b79e1a & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067635c0);
    DAT_06b79e1a = 1;
  }
  if (param_2 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)(PTR_DAT_0675e258 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar5);
      }
      if (0 < (int)plVar5[2]) {
        sVar2 = FUN_04e87a5c(plVar5,0,0);
        if (sVar2 == 0x2f) {
          iVar3 = FUN_04e92ac4(plVar5,0x2f,0);
          puVar1 = PTR_DAT_067635c0;
          if (0 < iVar3) {
            uVar6 = System_Globalization_SortKey___ctor(plVar5,1,iVar3 + -1,0);
            uVar7 = FUN_04e9195c(plVar5,iVar3 + 1,0);
            uVar4 = FUN_050eb318(uVar7,0);
            uVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
            FUN_056f476c(uVar7,uVar6,uVar4,0);
            return uVar7;
          }
        }
      }
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067822e8);
      uVar6 = FUN_050924a8(param_2,uVar6,0);
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067822f0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar6,uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


