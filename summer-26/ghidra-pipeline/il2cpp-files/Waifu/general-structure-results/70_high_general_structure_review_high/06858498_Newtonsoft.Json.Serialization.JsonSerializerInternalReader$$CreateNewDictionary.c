/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 06858498
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(long *param_1)

{
  uint uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  uint uVar14;
  long unaff_x22;
  long lVar15;
  int unaff_w24;
  long unaff_x25;
  undefined8 uVar16;
  int unaff_w28;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x06858498:
  param_1 = param_1 + 4;
  *param_1 = unaff_x25;
  uVar14 = unaff_w21;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)param_1 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << ((ulong)param_1 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    if (unaff_w28 < (int)uVar14) {
LAB_068584f0:
      lVar15 = *unaff_x19;
      if (lVar15 == 0) {
LAB_06858610:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((unaff_x22 == 0) || (lVar8 = FUN_0339898c(), lVar8 != 0)) {
        uVar14 = uVar14 + unaff_w20;
        if (uVar14 < *(uint *)(lVar15 + 0x18)) {
          plVar11 = (long *)(lVar15 + (long)(int)uVar14 * 8 + 0x20);
          *plVar11 = unaff_x22;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar11 = (long *)unaff_x19[1];
          if (plVar11 == (long *)0x0) {
            return;
          }
          if ((in_stack_00000000 != 0) &&
             (lVar15 = FUN_0339898c(in_stack_00000000,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0
             )) goto LAB_06858614;
          if (uVar14 < *(uint *)(plVar11 + 3)) {
            plVar11 = plVar11 + (long)(int)uVar14 + 4;
            *plVar11 = in_stack_00000000;
            if (DAT_08908cd0 == 0) {
              return;
            }
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            return;
          }
        }
        goto LAB_0685860c;
      }
      goto LAB_06858614;
    }
    unaff_w21 = uVar14 * 2;
    if ((int)unaff_w21 < unaff_w24) {
      lVar15 = *unaff_x19;
      if (lVar15 == 0) goto LAB_06858610;
      uVar5 = unaff_w21 + in_stack_00000008._4_4_;
      if ((*(uint *)(lVar15 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar15 + 0x18) <= uVar5))
      goto LAB_0685860c;
      plVar11 = (long *)unaff_x19[2];
      if (plVar11 == (long *)0x0) goto LAB_06858610;
      lVar8 = *plVar11;
      uVar9 = *(undefined8 *)(lVar15 + (long)(int)(uVar5 - 1) * 8 + 0x20);
      uVar16 = *(undefined8 *)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_083cc5d0) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06858314;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cc5d0,0);
LAB_06858314:
      uVar5 = (*(code *)*puVar7)(plVar11,uVar9,uVar16,puVar7[1]);
      unaff_w21 = unaff_w21 | uVar5 >> 0x1f;
    }
    if (*unaff_x19 == 0) goto LAB_06858610;
    uVar5 = unaff_w21 + unaff_w20;
    if (*(uint *)(*unaff_x19 + 0x18) <= uVar5) goto LAB_0685860c;
    plVar11 = (long *)unaff_x19[2];
    if (plVar11 == (long *)0x0) goto LAB_06858610;
    lVar15 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_083cc5d0) {
          puVar7 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_068583a8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cc5d0,0);
LAB_068583a8:
    iVar6 = (*(code *)*puVar7)(plVar11);
    if (-1 < iVar6) goto LAB_068584f0;
    plVar11 = (long *)*unaff_x19;
    if (plVar11 == (long *)0x0) goto LAB_06858610;
    uVar10 = *(uint *)(plVar11 + 3);
    if (uVar10 <= uVar5) goto LAB_0685860c;
    lVar15 = plVar11[(long)(int)uVar5 + 4];
    if (lVar15 != 0) {
      lVar8 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar8 == 0) goto LAB_06858614;
      uVar10 = *(uint *)(plVar11 + 3);
    }
    uVar1 = uVar14 + unaff_w20;
    if (uVar10 <= uVar1) goto LAB_0685860c;
    plVar11 = plVar11 + (long)(int)uVar1 + 4;
    *plVar11 = lVar15;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_1 = (long *)unaff_x19[1];
    uVar14 = unaff_w21;
  } while (param_1 == (long *)0x0);
  uVar14 = *(uint *)(param_1 + 3);
  if (uVar5 < uVar14) goto code_r0x06858468;
LAB_0685860c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
code_r0x06858468:
  unaff_x25 = param_1[(long)(int)uVar5 + 4];
  if (unaff_x25 != 0) {
    lVar15 = FUN_0339898c(unaff_x25,*(undefined8 *)(*param_1 + 0x40));
    if (lVar15 == 0) {
LAB_06858614:
      uVar9 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar9,0);
    }
    uVar14 = *(uint *)(param_1 + 3);
  }
  if (uVar14 <= uVar1) goto LAB_0685860c;
  param_1 = param_1 + (int)uVar1;
  goto code_r0x06858498;
}


