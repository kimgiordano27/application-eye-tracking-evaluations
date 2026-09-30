/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 0379cd4c
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


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>___ctor
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar7;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 0379cd4c to 0389cd63 has its CatchHandler @ 0379c974 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 0379cd64 to 0389cd67 has its CatchHandler @ 0379cd8c */
    thunk_FUN_0159f088(PTR_DAT_06dad358);
    thunk_FUN_0159f088(PTR_DAT_06e56f18);
    thunk_FUN_0159f088(PTR_DAT_06e5ebe8);
    thunk_FUN_0159f088(PTR_DAT_06e01ac0);
    thunk_FUN_0159f088(PTR_DAT_06de27e8);
    thunk_FUN_0159f088(PTR_DAT_06df1e08);
    thunk_FUN_0159f088(PTR_DAT_06de5db0);
    thunk_FUN_0159f088(PTR_DAT_06e391b0);
    *(undefined1 *)(unaff_x25 + 399) = 1;
  }
  in_stack_00000008 = 0;
  lVar3 = thunk_FUN_015d056c(*unaff_x20);
  if (lVar3 != 0) {
    FUN_0379c72c();
    puVar2 = PTR_DAT_06e56f18;
    puVar1 = PTR_DAT_06e391b0;
    if (*(long *)(param_2 + 0x28) != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30);
      thunk_FUN_01656ef8();
      *(undefined8 *)(lVar3 + 0x18) = unaff_x24;
      *(undefined8 *)(lVar3 + 0x20) = param_3;
      thunk_FUN_01656ef8((undefined8 *)(lVar3 + 0x20),param_3);
      *(undefined8 *)(lVar3 + 0x28) = param_4;
      thunk_FUN_01656ef8((undefined8 *)(lVar3 + 0x28),param_4);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      in_stack_00000008 = FUN_028be62c(0);
      uVar4 = FUN_028bf2a8(&stack0x00000008,*(undefined8 *)puVar1,0);
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      thunk_FUN_01656ef8();
      uVar4 = FUN_0379b818(param_2);
      *(undefined8 *)(lVar3 + 0x38) = uVar4;
      thunk_FUN_01656ef8();
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06de27e8);
        if (unaff_x21 == 0) goto LAB_0379cf4c;
        FUN_02782444(unaff_x21,*(undefined8 *)PTR_DAT_06e01ac0);
      }
      puVar1 = PTR_DAT_06df1e08;
      plVar7 = (long *)(lVar3 + 0x40);
      *plVar7 = unaff_x21;
      thunk_FUN_01656ef8(plVar7,unaff_x21);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar5 = FUN_047a50f0(0);
      if (lVar5 != 0) {
        lVar5 = *plVar7;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar6 = FUN_047a50f0(0);
        if ((lVar6 == 0) || (lVar5 == 0)) goto LAB_0379cf4c;
        FUN_02783288(lVar5,*(undefined8 *)PTR_DAT_06de5db0,*(undefined8 *)(lVar6 + 0x40),
                     *(undefined8 *)PTR_DAT_06e5ebe8);
      }
      FUN_0379cf50(param_2,lVar3);
      return;
    }
  }
LAB_0379cf4c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


