/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest.RequestCompleteDelegate<object>$$EndInvoke
ENTRY_POINT: 025dda9c
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


void Meta_WitAi_Requests_VRequest_RequestCompleteDelegate<object>__EndInvoke
               (undefined8 param_1,void *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  void *pvVar10;
  long unaff_x21;
  ulong __n;
  undefined8 *puVar11;
  uint uVar12;
  long unaff_x29;
  undefined4 uVar13;
  
  bVar1 = *(byte *)(unaff_x19 + 0xe6d);
  *(void **)(unaff_x29 + -0x38) = param_2;
  if ((bVar1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTimeFormat_ExpandPredefinedFormat__);
    *(undefined1 *)(unaff_x19 + 0xe6d) = 1;
  }
  plVar4 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  lVar5 = *plVar4;
  __n = (ulong)*(uint *)(plVar4[1] + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  puVar11 = (undefined8 *)(&stack0x00000000 + -uVar8);
  *(ulong *)(unaff_x29 + -0x50) = (long)puVar11 - uVar8;
  plVar4 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(lVar5 + 0x80) + 0x60);
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    uVar12 = 0;
    do {
      lVar6 = *(long *)(**(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x80);
      if (*(int *)(lVar5 + 0x18) <= (int)uVar12) {
        plVar4 = (long *)thunk_FUN_01ee7388(param_1,lVar6 + 0x20);
        lVar5 = *plVar4;
        puVar7 = (undefined8 *)
                 thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0
                                                                 ) + 0x80) + 0x80);
        if (lVar5 != 0) {
          puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
          uVar2 = *puVar3;
          *(undefined8 *)(unaff_x29 + -0x30) = *puVar7;
          *(undefined8 **)(unaff_x29 + -0x28) = puVar11;
          (*(code *)puVar3[2])(uVar2,puVar3,lVar5,unaff_x29 + -0x30,puVar11);
          lVar5 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          puVar7 = *(undefined8 **)(lVar5 + 0x30);
          uVar2 = *puVar7;
          if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
            puVar11 = (undefined8 *)*puVar11;
          }
          *(undefined8 **)(unaff_x29 + -0x30) = puVar11;
          (*(code *)puVar7[2])(uVar2,puVar7,param_1,unaff_x29 + -0x30,puVar11);
          pvVar10 = *(void **)(unaff_x29 + -0x50);
          puVar11 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
          uVar2 = *puVar11;
          *(void **)(unaff_x29 + -0x30) = pvVar10;
          (*(code *)puVar11[2])(uVar2,puVar11,param_1,unaff_x29 + -0x30,pvVar10);
          memcpy(*(void **)(unaff_x29 + -0x48),pvVar10,__n);
          if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        break;
      }
      plVar4 = (long *)thunk_FUN_01ee7388(param_1,lVar6 + 0x40);
      lVar5 = *(long *)(unaff_x21 + 0x20);
      lVar6 = *plVar4;
      pvVar10 = param_2;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x28)) {
        pvVar10 = (void *)(unaff_x29 + -0x38);
      }
      memcpy(puVar11,pvVar10,__n);
      if (lVar6 == 0) break;
      lVar5 = *(long *)(lVar5 + 0xc0);
      puVar7 = puVar11;
      if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
        puVar7 = (undefined8 *)*puVar11;
      }
      puVar3 = *(undefined8 **)(lVar5 + 0x20);
      uVar2 = *puVar3;
      *(uint *)(unaff_x29 + -0x1c) = uVar12;
      *(undefined8 **)(unaff_x29 + -0x30) = puVar7;
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x1c;
      (*(code *)puVar3[2])(uVar2,puVar3,lVar6,unaff_x29 + -0x30,unaff_x29 + -0x20);
      uVar13 = *(undefined4 *)(unaff_x29 + -0x20);
      plVar4 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(unaff_x21 + 0x20)
                                                                       + 0xc0) + 0x80) + 0x80);
      lVar6 = *plVar4;
      plVar4 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(unaff_x21 + 0x20)
                                                                       + 0xc0) + 0x80) + 0x60);
      lVar5 = *plVar4;
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar12) {
LAB_025dddc8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar4 = *(long **)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
      if (plVar4 == (long *)0x0) break;
      lVar5 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_DateTimeFormat_ExpandPredefinedFormat__) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_025ddc68;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)Method_System_DateTimeFormat_ExpandPredefinedFormat__,2)
      ;
LAB_025ddc68:
      uVar13 = (*(code *)*puVar7)(uVar13,plVar4,puVar7[1]);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_025dddc8;
      *(undefined4 *)(lVar6 + (long)(int)uVar12 * 4 + 0x20) = uVar13;
      uVar12 = uVar12 + 1;
      plVar4 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(unaff_x21 + 0x20)
                                                                       + 0xc0) + 0x80) + 0x60);
      lVar5 = *plVar4;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


