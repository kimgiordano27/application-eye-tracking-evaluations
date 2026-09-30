/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Analytics.NewSpaceClosed$$.ctor
ENTRY_POINT: 0448a4dc
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


void OVA_StellarX_Core_Framework_Analytics_NewSpaceClosed___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  long unaff_x23;
  undefined8 unaff_x24;
  uint unaff_w27;
  undefined8 *unaff_x28;
  uint in_stack_00000080;
  undefined8 in_stack_00000098;
  
  while( true ) {
    FUN_04539700(param_1,param_2,param_3,param_4);
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928caa0);
    FUN_0567191c(uVar2,unaff_x21,*(undefined8 *)PTR_DAT_09299d50,0);
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285948);
    FUN_056893d4();
    if (unaff_x23 == 0) break;
    FUN_045398e4(unaff_x23,unaff_x24,*unaff_x28,uVar2,0,uVar3,0,0);
    unaff_w27 = unaff_w27 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w27) {
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09299d58);
    FUN_0448b550(unaff_x21,0);
    if (unaff_x21 == 0) break;
    *(long *)(unaff_x21 + 0x18) = unaff_x19;
    thunk_FUN_040ec700((long *)(unaff_x21 + 0x18));
    *(uint *)(unaff_x21 + 0x10) = unaff_w27;
    in_stack_00000080 = unaff_w27;
    uVar2 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x00000080);
    param_2 = FUN_074e74a4(*(undefined8 *)PTR_DAT_09295f58,*(undefined8 *)PTR_DAT_0928df70,uVar2,0);
    plVar7 = *(long **)(unaff_x19 + 0x120);
    if (plVar7 == (long *)0x0) break;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09299c28) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0448a478;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_09299c28,2);
LAB_0448a478:
    (*(code *)*puVar1)(plVar7,param_2,puVar1[1]);
    unaff_x23 = *(long *)(unaff_x19 + 0x170);
    in_stack_00000098 = *(undefined8 *)PTR_DAT_09299c30;
    param_3 = FUN_076b01b4(&stack0x00000098,0);
    param_1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928cab8);
    param_4 = 0;
    unaff_x24 = param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


