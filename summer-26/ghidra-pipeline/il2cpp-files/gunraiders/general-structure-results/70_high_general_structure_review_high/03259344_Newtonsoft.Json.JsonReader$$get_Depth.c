/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$get_Depth
ENTRY_POINT: 03259344
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03259544) */

void Newtonsoft_Json_JsonReader__get_Depth(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar9;
  int unaff_w23;
  long *unaff_x24;
  int unaff_w25;
  undefined1 auVar10 [16];
  long *in_stack_00000010;
  ulong in_stack_00000018;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  if (unaff_w23 != 0) {
    auVar10 = FUN_032f1cb4(0);
  }
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4(auVar10._0_8_,auVar10._8_8_,0);
  }
  auVar10 = (**(code **)(*unaff_x21 + 0x318))();
  puVar2 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
  if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  in_stack_00000018 = auVar10._8_8_ & 0xffff;
  in_stack_00000010 = auVar10._0_8_;
  if (DAT_04531f54 == '\0') {
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04531f54 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04531f55 == '\0') {
    FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230030);
    DAT_04531f55 = '\x01';
  }
  plVar3 = in_stack_00000010;
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
    plVar3 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      lVar6 = *in_stack_00000010;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
        uVar9 = in_stack_00000018 & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_03258e94;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258e94:
        (*(code *)*puVar5)(plVar3,uVar9,puVar5[1]);
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
      lVar6 = FUN_03236770();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03338b98(lVar6,0);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03200824(unaff_x19 + 2,0);
  }
  else {
    lVar6 = *in_stack_00000010;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar9 = in_stack_00000018 & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0325948c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_0325948c:
      iVar4 = (*(code *)*puVar5)(plVar3,uVar9,puVar5[1]);
      if (iVar4 != 0) goto LAB_032588e8;
    }
    else {
      uVar7 = FUN_03344708(in_stack_00000010,0);
      if ((uVar7 & 1) != 0) goto LAB_032588e8;
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


