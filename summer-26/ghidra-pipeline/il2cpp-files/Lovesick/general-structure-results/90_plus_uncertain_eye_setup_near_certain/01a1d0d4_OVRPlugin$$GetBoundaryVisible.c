/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryVisible
ENTRY_POINT: 01a1d0d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryVisible
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long unaff_x21;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
                    /* try { // try from 01a1d0d4 to 01b1d0d7 has its CatchHandler @ 01a1d0dc */
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_7) {
                    /* catch() { ... } // from try @ 01a1d028 with catch @ 01a1d0fc
                       catch() { ... } // from try @ 01a1d0d0 with catch @ 01a1d0fc */
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_01a1d108;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
                    /* try { // try from 01a1d0d8 to 01b1d0db has its CatchHandler @ 01a1d0ec */
                    /* catch() { ... } // from try @ 01a1d0d4 with catch @ 01a1d0dc
                       try { // try from 01a1d0dc to 01b1d113 has its CatchHandler @ 01a1cf20 */
                    /* catch() { ... } // from try @ 01a1d010 with catch @ 01a1d0e0 */
  puVar1 = (undefined8 *)FUN_00d59724();
                    /* catch() { ... } // from try @ 01a1d0a0 with catch @ 01a1d0e4 */
LAB_01a1d108:
  (*(code *)*puVar1)();
                    /* try { // try from 01a1d114 to 01b1d117 has its CatchHandler @ 01a1d124 */
  if (unaff_x21 != 0) {
                    /* catch() { ... } // from try @ 01a1d114 with catch @ 01a1d124 */
    FUN_01a1ca08();
    if (*(char *)(unaff_x21 + 0x2c) != '\0') {
      return;
    }
                    /* try { // try from 01a1d134 to 01b1d16f has its CatchHandler @ 01a1d184 */
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x150);
      if (*(int *)(*(long *)Method_Oculus_Interaction_HandRootOffset_HandleHandUpdated__ + 0xe0) ==
          0) {
        thunk_FUN_00d32864();
      }
      FUN_019f7214();
                    /* try { // try from 01a1d170 to 01b1d17b has its CatchHandler @ 01a1cf20 */
      uVar6 = FUN_01a1c958();
      if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 01a1d17c to 01b1d183 has its CatchHandler @ 01a1d184 */
                    /* catch() { ... } // from try @ 01a1d134 with catch @ 01a1d184
                       catch() { ... } // from try @ 01a1d17c with catch @ 01a1d184 */
                    /* try { // try from 01a1d188 to 01b1d353 has its CatchHandler @ 01a1d188
                       catch() { ... } // from try @ 01a1d188 with catch @ 01a1d188
                       catch() { ... } // from try @ 01a1dd68 with catch @ 01a1d188
                       catch() { ... } // from try @ 01a1dec0 with catch @ 01a1d188
                       catch() { ... } // from try @ 01a1e0c0 with catch @ 01a1d188 */
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x140);
        uVar10 = param_4;
        FUN_019f7424();
        uVar7 = FUN_02698ebc(0);
        lVar2 = FUN_0268fd10();
        if (lVar2 != 0) {
          FUN_026a01f4(uVar6,uVar8,param_4,uVar7,uVar9,uVar10,param_5,lVar2,0);
          if (*(long *)(unaff_x19 + 0x38) != 0) {
            FUN_0266622c(*(long *)(unaff_x19 + 0x38),1,0);
            plVar5 = *(long **)(unaff_x19 + 0x50);
            if (plVar5 == (long *)0x0) {
              uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa0);
            }
            else {
              lVar2 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar4 + -2) ==
                      *(long *)
                       Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                     ) {
                    puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                    goto LAB_01a1d268;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 4;
                } while (uVar3 != 0);
              }
              puVar1 = (undefined8 *)
                       FUN_00d59724(plVar5,*(long *)
                                            Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                                    ,0);
LAB_01a1d268:
              uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
            }
            lVar2 = 0x90;
            if (*(char *)(unaff_x19 + 0xa8) != '\0') {
              lVar2 = 0x88;
            }
            if (*(long *)(unaff_x19 + lVar2) != 0) {
              FUN_0265f96c(uVar3,*(long *)(unaff_x19 + lVar2),0);
              FUN_01a1ce84();
              FUN_01a1d2d0();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


