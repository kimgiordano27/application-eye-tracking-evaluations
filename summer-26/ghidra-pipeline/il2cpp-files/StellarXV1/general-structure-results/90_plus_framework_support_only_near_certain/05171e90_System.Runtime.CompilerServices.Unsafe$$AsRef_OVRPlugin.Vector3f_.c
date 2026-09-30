/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.Vector3f>
ENTRY_POINT: 05171e90
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 163
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


void System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_Vector3f>(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x24;
  long unaff_x29;
  
  lVar4 = FUN_040b1acc();
  lVar9 = *(long *)(unaff_x19 + 0x38);
  iVar1 = *(int *)(lVar4 + 0xfc);
  *(undefined4 *)(unaff_x29 + -0x18) = 0;
  puVar8 = *(undefined8 **)(lVar9 + 8);
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  uVar3 = (*(code *)*puVar8)();
  if (((uVar3 | unaff_w21) & 1) == 0) {
    iVar2 = *(int *)(unaff_x29 + -0xc);
    if (iVar2 < 2) {
      if (iVar2 == 0)
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>
      ;
      if (iVar2 == 1) {
        thunk_FUN_040dedf8(PTR_DAT_09287028);
        uVar5 = thunk_FUN_040b4efc();
        uVar6 = thunk_FUN_040dedf8(PTR_DAT_092b8d60);
        FUN_075d4b88(uVar5,uVar6,0);
      }
      else {
LAB_05171fb0:
        *(int *)(unaff_x29 + -0x24) = iVar2;
        uVar5 = thunk_FUN_040dedf8(PTR_DAT_092b8d70);
        uVar5 = thunk_FUN_040b4b34(uVar5,unaff_x29 + -0x24);
        uVar6 = thunk_FUN_040dedf8(PTR_DAT_092b8d78);
        uVar7 = thunk_FUN_040dedf8(PTR_DAT_092b8d80);
        uVar6 = FUN_074e74a4(uVar6,uVar7,uVar5,0);
        thunk_FUN_040dedf8(PTR_DAT_09285a20);
        uVar5 = thunk_FUN_040b4efc();
        FUN_076b16a0(uVar5,uVar6,0);
      }
    }
    else {
      if (iVar2 == 2)
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>
      ;
      if (iVar2 != 3) goto LAB_05171fb0;
      uVar5 = FUN_03b2fd38(*(undefined8 *)(unaff_x19 + 0x38),2);
      uVar6 = FUN_03b311d4(uVar5,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),
                           (long)&stack0x00000000 - ((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0));
      thunk_FUN_040dedf8(PTR_DAT_092b8d68);
      uVar5 = thunk_FUN_040b4efc();
      FUN_08a55a70(uVar5,uVar6,0);
    }
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar5);
    }
  }
  else {

    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>
    :
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


