/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Vector4f>
ENTRY_POINT: 0495d454
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__IndexOf<OVRPlugin_Vector4f>(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long lVar11;
  undefined8 uVar12;
  long unaff_x24;
  long lVar13;
  ulong in_stack_00000018;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_0928f1b0);
  FUN_04077588(PTR_DAT_0928f1b8);
  FUN_04077588(PTR_DAT_092b61f0);
  FUN_04077588(PTR_DAT_092b6178);
  *(undefined1 *)(unaff_x24 + 0x489) = 1;
  in_stack_00000018 = 0;
  lVar4 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_0495d8c8();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(lVar4 + 0x68) = unaff_x19;
  thunk_FUN_040ec700();
  *(undefined8 *)(lVar4 + 0x70) = unaff_x23;
  thunk_FUN_040ec700();
  if (unaff_x21 != 0) {
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(unaff_x21 + 0x10);
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(unaff_x21 + 0x30);
    thunk_FUN_040ec700();
    uVar5 = FUN_04794c0c();
    *(undefined8 *)(lVar4 + 0x90) = uVar5;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(unaff_x21 + 0x18);
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(unaff_x21 + 0x40);
    thunk_FUN_040ec700();
    in_stack_00000018 = *(ulong *)(unaff_x21 + 0x20);
    if ((in_stack_00000018 & 0xff) != 0) {
      uVar3 = FUN_06015574(&stack0x00000018,*(undefined8 *)PTR_DAT_0928f1b8);
      FUN_0495dac8(lVar4,uVar3);
    }
    puVar2 = PTR_DAT_092b6178;
    lVar11 = *(long *)(unaff_x21 + 0x48);
    if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x18))) {
      lVar6 = *(long *)PTR_DAT_092b6178;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
                    /* try { // try from 0495d58c to 04a5d5b3 has its CatchHandler @ 0495d860 */
        lVar6 = *(long *)puVar2;
      }
      puVar9 = *(undefined8 **)(lVar6 + 0xb8);
      lVar13 = puVar9[2];
      if (lVar13 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar5 = *puVar9;
        lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092b61e0);
        FUN_05679f64(lVar13,uVar5,*(undefined8 *)PTR_DAT_092b61f0,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar7 = lVar13;
        thunk_FUN_040ec700(plVar7,lVar13);
      }
      uVar5 = FUN_04fa75c0(lVar11,lVar13,*(undefined8 *)PTR_DAT_092b61d0);
      uVar5 = FUN_04fbecb8(uVar5,*(undefined8 *)PTR_DAT_092b61d8);
      *(undefined8 *)(lVar4 + 0x88) = uVar5;
      thunk_FUN_040ec700();
    }
    lVar11 = *(long *)(unaff_x21 + 0x50);
    if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x18))) {
      *(long *)(lVar4 + 0x98) = lVar11;
      thunk_FUN_040ec700();
    }
  }
  lVar4 = (**(code **)(*unaff_x20 + 0x2f8))();
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x30);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      uVar1 = *(undefined8 *)(lVar4 + 0x38);
      uVar10 = *(undefined8 *)(lVar4 + 0x18);
      if ((DAT_0988a4f4 & 1) == 0) {
        FUN_04077588(PTR_DAT_092a5160);
        DAT_0988a4f4 = 1;
      }
      uVar12 = *(undefined8 *)(lVar4 + 0x28);
      uVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a8c88);
      FUN_04794ce4(uVar8,uVar10,uVar5,uVar1,uVar12,0);
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


