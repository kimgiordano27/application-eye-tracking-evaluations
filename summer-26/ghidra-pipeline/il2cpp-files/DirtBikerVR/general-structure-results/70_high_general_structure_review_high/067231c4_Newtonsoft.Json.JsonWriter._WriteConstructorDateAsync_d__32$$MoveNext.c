/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter.<WriteConstructorDateAsync>d__32$$MoveNext
ENTRY_POINT: 067231c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0672332c) */
/* WARNING: Removing unreachable block (ram,0x067233e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_JsonWriter_<WriteConstructorDateAsync>d__32__MoveNext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  char cStack0000000000000024;
  long lStack0000000000000028;
  
  puVar1 = PTR_DAT_08486748;
  lStack0000000000000028 = 0;
  cStack0000000000000024 = '\0';
  if ((unaff_x21 & 1) == 0) {
    if (unaff_w20 < 1) {
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar4 = thunk_FUN_03ac74bc();
      uVar6 = thunk_FUN_03af1434(PTR_DAT_08494068);
      uVar7 = thunk_FUN_03af1434(PTR_DAT_084a50e0);
      System_Threading_CancellationToken__get_IsCancellationRequested(uVar4,uVar6,uVar7,0);
      uVar6 = thunk_FUN_03af1434(PTR_DAT_084a8ef8);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar4,uVar6);
    }
    if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    iVar3 = FUN_06751c44(unaff_w20,8,0);
    puVar2 = PTR_DAT_08491ea0;
    if (iVar3 < 0x1001) {
      lVar5 = *(long *)PTR_DAT_08491ea0;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *(long *)puVar2;
      }
      plVar9 = *(long **)(lVar5 + 0xb8);
      if (*plVar9 != 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          plVar9 = *(long **)(*(long *)puVar2 + 0xb8);
        }
        lStack0000000000000028 = plVar9[1];
        cStack0000000000000024 = '\0';
        FUN_067b43ac(lStack0000000000000028,&stack0x00000024,0);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar5 = *(long *)puVar2;
        }
        lVar8 = **(long **)(lVar5 + 0xb8);
        if (lVar8 != 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
          }
          *(long *)(unaff_x19 + 0x28) = lVar8;
          thunk_FUN_03afed3c();
          **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
          thunk_FUN_03afed3c(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
        }
        if (cStack0000000000000024 != '\0') {
          thunk_FUN_03a98474(lStack0000000000000028,0);
        }
      }
    }
    plVar9 = (long *)(unaff_x19 + 0x28);
    if (*plVar9 == 0) {
      lVar5 = FUN_03a8a804(*(undefined8 *)puVar1,iVar3);
      *plVar9 = lVar5;
      thunk_FUN_03afed3c(plVar9,lVar5);
    }
    else {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*plVar9,0,iVar3,0);
    }
  }
  else {
    uVar4 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08486748,1);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
    thunk_FUN_03afed3c();
    iVar3 = 0;
  }
  *(int *)(unaff_x19 + 0x5c) = iVar3;
  return;
}


