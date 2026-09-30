/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 03257930
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateDefault(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined1 auVar7 [16];
  long *in_stack_00000010;
  undefined2 in_stack_00000018;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x510));
  *(undefined1 *)(unaff_x20 + 0xf56) = 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04531f57 == '\0') {
    FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230030);
    DAT_04531f57 = '\x01';
  }
  if (in_stack_00000010 != (long *)0x0) {
    lVar4 = *in_stack_00000010;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_03257a10;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03257a10:
      (*(code *)*puVar2)(in_stack_00000010,in_stack_00000018,puVar2[1]);
    }
    else {
      FUN_032018f0(in_stack_00000010,0);
    }
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar3 = *(long **)(unaff_x23 + 0x28);
  *(undefined4 *)(unaff_x23 + 0x44) = 0;
  if (plVar3 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x298))
                      (plVar3,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(*plVar3 + 0x2a0));
    if (lVar4 != 0) {
      auVar7 = FUN_0334498c(lVar4,0,0);
      uVar5 = FUN_03201e70();
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar7;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_022f8758(unaff_x19 + 2);
      }
      else {
        FUN_03201ea0();
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03200824(unaff_x19 + 2,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


