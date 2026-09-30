/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 059084cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  int unaff_w23;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long unaff_x26;
  uint in_stack_00000028;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xe68));
                    /* catch() { ... } // from try @ 059084c4 with catch @ 059084d4 */
                    /* try { // try from 059084d8 to 05a084df has its CatchHandler @ 059084e8 */
  FUN_03188a78(PTR_DAT_070cda20);
                    /* try { // try from 059084e0 to 05a084eb has its CatchHandler @ 05907f80 */
                    /* catch() { ... } // from try @ 05908498 with catch @ 059084e8
                       catch() { ... } // from try @ 059084d8 with catch @ 059084e8 */
  FUN_03188a78(PTR_DAT_070fbe70);
  FUN_03188a78(PTR_DAT_070c6db8);
  *(undefined1 *)(unaff_x26 + 0x85a) = 1;
  *unaff_x19 = 0;
  puVar3 = PTR_DAT_070f65b8;
  if (unaff_w22 == 0) {
    if (unaff_w23 != 0) {
      puVar6 = &stack0x00000010;
      goto LAB_05908580;
    }
LAB_059086b0:
    uVar5 = 1;
  }
  else {
    if (unaff_w23 == 0) {
      puVar6 = &stack0x00000020;
      unaff_w23 = unaff_w22;
LAB_05908580:
      if (unaff_w23 <= (int)unaff_w21) {
        puVar1 = &stack0x00000010;
        if (unaff_w22 != 0) {
          puVar1 = &stack0x00000020;
        }
        FUN_049f4510(puVar1);
        iVar7 = *(int *)(puVar6 + 8);
        goto LAB_059086ac;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_070f65b8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_058e1620();
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar4 = FUN_058e5ac4();
        if ((uVar4 & 1) != 0) goto LAB_0590855c;
        uVar8 = 0;
        iVar7 = 1;
      }
      else {
LAB_0590855c:
        iVar7 = 0;
        uVar8 = 1;
      }
      puVar3 = PTR_DAT_070fbe68;
      iVar7 = iVar7 + unaff_w22 + unaff_w23;
      if (iVar7 <= (int)unaff_w21) {
        FUN_049f4510(&stack0x00000020);
        uVar9 = in_stack_00000028;
        puVar2 = PTR_DAT_070c9c80;
        puVar6 = (undefined1 *)register0x00000008;
        if (uVar8 == 0) {
          if (unaff_w21 <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          lVar10 = *(long *)PTR_DAT_070c9c80;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar10 = *(long *)puVar2;
          }
          *(undefined2 *)(unaff_x20 + (long)(int)uVar9 * 2) =
               *(undefined2 *)(*(long *)(lVar10 + 0xb8) + 10);
          puVar6 = (undefined1 *)0x0;
        }
        if (uVar8 == 0) {
          puVar6 = (undefined1 *)register0x00000008;
        }
        uVar8 = in_stack_00000028 + (uVar8 ^ 1);
        uVar9 = *(uint *)(puVar6 + 8);
        lVar10 = *(long *)PTR_DAT_070fbe70;
        if (uVar9 < uVar8) {
          FUN_05950030(0);
          uVar9 = *(uint *)(puVar6 + 8);
        }
        if ((*(ushort *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar8 * 2,uVar9 - uVar8,
                     *(undefined8 *)puVar3);
LAB_059086ac:
        *unaff_x19 = iVar7;
        goto LAB_059086b0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


