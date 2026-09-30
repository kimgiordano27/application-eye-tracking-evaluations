/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_StringEscapeHandling
ENTRY_POINT: 066e951c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void Newtonsoft_Json_JsonSerializer__get_StringEscapeHandling(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  int unaff_w22;
  int iVar13;
  
  *(undefined1 *)(unaff_x21 + 0x6ff) = 1;
  puVar3 = PTR_DAT_084a7aa8;
  puVar2 = PTR_DAT_084a7a98;
  if (unaff_w22 < 0) {
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar6 = thunk_FUN_03ac74bc();
    uVar9 = thunk_FUN_03af1434(PTR_DAT_0849eb18);
    uVar10 = thunk_FUN_03af1434(PTR_DAT_084a7ab0);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar6,uVar9,uVar10,0);
    uVar9 = thunk_FUN_03af1434(PTR_DAT_084a7ab8);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar6,uVar9);
  }
  lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a7aa0);
  FUN_04de7d48(lVar4,*(undefined8 *)puVar2);
  plVar5 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
  FUN_066e90ec(plVar5,unaff_w22 + 2,unaff_w20 & 1);
  puVar2 = PTR_DAT_084a7a88;
  if (plVar5 == (long *)0x0) {
LAB_066e9628:
    *(byte *)(unaff_x19 + 0x20) = unaff_w20 & 1;
    if (lVar4 == 0) {
LAB_066e9668:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    iVar13 = unaff_w22 + 3;
    do {
      uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      uVar7 = FUN_0667dc48(uVar6,0,0);
      if ((uVar7 & 1) == 0) goto LAB_066e9628;
      if (lVar4 == 0) goto LAB_066e9668;
      lVar11 = *(long *)(lVar4 + 0x10);
      lVar12 = *(long *)puVar2;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_066e9668;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = (long)plVar5;
        thunk_FUN_03afed3c(plVar8,plVar5);
      }
      else {
        FUN_04de85b0(lVar4,plVar5,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      plVar5 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      FUN_066e90ec(plVar5,iVar13,unaff_w20 & 1);
      iVar13 = iVar13 + 1;
    } while (plVar5 != (long *)0x0);
    *(byte *)(unaff_x19 + 0x20) = unaff_w20 & 1;
  }
  uVar6 = FUN_04dea100(lVar4,*(undefined8 *)PTR_DAT_084a7a90);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar6;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x10),uVar6);
  return;
}


