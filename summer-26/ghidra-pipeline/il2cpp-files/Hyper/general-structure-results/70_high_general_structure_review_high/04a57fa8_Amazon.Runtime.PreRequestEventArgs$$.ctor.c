/*
FUNCTION_NAME: Amazon.Runtime.PreRequestEventArgs$$.ctor
ENTRY_POINT: 04a57fa8
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


undefined8 * Amazon_Runtime_PreRequestEventArgs___ctor(byte *param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *__ptr;
  void *pvVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  undefined1 unaff_w21;
  long *unaff_x22;
  undefined1 uVar9;
  byte *unaff_x23;
  size_t __n;
  long lVar10;
  undefined8 unaff_x25;
  ushort unaff_w27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    if (((bool)in_ZR) || (pbVar5 = unaff_x23, *unaff_x23 - 0x3a < 0xfffffff6)) {
      unaff_x23 = (byte *)0x0;
      lVar10 = 0;
      puVar8 = (undefined8 *)unaff_x20[0x266];
      lVar4 = puVar8[1];
    }
    else {
      do {
        pbVar6 = pbVar5;
        if (*pbVar5 - 0x3a < 0xfffffff6) break;
        pbVar5 = pbVar5 + 1;
        *unaff_x20 = (long)pbVar5;
        pbVar6 = param_1;
      } while (pbVar5 != param_1);
      lVar10 = (long)pbVar6 - (long)unaff_x23;
      puVar8 = (undefined8 *)unaff_x20[0x266];
      lVar4 = puVar8[1];
    }
    puVar2 = puVar8;
    if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (undefined8 *)0x0) goto LAB_04a581ec;
      lVar4 = 0;
      *puVar2 = puVar8;
      puVar2[1] = 0;
      unaff_x20[0x266] = (long)puVar2;
    }
    puVar2[1] = lVar4 + 0x20;
    puVar8 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
    *puVar8 = unaff_x28;
    *(byte **)((long)puVar2 + lVar4 + 0x20) = unaff_x23;
    *(long *)((long)puVar2 + lVar4 + 0x28) = lVar10;
    *(undefined1 *)((long)puVar2 + lVar4 + 0x18) = unaff_w21;
    *(ushort *)((long)puVar2 + lVar4 + 0x19) =
         *(ushort *)((long)puVar2 + lVar4 + 0x19) & 0xf000 | unaff_w27;
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
      *(long *)((long)pvVar3 + __n) = (long)puVar8;
      pbVar5 = (byte *)*unaff_x20;
      param_1 = (byte *)unaff_x20[1];
      if (pbVar5 == param_1) goto Amazon_Runtime_PreRequestEventHandler__EndInvoke;
    }
    else {
      unaff_x20[3] = (long)(plVar1 + 1);
      *plVar1 = (long)puVar8;
      pbVar5 = (byte *)*unaff_x20;
      param_1 = (byte *)unaff_x20[1];
      if (pbVar5 == param_1) goto Amazon_Runtime_PreRequestEventHandler__EndInvoke;
    }
    if (*pbVar5 != 0x5f) {
      if ((pbVar5 == param_1) || (*pbVar5 != 0x70)) {
        uVar9 = 0;
      }
      else {
        pbVar5 = pbVar5 + 1;
        uVar9 = 1;
        *unaff_x20 = (long)pbVar5;
      }
      if ((pbVar5 == param_1) || (*pbVar5 != 0x45)) {
Amazon_Runtime_PreRequestEventHandler__EndInvoke:
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *unaff_x20 = (long)(pbVar5 + 1);
        auVar11 = FUN_04a51628();
        pvVar3 = (void *)unaff_x20[0x266];
        lVar10 = *(long *)((long)pvVar3 + 8);
        puVar8 = pvVar3;
        if (lVar10 - 4000U < 0xfffffffffffff010) {
          puVar8 = malloc(0x1000);
          if (puVar8 == (void *)0x0) {
LAB_04a581ec:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar10 = 0;
          *puVar8 = pvVar3;
          puVar8[1] = 0;
          unaff_x20[0x266] = (long)puVar8;
        }
        *(long *)((long)puVar8 + 8) = lVar10 + 0x50;
        puVar2 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
        *puVar2 = &PTR_FUN_0ac08100;
        *(undefined1 *)((long)puVar8 + lVar10 + 0x18) = 0x3b;
        uVar7 = *(undefined8 *)(unaff_x29 + -8);
        *(undefined1 (*) [16])((long)puVar8 + lVar10 + 0x40) = auVar11;
        *(undefined1 *)((long)puVar8 + lVar10 + 0x50) = uVar9;
        *(ushort *)((long)puVar8 + lVar10 + 0x19) =
             *(ushort *)((long)puVar8 + lVar10 + 0x19) & 0xf000 | 0x540;
        *(undefined8 *)((long)puVar8 + lVar10 + 0x20) = uVar7;
        *(undefined8 *)((long)puVar8 + lVar10 + 0x28) = in_stack_00000008;
        *(undefined8 *)((long)puVar8 + lVar10 + 0x30) = unaff_x25;
        *(undefined8 *)((long)puVar8 + lVar10 + 0x38) = in_stack_00000000;
      }
      return puVar2;
    }
    unaff_x23 = pbVar5 + 1;
    in_ZR = param_1 == unaff_x23;
    *unaff_x20 = (long)unaff_x23;
  } while( true );
}


