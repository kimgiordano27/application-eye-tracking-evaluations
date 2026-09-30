/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 074ea31c
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(void)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364();
                    /* try { // try from 074ea32c to 075ea33b has its CatchHandler @ 074ea3c8 */
    lVar3 = *unaff_x22;
  }
  lVar7 = *(long *)(lVar3 + 0xb8);
  lVar9 = *(long *)(lVar7 + 0x48);
  if (lVar9 == 0) {
LAB_074ea4bc:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar11 = (long)(unaff_w24 >> 4) + -1;
  uVar10 = (uint)lVar11;
  if (uVar10 < *(uint *)(lVar9 + 0x18)) {
                    /* try { // try from 074ea358 to 075ea363 has its CatchHandler @ 074ea3e0 */
                    /* try { // try from 074ea364 to 075ea373 has its CatchHandler @ 074ea3e4 */
    iVar8 = (int)*(short *)(lVar9 + lVar11 * 2 + 0x20);
    iVar6 = 1 - iVar8;
    if (-1 < unaff_w23) {
      iVar6 = iVar8;
    }
                    /* try { // try from 074ea374 to 075ea387 has its CatchHandler @ 074ea3d4 */
    iVar6 = iVar6 + in_stack_00000008._4_4_;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar3 = *unaff_x22;
                    /* try { // try from 074ea388 to 075ea3c3 has its CatchHandler @ 074ea3d0 */
      lVar7 = *(long *)(lVar3 + 0xb8);
    }
    if (*(long *)(lVar7 + 0x40) == 0) goto LAB_074ea4bc;
    if (uVar10 + (unaff_w23 >> 0x1f & 0x15U) < *(uint *)(*(long *)(lVar7 + 0x40) + 0x18)) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
                    /* try { // try from 074ea3c4 to 075ea3c7 has its CatchHandler @ 074ea3cc */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074ea32c with catch @ 074ea3c8
                       try { // try from 074ea3c8 to 075ea3ff has its CatchHandler @ 074ea1e8 */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074ea3c4 with catch @ 074ea3cc
                        */
      uVar4 = FUN_074f2a58();
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074ea388 with catch @ 074ea3d0
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074ea374 with catch @ 074ea3d4
                        */
                    /* try { // try from 074ea400 to 075ea417 has its CatchHandler @ 074ea444 */
      if ((((uint)uVar4 >> 10 & 1) != 0) &&
         (uVar1 = uVar4 + (uVar4 >> 0xb & 1) + 0x3ff, bVar2 = uVar1 < uVar4, uVar4 = uVar1, bVar2))
      {
        iVar6 = iVar6 + 1;
        uVar4 = uVar1 >> 1 | 0x8000000000000000;
                    /* try { // try from 074ea418 to 075ea433 has its CatchHandler @ 074ea1e8 */
      }
      uVar10 = iVar6 + 0x3fe;
      if ((int)uVar10 < 1) {
                    /* catch() { ... } // from try @ 074ea400 with catch @ 074ea444
                       catch() { ... } // from try @ 074ea434 with catch @ 074ea444 */
                    /* try { // try from 074ea448 to 075ea44b has its CatchHandler @ 074ea454 */
                    /* try { // try from 074ea44c to 075ea457 has its CatchHandler @ 074ea1e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 074ea448 with catch @ 074ea454
                        */
        if ((uVar10 == 0xffffffcc) && (0x8000000000000057 < uVar4)) {
          uVar4 = 1;
        }
        else if ((int)uVar10 < -0x33) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 >> ((ulong)(-iVar6 - 0x3f2) & 0x3f);
        }
      }
      else {
                    /* try { // try from 074ea434 to 075ea443 has its CatchHandler @ 074ea444 */
        if (uVar10 < 0x7ff) {
          uVar4 = uVar4 >> 0xb & 0xfffffffffffff | (ulong)uVar10 << 0x34;
        }
        else {
          uVar4 = 0x7ff0000000000000;
        }
      }
      uVar5 = FUN_074f3a04();
      uVar1 = uVar4 | 0x8000000000000000;
      if ((uVar5 & 1) == 0) {
        uVar1 = uVar4;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar1;
      return auVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


