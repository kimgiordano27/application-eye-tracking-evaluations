/*
FUNCTION_NAME: FUN_021c137c
ENTRY_POINT: 021c137c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void FUN_021c137c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 local_50 [16];
  long *local_38;
  
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  if ((DAT_0378164e & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Array_Empty<Vector3>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    thunk_FUN_00d48444(RCG_Lovesick_Dialogue_HintValue_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Release__);
    thunk_FUN_00d48444(StringLiteral_1805);
    DAT_0378164e = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_50 = FUN_0213f7cc(0);
  puVar4 = StringLiteral_1805;
  puVar2 = RCG_Lovesick_Dialogue_HintValue_TypeInfo;
  if (0 < local_50._12_4_) {
    iVar9 = 0;
    do {
      FUN_0138116c(local_50,iVar9,&local_38,*(undefined8 *)puVar4);
      plVar5 = local_38;
      if (local_38 == (long *)0x0) goto LAB_021c159c;
      uVar6 = FUN_0214cbe4(local_38,0);
      if ((uVar6 & 1) != 0) {
                    /* try { // try from 021c1464 to 022c146f has its CatchHandler @ 021c19b4 */
        lVar8 = *plVar5;
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if ((bVar1 <= *(byte *)(lVar8 + 300)) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
                    /* try { // try from 021c14a4 to 022c14af has its CatchHandler @ 021c1988 */
          *(long **)(param_1 + 0xf0) = plVar5;
          break;
        }
      }
                    /* try { // try from 021c1494 to 022c149f has its CatchHandler @ 021c198c */
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)local_50._12_4_);
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  lVar8 = *(long *)(param_1 + 0xf0);
                    /* try { // try from 021c14b4 to 022c14bf has its CatchHandler @ 021c1984 */
  if (lVar8 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
                    /* try { // try from 021c1558 to 022c15d7 has its CatchHandler @ 021c19ac */
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_02681b9c(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) goto LAB_021c159c;
    uVar11 = 1;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_021409f4(lVar8,0,0);
                    /* try { // try from 021c14dc to 022c14fb has its CatchHandler @ 021c197c */
    if (*(long *)(param_1 + 0xe8) != 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0xe8) + 0x170);
      if (lVar8 == 0) goto LAB_021c159c;
      lVar10 = *(long *)(param_1 + 0xf0);
      puVar7 = (undefined4 *)FUN_012f9a10(lVar8,*(undefined8 *)Method_System_Array_Empty<Vector3>__)
      ;
      if (lVar10 == 0) goto LAB_021c159c;
      FUN_021516e0(*puVar7,puVar7[1],lVar10,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
                    /* try { // try from 021c1528 to 022c152b has its CatchHandler @ 021c199c */
    uVar6 = FUN_02681b9c(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
LAB_021c159c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar11 = 0;
  }
  FUN_02689f9c(lVar8,uVar11,0);
  return;
}


