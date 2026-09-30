/*
FUNCTION_NAME: FUN_08a2f588
ENTRY_POINT: 08a2f588
PROGRAM: cac-libil2cpp.so
SCORE: 81
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_08a2f588(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo;
                    /* try { // try from 08a2f590 to 08b2f59b has its CatchHandler @ 08a2f63c */
                    /* try { // try from 08a2f59c to 08b2f5ab has its CatchHandler @ 08a2f640 */
  if ((DAT_096a4a4b & 1) == 0) {
                    /* try { // try from 08a2f5b4 to 08b2f5bf has its CatchHandler @ 08a2f634 */
    FUN_03f13384(UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo);
    FUN_03f13384(UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo);
                    /* try { // try from 08a2f5cc to 08b2f5cf has its CatchHandler @ 08a2f648 */
    FUN_03f13384(
                UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                );
    FUN_03f13384(
                UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                );
                    /* try { // try from 08a2f5e8 to 08b2f5f3 has its CatchHandler @ 08a2f630 */
    FUN_03f13384(
                UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_TypeInfo
                );
    DAT_096a4a4b = 1;
  }
  puVar3 = 
  UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_TypeInfo
  ;
  puVar2 = UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo;
                    /* try { // try from 08a2f5f4 to 08b2f623 has its CatchHandler @ 08a2f4c0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
                    /* try { // try from 08a2f624 to 08b2f627 has its CatchHandler @ 08a2f644 */
  FUN_06ba460c(param_1,param_2,4,*(undefined8 *)puVar2);
                    /* try { // try from 08a2f628 to 08b2f663 has its CatchHandler @ 08a2f4c0 */
  lVar4 = *(long *)puVar3;
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a2f5e8 with catch @ 08a2f630
                        */
  if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a2f5b4 with catch @ 08a2f634
                        */
    thunk_FUN_03f6fea8();
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a2f580 with catch @ 08a2f638
                        */
    lVar4 = *(long *)puVar3;
  }
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a2f590 with catch @ 08a2f63c
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a2f59c with catch @ 08a2f640
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a2f624 with catch @ 08a2f644
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08a2f5cc with catch @ 08a2f648
                        */
  FUN_0896c434(param_1,**(undefined8 **)(lVar4 + 0xb8),0);
  puVar1 = 
  UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
  ;
  if (*(long *)(param_1 + 0x328) != 0) {
                    /* try { // try from 08a2f664 to 08b2f667 has its CatchHandler @ 08a2f670 */
                    /* catch() { ... } // from try @ 08a2f664 with catch @ 08a2f670 */
    FUN_0896c434(*(long *)(param_1 + 0x328),*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),0
                );
                    /* try { // try from 08a2f674 to 08b2f67b has its CatchHandler @ 08a2f684 */
                    /* try { // try from 08a2f67c to 08b2f687 has its CatchHandler @ 08a2f4c0 */
    lVar4 = FUN_06bdc6ac(param_1,*(undefined8 *)puVar1);
    if (lVar4 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08a2f674 with catch @ 08a2f684
                        */
                    /* try { // try from 08a2f688 to 08b2f77b has its CatchHandler @ 08a2f688
                       catch() { ... } // from try @ 08a2f688 with catch @ 08a2f688
                       catch() { ... } // from try @ 08a2f840 with catch @ 08a2f688
                       catch() { ... } // from try @ 08a2f874 with catch @ 08a2f688
                       catch() { ... } // from try @ 08a2f88c with catch @ 08a2f688
                       catch() { ... } // from try @ 08a2f8e8 with catch @ 08a2f688 */
      FUN_0896c434(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


