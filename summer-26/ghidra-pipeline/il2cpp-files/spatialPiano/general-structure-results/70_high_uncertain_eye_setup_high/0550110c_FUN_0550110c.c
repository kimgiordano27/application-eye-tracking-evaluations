/*
FUNCTION_NAME: FUN_0550110c
ENTRY_POINT: 0550110c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0550110c(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_18;
  
  local_18 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_0551323c(*(long *)(param_1 + 0x18),param_2,&local_18,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar3 = thunk_FUN_02f6ef30(OVRPlugin_Media_TypeInfo);
        if (param_2 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        }
        uVar3 = FUN_04f65260(uVar3,uVar4,0);
        thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
        uVar4 = thunk_FUN_02f45270();
        FUN_050d5404(uVar4,uVar3,0);
        uVar3 = thunk_FUN_02f6ef30(OVRPlugin_Mesh_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar4,uVar3);
      }
      FUN_0550110c(*(long *)(param_1 + 0x40),param_2);
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar2 = FUN_05513310(*(long *)(param_1 + 0x18),param_2,0);
        return lVar2;
      }
    }
    else if (local_18 != 0) {
      uVar1 = FUN_0550d9f8(local_18,0);
      if ((uVar1 & 1) == 0) {
        if (local_18 == 0) goto LAB_055011b0;
        uVar1 = FUN_0550da04(local_18,0);
        if ((uVar1 & 1) == 0) {
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_055011b0;
          FUN_055130e0(*(long *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x10),0);
        }
      }
      return local_18;
    }
  }
LAB_055011b0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


