/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.SceneSetup$$SetupImmersiveDebugger
ENTRY_POINT: 0727e294
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_SceneSetup__SetupImmersiveDebugger(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar5;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  FUN_0568af90();
  System_MemoryExtensions__IsTypeComparableAsBytes<char>();
  lVar1 = thunk_FUN_040b4efc(*unaff_x28);
  System_Xml_XmlReader__Close();
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
LAB_0727e420:
    uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,0);
  }
  if (0xb < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[0xf] = lVar1;
    thunk_FUN_040ec700(unaff_x22 + 0xf,lVar1);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar5 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
    FUN_0568af90();
    uVar3 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                      (uVar4,uVar3,*(undefined8 *)PTR_DAT_092c1658);
    lVar1 = thunk_FUN_040b4efc(*unaff_x28);
    System_Xml_XmlReader__Close(lVar1,uVar5,uVar3,0);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
    goto LAB_0727e420;
    if (0xc < *(uint *)(unaff_x22 + 3)) {
      unaff_x22[0x10] = lVar1;
      thunk_FUN_040ec700(unaff_x22 + 0x10,lVar1);
      if (unaff_x21 != 0) {
        thunk_FUN_07df3248();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


