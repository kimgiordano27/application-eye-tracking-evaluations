/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.SceneSetup$$OnLoad
ENTRY_POINT: 0727e23c
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


void Meta_XR_ImmersiveDebugger_SceneSetup__OnLoad(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  unaff_x22[0xe] = unaff_x23;
  thunk_FUN_040ec700();
  lVar1 = *unaff_x29;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar1 = *unaff_x29;
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
  uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
  FUN_0568af90();
  uVar2 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                    (uVar4,uVar2,*(undefined8 *)PTR_DAT_092c1660);
  lVar1 = thunk_FUN_040b4efc(*unaff_x28);
  System_Xml_XmlReader__Close(lVar1,uVar5,uVar2,0);
  if ((lVar1 != 0) &&
     (lVar3 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
LAB_0727e420:
    uVar2 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar2,0);
  }
  if (0xb < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[0xf] = lVar1;
    thunk_FUN_040ec700(unaff_x22 + 0xf,lVar1);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar5 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
    FUN_0568af90();
    uVar2 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                      (uVar4,uVar2,*(undefined8 *)PTR_DAT_092c1658);
    lVar1 = thunk_FUN_040b4efc(*unaff_x28);
    System_Xml_XmlReader__Close(lVar1,uVar5,uVar2,0);
    if ((lVar1 != 0) &&
       (lVar3 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
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


