/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$set_DateFormatString
ENTRY_POINT: 03259254
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03259544) */

void Newtonsoft_Json_JsonReader__set_DateFormatString(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int in_w8;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  ulong uVar10;
  uint unaff_w23;
  long *unaff_x24;
  int unaff_w25;
  undefined1 auVar11 [16];
  long *in_stack_00000010;
  ulong in_stack_00000018;
  
  if (in_w8 != 0) {
    FUN_032f1cb4(0);
  }
  auVar11 = FUN_03090c54();
  plVar1 = *(long **)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  if (lVar7 == 0) {
    if (unaff_w23 != 0) {
      auVar11 = FUN_032f1cb4(0);
    }
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    if (*(uint *)(lVar7 + 0x18) < unaff_w23) {
      auVar11 = FUN_032f1cb4(0);
    }
    lVar6 = (ulong)unaff_w23 << 0x20;
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4(auVar11._0_8_,auVar11._8_8_,lVar6);
  }
  auVar11 = (**(code **)(*plVar1 + 0x318))
                      (plVar1,lVar7,lVar6,*(undefined8 *)(unaff_x19 + 0x10),
                       *(undefined8 *)(*plVar1 + 800));
  puVar3 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
  if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  in_stack_00000018 = auVar11._8_8_ & 0xffff;
  in_stack_00000010 = auVar11._0_8_;
  if (DAT_04531f54 == '\0') {
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04531f54 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04531f55 == '\0') {
    FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230030);
    DAT_04531f55 = '\x01';
  }
  plVar1 = in_stack_00000010;
  if (in_stack_00000010 == (long *)0x0) {
LAB_032588e8:
    if (DAT_04531f56 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f56 = '\x01';
    }
    if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f57 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f57 = '\x01';
    }
    plVar1 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      lVar7 = *in_stack_00000010;
      bVar2 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
        uVar10 = in_stack_00000018 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_03258e94;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258e94:
        (*(code *)*puVar5)(plVar1,uVar10,puVar5[1]);
      }
      else {
        FUN_032018f0(in_stack_00000010,0);
      }
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(unaff_x20 + 0x44) = 0;
    if (unaff_w25 < 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar7 = FUN_03236770();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03338b98(lVar7,0);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03200824(unaff_x19 + 2,0);
  }
  else {
    lVar7 = *in_stack_00000010;
    bVar2 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar10 = in_stack_00000018 & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0325948c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_0325948c:
      iVar4 = (*(code *)*puVar5)(plVar1,uVar10,puVar5[1]);
      if (iVar4 != 0) goto LAB_032588e8;
    }
    else {
      uVar8 = FUN_03344708(in_stack_00000010,0);
      if ((uVar8 & 1) != 0) goto LAB_032588e8;
    }
    *unaff_x19 = 2;
    *(ulong *)(unaff_x19 + 0x18) = in_stack_00000018;
    *(long **)(unaff_x19 + 0x16) = in_stack_00000010;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_022f9ca8(unaff_x19 + 2,&stack0x00000010);
  }
  return;
}


