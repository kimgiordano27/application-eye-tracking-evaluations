/*
FUNCTION_NAME: FUN_015d1514
ENTRY_POINT: 015d1514
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_015d1514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar2 = Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__;
  puVar1 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
  if ((DAT_03777ee3 & 1) == 0) {
                    /* try { // try from 015d154c to 016d155b has its CatchHandler @ 015d155c */
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
                    /* catch() { ... } // from try @ 015d14e4 with catch @ 015d155c
                       catch() { ... } // from try @ 015d154c with catch @ 015d155c */
    thunk_FUN_00d48444(OVRPlugin_TrackingConfidence___TypeInfo);
                    /* try { // try from 015d1560 to 016d1563 has its CatchHandler @ 015d156c */
                    /* try { // try from 015d1564 to 016d156f has its CatchHandler @ 015d0e10 */
    thunk_FUN_00d48444(Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__);
                    /* catch() { ... } // from try @ 015d14c8 with catch @ 015d156c
                       catch() { ... } // from try @ 015d1560 with catch @ 015d156c */
    thunk_FUN_00d48444(Mono_Security_Interface_TlsException_TypeInfo);
    DAT_03777ee3 = 1;
  }
  uVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,0x18);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  plVar4 = (long *)FUN_0162e1d4(0);
  puVar1 = OVRPlugin_TrackingConfidence___TypeInfo;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x248))(plVar4,2,*(undefined8 *)(*plVar4 + 0x250));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 015d15dc to 016d169f has its CatchHandler @ 015d15dc
                       catch() { ... } // from try @ 015d15dc with catch @ 015d15dc
                       catch() { ... } // from try @ 015d186c with catch @ 015d15dc
                       catch() { ... } // from try @ 015d18dc with catch @ 015d15dc
                       catch() { ... } // from try @ 015d1944 with catch @ 015d15dc
                       catch() { ... } // from try @ 015d19ac with catch @ 015d15dc */
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_015d2250(param_2,0);
    (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x200));
    plVar6 = (long *)(**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
    puVar1 = Mono_Security_Interface_TlsException_TypeInfo;
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)Mono_Security_Interface_TlsException_TypeInfo) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_015d1674;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(plVar6,*(long *)Mono_Security_Interface_TlsException_TypeInfo,3);
LAB_015d1674:
      (*(code *)*puVar7)(plVar6,param_1,0,8,uVar3,0,puVar7[1]);
      uVar5 = FUN_015d2250(param_2,7);
                    /* try { // try from 015d16a0 to 016d16a7 has its CatchHandler @ 015d1908 */
      (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x200));
      plVar6 = (long *)(**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
      if (plVar6 != (long *)0x0) {
                    /* try { // try from 015d16cc to 016d16d3 has its CatchHandler @ 015d18f4 */
        lVar9 = *plVar6;
        lVar8 = *(long *)puVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto LAB_015d1720;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
                    /* try { // try from 015d1704 to 016d1707 has its CatchHandler @ 015d18f0 */
                    /* try { // try from 015d1708 to 016d172b has its CatchHandler @ 015d1914 */
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,lVar8,3);
LAB_015d1720:
        (*(code *)*puVar7)(plVar6,param_1,0,8,uVar3,8,puVar7[1]);
                    /* try { // try from 015d1740 to 016d174b has its CatchHandler @ 015d1904 */
        uVar5 = FUN_015d2250(param_2,0xe);
                    /* try { // try from 015d175c to 016d175f has its CatchHandler @ 015d1900 */
        (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x200));
                    /* try { // try from 015d1770 to 016d1777 has its CatchHandler @ 015d18fc */
        plVar4 = (long *)(**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
        if (plVar4 != (long *)0x0) {
          lVar9 = *plVar4;
          lVar8 = *(long *)puVar1;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                goto LAB_015d17cc;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar4,lVar8,3);
LAB_015d17cc:
          (*(code *)*puVar7)(plVar4,param_1,0,8,uVar3,0x10,puVar7[1]);
          return uVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


