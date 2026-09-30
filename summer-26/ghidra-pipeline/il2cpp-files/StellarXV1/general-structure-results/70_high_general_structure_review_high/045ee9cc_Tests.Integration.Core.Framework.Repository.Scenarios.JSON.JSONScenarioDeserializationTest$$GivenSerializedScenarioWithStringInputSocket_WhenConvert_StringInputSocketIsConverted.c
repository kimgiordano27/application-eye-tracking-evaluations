/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithStringInputSocket_WhenConvert_StringInputSocketIsConverted
ENTRY_POINT: 045ee9cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithStringInputSocket_WhenConvert_StringInputSocketIsConverted
          (undefined8 param_1,long *param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  
  if ((DAT_09888431 & 1) == 0) {
    FUN_04077588(PTR_DAT_09295288);
    FUN_04077588(PTR_DAT_09295290);
    FUN_04077588(PTR_DAT_09294ad0);
    FUN_04077588(PTR_DAT_09285bb0);
    FUN_04077588(PTR_DAT_09285e28);
    DAT_09888431 = 1;
  }
  puVar2 = PTR_DAT_09285bb0;
  if (param_3 == 0) goto LAB_045eec24;
  lVar5 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>
                    (param_3,*(undefined8 *)PTR_DAT_09295290);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar2);
  }
  uVar6 = FUN_089ca704(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (lVar5 == 0) goto LAB_045eec24;
    uVar3 = FUN_044b6ef8(lVar5,0);
    uVar3 = (uVar3 ^ 0xffffffff) & 1;
  }
  lVar5 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>
                    (param_3,*(undefined8 *)PTR_DAT_09294ad0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar2);
  }
  uVar6 = FUN_089ca704(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
LAB_045eeafc:
    uVar4 = 0;
  }
  else {
    if (lVar5 == 0) goto LAB_045eec24;
    if (*(char *)(lVar5 + 0x38) == '\0') goto LAB_045eeafc;
    uVar4 = FUN_042f3b50(lVar5,0);
    uVar4 = uVar4 & 1;
  }
  lVar5 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>
                    (param_3,*(undefined8 *)PTR_DAT_09295288);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar2);
  }
  uVar6 = FUN_089ca704(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    bVar9 = 0;
  }
  else {
    if (lVar5 == 0) goto LAB_045eec24;
    bVar9 = *(byte *)(lVar5 + 0x34) ^ 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar6 = FUN_089ca704(param_4,0,0);
  if ((uVar6 & 1) == 0) {
    bVar8 = 0;
    if (param_2 == (long *)0x0) goto LAB_045eebb8;
LAB_045eeb98:
    bVar1 = *(byte *)(*(long *)PTR_DAT_09285e28 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar1) goto LAB_045eebb8;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09285e28) {
      param_2 = (long *)0x0;
    }
  }
  else {
    if ((param_4 == 0) || (*(long *)(param_4 + 0x88) == 0)) goto LAB_045eec24;
    bVar8 = *(byte *)(*(long *)(param_4 + 0x88) + 0x21);
    if (param_2 != (long *)0x0) goto LAB_045eeb98;
LAB_045eebb8:
    param_2 = (long *)0x0;
  }
  if (uVar4 == 0 && uVar3 == 0) {
    if ((bVar8 & bVar9) != 0) {
      if (param_2 != (long *)0x0) {
        uVar7 = FUN_042f7238(param_2,lVar5,0);
        return uVar7;
      }
LAB_045eec24:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}


