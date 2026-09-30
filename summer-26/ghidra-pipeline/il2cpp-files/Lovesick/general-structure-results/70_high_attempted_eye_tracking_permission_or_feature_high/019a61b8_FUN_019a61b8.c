/*
FUNCTION_NAME: FUN_019a61b8
ENTRY_POINT: 019a61b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_019a61b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long local_38;
  
  if ((DAT_0377a54a & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecMod__);
    thunk_FUN_00d48444(Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_ContentType>__)
    ;
    thunk_FUN_00d48444(StringLiteral_1844);
    DAT_0377a54a = 1;
  }
  puVar2 = StringLiteral_1844;
  puVar1 = Method_System_Decimal_DecCalc_VarDecMod__;
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    iVar6 = *(int *)(lVar3 + 0x18) + -1;
    if (iVar6 < 0) {
      return;
    }
    do {
      FUN_0132138c(lVar3,iVar6,&local_38,*(undefined8 *)puVar2);
      lVar3 = local_38;
      if (local_38 == 0) break;
      if (*(char *)(local_38 + 0x28) != '\0') {
        FUN_019a62a0(local_38);
        lVar4 = *(long *)(lVar3 + 0x40);
        if ((lVar4 == 0) || (uVar5 = OVREyeGaze__Start(lVar4,0), (uVar5 & 1) != 0)) {
          if (*(long *)(param_1 + 0x40) == 0) break;
          FUN_0132448c(*(long *)(param_1 + 0x40),lVar3,*(undefined8 *)puVar1);
        }
      }
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x40);
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


