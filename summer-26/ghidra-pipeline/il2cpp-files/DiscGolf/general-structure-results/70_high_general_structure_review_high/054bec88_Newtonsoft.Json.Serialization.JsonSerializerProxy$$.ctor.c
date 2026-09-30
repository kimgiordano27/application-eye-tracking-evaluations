/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 054bec88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  do {
                    /* try { // try from 054bec88 to 055becb3 has its CatchHandler @ 054be330 */
    lVar8 = *unaff_x23;
    uVar1 = auVar10._0_4_;
                    /* catch() { ... } // from try @ 054beabc with catch @ 054bec94 */
    if (*(int *)(lVar8 + 0xe4) == 0) {
      auVar10 = thunk_FUN_02df485c(lVar8);
      lVar8 = *unaff_x23;
    }
    lVar9 = *(long *)(lVar8 + 0xb8);
    if ((uint)*(ushort *)(lVar9 + 10) == (uVar1 & 0xffff)) {
LAB_054becd8:
      bVar2 = false;
                    /* try { // try from 054becdc to 055becdf has its CatchHandler @ 054bede0 */
    }
    else {
                    /* try { // try from 054becb4 to 055becb7 has its CatchHandler @ 054bed8c */
      if (*(int *)(lVar8 + 0xe4) == 0) {
        auVar10 = thunk_FUN_02df485c(lVar8);
                    /* try { // try from 054becc4 to 055beccb has its CatchHandler @ 054bee04 */
        lVar8 = *unaff_x23;
        lVar9 = *(long *)(lVar8 + 0xb8);
      }
                    /* try { // try from 054beccc to 055beccf has its CatchHandler @ 054bedf8 */
                    /* try { // try from 054becd0 to 055becd3 has its CatchHandler @ 054bedf4 */
                    /* try { // try from 054becd4 to 055becdb has its CatchHandler @ 054bedec */
      if ((uint)*(ushort *)(lVar9 + 8) == (uVar1 & 0xffff)) goto LAB_054becd8;
                    /* try { // try from 054bece0 to 055bece7 has its CatchHandler @ 054beddc */
      if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 054bece8 to 055beceb has its CatchHandler @ 054bedd8 */
                    /* try { // try from 054becec to 055becf3 has its CatchHandler @ 054bedd0 */
        auVar10 = thunk_FUN_02df485c(lVar8);
                    /* try { // try from 054becf4 to 055becf7 has its CatchHandler @ 054bedc4 */
        lVar9 = *(long *)(*unaff_x23 + 0xb8);
      }
                    /* try { // try from 054becf8 to 055becfb has its CatchHandler @ 054bedbc */
      bVar2 = (uint)*(ushort *)(lVar9 + 0x18) != (uVar1 & 0xffff);
    }
    do {
      do {
        do {
          unaff_x22 = unaff_x22 + 1;
          if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x22) {
            if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x054bed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*unaff_x20 + 0x168))();
              return;
            }
            goto LAB_054bed88;
          }
          if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x22) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868(auVar10._0_8_,auVar10._8_8_);
          }
          lVar8 = *(long *)(unaff_x24 + unaff_x22 * 8);
          if (lVar8 == 0) {
            thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
            uVar6 = thunk_FUN_02dd3144();
            uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21b40);
            uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a21b48);
            FUN_05453ed4(uVar6,uVar7,uVar5,0);
LAB_054bedbc:
            uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21b50);
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar6,uVar7);
          }
        } while (*(int *)(lVar8 + 0x10) == 0);
        lVar9 = *unaff_x23;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar9 = *unaff_x23;
        }
        iVar3 = FUN_05372478(lVar8,**(undefined8 **)(lVar9 + 0xb8),0);
        if (iVar3 != -1) {
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar6 = thunk_FUN_02dd3144();
          uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21358);
          FUN_05452924(uVar6,uVar7,0);
          goto LAB_054bedbc;
        }
        if (bVar2) {
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
          FUN_053798ac();
        }
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_054bd684(lVar8);
        if ((uVar4 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) goto LAB_054bed88;
        }
        else {
          if (unaff_x20 == (long *)0x0) {
LAB_054bed88:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_05378f70();
        }
        unaff_w25 = unaff_w25 + -1;
        auVar10 = FUN_053798ac();
        uVar7 = auVar10._0_8_;
        bVar2 = false;
      } while (unaff_w25 < 1);
      iVar3 = *(int *)(lVar8 + 0x10) + -1;
      auVar10._8_4_ = iVar3;
      auVar10._0_8_ = uVar7;
      auVar10._12_4_ = 0;
    } while (*(int *)(lVar8 + 0x10) < 1);
    auVar10 = FUN_053674f8(lVar8,iVar3,0);
  } while( true );
}


