/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 06252918
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize(void)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_w8;
  uint in_w9;
  uint unaff_w19;
  int unaff_w20;
  uint *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int iVar8;
  undefined8 in_stack_00000008;
  undefined *puVar7;
  
  if ((in_w8 & in_w9) == 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
    uVar4 = thunk_FUN_037788cc();
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07daaff0);
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07da4968);
    FUN_061a1bb8(uVar4,uVar6,uVar5,0);
    goto LAB_06252c40;
  }
  if (((int)unaff_w25 < 0) || ((int)unaff_w22 <= (int)unaff_w25)) {
    thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
    uVar4 = thunk_FUN_037788cc();
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07d95d78);
    FUN_061a99e4(uVar4,uVar6,0);
    goto LAB_06252c40;
  }
  if (((unaff_w19 & 0x3000) == 0) &&
     (FUN_062525cc(), unaff_w25 = in_stack_00000008._4_4_, in_stack_00000008._4_4_ == unaff_w22)) {
    thunk_FUN_037a15ac(PTR_DAT_07da3e40);
    uVar4 = thunk_FUN_037788cc();
    puVar7 = PTR_DAT_07daeec8;
    goto LAB_06252b60;
  }
  if (unaff_w22 <= unaff_w25) goto LAB_06252acc;
  sVar1 = *(short *)(unaff_x23 + (long)(int)unaff_w25 * 2);
  if (sVar1 == 0x2b) {
    unaff_w25 = unaff_w25 + 1;
    in_stack_00000008._4_4_ = unaff_w25;
LAB_062529a0:
    bVar2 = false;
    iVar8 = 1;
LAB_062529a4:
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar3 = unaff_w25 + 1, (int)uVar3 < (int)unaff_w22)) {
      if (unaff_w22 <= unaff_w25) {
LAB_06252acc:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      if (*(short *)(unaff_x23 + (long)(int)unaff_w25 * 2) == 0x30) {
        if (unaff_w22 <= uVar3) goto LAB_06252acc;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar3 * 2) | 0x20) == 0x78) {
          unaff_w25 = unaff_w25 + 2;
          unaff_w20 = 0x10;
          in_stack_00000008._4_4_ = unaff_w25;
        }
      }
    }
    uVar3 = FUN_06252c58(unaff_w20);
    if (in_stack_00000008._4_4_ == unaff_w25) {
      thunk_FUN_037a15ac(PTR_DAT_07da3e40);
      uVar4 = thunk_FUN_037788cc();
      puVar7 = PTR_DAT_07daeec0;
    }
    else {
      if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w22 <= (int)in_stack_00000008._4_4_)) {
        *unaff_x21 = in_stack_00000008._4_4_;
        if ((unaff_w19 >> 10 & 1) == 0) {
          if ((unaff_w19 >> 0xb & 1) == 0) {
            if ((((unaff_w19 >> 9 & 1) != 0) || (unaff_w20 != 10)) || (bVar2 || uVar3 != 0x80000000)
               ) {
LAB_06252aa4:
              if (unaff_w20 != 10) {
                iVar8 = 1;
              }
              return uVar3 * iVar8;
            }
            thunk_FUN_037a15ac(PTR_DAT_07d89240);
            uVar4 = thunk_FUN_037788cc();
            puVar7 = PTR_DAT_07daaf88;
          }
          else {
            if (uVar3 < 0x10000) goto LAB_06252aa4;
            thunk_FUN_037a15ac(PTR_DAT_07d89240);
            uVar4 = thunk_FUN_037788cc();
            puVar7 = PTR_DAT_07daaf68;
          }
        }
        else {
          if (uVar3 < 0x100) goto LAB_06252aa4;
          thunk_FUN_037a15ac(PTR_DAT_07d89240);
          uVar4 = thunk_FUN_037788cc();
          puVar7 = PTR_DAT_07daaf58;
        }
        goto LAB_06252c30;
      }
      thunk_FUN_037a15ac(PTR_DAT_07da3e40);
      uVar4 = thunk_FUN_037788cc();
      puVar7 = PTR_DAT_07daead8;
    }
LAB_06252b60:
    uVar6 = thunk_FUN_037a15ac(puVar7);
    FUN_0622b80c(uVar4,uVar6,0);
  }
  else {
    if (sVar1 != 0x2d) goto LAB_062529a0;
    if (unaff_w20 != 10) {
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar4 = thunk_FUN_037788cc();
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07daeed0);
      FUN_061a843c(uVar4,uVar6,0);
      goto LAB_06252c40;
    }
    if ((unaff_w19 >> 9 & 1) == 0) {
      unaff_w25 = unaff_w25 + 1;
      iVar8 = -1;
      bVar2 = true;
      in_stack_00000008._4_4_ = unaff_w25;
      goto LAB_062529a4;
    }
    thunk_FUN_037a15ac(PTR_DAT_07d89240);
    uVar4 = thunk_FUN_037788cc();
    puVar7 = PTR_DAT_07daeed8;
LAB_06252c30:
    uVar6 = thunk_FUN_037a15ac(puVar7);
    FUN_06251dac(uVar4,uVar6);
  }
LAB_06252c40:
  uVar6 = thunk_FUN_037a15ac(PTR_DAT_07daeee8);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar4,uVar6);
}


