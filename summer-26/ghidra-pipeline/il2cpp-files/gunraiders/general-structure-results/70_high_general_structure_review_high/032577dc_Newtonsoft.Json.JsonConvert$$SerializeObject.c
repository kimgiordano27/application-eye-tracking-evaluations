/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 032577dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  code *in_x9;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  ulong uVar8;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined1 auVar9 [16];
  long *in_stack_00000010;
  ulong in_stack_00000018;
  
  auVar9 = (*in_x9)();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  in_stack_00000018 = auVar9._8_8_ & 0xffff;
  in_stack_00000010 = auVar9._0_8_;
  if (DAT_04531f54 == '\0') {
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04531f54 = '\x01';
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04531f55 == '\0') {
    FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230030);
    DAT_04531f55 = '\x01';
  }
  plVar4 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    lVar5 = *in_stack_00000010;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar8 = in_stack_00000018 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0325790c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_0325790c:
      iVar2 = (*(code *)*puVar3)(plVar4,uVar8,puVar3[1]);
      if (iVar2 == 0) goto LAB_03257afc;
    }
    else {
      uVar6 = FUN_03344708(in_stack_00000010,0);
      if ((uVar6 & 1) == 0) {
LAB_03257afc:
        *unaff_x19 = 0;
        *(ulong *)(unaff_x19 + 0xe) = in_stack_00000018;
        *(long **)(unaff_x19 + 0xc) = in_stack_00000010;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_022f9c2c(unaff_x19 + 2,&stack0x00000010);
        return;
      }
    }
  }
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
  plVar4 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    lVar5 = *in_stack_00000010;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar8 = in_stack_00000018 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_03257a10;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03257a10:
      (*(code *)*puVar3)(plVar4,uVar8,puVar3[1]);
    }
    else {
      FUN_032018f0(in_stack_00000010,0);
    }
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar4 = *(long **)(unaff_x23 + 0x28);
  *(undefined4 *)(unaff_x23 + 0x44) = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x298))
                      (plVar4,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(*plVar4 + 0x2a0));
    if (lVar5 != 0) {
      auVar9 = FUN_0334498c(lVar5,0,0);
      uVar6 = FUN_03201e70();
      if ((uVar6 & 1) == 0) {
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
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


