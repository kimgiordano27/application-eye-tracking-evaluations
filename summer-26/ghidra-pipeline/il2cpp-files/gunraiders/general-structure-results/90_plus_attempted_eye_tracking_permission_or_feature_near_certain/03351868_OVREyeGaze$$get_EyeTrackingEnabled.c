/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 03351868
PROGRAM: gunraiders-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  uVar2 = thunk_FUN_01c496e0(**(undefined8 **)(param_1 + 0xf78));
  FUN_0324681c(uVar2,*(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<Player>_get_Current__);
  lVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<Player>_MoveNext__);
  FUN_033519d0(lVar3,uVar2);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*(long *)UnityEngine_UIElements_IReorderable_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03351a3c(uVar5,lVar3);
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<MaskableGraphic>_get_Current__;
  lVar4 = *(long *)
           Method_System_Collections_Generic_HashSet_Enumerator<MaskableGraphic>_get_Current__;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *(long *)puVar1;
  }
  if (**(char **)(lVar4 + 0xb8) != '\0') {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(char *)(lVar3 + 0x18) == '\0') {
      uVar5 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_List_Enumerator<PolyNode>_Dispose__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar2,uVar5);
    }
  }
  FUN_033211cc();
  return;
}


