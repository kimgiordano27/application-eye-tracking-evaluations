/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$PrepareColorBuffer
ENTRY_POINT: 04c299ac
PROGRAM: hellodot-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__PrepareColorBuffer
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  System_Xml_XmlEncodedRawTextWriter__FlushBuffer(param_2,**(undefined8 **)(param_1 + 0xf28),0);
  if (unaff_x20 != 0) {
    FUN_054db260();
    plVar2 = *(long **)(unaff_x19 + 0x30);
                    /* try { // try from 04c299d8 to 04d299ff has its CatchHandler @ 04c29c74 */
    if (plVar2 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      if (lVar3 != 0) {
        uVar1 = FUN_04dbda48(lVar3,0x3f,0);
        uVar4 = FUN_04dbae1c(lVar3,uVar1,0);
                    /* try { // try from 04c29a18 to 04d29a7b has its CatchHandler @ 04c29c78 */
        uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8a78);
        FUN_05683c18(uVar5,uVar4,0);
        FUN_054d8238();
        lVar3 = FUN_054d7998();
        if (lVar3 != 0) {
          FUN_054e8f38(lVar3,*(undefined8 *)PTR_DAT_065e5f30,*(undefined8 *)PTR_DAT_065e14a8,0);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_03532d08(0,*(undefined8 *)PTR_DAT_065e5f20);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04c29aa4 to 04d29ab3 has its CatchHandler @ 04c29c70 */
  FUN_02ce7c7c();
}


