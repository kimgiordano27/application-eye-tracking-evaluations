/*
FUNCTION_NAME: FUN_085e83f4
ENTRY_POINT: 085e83f4
PROGRAM: cac-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long * FUN_085e83f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_0969b2b4 & 1) == 0) {
    FUN_03f13384(PTR_DAT_091992f0);
    FUN_03f13384(PTR_DAT_09199308);
    FUN_03f13384(PTR_DAT_09199318);
    FUN_03f13384(PTR_DAT_09199320);
    FUN_03f13384(PTR_DAT_09199340);
    FUN_03f13384(PTR_DAT_09199348);
    DAT_0969b2b4 = 1;
  }
  puVar3 = PTR_DAT_09199340;
  puVar2 = PTR_DAT_09199318;
  puVar1 = PTR_DAT_09199308;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if ((*(long *)(param_1 + 0xa0) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  FUN_056b1374(&local_48,lVar4,*(undefined8 *)PTR_DAT_09199348);
  do {
    uVar5 = FUN_072070ec(&local_48,*(undefined8 *)puVar2);
    plVar9 = local_38;
    if ((uVar5 & 1) == 0) {
      plVar9 = (long *)0x0;
      break;
    }
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar4 = *local_38;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f4b594(local_38,*(long *)puVar3,4);
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor:
    uVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar5 = thunk_FUN_0732565c(uVar7,param_2,0);
  } while ((uVar5 & 1) == 0);
  FUN_072070e8(&local_48,*(undefined8 *)puVar1);
  return plVar9;
}


