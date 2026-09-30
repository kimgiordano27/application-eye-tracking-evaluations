/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 06863854
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  
  *(undefined1 *)(unaff_x21 + 0xe6a) = unaff_w22;
  if (unaff_x20 == 0) {
    FUN_033d1ba8(&DAT_083c8a10);
    uVar9 = thunk_FUN_03398a84();
    uVar10 = FUN_033d1ba8(&DAT_08455470);
    FUN_0677f140(uVar9,uVar10,0);
    uVar10 = FUN_033d1ba8(&DAT_08407e08);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar9,uVar10);
  }
  plVar4 = (long *)FUN_03398188(DAT_083c7980,*(undefined4 *)(unaff_x20 + 0x18));
  uVar15 = *(uint *)(unaff_x20 + 0x18);
  if (0 < (int)uVar15) {
    uVar12 = 0;
    uVar13 = 0;
    do {
      if (uVar15 <= uVar13) goto LAB_06863a68;
      plVar14 = (long *)(unaff_x20 + (long)(int)uVar13 * 8 + 0x20);
      plVar5 = (long *)*plVar14;
      if ((plVar5 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar5 + 1000))(plVar5,*(undefined8 *)(*plVar5 + 0x3f0)), lVar6 == 0
         )) goto LAB_06863a64;
      if (*(long *)(lVar6 + 0x18) != 0) {
        if (unaff_x19 == 0) goto LAB_06863a64;
        iVar11 = *(int *)(unaff_x19 + 0x18);
        if (iVar11 < 1) {
          uVar16 = 0;
        }
        else {
          if ((int)*(long *)(lVar6 + 0x18) == 0) goto LAB_06863a68;
          uVar16 = 0;
          while( true ) {
            plVar5 = *(long **)(lVar6 + 0x20 + uVar16 * 8);
            if (plVar5 == (long *)0x0) goto LAB_06863a64;
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0))
            ;
            uVar15 = (uint)uVar16;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto LAB_06863a68;
            if (plVar5 == (long *)0x0) goto LAB_06863a64;
            uVar7 = (**(code **)(*plVar5 + 0x998))
                              (plVar5,*(undefined8 *)(unaff_x19 + 0x20 + uVar16 * 8),
                               *(undefined8 *)(*plVar5 + 0x9a0));
            if ((uVar7 & 1) == 0) {
              iVar11 = *(int *)(unaff_x19 + 0x18);
              goto LAB_06863950;
            }
            iVar11 = (int)*(undefined8 *)(unaff_x19 + 0x18);
            if (iVar11 <= (int)(uVar15 + 1)) break;
            uVar16 = uVar16 + 1;
            if (*(uint *)(lVar6 + 0x18) <= (uint)uVar16) goto LAB_06863a68;
          }
          uVar16 = (ulong)(uVar15 + 1);
        }
LAB_06863950:
        if (iVar11 <= (int)uVar16) {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar13) goto LAB_06863a68;
          if (plVar4 == (long *)0x0) goto LAB_06863a64;
          lVar6 = *plVar14;
          if ((lVar6 != 0) &&
             (lVar8 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
            uVar9 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
            FUN_033d1c20(uVar9,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar12) goto LAB_06863a68;
          plVar5 = plVar4 + (long)(int)uVar12 + 4;
          *plVar5 = lVar6;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar5 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uVar12 = uVar12 + 1;
        }
      }
      uVar15 = *(uint *)(unaff_x20 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar15);
    if (uVar12 != 0) {
      if (uVar12 != 1) {
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar6 = FUN_06863ac0(plVar4,uVar12);
        return lVar6;
      }
      if (plVar4 == (long *)0x0) {
LAB_06863a64:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((int)plVar4[3] != 0) {
        return plVar4[4];
      }
LAB_06863a68:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
  }
  return 0;
}


