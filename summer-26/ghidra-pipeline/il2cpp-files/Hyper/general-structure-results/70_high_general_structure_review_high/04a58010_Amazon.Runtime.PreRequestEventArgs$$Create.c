/*
FUNCTION_NAME: Amazon.Runtime.PreRequestEventArgs$$Create
ENTRY_POINT: 04a58010
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5
*/


undefined8 * Amazon_Runtime_PreRequestEventArgs__Create(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *__ptr;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long *unaff_x22;
  undefined1 uVar9;
  byte *unaff_x23;
  size_t __n;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 *puVar10;
  ushort unaff_w27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while( true ) {
    puVar2 = unaff_x19;
    if (param_1 - 0xfd0U < 0xfffffffffffff010) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (undefined8 *)0x0) goto LAB_04a581ec;
      param_1 = 0;
      *puVar2 = unaff_x19;
      puVar2[1] = 0;
      unaff_x20[0x266] = (long)puVar2;
    }
    puVar2[1] = param_1 + 0x20;
    puVar10 = (undefined8 *)((long)puVar2 + param_1 + 0x10);
    *puVar10 = unaff_x28;
    *(byte **)((long)puVar2 + param_1 + 0x20) = unaff_x23;
    *(long *)((long)puVar2 + param_1 + 0x28) = unaff_x24;
    *(undefined1 *)((long)puVar2 + param_1 + 0x18) = unaff_w21;
    *(ushort *)((long)puVar2 + param_1 + 0x19) =
         *(ushort *)((long)puVar2 + param_1 + 0x19) & 0xf000 | unaff_w27;
    plVar1 = (long *)unaff_x20[3];
    if (plVar1 == (long *)unaff_x20[4]) {
      __ptr = (long *)unaff_x20[2];
      __n = (long)plVar1 - (long)__ptr;
      if (__ptr == unaff_x22) {
        pvVar3 = malloc(__n * 2);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar1 != unaff_x22) {
          memcpy(pvVar3,unaff_x22,__n);
        }
        unaff_x20[2] = (long)pvVar3;
      }
      else {
        pvVar3 = realloc(__ptr,__n * 2);
        unaff_x20[2] = (long)pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      unaff_x20[3] = (long)((long *)((long)pvVar3 + __n) + 1);
      unaff_x20[4] = (long)((long)pvVar3 + ((long)__n >> 2) * 8);
      *(long *)((long)pvVar3 + __n) = (long)puVar10;
      pbVar6 = (byte *)*unaff_x20;
      pbVar4 = (byte *)unaff_x20[1];
      if (pbVar6 == pbVar4) goto Amazon_Runtime_PreRequestEventHandler__EndInvoke;
    }
    else {
      unaff_x20[3] = (long)(plVar1 + 1);
      *plVar1 = (long)puVar10;
      pbVar6 = (byte *)*unaff_x20;
      pbVar4 = (byte *)unaff_x20[1];
      if (pbVar6 == pbVar4) goto Amazon_Runtime_PreRequestEventHandler__EndInvoke;
    }
    if (*pbVar6 != 0x5f) break;
    unaff_x23 = pbVar6 + 1;
    *unaff_x20 = (long)unaff_x23;
    if ((pbVar4 == unaff_x23) || (pbVar6 = unaff_x23, *unaff_x23 - 0x3a < 0xfffffff6)) {
      unaff_x23 = (byte *)0x0;
      unaff_x24 = 0;
      unaff_x19 = (undefined8 *)unaff_x20[0x266];
      param_1 = unaff_x19[1];
    }
    else {
      do {
        pbVar7 = pbVar6;
        if (*pbVar6 - 0x3a < 0xfffffff6) break;
        pbVar6 = pbVar6 + 1;
        *unaff_x20 = (long)pbVar6;
        pbVar7 = pbVar4;
      } while (pbVar6 != pbVar4);
      unaff_x24 = (long)pbVar7 - (long)unaff_x23;
      unaff_x19 = (undefined8 *)unaff_x20[0x266];
      param_1 = unaff_x19[1];
    }
  }
  if ((pbVar6 == pbVar4) || (*pbVar6 != 0x70)) {
    uVar9 = 0;
  }
  else {
    pbVar6 = pbVar6 + 1;
    uVar9 = 1;
    *unaff_x20 = (long)pbVar6;
  }
  if ((pbVar6 == pbVar4) || (*pbVar6 != 0x45)) {
Amazon_Runtime_PreRequestEventHandler__EndInvoke:
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *unaff_x20 = (long)(pbVar6 + 1);
    auVar11 = FUN_04a51628();
    pvVar3 = (void *)unaff_x20[0x266];
    lVar5 = *(long *)((long)pvVar3 + 8);
    puVar2 = pvVar3;
    if (lVar5 - 4000U < 0xfffffffffffff010) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (void *)0x0) {
LAB_04a581ec:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = 0;
      *puVar2 = pvVar3;
      puVar2[1] = 0;
      unaff_x20[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar5 + 0x50;
    puVar10 = (undefined8 *)((long)puVar2 + lVar5 + 0x10);
    *puVar10 = &PTR_FUN_0ac08100;
    *(undefined1 *)((long)puVar2 + lVar5 + 0x18) = 0x3b;
    uVar8 = *(undefined8 *)(unaff_x29 + -8);
    *(undefined1 (*) [16])((long)puVar2 + lVar5 + 0x40) = auVar11;
    *(undefined1 *)((long)puVar2 + lVar5 + 0x50) = uVar9;
    *(ushort *)((long)puVar2 + lVar5 + 0x19) =
         *(ushort *)((long)puVar2 + lVar5 + 0x19) & 0xf000 | 0x540;
    *(undefined8 *)((long)puVar2 + lVar5 + 0x20) = uVar8;
    *(undefined8 *)((long)puVar2 + lVar5 + 0x28) = in_stack_00000008;
    *(undefined8 *)((long)puVar2 + lVar5 + 0x30) = unaff_x25;
    *(undefined8 *)((long)puVar2 + lVar5 + 0x38) = in_stack_00000000;
  }
  return puVar10;
}


