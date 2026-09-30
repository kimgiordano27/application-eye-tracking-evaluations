/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
ENTRY_POINT: 05a790f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05a79268) */
/* WARNING: Removing unreachable block (ram,0x05a7931c) */

void Newtonsoft_Json_JsonConvert__SerializeObjectInternal(long param_1)

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
  long lVar10;
  long unaff_x22;
  char cStack000000000000000c;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0xe80));
  FUN_02fe925c(PTR_DAT_06f80d60);
  FUN_02fe925c(PTR_DAT_06f6d508);
  *(undefined1 *)(unaff_x22 + 0xe7f) = 1;
  puVar1 = PTR_DAT_06f6de80;
  cStack000000000000000c = '\0';
  if ((unaff_x21 & 1) == 0) {
    if (unaff_w20 < 1) {
      thunk_FUN_03037804(PTR_DAT_06f7a510);
      uVar4 = thunk_FUN_0301080c();
      uVar6 = thunk_FUN_03037804(PTR_DAT_06f9aa88);
      uVar7 = thunk_FUN_03037804(PTR_DAT_06fa4898);
      FUN_05a61b10(uVar4,uVar6,uVar7,0);
      uVar6 = thunk_FUN_03037804(PTR_DAT_06fa9fa8);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar4,uVar6);
    }
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar3 = FUN_05af0054(unaff_w20,8,0);
    puVar2 = PTR_DAT_06f80d60;
    if (iVar3 < 0x1001) {
      lVar5 = *(long *)PTR_DAT_06f80d60;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar5 = *(long *)puVar2;
      }
      plVar9 = *(long **)(lVar5 + 0xb8);
      if (*plVar9 != 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          plVar9 = *(long **)(*(long *)puVar2 + 0xb8);
        }
        lVar10 = plVar9[1];
        cStack000000000000000c = '\0';
        FUN_05b54040(lVar10,&stack0x0000000c,0);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar5 = *(long *)puVar2;
        }
        lVar8 = **(long **)(lVar5 + 0xb8);
        if (lVar8 != 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
          }
          *(long *)(unaff_x19 + 0x28) = lVar8;
          thunk_FUN_03048534();
          **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
          thunk_FUN_03048534(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
        }
        if (cStack000000000000000c != '\0') {
          thunk_FUN_0301ce48(lVar10,0);
        }
      }
    }
    plVar9 = (long *)(unaff_x19 + 0x28);
    if (*plVar9 == 0) {
      lVar5 = FUN_02fe9340(*(undefined8 *)puVar1,iVar3);
      *plVar9 = lVar5;
      thunk_FUN_03048534(plVar9,lVar5);
    }
    else {
      FUN_05b11f04(*plVar9,0,iVar3,0);
    }
  }
  else {
    uVar4 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6de80,1);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
    thunk_FUN_03048534();
    iVar3 = 0;
  }
  *(int *)(unaff_x19 + 0x5c) = iVar3;
  return;
}


