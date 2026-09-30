/*
FUNCTION_NAME: OVRPlugin$$GetActionStateBoolean
ENTRY_POINT: 02c1f0e8
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStateBoolean(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_03a25ee0 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380b978);
    FUN_017fc350(PTR_DAT_03802908);
    FUN_017fc350(PTR_DAT_037f2c78);
    FUN_017fc350(PTR_DAT_0380b980);
    DAT_03a25ee0 = 1;
  }
  puVar3 = PTR_DAT_0380b980;
  puVar2 = PTR_DAT_0380b978;
  puVar1 = PTR_DAT_037f2c78;
  if (param_2 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar5 = thunk_FUN_01861bbc();
    uVar7 = thunk_FUN_01851c08(PTR_DAT_037faa38);
    FUN_02b3cbec(uVar5,uVar7,0);
  }
  else {
    if (*param_1 != 0) {
      plVar4 = (long *)FUN_02b0fa00(*param_1,0);
      uVar7 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*(long *)puVar1);
      }
      uVar7 = FUN_02bddb5c(uVar7,0);
      if (plVar4 != (long *)0x0) {
        lVar6 = *(long *)PTR_DAT_03802908;
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(plVar4,lVar6);
        }
      }
      FUN_02adff8c(param_2,*(undefined8 *)puVar3,plVar4,uVar7,0);
      return;
    }
    thunk_FUN_01851c08(PTR_DAT_037fb188);
    uVar5 = thunk_FUN_01861bbc();
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b960);
    FUN_02ad6d08(uVar5,uVar7,0);
  }
  uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b990);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar5,uVar7);
}


