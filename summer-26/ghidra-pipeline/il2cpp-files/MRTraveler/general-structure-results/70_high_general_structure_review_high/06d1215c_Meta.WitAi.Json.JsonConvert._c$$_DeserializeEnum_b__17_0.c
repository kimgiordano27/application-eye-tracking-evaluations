/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c$$<DeserializeEnum>b__17_0
ENTRY_POINT: 06d1215c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06d1221c) */

void Meta_WitAi_Json_JsonConvert_<>c__<DeserializeEnum>b__17_0(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar5;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  do {
    lVar5 = *(long *)(unaff_x20 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar1 = FUN_06a3fc58(lVar5,unaff_x21,*unaff_x27);
    FUN_06a3fcc4(lVar5,unaff_x21,iVar1 + 1,*unaff_x28);
    do {
      lVar5 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_06d120d4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06d120d4:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar5 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 == 0) goto LAB_06d121c4;
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_06d121ac;
      }
      lVar5 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_06d12130;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06d12130:
      unaff_x21 = (*(code *)*puVar2)();
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar3 = FUN_06a41824(*(long *)(unaff_x20 + 0x10),unaff_x21,1,*unaff_x26);
    } while ((uVar3 & 1) != 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_06d121ac:
    if (*(long *)(piVar4 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_06d121e0;
    }
  }
LAB_06d121c4:
  puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06d121e0:
  (*(code *)*puVar2)();
  return;
}


