/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonMockWrapper$$get_IsArray
ENTRY_POINT: 04f5d19c
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Best_HTTP_JSON_LitJson_JsonMockWrapper__get_IsArray(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  long *unaff_x23;
  undefined *puVar7;
  
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  iVar1 = FUN_04e6411c();
  if (iVar1 < 0) {
Best_HTTP_JSON_LitJson_JsonMockWrapper__System_Collections_IDictionary_get_IsReadOnly:
    thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
    uVar5 = thunk_FUN_04983f60();
    puVar7 = PTR_DAT_0ac29e30;
    goto LAB_04f5d324;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (unaff_x20 == 0) goto LAB_04f5d304;
  FUN_04e636cc();
  iVar1 = FUN_04e6411c();
  if (0 < iVar1)
  goto Best_HTTP_JSON_LitJson_JsonMockWrapper__System_Collections_IDictionary_get_IsReadOnly;
  lVar9 = *(long *)(unaff_x21 + 0x20);
  if (lVar9 == 0) {
    return;
  }
  uVar3 = FUN_04e65a90();
  if ((uVar3 & 1) == 0) {
Best_HTTP_JSON_LitJson_JsonMockWrapper__System_Collections_IList_get_Item:
    lVar9 = *unaff_x23;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar9 = *unaff_x23;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
    uVar5 = FUN_04e66d60();
    if (lVar9 == 0) {
LAB_04f5d304:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar3 = FUN_04e6553c(lVar9,uVar5,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_04e63ff8();
    iVar2 = FUN_04e63ff8(lVar9,0);
    if (iVar1 + -1 != iVar2)
    goto Best_HTTP_JSON_LitJson_JsonMockWrapper__System_Collections_IList_get_Item;
    lVar4 = FUN_04e64e0c();
    if (lVar4 == 0) goto LAB_04f5d304;
    uVar3 = FUN_04e6553c(lVar4,lVar9,0);
    if ((uVar3 & 1) == 0)
    goto Best_HTTP_JSON_LitJson_JsonMockWrapper__System_Collections_IList_get_Item;
    iVar1 = Best_HTTP_JSON_LitJson_JsonReader__get_AllowSingleQuotedStrings();
    if (iVar1 == 1) {
      return;
    }
  }
  thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
  uVar5 = thunk_FUN_04983f60();
  puVar7 = PTR_DAT_0ac29e28;
LAB_04f5d324:
  uVar6 = thunk_FUN_049ae08c(puVar7);
  uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac163a0);
  FUN_08cbd67c(uVar5,uVar6,uVar8,0);
  uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac29e38);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar5,uVar6);
}


