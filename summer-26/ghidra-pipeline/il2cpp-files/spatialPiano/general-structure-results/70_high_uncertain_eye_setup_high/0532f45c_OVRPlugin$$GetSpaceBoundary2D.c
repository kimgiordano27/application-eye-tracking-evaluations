/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 0532f45c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar9;
  
  *(undefined1 *)(unaff_x20 + 0x315) = in_w8;
  puVar3 = UnityEngine_InputSystem_EnhancedTouch_EnhancedTouchSupport_TypeInfo;
  puVar2 = UnityEngine_UnityConsent_EndUserConsent_TypeInfo;
  puVar1 = System_Xml_XmlWellFormedWriter_AttrName___TypeInfo;
  if (DAT_06bb42c1 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c1 = '\x01';
  }
                    /* catch() { ... } // from try @ 0532f3a4 with catch @ 0532f49c */
                    /* catch() { ... } // from try @ 0532f3a0 with catch @ 0532f4a0 */
  uVar4 = *(undefined8 *)puVar1;
                    /* catch() { ... } // from try @ 0532f0d4 with catch @ 0532f4a4 */
                    /* catch() { ... } // from try @ 0532f0c4 with catch @ 0532f4a8 */
                    /* catch() { ... } // from try @ 0532f39c with catch @ 0532f4ac */
                    /* catch() { ... } // from try @ 0532f220 with catch @ 0532f4b0 */
  uVar9 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x18) = uVar9;
                    /* catch() { ... } // from try @ 0532f238 with catch @ 0532f4bc */
  uVar4 = thunk_FUN_02f45270(uVar4);
                    /* catch() { ... } // from try @ 0532f0f0 with catch @ 0532f4c0 */
                    /* catch() { ... } // from try @ 0532f254 with catch @ 0532f4c4 */
                    /* catch() { ... } // from try @ 0532f090 with catch @ 0532f4c8 */
  FUN_052d23c0(uVar4,0);
                    /* catch() { ... } // from try @ 0532f1f8 with catch @ 0532f4cc */
  uVar5 = *(undefined8 *)puVar2;
                    /* catch() { ... } // from try @ 0532f02c with catch @ 0532f4d0 */
  *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
  plVar6 = (long *)FUN_02f0880c(uVar5,5);
  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                    /* try { // try from 0532f4ec to 0542f4ef has its CatchHandler @ 0532f4fc */
  FUN_0532f640(lVar7,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* catch() { ... } // from try @ 0532f4ec with catch @ 0532f4fc */
                    /* try { // try from 0532f500 to 0542f507 has its CatchHandler @ 0532f54c */
                    /* try { // try from 0532f508 to 0542f527 has its CatchHandler @ 0532ed3c */
                    /* catch() { ... } // from try @ 0532f194 with catch @ 0532f50c */
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_0532f630:
    uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                    /* try { // try from 0532f528 to 0542f52b has its CatchHandler @ 0532f538 */
    FUN_0532f640(lVar7,1);
                    /* catch() { ... } // from try @ 0532f528 with catch @ 0532f538 */
                    /* try { // try from 0532f53c to 0542f543 has its CatchHandler @ 0532f54c */
                    /* try { // try from 0532f544 to 0542f54f has its CatchHandler @ 0532ed3c */
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_0532f630;
                    /* catch() { ... } // from try @ 0532f500 with catch @ 0532f54c
                       catch() { ... } // from try @ 0532f53c with catch @ 0532f54c */
                    /* try { // try from 0532f550 to 0542fc77 has its CatchHandler @ 0532f550
                       catch() { ... } // from try @ 0532f550 with catch @ 0532f550
                       catch() { ... } // from try @ 0532fd78 with catch @ 0532f550
                       catch() { ... } // from try @ 0532ffc8 with catch @ 0532f550
                       catch() { ... } // from try @ 053301fc with catch @ 0532f550
                       catch() { ... } // from try @ 05330214 with catch @ 0532f550
                       catch() { ... } // from try @ 05330388 with catch @ 0532f550
                       catch() { ... } // from try @ 053303c4 with catch @ 0532f550 */
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
      plVar6[5] = lVar7;
      lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_0532f640(lVar7,2);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_0532f630;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
        FUN_0532f640(lVar7,3);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_0532f630;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
          plVar6[7] = lVar7;
          lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
          FUN_0532f640(lVar7,4);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_0532f630;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            *(long **)(unaff_x19 + 0x28) = plVar6;
            FUN_05116b38();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


