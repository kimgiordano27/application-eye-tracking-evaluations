/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Formatting
ENTRY_POINT: 0761003c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__get_Formatting(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 in_w8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xdc9) = in_w8;
  puVar1 = PTR_DAT_092d84d0;
  if (unaff_x19 == unaff_x20) {
    uVar3 = 0;
  }
  else if (unaff_x19 == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else if (unaff_x20 == (long *)0x0) {
    uVar3 = 1;
  }
  else {
    if (*unaff_x19 != *(long *)(PTR_DAT_09285980 + 0x90)) {
      unaff_x19 = (long *)0x0;
    }
    if (*unaff_x20 != *(long *)(PTR_DAT_09285980 + 0x90)) {
      unaff_x20 = (long *)0x0;
    }
    if ((unaff_x19 != (long *)0x0) && (unaff_x20 != (long *)0x0)) {
      if (*(long **)(unaff_x21 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07610098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(**(long **)(unaff_x21 + 0x10) + 0x198))();
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar4 = (long *)thunk_FUN_040b4e00();
    lVar8 = *(long *)puVar1;
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0761016c;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00(plVar4,lVar8,0);
LAB_0761016c:
                    /* WARNING: Could not recover jumptable at 0x07610184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar5)(plVar4);
      return uVar3;
    }
    plVar4 = (long *)thunk_FUN_040b4e00();
    if (plVar4 == (long *)0x0) {
      thunk_FUN_040dedf8(PTR_DAT_09287028);
      uVar6 = thunk_FUN_040b4efc();
      uVar7 = thunk_FUN_040dedf8(PTR_DAT_092d84d8);
      FUN_075d4b88(uVar6,uVar7,0);
      uVar7 = thunk_FUN_040dedf8(PTR_DAT_092d84e0);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar6,uVar7);
    }
    lVar9 = *plVar4;
    lVar8 = *(long *)puVar1;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_07610194;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar4,lVar8,0);
LAB_07610194:
    iVar2 = (*(code *)*puVar5)(plVar4);
    uVar3 = (ulong)(uint)-iVar2;
  }
  return uVar3;
}


