/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 07186450
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  *(undefined8 *)(unaff_x19 + 0x70) = **(undefined8 **)(param_1 + 0xc60);
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x70));
  if (0xb < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)PTR_DAT_09212c48;
    thunk_FUN_03d1023c();
                    /* try { // try from 07186490 to 072864f7 has its CatchHandler @ 07186490
                       catch() { ... } // from try @ 07186490 with catch @ 07186490
                       catch() { ... } // from try @ 071865e4 with catch @ 07186490
                       catch() { ... } // from try @ 07186640 with catch @ 07186490
                       catch() { ... } // from try @ 071866c0 with catch @ 07186490 */
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
    thunk_FUN_03d1023c();
    lVar10 = FUN_03d2d394(*unaff_x21,5);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(lVar10 + 0x18) != 0) {
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_09212d28;
      thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x20));
      if (1 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_09212c08;
                    /* try { // try from 071864f8 to 072864fb has its CatchHandler @ 071865e8 */
        thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x28));
                    /* try { // try from 07186508 to 07286513 has its CatchHandler @ 07186604 */
        if (2 < *(uint *)(lVar10 + 0x18)) {
                    /* try { // try from 07186518 to 0728651b has its CatchHandler @ 07186600 */
          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_09212ca0;
          thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x30));
                    /* try { // try from 0718652c to 0728653f has its CatchHandler @ 07186610 */
          if (3 < *(uint *)(lVar10 + 0x18)) {
                    /* try { // try from 07186544 to 0728654f has its CatchHandler @ 071865fc */
            *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_09212c58;
            thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x38));
            puVar9 = PTR_DAT_09212be0;
            puVar8 = PTR_DAT_09212bd8;
            puVar7 = PTR_DAT_09212bd0;
            puVar6 = PTR_DAT_09212bc8;
            puVar5 = PTR_DAT_09212bc0;
            puVar4 = PTR_DAT_091bf788;
            puVar3 = PTR_DAT_091bede0;
            puVar2 = PTR_DAT_091a7688;
            puVar1 = PTR_DAT_091a0fc8;
            if (4 < *(uint *)(lVar10 + 0x18)) {
                    /* try { // try from 07186568 to 0728656b has its CatchHandler @ 071865e4 */
                    /* try { // try from 0718657c to 07286587 has its CatchHandler @ 071865f4 */
                    /* try { // try from 0718658c to 0728658f has its CatchHandler @ 071865f0 */
                    /* try { // try from 071865a0 to 072865b3 has its CatchHandler @ 0718660c */
              *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_09212cb0;
                    /* try { // try from 071865b8 to 072865c3 has its CatchHandler @ 071865ec */
              thunk_FUN_03d1023c();
              plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
              *plVar11 = lVar10;
              thunk_FUN_03d1023c(plVar11,lVar10);
                    /* try { // try from 071865d4 to 072865d7 has its CatchHandler @ 07186608 */
                    /* try { // try from 071865d8 to 072865db has its CatchHandler @ 07186610 */
              uVar12 = FUN_03d2d394(*(undefined8 *)puVar1,0x100);
                    /* try { // try from 071865dc to 072865df has its CatchHandler @ 071865f8 */
                    /* try { // try from 071865e0 to 072865e3 has its CatchHandler @ 0718660c */
                    /* catch() { ... } // from try @ 07186568 with catch @ 071865e4
                       try { // try from 071865e4 to 07286627 has its CatchHandler @ 07186490 */
                    /* catch() { ... } // from try @ 071864f8 with catch @ 071865e8 */
              FUN_0708f30c(uVar12,*(undefined8 *)puVar8,0);
                    /* catch() { ... } // from try @ 071865b8 with catch @ 071865ec */
                    /* catch() { ... } // from try @ 0718658c with catch @ 071865f0 */
                    /* catch() { ... } // from try @ 0718657c with catch @ 071865f4 */
                    /* catch() { ... } // from try @ 071865dc with catch @ 071865f8 */
              puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
              *puVar13 = uVar12;
                    /* catch() { ... } // from try @ 07186544 with catch @ 071865fc */
              thunk_FUN_03d1023c(puVar13,uVar12);
                    /* catch() { ... } // from try @ 07186518 with catch @ 07186600 */
                    /* catch() { ... } // from try @ 07186508 with catch @ 07186604 */
                    /* catch() { ... } // from try @ 071865d4 with catch @ 07186608 */
              uVar12 = FUN_03d2d394(*(undefined8 *)puVar2,0x1e);
                    /* catch() { ... } // from try @ 071865a0 with catch @ 0718660c
                       catch() { ... } // from try @ 071865e0 with catch @ 0718660c */
                    /* catch() { ... } // from try @ 0718652c with catch @ 07186610
                       catch() { ... } // from try @ 071865d8 with catch @ 07186610 */
              FUN_0708f30c(uVar12,*(undefined8 *)puVar9,0);
                    /* try { // try from 07186628 to 0728663f has its CatchHandler @ 071866b8 */
              puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
              *puVar13 = uVar12;
              thunk_FUN_03d1023c(puVar13,uVar12);
              uVar12 = FUN_03d2d394(*(undefined8 *)puVar4,0xf);
                    /* try { // try from 07186640 to 072866a7 has its CatchHandler @ 07186490 */
              FUN_0708f30c(uVar12,*(undefined8 *)puVar7,0);
              puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
              *puVar13 = uVar12;
              thunk_FUN_03d1023c(puVar13,uVar12);
              uVar12 = FUN_03d2d394(*(undefined8 *)puVar2,0x2a);
              FUN_0708f30c(uVar12,*(undefined8 *)puVar6,0);
              puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
              *puVar13 = uVar12;
              thunk_FUN_03d1023c(puVar13,uVar12);
              uVar12 = FUN_03d2d394(*(undefined8 *)puVar3,0x15);
                    /* try { // try from 071866a8 to 072866b7 has its CatchHandler @ 071866b8 */
              FUN_0708f30c(uVar12,*(undefined8 *)puVar5,0);
                    /* catch() { ... } // from try @ 07186628 with catch @ 071866b8
                       catch() { ... } // from try @ 071866a8 with catch @ 071866b8 */
                    /* try { // try from 071866bc to 072866bf has its CatchHandler @ 071866c8 */
                    /* try { // try from 071866c0 to 072866cb has its CatchHandler @ 07186490 */
                    /* catch() { ... } // from try @ 071866bc with catch @ 071866c8 */
              puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
              *puVar13 = uVar12;
              thunk_FUN_03d1023c(puVar13,uVar12);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


