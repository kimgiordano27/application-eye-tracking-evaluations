/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 0328cef4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings
               (long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  undefined8 uVar5;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  double dVar6;
  double dVar7;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 0328cf04 to 0338cf0b has its CatchHandler @ 0328d1e8 */
    if (unaff_w26 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 0328cf0c to 0338cffb has its CatchHandler @ 0328cda0 */
      uVar5 = *(undefined8 *)(lVar2 + unaff_x27 * 0x10 + 0x28);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar1 = FUN_032b2484(&stack0x00000008,uVar5,0);
      lVar2 = *unaff_x23;
      if (iVar1 != 0) {
        unaff_w26 = unaff_w26 - 1;
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar2);
        lVar2 = *unaff_x23;
      }
      lVar2 = **(long **)(lVar2 + 0xb8);
      if (lVar2 == 0) goto LAB_0328d05c;
      if (unaff_w26 < *(uint *)(lVar2 + 0x18)) {
        uVar5 = *(undefined8 *)(lVar2 + (long)(int)unaff_w26 * 0x10 + 0x28);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_032b40a8(&stack0x00000008,uVar5,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x25);
        }
        dVar6 = (double)FUN_032e830c();
        lVar2 = **(long **)(*unaff_x23 + 0xb8);
        if (lVar2 == 0) goto LAB_0328d05c;
        if (unaff_w26 < *(uint *)(lVar2 + 0x18)) {
          uVar3 = *(uint *)(lVar2 + (long)(int)unaff_w26 * 0x10 + 0x20);
          dVar7 = (double)((uVar3 & 1) + 0x1d);
          iVar1 = 1;
          if (dVar7 <= dVar6) {
            do {
              uVar3 = (int)uVar3 >> 1;
              dVar6 = dVar6 - dVar7;
              dVar7 = (double)((uVar3 & 1) + 0x1d);
              iVar1 = iVar1 + 1;
            } while (dVar7 <= dVar6);
          }
          iVar4 = -0x7fffffff;
          if (dVar6 != INFINITY) {
            iVar4 = (int)dVar6 + 1;
          }
          *unaff_x21 = iVar4;
          *unaff_x20 = iVar1;
          *unaff_x19 = unaff_w26 + 0x526;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_0328d05c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


