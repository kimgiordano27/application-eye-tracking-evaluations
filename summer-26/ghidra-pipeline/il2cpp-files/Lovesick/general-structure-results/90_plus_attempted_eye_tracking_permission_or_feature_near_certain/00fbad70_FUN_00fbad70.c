/*
FUNCTION_NAME: FUN_00fbad70
ENTRY_POINT: 00fbad70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_00fbad70(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float local_68;
  undefined4 uStack_64;
  
  if ((DAT_03775a65 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4842);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    DAT_03775a65 = 1;
  }
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
  puVar3 = OVREyeGaze_TypeInfo;
  fVar2 = DAT_028aa158;
  fVar1 = DAT_028aa044;
  lVar6 = *(long *)(param_4 + 0x18);
  if (lVar6 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar7) {
        return;
      }
      FUN_0132138c(lVar6,iVar7,&local_68,*(undefined8 *)puVar4);
      if ((CONCAT44(uStack_64,local_68) == 0) ||
         (lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (CONCAT44(uStack_64,local_68),0), lVar6 == 0)) break;
      FUN_0269f910(lVar6,0);
      fVar8 = (float)FUN_02698c04(0);
      param_2 = param_2 * fVar2;
      param_3 = param_3 * fVar2;
      fVar8 = (float)FUN_026992c0(fVar8 * fVar2,param_2,param_3,0);
      if (*(long *)(param_4 + 0x20) == 0) break;
      FUN_0132138c(*(long *)(param_4 + 0x20),iVar7,&local_68,*(undefined8 *)puVar3);
      fVar5 = local_68;
      fVar9 = (float)FUN_02689110(0);
      if (*(long *)(param_4 + 0x18) == 0) break;
      FUN_0132138c(*(long *)(param_4 + 0x18),iVar7,&local_68,*(undefined8 *)puVar4);
      if (CONCAT44(uStack_64,local_68) == 0) break;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (CONCAT44(uStack_64,local_68),0);
      param_2 = (param_2 + fVar5 * fVar9) * fVar1;
      param_3 = param_3 * fVar1;
      FUN_02698b6c(fVar8 * fVar1,0);
      if (lVar6 == 0) break;
      FUN_0269f994(lVar6,0);
      lVar6 = *(long *)(param_4 + 0x18);
      iVar7 = iVar7 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


