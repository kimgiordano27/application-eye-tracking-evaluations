/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetTransformationMatrixMatchingAnchorPlaneRect
ENTRY_POINT: 04c33a64
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetTransformationMatrixMatchingAnchorPlaneRect
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5f18);
                    /* try { // try from 04c33a74 to 04d33a7b has its CatchHandler @ 04c33ac4 */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e54a8);
                    /* try { // try from 04c33a7c to 04d33ab3 has its CatchHandler @ 04c339ec */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6450);
  *(undefined1 *)(unaff_x23 + 0x740) = 1;
  puVar1 = PTR_DAT_065dfdb8;
  if (unaff_x21 == 0) {
    return;
  }
  if (unaff_x22 != (long *)0x0) {
    lVar10 = *unaff_x22;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
                    /* try { // try from 04c33ab4 to 04d33ab7 has its CatchHandler @ 04c33ac0 */
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 04c33ab8 to 04d33adf has its CatchHandler @ 04c339ec */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c33ab4 with catch @ 04c33ac0
                        */
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065dfdb8) {
                    /* try { // try from 04c33ae0 to 04d33ae3 has its CatchHandler @ 04c33af4 */
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138);
          goto LAB_04c33af0;
        }
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c33a74 with catch @ 04c33ac4
                        */
        uVar11 = uVar11 - 1;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c33a50 with catch @ 04c33ac8
                        */
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_04c33af0:
                    /* catch() { ... } // from try @ 04c33ae0 with catch @ 04c33af4 */
    plVar4 = (long *)(*(code *)*puVar3)();
    puVar2 = PTR_DAT_065e6450;
    if (plVar4 != (long *)0x0) {
                    /* try { // try from 04c33b04 to 04d33b0b has its CatchHandler @ 04c33b20 */
      lVar10 = *plVar4;
                    /* try { // try from 04c33b0c to 04d33b17 has its CatchHandler @ 04c339ec */
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 04c33b18 to 04d33b1f has its CatchHandler @ 04c33b20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c33b04 with catch @ 04c33b20
                       catch(type#2 @ 00000000) { ... } // from try @ 04c33b18 with catch @ 04c33b20
                        */
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065e1720) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04c33b60;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_065e1720,0);
LAB_04c33b60:
      uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      uVar5 = FUN_04db00f0(*(undefined8 *)puVar2,uVar5,0);
      lVar10 = *unaff_x22;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
            goto LAB_04c33bd4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_04c33bd4:
      uVar6 = (*(code *)*puVar3)();
      if ((unaff_x20 & 1) == 0) {
        uVar9 = FUN_04dd5cec(0);
        lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e54a8);
        FUN_054e1c1c(lVar10,uVar6,uVar9,uVar5,0);
      }
      else {
        lVar10 = FUN_04c38eec(uVar6);
        if (lVar10 == 0) goto LAB_04c33cc4;
        lVar7 = FUN_054d80d0(lVar10,0);
        lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
        System_Xml_XmlEncodedRawTextWriter__FlushBuffer(lVar8,uVar5,0);
        plVar4 = (long *)FUN_04dd5cec(0);
        if (((plVar4 == (long *)0x0) ||
            (uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0)),
            lVar8 == 0)) || (FUN_054e1d5c(lVar8,uVar5,0), lVar7 == 0)) goto LAB_04c33cc4;
        FUN_054db260(lVar7,lVar8,0);
      }
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0x40) = lVar10;
        return;
      }
    }
  }
LAB_04c33cc4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


