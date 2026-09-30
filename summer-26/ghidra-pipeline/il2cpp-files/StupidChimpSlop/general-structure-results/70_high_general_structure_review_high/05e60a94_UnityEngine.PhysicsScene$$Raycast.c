/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Raycast
ENTRY_POINT: 05e60a94
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void UnityEngine_PhysicsScene__Raycast(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 05e60a98 to 05f60aa3 has its CatchHandler @ 05e6066c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05e60a90 with catch @ 05e60aa0
                        */
                    /* try { // try from 05e60aa4 to 05f60b8f has its CatchHandler @ 05e60aa4
                       catch() { ... } // from try @ 05e60aa4 with catch @ 05e60aa4
                       catch() { ... } // from try @ 05e60cec with catch @ 05e60aa4
                       catch() { ... } // from try @ 05e60d24 with catch @ 05e60aa4
                       catch() { ... } // from try @ 05e60d30 with catch @ 05e60aa4
                       catch() { ... } // from try @ 05e60d70 with catch @ 05e60aa4 */
  FUN_036a5e08();
  lVar3 = thunk_FUN_02d8a638(*unaff_x25);
  FUN_05e467f0(lVar3,0);
  puVar2 = Method_System_Xml_XmlValidatingReaderImpl_MoveOffEntityReference__;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) =
         *(undefined8 *)Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
    uVar4 = *unaff_x27;
    *(undefined4 *)(lVar3 + 0x18) = 4;
    lVar5 = thunk_FUN_02d8a638(uVar4);
    FUN_036a55a0(lVar5,*unaff_x20);
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      uVar4 = *(undefined8 *)Method_System_Xml_XmlUtf8RawTextWriter_InvalidXmlChar__;
      lVar8 = *unaff_x29;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_02dc1ef0();
        }
        else {
          FUN_036a5e08(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(lVar3 + 0x30) = lVar5;
        thunk_FUN_02dc1ef0((long *)(lVar3 + 0x30),lVar5);
                    /* try { // try from 05e60b90 to 05f60bbf has its CatchHandler @ 05e60d3c */
        lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                    Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                  );
        FUN_036a55a0(lVar5,*(undefined8 *)
                            Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__);
        lVar7 = thunk_FUN_02d8a638(*unaff_x28);
        FUN_05e467e8(lVar7,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) =
               *(undefined8 *)Method_System_Xml_XmlWellFormedWriter_WriteBinHex__;
          thunk_FUN_02dc1ef0();
          *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
          thunk_FUN_02dc1ef0();
          if (lVar5 != 0) {
            lVar8 = *(long *)(lVar5 + 0x10);
            lVar9 = *unaff_x19;
                    /* try { // try from 05e60bfc to 05f60c2b has its CatchHandler @ 05e60d38 */
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar6 = lVar7;
                thunk_FUN_02dc1ef0(plVar6,lVar7);
              }
              else {
                FUN_036a5e08(lVar5,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar3 + 0x28) = lVar5;
              thunk_FUN_02dc1ef0((long *)(lVar3 + 0x28),lVar5);
                    /* try { // try from 05e60c5c to 05f60c8b has its CatchHandler @ 05e60d34 */
              lVar5 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar5 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar6 = lVar3;
                  thunk_FUN_02dc1ef0(plVar6,lVar3);
                }
                else {
                  FUN_036a5e08();
                }
                *(long *)(in_stack_00000000 + 0x28) = unaff_x21;
                thunk_FUN_02dc1ef0();
                FUN_05e465bc(in_stack_00000008,in_stack_00000000,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


