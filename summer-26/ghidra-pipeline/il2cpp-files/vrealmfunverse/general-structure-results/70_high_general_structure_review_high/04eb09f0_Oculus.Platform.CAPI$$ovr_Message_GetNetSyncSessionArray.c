/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 04eb09f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = UnityEngine_Transform_var;
  if ((DAT_066c9405 & 1) == 0) {
    FUN_02b3c81c(System_Text_UTF8Encoding_var);
    FUN_02b3c81c(System_Text_UnicodeEncoding_var);
    FUN_02b3c81c(System_Data_UniqueConstraint_var);
    FUN_02b3c81c(System_Xml_UniqueId_var);
    FUN_02b3c81c(PTR_DAT_06322dc8);
    FUN_02b3c81c(UnityEngine_Events_UnityAction_var);
    FUN_02b3c81c(UnityEngine_Transform_var);
    DAT_066c9405 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = System_Xml_UniqueId_var;
  puVar3 = System_Text_UTF8Encoding_var;
  puVar1 = PTR_DAT_06322dc8;
  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
  lVar9 = puVar8[3];
  if (lVar9 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Data_UniqueConstraint_var);
    FUN_049c10fc(lVar9,uVar10,*(undefined8 *)UnityEngine_Events_UnityAction_var,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar6 = lVar9;
    thunk_FUN_02bb0e9c(plVar6,lVar9);
  }
  uVar10 = FUN_031bf830(param_2,lVar9,*(undefined8 *)puVar3);
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_037a5e0c(uVar7,uVar10,*(undefined8 *)puVar4);
  puVar2 = System_Text_UnicodeEncoding_var;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar7);
    uVar10 = FUN_031c922c(param_2,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


