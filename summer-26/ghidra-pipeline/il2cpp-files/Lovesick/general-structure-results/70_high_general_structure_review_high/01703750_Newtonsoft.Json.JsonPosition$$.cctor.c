/*
FUNCTION_NAME: Newtonsoft.Json.JsonPosition$$.cctor
ENTRY_POINT: 01703750
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonPosition___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long *unaff_x21;
  
  if ((param_1 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0)) {
LAB_01703868:
    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,0);
  }
  puVar1 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (0x11 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0x15] = param_1;
    lVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
    goto LAB_01703868;
    if (0x12 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0x16] = lVar5;
      puVar1 = PTR_DAT_033ed430;
      *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
      puVar4 = 
      Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
      ;
      puVar3 = Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__;
      puVar2 = UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_TypeInfo;
      uVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = uVar7;
      uVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,0x41);
      FUN_016a34e8(uVar7,*(undefined8 *)puVar2,0);
      lVar6 = *(long *)(*unaff_x21 + 0xb8);
      *(undefined8 *)(lVar6 + 0x18) = uVar7;
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar4;
        lVar6 = *(long *)(*unaff_x21 + 0xb8);
      }
      *(undefined8 *)(lVar6 + 0x20) = **(undefined8 **)(lVar5 + 0xb8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


