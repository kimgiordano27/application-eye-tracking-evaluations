/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest.RequestCompleteDelegate<object>$$Invoke
ENTRY_POINT: 025dda60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Meta_WitAi_Requests_VRequest_RequestCompleteDelegate<object>__Invoke
               (undefined8 param_1,undefined8 param_2,undefined8 ****param_3,void *param_4,
               long param_5)

{
  undefined8 ****__src;
  void *__src_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong __n;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  void *apvStack_40 [2];
  long lStack_30;
  undefined8 ***pppuStack_28;
  undefined8 *puStack_20;
  uint *puStack_18;
  undefined4 uStack_10;
  uint uStack_c;
  long lStack_8;
  
  lStack_30 = tpidr_el0;
  lStack_8 = *(long *)(lStack_30 + 0x28);
  apvStack_40[1] = param_4;
  pppuStack_28 = param_3;
  if ((DAT_0482fe6d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTimeFormat_ExpandPredefinedFormat__);
    DAT_0482fe6d = 1;
  }
  plVar3 = *(long **)(*(long *)(param_5 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar3[1] + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  puVar8 = (undefined8 *)((long)apvStack_40 - uVar6);
  apvStack_40[0] = (void *)((long)puVar8 - uVar6);
  plVar3 = (long *)thunk_FUN_01ee7388(param_2,*(long *)(*plVar3 + 0x80) + 0x60);
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    uVar9 = 0;
    do {
      lVar5 = *(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80);
      if (*(int *)(lVar4 + 0x18) <= (int)uVar9) {
        plVar3 = (long *)thunk_FUN_01ee7388(param_2,lVar5 + 0x20);
        lVar4 = *plVar3;
        puVar1 = (undefined8 *)
                 thunk_FUN_01ee7388(param_2,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0)
                                                     + 0x80) + 0x80);
        if (lVar4 != 0) {
          puVar2 = *(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28);
          puStack_20 = (undefined8 *)*puVar1;
          puStack_18 = (uint *)puVar8;
          (*(code *)puVar2[2])(*puVar2,puVar2,lVar4,&puStack_20,puVar8);
          lVar4 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
          puVar1 = *(undefined8 **)(lVar4 + 0x30);
          if (-1 < *(int *)(*(long *)(lVar4 + 8) + 0x28)) {
            puVar8 = (undefined8 *)*puVar8;
          }
          puStack_20 = puVar8;
          (*(code *)puVar1[2])(*puVar1,puVar1,param_2,&puStack_20,puVar8);
          __src_00 = apvStack_40[0];
          puVar8 = *(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x38);
          puStack_20 = apvStack_40[0];
          (*(code *)puVar8[2])(*puVar8,puVar8,param_2,&puStack_20,apvStack_40[0]);
          memcpy(apvStack_40[1],__src_00,__n);
          if (*(long *)(lStack_30 + 0x28) == lStack_8) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        break;
      }
      plVar3 = (long *)thunk_FUN_01ee7388(param_2,lVar5 + 0x40);
      lVar4 = *(long *)(param_5 + 0x20);
      lVar5 = *plVar3;
      __src = param_3;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x28)) {
        __src = &pppuStack_28;
      }
      memcpy(puVar8,__src,__n);
      if (lVar5 == 0) break;
      lVar4 = *(long *)(lVar4 + 0xc0);
      puStack_20 = puVar8;
      if (-1 < *(int *)(*(long *)(lVar4 + 8) + 0x28)) {
        puStack_20 = (undefined8 *)*puVar8;
      }
      puVar1 = *(undefined8 **)(lVar4 + 0x20);
      puStack_18 = &uStack_c;
      uStack_c = uVar9;
      (*(code *)puVar1[2])(*puVar1,puVar1,lVar5,&puStack_20,&uStack_10);
      uVar10 = uStack_10;
      plVar3 = (long *)thunk_FUN_01ee7388(param_2,*(long *)(**(long **)(*(long *)(param_5 + 0x20) +
                                                                       0xc0) + 0x80) + 0x80);
      lVar5 = *plVar3;
      plVar3 = (long *)thunk_FUN_01ee7388(param_2,*(long *)(**(long **)(*(long *)(param_5 + 0x20) +
                                                                       0xc0) + 0x80) + 0x60);
      lVar4 = *plVar3;
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_025dddc8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar3 = *(long **)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
      if (plVar3 == (long *)0x0) break;
      lVar4 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_System_DateTimeFormat_ExpandPredefinedFormat__) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_025ddc68;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)Method_System_DateTimeFormat_ExpandPredefinedFormat__,2)
      ;
LAB_025ddc68:
      uVar10 = (*(code *)*puVar1)(uVar10,param_1,plVar3,puVar1[1]);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_025dddc8;
      *(undefined4 *)(lVar5 + (long)(int)uVar9 * 4 + 0x20) = uVar10;
      uVar9 = uVar9 + 1;
      plVar3 = (long *)thunk_FUN_01ee7388(param_2,*(long *)(**(long **)(*(long *)(param_5 + 0x20) +
                                                                       0xc0) + 0x80) + 0x60);
      lVar4 = *plVar3;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


