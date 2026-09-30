/*
FUNCTION_NAME: FUN_05299e60
ENTRY_POINT: 05299e60
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_05299e60(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 local_6c [2];
  undefined8 uStack_58;
  undefined8 local_50 [2];
  undefined8 uStack_3c;
  
  puVar1 = OVRPlugin_TrackingConfidence___TypeInfo;
  if ((DAT_06bbacd4 & 1) == 0) {
    FUN_02f08768(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_02f08768(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_02f08768(OVRPlugin_SpaceComponentType___TypeInfo);
    DAT_06bbacd4 = 1;
  }
  FUN_037d8f44(param_1,param_2,*(undefined8 *)puVar1);
  puVar1 = OVRPlugin_BoneCapsule___TypeInfo;
  plVar7 = *(long **)(param_1 + 0xc0);
  if (plVar7 != (long *)0x0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = FUN_037dbfdc(param_2,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_052c2324(local_6c,*(undefined8 *)(param_2 + 0x130),0,0);
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_05299f6c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar1,2);
LAB_05299f6c:
    local_50[0] = local_6c[0];
    uStack_3c = uStack_58;
    (*(code *)*puVar3)(plVar7,uVar2,local_50,puVar3[1]);
  }
  return;
}


