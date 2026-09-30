/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 04d4b59c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize
              (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  ulong in_x10;
  int in_w11;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  uint unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  int unaff_w29;
  undefined *puVar7;
  
  do {
    if (unaff_x21 == 0) goto LAB_04d4b630;
    iVar3 = (int)*(ulong *)(unaff_x21 + 0x18);
    if (iVar3 < in_w11) {
LAB_04d4b668:
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar5 = thunk_FUN_02b79644();
      puVar7 = PTR_DAT_063327a0;
      goto LAB_04d4b684;
    }
    if ((in_x10 & 0xffffffff) == 0) {
      param_1 = 0;
    }
    else {
      if ((int)in_x10 == 0) goto LAB_04d4b6b0;
      param_1 = param_1 + 0x20;
    }
    lVar8 = 0;
    if (((*(ulong *)(unaff_x21 + 0x18) & 0xffffffff) != 0) && (lVar8 = unaff_x28, iVar3 == 0)) {
LAB_04d4b6b0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar4 = *(long **)(unaff_x22 + 0x20);
    if (plVar4 == (long *)0x0) goto LAB_04d4b630;
    iVar3 = (**(code **)(*plVar4 + 0x1d8))
                      (plVar4,param_1 + (ulong)unaff_w26,param_4,
                       lVar8 + (ulong)(uint)(unaff_w20 << 1),unaff_w24,0,
                       *(undefined8 *)(*plVar4 + 0x1e0));
    unaff_w24 = unaff_w24 - iVar3;
    unaff_w20 = iVar3 + unaff_w20;
    if (unaff_w24 < 1) {
LAB_04d4b610:
      return unaff_w19 - unaff_w24;
    }
    plVar4 = *(long **)(unaff_x22 + 0x20);
    iVar3 = unaff_w24;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      bVar1 = *(byte *)(*(long *)PTR_DAT_0632a148 + 0x130);
      if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0632a148)) {
        uVar2 = (**(code **)(lVar8 + 0x218))(plVar4,*(undefined8 *)(lVar8 + 0x220));
        iVar3 = unaff_w24 - (unaff_w24 != 1 & uVar2);
      }
    }
    plVar4 = *(long **)(unaff_x22 + 0x10);
    iVar3 = iVar3 << (ulong)(*(byte *)(unaff_x22 + 0x44) & 0x1f);
    if (0x7f < iVar3) {
      iVar3 = unaff_w29;
    }
    if (*(char *)(unaff_x22 + 0x45) == '\0') {
      if (plVar4 == (long *)0x0) goto LAB_04d4b630;
      uVar2 = (**(code **)(*plVar4 + 0x338))
                        (plVar4,*unaff_x23,0,iVar3,*(undefined8 *)(*plVar4 + 0x340));
      unaff_w26 = 0;
      plVar4 = unaff_x23;
    }
    else {
      if (plVar4 == (long *)0x0) goto LAB_04d4b630;
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27))
      goto LAB_04d4b630;
      unaff_w26 = *(uint *)((long)plVar4 + 0x34);
      uVar2 = FUN_04d34ec0(plVar4,iVar3,0);
      plVar4 = plVar4 + 5;
    }
    if (uVar2 == 0) goto LAB_04d4b610;
    param_4 = (ulong)uVar2;
    if ((int)(uVar2 | unaff_w26) < 0) {
LAB_04d4b648:
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar5 = thunk_FUN_02b79644();
      puVar7 = PTR_DAT_0632a090;
LAB_04d4b684:
      uVar6 = thunk_FUN_02ba3594(puVar7);
      FUN_04cf60a0(uVar5,uVar6,0);
      uVar6 = thunk_FUN_02ba3594(PTR_DAT_06332798);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,uVar6);
    }
    if (param_4 + unaff_w26 >> 0x1f != 0) break;
    param_1 = *plVar4;
    if (param_1 == 0) {
LAB_04d4b630:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    in_x10 = *(ulong *)(param_1 + 0x18);
    if ((int)in_x10 < (int)(uVar2 + unaff_w26)) goto LAB_04d4b648;
    if (unaff_w20 < 0) goto LAB_04d4b668;
    in_w11 = unaff_w20 + unaff_w24;
  } while (-1 < in_w11);
  uVar5 = FUN_02b3cad4();
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar5,*(undefined8 *)PTR_DAT_06332798);
}


