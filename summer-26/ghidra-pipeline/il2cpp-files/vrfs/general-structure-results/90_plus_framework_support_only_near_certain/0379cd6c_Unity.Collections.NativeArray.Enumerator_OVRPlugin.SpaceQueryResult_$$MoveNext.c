/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 0379cd6c
PROGRAM: vrfs-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__MoveNext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long *plVar6;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0xf18));
                    /* try { // try from 0379cd74 to 0389cda3 has its CatchHandler @ 0379cdb8 */
                    /* catch() { ... } // from try @ 0379ccd8 with catch @ 0379cd7c */
  thunk_FUN_0159f088(PTR_DAT_06e5ebe8);
  thunk_FUN_0159f088(PTR_DAT_06e01ac0);
                    /* catch() { ... } // from try @ 0379cd64 with catch @ 0379cd8c */
  thunk_FUN_0159f088(PTR_DAT_06de27e8);
  thunk_FUN_0159f088(PTR_DAT_06df1e08);
                    /* try { // try from 0379cda4 to 0389cdaf has its CatchHandler @ 0379c974 */
  thunk_FUN_0159f088(PTR_DAT_06de5db0);
                    /* try { // try from 0379cdb0 to 0389cdb7 has its CatchHandler @ 0379cdb8 */
                    /* catch() { ... } // from try @ 0379cd24 with catch @ 0379cdb8
                       catch() { ... } // from try @ 0379cd74 with catch @ 0379cdb8
                       catch() { ... } // from try @ 0379cdb0 with catch @ 0379cdb8 */
  thunk_FUN_0159f088(PTR_DAT_06e391b0);
  *(undefined1 *)(unaff_x25 + 399) = 1;
  in_stack_00000008 = 0;
  lVar3 = thunk_FUN_015d056c(*unaff_x20);
  if (lVar3 != 0) {
    FUN_0379c72c();
    puVar2 = PTR_DAT_06e56f18;
    puVar1 = PTR_DAT_06e391b0;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* try { // try from 0379cde4 to 0389ce43 has its CatchHandler @ 0379cde4
                       catch() { ... } // from try @ 0379cde4 with catch @ 0379cde4
                       catch() { ... } // from try @ 0379ce64 with catch @ 0379cde4
                       catch() { ... } // from try @ 0379ce88 with catch @ 0379cde4
                       catch() { ... } // from try @ 0379ceb8 with catch @ 0379cde4
                       catch() { ... } // from try @ 0379ceec with catch @ 0379cde4 */
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x30);
      thunk_FUN_01656ef8();
      *(undefined8 *)(lVar3 + 0x18) = unaff_x24;
      *(undefined8 *)(lVar3 + 0x20) = unaff_x23;
      thunk_FUN_01656ef8();
      *(undefined8 *)(lVar3 + 0x28) = unaff_x22;
      thunk_FUN_01656ef8();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      in_stack_00000008 = FUN_028be62c(0);
      uVar4 = FUN_028bf2a8(&stack0x00000008,*(undefined8 *)puVar1,0);
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      thunk_FUN_01656ef8();
      uVar4 = FUN_0379b818();
      *(undefined8 *)(lVar3 + 0x38) = uVar4;
      thunk_FUN_01656ef8();
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06de27e8);
        if (unaff_x21 == 0) goto LAB_0379cf4c;
        FUN_02782444(unaff_x21,*(undefined8 *)PTR_DAT_06e01ac0);
      }
      puVar1 = PTR_DAT_06df1e08;
      plVar6 = (long *)(lVar3 + 0x40);
      *plVar6 = unaff_x21;
      thunk_FUN_01656ef8(plVar6,unaff_x21);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar3 = FUN_047a50f0(0);
      if (lVar3 != 0) {
        lVar3 = *plVar6;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar5 = FUN_047a50f0(0);
        if ((lVar5 == 0) || (lVar3 == 0)) goto LAB_0379cf4c;
        FUN_02783288(lVar3,*(undefined8 *)PTR_DAT_06de5db0,*(undefined8 *)(lVar5 + 0x40),
                     *(undefined8 *)PTR_DAT_06e5ebe8);
      }
      FUN_0379cf50();
      return;
    }
  }
LAB_0379cf4c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


