/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Context
ENTRY_POINT: 054beb88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Context
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint in_w8;
  long unaff_x19;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = PTR_DAT_06a0f540;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
                    /* try { // try from 054beb8c to 055bebbb has its CatchHandler @ 054bec14 */
  lVar11 = 0;
  bVar3 = false;
  uVar12 = in_w8;
  do {
    if (in_w8 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868(auVar13._0_8_,auVar13._8_8_);
    }
    lVar10 = *(long *)(unaff_x19 + 0x20 + lVar11 * 8);
    if (lVar10 == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
      uVar8 = thunk_FUN_02dd3144();
      uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21b40);
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21b48);
      FUN_05453ed4(uVar8,uVar9,uVar7,0);
LAB_054bedbc:
      uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21b50);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,uVar9);
    }
    if (*(int *)(lVar10 + 0x10) != 0) {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar2;
      }
      iVar4 = FUN_05372478(lVar10,**(undefined8 **)(lVar5 + 0xb8),0);
      if (iVar4 != -1) {
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar8 = thunk_FUN_02dd3144();
        uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21358);
        FUN_05452924(uVar8,uVar9,0);
        goto LAB_054bedbc;
      }
      if (bVar3) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
        FUN_053798ac();
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_054bd684(lVar10);
      if ((uVar6 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
      }
      else {
        if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
        FUN_05378f70();
      }
      uVar12 = uVar12 - 1;
      auVar13 = FUN_053798ac();
      uVar9 = auVar13._0_8_;
      bVar3 = false;
      if (0 < (int)uVar12) {
        iVar4 = *(int *)(lVar10 + 0x10) + -1;
        auVar13._8_4_ = iVar4;
        auVar13._0_8_ = uVar9;
        auVar13._12_4_ = 0;
        if (0 < *(int *)(lVar10 + 0x10)) {
          auVar13 = FUN_053674f8(lVar10,iVar4,0);
          lVar10 = *(long *)puVar2;
          uVar1 = auVar13._0_4_;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            auVar13 = thunk_FUN_02df485c(lVar10);
            lVar10 = *(long *)puVar2;
          }
          lVar5 = *(long *)(lVar10 + 0xb8);
          if ((uint)*(ushort *)(lVar5 + 10) != (uVar1 & 0xffff)) {
            if (*(int *)(lVar10 + 0xe4) == 0) {
              auVar13 = thunk_FUN_02df485c(lVar10);
              lVar10 = *(long *)puVar2;
              lVar5 = *(long *)(lVar10 + 0xb8);
            }
            if ((uint)*(ushort *)(lVar5 + 8) != (uVar1 & 0xffff)) {
              if (*(int *)(lVar10 + 0xe4) == 0) {
                auVar13 = thunk_FUN_02df485c(lVar10);
                lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
              }
              bVar3 = (uint)*(ushort *)(lVar5 + 0x18) != (uVar1 & 0xffff);
              goto LAB_054bed04;
            }
          }
          bVar3 = false;
        }
      }
    }
LAB_054bed04:
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    lVar11 = lVar11 + 1;
  } while ((int)lVar11 < (int)in_w8);
  if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x054bed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x168))();
    return;
  }
LAB_054bed88:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


