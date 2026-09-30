/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_CheckAdditionalContent
ENTRY_POINT: 071082c4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_CheckAdditionalContent(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  undefined4 uVar5;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x26;
  undefined1 auVar8 [16];
  
  *(undefined1 *)(unaff_x23 + 0xd14) = 1;
  if (unaff_x22 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = FUN_06fd0380();
    uVar5 = *(undefined4 *)(unaff_x22 + 0x10);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  auVar8 = FUN_07103a44(uVar6,uVar5);
  if (auVar8._8_4_ != 0) {
    uVar7 = *unaff_x21;
    if (DAT_09836d82 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a8170);
      DAT_09836d82 = '\x01';
      if (uVar7 == 0) goto LAB_07108340;
LAB_07108310:
      uVar6 = FUN_06fd0380(uVar7,0);
      uVar7 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      if (uVar7 != 0) goto LAB_07108310;
LAB_07108340:
      uVar6 = 0;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar7 = FUN_07104e34(uVar6,uVar7,auVar8._0_8_,auVar8._8_8_);
    *unaff_x21 = uVar7;
    thunk_FUN_03d1023c();
    if (*unaff_x19 == 0) goto LAB_071085b4;
    lVar3 = FUN_06fd63a4(*unaff_x19,auVar8._8_4_ + 1,0);
    *unaff_x19 = lVar3;
    thunk_FUN_03d1023c();
  }
  if (unaff_x20 == 0) goto LAB_071085b4;
  if (*(int *)(unaff_x20 + 0x18) == 0) {
    return;
  }
  if (*(int *)(unaff_x20 + 0x18) != 1) {
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar6 = thunk_FUN_03d2ef40();
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_091b0848);
    FUN_070ccddc(uVar6,uVar4,0);
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_0920faa0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar6,uVar4);
  }
  uVar7 = FUN_06fd246c(*unaff_x19,0);
  if ((((uVar7 & 1) == 0) &&
      (uVar7 = thunk_FUN_06fd18b4(*unaff_x19,*(undefined8 *)PTR_DAT_091a5478,0), (uVar7 & 1) == 0))
     && (uVar7 = thunk_FUN_06fd18b4(*unaff_x19,*(undefined8 *)PTR_DAT_0920fa88,0), (uVar7 & 1) == 0)
     ) {
    lVar3 = *unaff_x26;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar3 = *unaff_x26;
    }
    puVar1 = PTR_DAT_0920f0d8;
    if (*(short *)(*(long *)(lVar3 + 0xb8) + 10) != 0x5c) {
      lVar3 = *unaff_x19;
      if (*(int *)(*(long *)PTR_DAT_0920f0d8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (lVar3 == 0) goto LAB_071085b4;
      iVar2 = FUN_06fd6fe0(lVar3,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
      if (iVar2 != -1) {
        if (*unaff_x19 == 0) {
LAB_071085b4:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar3 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091a5d58,
                             *(undefined8 *)PTR_DAT_091b0df8,0);
        *unaff_x19 = lVar3;
        thunk_FUN_03d1023c();
        if (*unaff_x19 == 0) goto LAB_071085b4;
        lVar3 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091b0df0,
                             *(undefined8 *)PTR_DAT_091b0de8,0);
        *unaff_x19 = lVar3;
        thunk_FUN_03d1023c();
        if (*unaff_x19 == 0) goto LAB_071085b4;
        lVar3 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091a4b80,
                             *(undefined8 *)PTR_DAT_0920fa78,0);
        *unaff_x19 = lVar3;
        thunk_FUN_03d1023c();
        if (*unaff_x19 == 0) goto LAB_071085b4;
        lVar3 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091aa4b0,
                             *(undefined8 *)PTR_DAT_0920fa80,0);
        *unaff_x19 = lVar3;
        thunk_FUN_03d1023c();
      }
    }
    lVar3 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_0920fa70 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar3 = FUN_07108648(lVar3);
    *unaff_x19 = lVar3;
  }
  else {
    *unaff_x19 = *(long *)PTR_DAT_091a3ee0;
  }
  thunk_FUN_03d1023c();
  return;
}


