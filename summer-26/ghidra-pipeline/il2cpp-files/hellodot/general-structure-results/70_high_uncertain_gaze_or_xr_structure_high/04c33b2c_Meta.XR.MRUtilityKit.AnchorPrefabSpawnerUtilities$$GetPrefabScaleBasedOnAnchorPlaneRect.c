/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetPrefabScaleBasedOnAnchorPlaneRect
ENTRY_POINT: 04c33b2c
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetPrefabScaleBasedOnAnchorPlaneRect
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_04c33b60;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c33b60:
  uVar2 = (*(code *)*puVar1)();
  uVar2 = FUN_04db00f0(*unaff_x25,uVar2,0);
  lVar8 = *unaff_x22;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
        goto LAB_04c33bd4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c33bd4:
                    /* try { // try from 04c33be0 to 04d33dcb has its CatchHandler @ 04c33be0
                       catch() { ... } // from try @ 04c33be0 with catch @ 04c33be0
                       catch() { ... } // from try @ 04c33e9c with catch @ 04c33be0
                       catch() { ... } // from try @ 04c33fc4 with catch @ 04c33be0
                       catch() { ... } // from try @ 04c34068 with catch @ 04c33be0 */
  uVar3 = (*(code *)*puVar1)();
  if ((unaff_x20 & 1) == 0) {
    uVar7 = FUN_04dd5cec(0);
    lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e54a8);
    FUN_054e1c1c(lVar8,uVar3,uVar7,uVar2,0);
  }
  else {
    lVar8 = FUN_04c38eec(uVar3);
    if (lVar8 == 0) goto LAB_04c33cc4;
    lVar4 = FUN_054d80d0(lVar8,0);
    lVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
    System_Xml_XmlEncodedRawTextWriter__FlushBuffer(lVar5,uVar2,0);
    plVar6 = (long *)FUN_04dd5cec(0);
    if (plVar6 == (long *)0x0) goto LAB_04c33cc4;
    uVar2 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    if ((lVar5 == 0) || (FUN_054e1d5c(lVar5,uVar2,0), lVar4 == 0)) goto LAB_04c33cc4;
    FUN_054db260(lVar4,lVar5,0);
  }
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x40) = lVar8;
    return;
  }
LAB_04c33cc4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


