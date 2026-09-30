/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 032578c0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long in_x11;
  undefined4 *unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined1 auVar9 [16];
  long *in_stack_00000010;
  undefined2 uStack0000000000000018;
  undefined6 uStack000000000000001a;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_01c72498();
      goto LAB_0325790c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0325790c:
  iVar3 = (*(code *)*puVar4)();
  if (iVar3 == 0) {
    *unaff_x19 = 0;
    *(ulong *)(unaff_x19 + 0xe) = CONCAT62(uStack000000000000001a,uStack0000000000000018);
    *(long **)(unaff_x19 + 0xc) = in_stack_00000010;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_022f9c2c(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    if (DAT_04531f56 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f56 = '\x01';
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f57 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f57 = '\x01';
    }
    uVar2 = uStack0000000000000018;
    plVar5 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      lVar6 = *in_stack_00000010;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_03257a10;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03257a10:
        (*(code *)*puVar4)(plVar5,uVar2,puVar4[1]);
      }
      else {
        FUN_032018f0(in_stack_00000010,0);
      }
    }
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    plVar5 = *(long **)(unaff_x23 + 0x28);
    *(undefined4 *)(unaff_x23 + 0x44) = 0;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar6 = (**(code **)(*plVar5 + 0x298))
                      (plVar5,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(*plVar5 + 0x2a0));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    auVar9 = FUN_0334498c(lVar6,0,0);
    uVar7 = FUN_03201e70();
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar9;
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
  }
  return;
}


