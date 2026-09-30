/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$.cctor
ENTRY_POINT: 0534e9e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0___cctor(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long unaff_x19;
  int iVar7;
  
  iVar5 = *(int *)(unaff_x19 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  if ((int)uVar6 < iVar5) {
LAB_0534eaa4:
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar6 = thunk_FUN_02f45270();
    FUN_0510bec4(uVar6,0);
    uVar4 = thunk_FUN_02f6ef30(System_Runtime_Serialization_FloatDataContract_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar6,uVar4);
  }
  iVar7 = *(int *)(param_2 + 0x18);
  do {
    iVar2 = (int)uVar6 - iVar5;
    iVar1 = iVar7;
    if (iVar2 <= iVar7) {
      iVar1 = iVar2;
    }
    FUN_050f7d68(param_2,0,param_3,iVar5,iVar1,0);
    param_3 = *(long *)(unaff_x19 + 0x18);
    iVar5 = iVar1 + *(int *)(unaff_x19 + 0x20);
    *(int *)(unaff_x19 + 0x20) = iVar5;
    if (param_3 == 0) goto LAB_0534eaa0;
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    iVar7 = iVar7 - iVar1;
    if ((int)uVar6 < iVar5) goto LAB_0534eaa4;
    if (iVar5 == (int)uVar6) {
      iVar5 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
  } while (0 < iVar7);
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(param_2 + 0x18) / DAT_011b0448;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar3 = FUN_060987c4(*(long *)(unaff_x19 + 0x10),0), lVar3 != 0)) {
    FUN_06097a98(lVar3,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
LAB_0534eaa0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


