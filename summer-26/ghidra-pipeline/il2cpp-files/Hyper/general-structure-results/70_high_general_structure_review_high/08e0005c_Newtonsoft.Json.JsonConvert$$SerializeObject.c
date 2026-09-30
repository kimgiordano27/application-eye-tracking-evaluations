/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 08e0005c
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08e003a8) */

void Newtonsoft_Json_JsonConvert__SerializeObject(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  long unaff_x21;
  
  puVar2 = PTR_DAT_0ac69fd8;
  lVar9 = *unaff_x20;
  bVar1 = *(byte *)(*param_1 + 0x130);
  if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *param_1)) {
    if (lVar9 != *(long *)PTR_DAT_0ac60880) {
      plVar4 = (long *)thunk_FUN_04983e64();
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_08e00118;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar4,*(long *)puVar2,0);
LAB_08e00118:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        puVar3 = PTR_DAT_0ac409c8;
        puVar2 = PTR_DAT_0ac09ba8;
        do {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_08e0019c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(plVar4,*(long *)puVar2,0);
LAB_08e0019c:
          uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar4 == (long *)0x0) goto LAB_08e002cc;
            lVar9 = *plVar4;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 == 0) goto LAB_08e00278;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_08e00260;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_08e00200;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(plVar4,*(long *)puVar3,0);
LAB_08e00200:
          uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          uVar6 = FUN_08c7ed5c(uVar6,0);
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c(uVar6,uVar6);
          }
          FUN_06e60ca4();
        } while( true );
      }
      lVar9 = thunk_FUN_04983e64();
      if (lVar9 == 0) {
        thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
        uVar6 = thunk_FUN_04983f60();
        uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac69ff8);
        uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac6a000);
        FUN_08cbd67c(uVar6,uVar7,uVar8,0);
        uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac6a008);
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,uVar7);
      }
      if (unaff_x21 == 0) goto LAB_08e00348;
      FUN_06e60d80();
      goto LAB_08e00310;
    }
  }
  else {
    FUN_08c7ed5c();
  }
  if (unaff_x21 == 0) {
LAB_08e00348:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_06e60ca4();
  goto LAB_08e00310;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_08e00260:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_08e002c0;
    }
  }
LAB_08e00278:
  puVar5 = (undefined8 *)FUN_04980e68(plVar4,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e002c0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_08e002cc:
  if (unaff_x21 == 0) goto LAB_08e00348;
LAB_08e00310:
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_08e00408();
  }
  return;
}


