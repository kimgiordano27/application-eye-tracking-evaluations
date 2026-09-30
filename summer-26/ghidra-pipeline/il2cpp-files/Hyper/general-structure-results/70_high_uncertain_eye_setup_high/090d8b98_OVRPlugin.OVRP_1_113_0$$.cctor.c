/*
FUNCTION_NAME: OVRPlugin.OVRP_1_113_0$$.cctor
ENTRY_POINT: 090d8b98
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_113_0___cctor(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((param_2 != 0) && (lVar4 = *(long *)(param_1 + 0x18), lVar4 != 0)) {
    iVar5 = *(int *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x18);
    if ((int)uVar6 < iVar5) {
LAB_090d8c78:
      thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
      uVar6 = thunk_FUN_04983f60();
      FUN_08db3de4(uVar6,0);
      uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac79990);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar6,uVar3);
    }
    iVar7 = *(int *)(param_2 + 0x18);
    do {
      iVar2 = (int)uVar6 - iVar5;
      iVar1 = iVar7;
      if (iVar2 <= iVar7) {
        iVar1 = iVar2;
      }
      FUN_08d9f1fc(param_2,0,lVar4,iVar5,iVar1,0);
      lVar4 = *(long *)(param_1 + 0x18);
      iVar5 = iVar1 + *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar5;
      if (lVar4 == 0) goto LAB_090d8c74;
      uVar6 = *(undefined8 *)(lVar4 + 0x18);
      iVar7 = iVar7 - iVar1;
      if ((int)uVar6 < iVar5) goto LAB_090d8c78;
      if (iVar5 == (int)uVar6) {
        iVar5 = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    } while (0 < iVar7);
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 0x28) + (float)*(int *)(param_2 + 0x18) / DAT_01df4e38;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar4 = FUN_0a127920(*(long *)(param_1 + 0x10),0), lVar4 != 0)) {
      FUN_0a1268f0(lVar4,*(undefined8 *)(param_1 + 0x18),0,0);
      return;
    }
  }
LAB_090d8c74:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


