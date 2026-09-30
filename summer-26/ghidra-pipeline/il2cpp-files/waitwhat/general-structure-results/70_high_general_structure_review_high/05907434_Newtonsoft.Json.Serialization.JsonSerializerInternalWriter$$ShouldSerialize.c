/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 05907434
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize(void)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_03188a78(PTR_DAT_070c9c80);
  FUN_03188a78(PTR_DAT_07105178);
  *(undefined1 *)(unaff_x23 + 0x852) = 1;
  uVar5 = FUN_03188b1c(*unaff_x21,8);
  FUN_0585c08c(uVar5,*unaff_x19,0);
  uVar6 = *unaff_x21;
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30) = uVar5;
  uVar5 = FUN_03188b1c(uVar6,0);
  lVar7 = *unaff_x22;
  iVar1 = *(int *)(lVar7 + 0xe4);
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38) = uVar5;
  if (iVar1 == 0) {
    thunk_FUN_031e5338(lVar7);
  }
  uVar4 = FUN_0318f88c();
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = uVar4;
  uVar4 = FUN_0318f88c();
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 10) = uVar4;
  uVar4 = FUN_0318f88c();
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 8) = uVar4;
  uVar4 = FUN_0318f894();
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc) = uVar4;
  uVar5 = FUN_05907354();
  lVar7 = *(long *)(PTR_DAT_070c1958 + 0x88);
  iVar1 = *(int *)(lVar7 + 0xe4);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar5;
  if (iVar1 == 0) {
    thunk_FUN_031e5338(lVar7);
  }
  uVar5 = FUN_05897428(*(long *)(*unaff_x20 + 0xb8) + 10,0);
  uVar6 = *unaff_x21;
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = uVar5;
  lVar7 = FUN_03188b1c(uVar6,3);
  if (lVar7 != 0) {
                    /* try { // try from 05907548 to 05a07677 has its CatchHandler @ 05907548
                       catch() { ... } // from try @ 05907548 with catch @ 05907548
                       catch() { ... } // from try @ 05907730 with catch @ 05907548
                       catch() { ... } // from try @ 059077cc with catch @ 05907548
                       catch() { ... } // from try @ 05907868 with catch @ 05907548 */
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 != 0) {
      lVar8 = *(long *)(*unaff_x20 + 0xb8);
      *(undefined2 *)(lVar7 + 0x20) = *(undefined2 *)(lVar8 + 10);
      if ((uVar2 != 1) && (*(undefined2 *)(lVar7 + 0x22) = *(undefined2 *)(lVar8 + 8), 2 < uVar2)) {
        sVar3 = *(short *)(lVar8 + 0x18);
        *(long *)(lVar8 + 0x20) = lVar7;
        *(short *)(lVar7 + 0x24) = sVar3;
        *(bool *)(lVar8 + 0x28) = *(short *)(lVar8 + 10) == sVar3;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


