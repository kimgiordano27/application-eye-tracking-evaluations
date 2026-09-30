/*
FUNCTION_NAME: AnalyticsMenuHelper$$createAnalyticsButtons
ENTRY_POINT: 03e0fbac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 *
AnalyticsMenuHelper__createAnalyticsButtons(long *param_1,long *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  void *pvVar11;
  
  if ((*(char *)(*param_2 + 8) == ')') && (iVar3 = *(int *)(*param_2 + 0xc), iVar3 - 2U < 4)) {
    pvVar11 = (void *)param_1[0x266];
    lVar6 = *(long *)((long)pvVar11 + 8);
    puVar5 = pvVar11;
    if (0xfef < lVar6 + 0x10U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_03e0fdfc;
      lVar6 = 0;
      *puVar5 = pvVar11;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar6 + 0x10;
    puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
    *puVar7 = &UNK_0919e7e0;
    *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010128;
    *(int *)((long)puVar5 + lVar6 + 0x1c) = iVar3;
    *param_2 = (long)puVar7;
  }
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 == pbVar2) || (*pbVar1 != 0x43)) {
    if (pbVar2 != pbVar1) {
      if ((long)pbVar2 - (long)pbVar1 == 1) {
        return (undefined8 *)0x0;
      }
      if (*pbVar1 != 0x44) {
        return (undefined8 *)0x0;
      }
      bVar4 = pbVar1[1];
      if (0x35 < bVar4) {
        return (undefined8 *)0x0;
      }
      if ((1L << ((ulong)bVar4 & 0x3f) & 0x37000000000000U) == 0) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar1 + 2);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      pvVar11 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar11 + 8);
      puVar5 = pvVar11;
      if (0xfef < lVar6 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) {
LAB_03e0fdfc:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar5 = pvVar11;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
      lVar8 = *param_2;
      uVar10 = (uint)bVar4;
      puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
      *puVar7 = &UNK_0919e850;
      *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x101012a;
      *(undefined1 *)((long)puVar5 + lVar6 + 0x28) = 1;
LAB_03e0fdd4:
      puVar7[2] = lVar8;
      *(uint *)((long)puVar7 + 0x1c) = uVar10 - 0x30;
      return puVar7;
    }
  }
  else {
    pbVar9 = pbVar1 + 1;
    *param_1 = (long)pbVar9;
    if (pbVar9 != pbVar2) {
      bVar4 = *pbVar9;
      if (bVar4 == 0x49) {
        pbVar9 = pbVar1 + 2;
        *param_1 = (long)pbVar9;
      }
      if ((pbVar2 != pbVar9) && (uVar10 = (uint)*pbVar9, uVar10 - 0x31 < 5)) {
        *param_1 = (long)(pbVar9 + 1);
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        if ((bVar4 == 0x49) && (lVar6 = FUN_03e0dc10(param_1,param_3), lVar6 == 0)) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar11 + 8);
        puVar5 = pvVar11;
        if (0xfef < lVar6 + 0x20U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_03e0fdfc;
          lVar6 = 0;
          *puVar5 = pvVar11;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
        lVar8 = *param_2;
        puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
        *puVar7 = &UNK_0919e850;
        *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x101012a;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x28) = 0;
        goto LAB_03e0fdd4;
      }
    }
  }
  return (undefined8 *)0x0;
}


