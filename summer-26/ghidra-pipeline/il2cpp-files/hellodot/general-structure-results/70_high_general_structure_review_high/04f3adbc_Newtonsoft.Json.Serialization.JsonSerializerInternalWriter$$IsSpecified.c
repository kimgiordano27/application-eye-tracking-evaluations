/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 04f3adbc
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(long param_1)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *unaff_x19;
  ushort *puVar7;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  uint unaff_w25;
  uint unaff_w26;
  uint uVar9;
  int unaff_w27;
  long *unaff_x29;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3ad34 with catch @ 04f3adbc
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3ad40 with catch @ 04f3adc0
                        */
  if (*(int *)(param_1 + 0xe0) == 0) {
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3ac34 with catch @ 04f3adc4
                        */
    thunk_FUN_02cd038c();
  }
  if (unaff_w25 - 0x30 < 10) {
                    /* try { // try from 04f3addc to 0503adf3 has its CatchHandler @ 04f3ae20 */
    uVar9 = (unaff_w25 - 0x30) + unaff_w26 * 10;
                    /* try { // try from 04f3adf4 to 0503ae0f has its CatchHandler @ 04f3abc4 */
    unaff_w24 = unaff_w27 + 10;
    iVar1 = 2 - in_stack_00000018._4_4_;
    if (-1 < 1 - in_stack_00000018._4_4_) {
      iVar1 = 1 - in_stack_00000018._4_4_;
    }
                    /* try { // try from 04f3ae10 to 0503ae1f has its CatchHandler @ 04f3ae20 */
    bVar4 = (ulong)(uint)(iVar1 >> 1) + 0x7fffffff < (ulong)uVar9;
                    /* catch() { ... } // from try @ 04f3addc with catch @ 04f3ae20
                       catch() { ... } // from try @ 04f3ae10 with catch @ 04f3ae20 */
                    /* try { // try from 04f3ae24 to 0503ae27 has its CatchHandler @ 04f3ae30 */
                    /* try { // try from 04f3ae28 to 0503ae33 has its CatchHandler @ 04f3abc4 */
    bVar3 = 0xccccccc < (int)unaff_w26 || bVar4;
    if (unaff_w24 < unaff_w23) {
      do {
        unaff_w25 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (9 < unaff_w25 - 0x30) goto LAB_04f3aea8;
        unaff_w24 = unaff_w24 + 1;
        bVar3 = true;
      } while (unaff_w23 != unaff_w24);
    }
    else if (0xccccccc >= (int)unaff_w26 && !bVar4) goto LAB_04f3afb4;
  }
  else {
    bVar3 = false;
    uVar9 = unaff_w26;
LAB_04f3aea8:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((unaff_w25 - 9 < 5) || (unaff_w25 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_04f3af80;
      uVar8 = unaff_w24 + 1;
      if ((int)uVar8 < (int)unaff_w23) {
        puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        do {
          if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          uVar2 = *puVar7;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_04f3af24;
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (unaff_w23 != uVar8);
      }
      else {
LAB_04f3af24:
        if (uVar8 < unaff_w23) goto LAB_04f3af38;
      }
    }
    else {
LAB_04f3af38:
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar5 = FUN_04f3d628();
      if ((uVar5 & 1) == 0) {
LAB_04f3af80:
        in_stack_00000018._4_4_ = 0;
        uVar6 = 0;
        goto LAB_04f3af88;
      }
    }
    if (!bVar3) {
LAB_04f3afb4:
      uVar6 = 1;
      in_stack_00000018._4_4_ = uVar9 * in_stack_00000018._4_4_;
      goto LAB_04f3af88;
    }
  }
  in_stack_00000018._4_4_ = 0;
  uVar6 = 0;
  *in_stack_00000010 = 1;
LAB_04f3af88:
  *unaff_x19 = in_stack_00000018._4_4_;
  return uVar6;
}


