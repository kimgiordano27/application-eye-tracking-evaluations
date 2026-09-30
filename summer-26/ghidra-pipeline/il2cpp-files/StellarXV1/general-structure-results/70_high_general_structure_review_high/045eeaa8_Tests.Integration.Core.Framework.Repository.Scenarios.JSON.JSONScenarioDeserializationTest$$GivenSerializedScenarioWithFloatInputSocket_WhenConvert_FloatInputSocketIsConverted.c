/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithFloatInputSocket_WhenConvert_FloatInputSocketIsConverted
ENTRY_POINT: 045eeaa8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithFloatInputSocket_WhenConvert_FloatInputSocketIsConverted
          (undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w23;
  long *unaff_x24;
  byte bVar7;
  
  lVar3 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>(param_2,*param_1);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
  uVar4 = FUN_089ca704(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
LAB_045eeafc:
    uVar2 = 0;
  }
  else {
    if (lVar3 == 0) goto LAB_045eec24;
    if (*(char *)(lVar3 + 0x38) == '\0') goto LAB_045eeafc;
    uVar2 = FUN_042f3b50(lVar3,0);
    uVar2 = uVar2 & 1;
  }
  lVar3 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
  uVar4 = FUN_089ca704(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    bVar7 = 0;
  }
  else {
    if (lVar3 == 0) goto LAB_045eec24;
    bVar7 = *(byte *)(lVar3 + 0x34) ^ 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar4 = FUN_089ca704();
  if ((uVar4 & 1) == 0) {
    bVar6 = 0;
    if (unaff_x19 == (long *)0x0) goto LAB_045eebb8;
LAB_045eeb98:
    bVar1 = *(byte *)(*(long *)PTR_DAT_09285e28 + 0x130);
    if (*(byte *)(*unaff_x19 + 0x130) < bVar1) goto LAB_045eebb8;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09285e28)
    {
      unaff_x19 = (long *)0x0;
    }
  }
  else {
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x88) == 0)) goto LAB_045eec24;
    bVar6 = *(byte *)(*(long *)(unaff_x20 + 0x88) + 0x21);
    if (unaff_x19 != (long *)0x0) goto LAB_045eeb98;
LAB_045eebb8:
    unaff_x19 = (long *)0x0;
  }
  if (uVar2 == 0 && unaff_w23 == 0) {
    if ((bVar6 & bVar7) != 0) {
      if (unaff_x19 != (long *)0x0) {
        uVar5 = FUN_042f7238(unaff_x19,lVar3,0);
        return uVar5;
      }
LAB_045eec24:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


