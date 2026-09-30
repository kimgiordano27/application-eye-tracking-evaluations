/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Analytics.MySpaceClosed$$Create
ENTRY_POINT: 04488f10
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void OVA_StellarX_Core_Framework_Analytics_MySpaceClosed__Create
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long in_x9;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(in_x10[4] + 7) * 0x10 + 0x138);
      goto LAB_04488f38;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_04488f38:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) != 0) {
    return;
  }
  plVar5 = *(long **)(unaff_x19 + 0xf8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar5;
  uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar2 != 0) {
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0928ce30) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 8) * 0x10 + 0x138);
        goto LAB_04488fb4;
      }
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_0928ce30,8);
LAB_04488fb4:
                    /* WARNING: Could not recover jumptable at 0x04488fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


