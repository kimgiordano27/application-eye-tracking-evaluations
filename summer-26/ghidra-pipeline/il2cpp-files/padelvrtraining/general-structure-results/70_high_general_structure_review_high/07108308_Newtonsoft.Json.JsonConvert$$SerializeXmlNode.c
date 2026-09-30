/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 07108308
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeXmlNode(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w22;
  ulong unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  
  if (in_w8 == 0) {
    FUN_03d2d2b0(PTR_DAT_091a8170);
    *(undefined1 *)(unaff_x25 + 0xd82) = 1;
    if (unaff_x24 == 0) goto LAB_07108340;
LAB_07108310:
    uVar3 = FUN_06fd0380();
    unaff_x24 = (ulong)*(uint *)(unaff_x24 + 0x10);
  }
  else {
    if (unaff_x24 != 0) goto LAB_07108310;
LAB_07108340:
    uVar3 = 0;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar3 = FUN_07104e34(uVar3,unaff_x24);
  *unaff_x21 = uVar3;
  thunk_FUN_03d1023c();
  if (*unaff_x19 != 0) {
    lVar4 = FUN_06fd63a4(*unaff_x19,unaff_w22 + 1,0);
    *unaff_x19 = lVar4;
    thunk_FUN_03d1023c();
    if (unaff_x20 != 0) {
      if (*(int *)(unaff_x20 + 0x18) == 0) {
        return;
      }
      if (*(int *)(unaff_x20 + 0x18) != 1) {
        thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
        uVar3 = thunk_FUN_03d2ef40();
        uVar6 = thunk_FUN_03d1e194(PTR_DAT_091b0848);
        FUN_070ccddc(uVar3,uVar6,0);
        uVar6 = thunk_FUN_03d1e194(PTR_DAT_0920faa0);
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar3,uVar6);
      }
      uVar5 = FUN_06fd246c(*unaff_x19,0);
      if ((((uVar5 & 1) == 0) &&
          (uVar5 = thunk_FUN_06fd18b4(*unaff_x19,*(undefined8 *)PTR_DAT_091a5478,0),
          (uVar5 & 1) == 0)) &&
         (uVar5 = thunk_FUN_06fd18b4(*unaff_x19,*(undefined8 *)PTR_DAT_0920fa88,0), (uVar5 & 1) == 0
         )) {
        lVar4 = *unaff_x26;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar4 = *unaff_x26;
        }
        puVar1 = PTR_DAT_0920f0d8;
        if (*(short *)(*(long *)(lVar4 + 0xb8) + 10) != 0x5c) {
          lVar4 = *unaff_x19;
          if (*(int *)(*(long *)PTR_DAT_0920f0d8 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          if (lVar4 == 0) goto LAB_071085b4;
          iVar2 = FUN_06fd6fe0(lVar4,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
          if (iVar2 != -1) {
            if (*unaff_x19 == 0) goto LAB_071085b4;
            lVar4 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091a5d58,
                                 *(undefined8 *)PTR_DAT_091b0df8,0);
            *unaff_x19 = lVar4;
            thunk_FUN_03d1023c();
            if (*unaff_x19 == 0) goto LAB_071085b4;
            lVar4 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091b0df0,
                                 *(undefined8 *)PTR_DAT_091b0de8,0);
            *unaff_x19 = lVar4;
            thunk_FUN_03d1023c();
            if (*unaff_x19 == 0) goto LAB_071085b4;
            lVar4 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091a4b80,
                                 *(undefined8 *)PTR_DAT_0920fa78,0);
            *unaff_x19 = lVar4;
            thunk_FUN_03d1023c();
            if (*unaff_x19 == 0) goto LAB_071085b4;
            lVar4 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091aa4b0,
                                 *(undefined8 *)PTR_DAT_0920fa80,0);
            *unaff_x19 = lVar4;
            thunk_FUN_03d1023c();
          }
        }
        lVar4 = *unaff_x19;
        if (*(int *)(*(long *)PTR_DAT_0920fa70 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar4 = FUN_07108648(lVar4);
        *unaff_x19 = lVar4;
      }
      else {
        *unaff_x19 = *(long *)PTR_DAT_091a3ee0;
      }
      thunk_FUN_03d1023c();
      return;
    }
  }
LAB_071085b4:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


