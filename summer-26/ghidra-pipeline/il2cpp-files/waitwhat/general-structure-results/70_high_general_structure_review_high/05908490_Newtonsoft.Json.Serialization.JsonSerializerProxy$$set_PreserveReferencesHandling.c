/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_PreserveReferencesHandling
ENTRY_POINT: 05908490
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_PreserveReferencesHandling
          (ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
          undefined8 param_6,undefined8 param_7)

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
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long unaff_x26;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  ulong uStack0000000000000018;
  undefined8 uStack0000000000000020;
  uint in_stack_00000028;
  
                    /* catch() { ... } // from try @ 05908488 with catch @ 05908494 */
                    /* try { // try from 05908498 to 05a0849f has its CatchHandler @ 059084e8 */
                    /* try { // try from 059084a0 to 05a084c3 has its CatchHandler @ 05907f80 */
                    /* catch() { ... } // from try @ 059081b4 with catch @ 059084a4 */
                    /* catch() { ... } // from try @ 05908158 with catch @ 059084a8
                       catch() { ... } // from try @ 05908420 with catch @ 059084a8 */
  uStack0000000000000000 = param_6;
  uStack0000000000000008 = param_7;
  uStack0000000000000010 = param_4;
  uStack0000000000000018 = param_5;
  uStack0000000000000020 = param_2;
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f65b8);
    FUN_03188a78(PTR_DAT_070c9c80);
    FUN_03188a78(PTR_DAT_070fbe68);
    FUN_03188a78(PTR_DAT_070cda20);
    FUN_03188a78(PTR_DAT_070fbe70);
    FUN_03188a78(PTR_DAT_070c6db8);
    *(undefined1 *)(unaff_x26 + 0x85a) = 1;
  }
  *unaff_x19 = 0;
  puVar3 = PTR_DAT_070f65b8;
  iVar8 = (int)param_3;
  iVar9 = (int)param_5;
  if (iVar8 == 0) {
    if (iVar9 != 0) {
      puVar6 = (undefined1 *)&stack0x00000010;
      goto LAB_05908580;
    }
LAB_059086b0:
    uVar5 = 1;
  }
  else {
    if (iVar9 == 0) {
      puVar6 = (undefined1 *)&stack0x00000020;
      param_5 = param_3 & 0xffffffff;
LAB_05908580:
      if ((int)param_5 <= (int)unaff_w21) {
        puVar1 = (undefined1 *)&stack0x00000010;
        if (iVar8 != 0) {
          puVar1 = (undefined1 *)&stack0x00000020;
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
      uVar4 = FUN_058e1620(param_2,param_3,0);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar4 = FUN_058e5ac4(param_4,param_5,0);
        if ((uVar4 & 1) != 0) goto LAB_0590855c;
        uVar10 = 0;
        iVar7 = 1;
      }
      else {
LAB_0590855c:
        iVar7 = 0;
        uVar10 = 1;
      }
      puVar3 = PTR_DAT_070fbe68;
      iVar7 = iVar7 + iVar8 + iVar9;
      if (iVar7 <= (int)unaff_w21) {
        FUN_049f4510(&stack0x00000020);
        uVar11 = in_stack_00000028;
        puVar2 = PTR_DAT_070c9c80;
        puVar6 = (undefined1 *)register0x00000008;
        if (uVar10 == 0) {
          if (unaff_w21 <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          lVar12 = *(long *)PTR_DAT_070c9c80;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar12 = *(long *)puVar2;
          }
          *(undefined2 *)(unaff_x20 + (long)(int)uVar11 * 2) =
               *(undefined2 *)(*(long *)(lVar12 + 0xb8) + 10);
          puVar6 = (undefined1 *)0x0;
        }
        if (uVar10 == 0) {
          puVar6 = (undefined1 *)register0x00000008;
        }
        uVar10 = in_stack_00000028 + (uVar10 ^ 1);
        uVar11 = *(uint *)(puVar6 + 8);
        lVar12 = *(long *)PTR_DAT_070fbe70;
        if (uVar11 < uVar10) {
          FUN_05950030(0);
          uVar11 = *(uint *)(puVar6 + 8);
        }
        if ((*(ushort *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar10 * 2,uVar11 - uVar10,
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


