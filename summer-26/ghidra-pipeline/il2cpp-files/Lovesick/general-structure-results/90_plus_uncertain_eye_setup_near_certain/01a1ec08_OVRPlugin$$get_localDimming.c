/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 01a1ec08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_localDimming(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                    );
  thunk_FUN_00d48444(StringLiteral_7780);
  thunk_FUN_00d48444(DigitalOpus_MB_Core_MB2_TexturePackerRegular_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<Camera>_get_Item__);
  thunk_FUN_00d48444(System_Collections_Generic_List<InternalTreeView_TreeViewItemWrapper>_TypeInfo)
  ;
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vdup_laneq_u16__);
  thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<ReusableCollectionItem>_TypeInfo);
                    /* try { // try from 01a1ec64 to 01b1ec8b has its CatchHandler @ 01a1ecb0 */
  *(undefined1 *)(unaff_x20 + 0x9f1) = 1;
  lVar3 = thunk_FUN_00d62348(*unaff_x21);
  puVar1 = StringLiteral_7780;
  if (lVar3 != 0) {
                    /* try { // try from 01a1ec8c to 01b1ec97 has its CatchHandler @ 01a1e828 */
    FUN_01320e50(lVar3,*(undefined8 *)Method_System_Collections_Generic_List<Camera>_get_Item__);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = DigitalOpus_MB_Core_MB2_TexturePackerRegular_TypeInfo;
    puVar1 = System_Collections_Generic_IEnumerator<ReusableCollectionItem>_TypeInfo;
    uVar5 = DAT_02945bc8;
                    /* try { // try from 01a1ec98 to 01b1ec9f has its CatchHandler @ 01a1ecb0 */
    if (lVar4 != 0) {
                    /* try { // try from 01a1eca0 to 01b1ecbf has its CatchHandler @ 01a1e828 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01a1ec64 with catch @ 01a1ecb0
                       catch(type#2 @ 00000000) { ... } // from try @ 01a1ec98 with catch @ 01a1ecb0
                        */
                    /* catch() { ... } // from try @ 01a1eba0 with catch @ 01a1ecb4 */
      *(undefined4 *)(lVar4 + 0x10) = 7;
      *(undefined8 *)(lVar4 + 0x14) = uVar5;
      FUN_017b46ec(lVar4,0);
      FUN_00bfe22c(lVar3,lVar4,*(undefined8 *)puVar2);
      *(long *)(unaff_x19 + 0x38) = lVar3;
      *(undefined4 *)(unaff_x19 + 0x40) = 0x3d4ccccd;
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar1;
      }
      puVar2 = 
      Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
      ;
      lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar4 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *(long *)puVar1;
        }
        uVar5 = **(undefined8 **)(lVar3 + 0xb8);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar4 == 0) goto LAB_01a1eda8;
        FUN_012d1810(lVar4,uVar5,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vdup_laneq_u16__,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
      }
      puVar1 = System_Action<byte[],_int,_short>_TypeInfo;
      *(long *)(unaff_x19 + 0x48) = lVar4;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_01298da0(lVar3,*(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<SimpleMultiObjectBob_Bobject>_Dispose__
                    );
        *(long *)(unaff_x19 + 0x50) = lVar3;
        thunk_FUN_0268a01c();
        return;
      }
    }
  }
LAB_01a1eda8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


