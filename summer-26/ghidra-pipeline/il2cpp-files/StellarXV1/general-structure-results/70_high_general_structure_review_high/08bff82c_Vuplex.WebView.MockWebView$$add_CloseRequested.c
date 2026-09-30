/*
FUNCTION_NAME: Vuplex.WebView.MockWebView$$add_CloseRequested
ENTRY_POINT: 08bff82c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08bff8b0) */

int Vuplex_WebView_MockWebView__add_CloseRequested(int param_1)

{
  bool in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x23;
  long *in_stack_00000010;
  
  iVar1 = -param_1;
  if (!in_ZR) {
    iVar1 = param_1;
  }
  if (in_stack_00000010 != (long *)0x0) {
    lVar3 = *in_stack_00000010;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08bff898;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000010,*unaff_x23,0);
LAB_08bff898:
    (*(code *)*puVar2)(in_stack_00000010,puVar2[1]);
  }
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if (iVar1 == 0) {
    iVar1 = FUN_07676b50(&stack0x0000001c,unaff_w19,0);
  }
  return iVar1;
}


