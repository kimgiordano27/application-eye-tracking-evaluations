/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 04d4c8a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w23;
  uint unaff_w25;
  uint unaff_w26;
  
  while( true ) {
    uVar1 = unaff_w23;
    if ((int)unaff_w25 <= (int)unaff_w23) {
      uVar1 = unaff_w25;
    }
    if (((int)unaff_w26 < 0) || ((int)unaff_w25 < 0)) break;
    if ((ulong)uVar1 + (ulong)unaff_w26 >> 0x1f != 0) {
      uVar6 = FUN_02b3cad4();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar6,*(undefined8 *)PTR_DAT_06332808);
    }
    if (*(int *)(unaff_x20 + 0x10) < (int)(uVar1 + unaff_w26)) break;
    iVar3 = thunk_FUN_02b485d0(0);
    lVar8 = *unaff_x21;
    if (lVar8 == 0) {
LAB_04d4c9d0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar5 = *(long **)(unaff_x19 + 0x28);
    if (plVar5 == (long *)0x0) goto LAB_04d4c9d0;
    lVar2 = 0;
    if (*(int *)(lVar8 + 0x18) != 0) {
      lVar2 = lVar8 + 0x20;
    }
    uVar4 = (**(code **)(*plVar5 + 0x1b8))
                      (plVar5,unaff_x20 + (ulong)unaff_w26 * 2 + (long)iVar3,uVar1,lVar2,
                       *(int *)(lVar8 + 0x18),(int)unaff_w23 <= (int)unaff_w25,
                       *(undefined8 *)(*plVar5 + 0x1c0));
    plVar5 = *(long **)(unaff_x19 + 0x10);
    if (plVar5 == (long *)0x0) goto LAB_04d4c9d0;
    (**(code **)(*plVar5 + 0x368))(plVar5,*unaff_x21,0,uVar4,*(undefined8 *)(*plVar5 + 0x370));
    if (unaff_w23 - uVar1 == 0 || (int)unaff_w23 < (int)uVar1) {
      return;
    }
    unaff_w25 = *(uint *)(unaff_x19 + 0x40);
    unaff_w23 = unaff_w23 - uVar1;
    unaff_w26 = uVar1 + unaff_w26;
  }
  thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
  uVar6 = thunk_FUN_02b79644();
  uVar7 = thunk_FUN_02ba3594(PTR_DAT_0632a080);
  FUN_04cf60a0(uVar6,uVar7,0);
  uVar7 = thunk_FUN_02ba3594(PTR_DAT_06332808);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar6,uVar7);
}


