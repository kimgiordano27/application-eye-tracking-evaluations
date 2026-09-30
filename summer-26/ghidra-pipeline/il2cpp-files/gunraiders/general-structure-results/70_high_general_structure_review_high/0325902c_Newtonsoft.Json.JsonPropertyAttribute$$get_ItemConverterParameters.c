/*
FUNCTION_NAME: Newtonsoft.Json.JsonPropertyAttribute$$get_ItemConverterParameters
ENTRY_POINT: 0325902c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03259544) */

void Newtonsoft_Json_JsonPropertyAttribute__get_ItemConverterParameters(void)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ushort unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  long *in_stack_00000010;
  
  thunk_FUN_01c1d1e8();
  uVar6 = (ulong)unaff_w22;
  in_stack_00000010 = unaff_x21;
  if (DAT_04531f54 == '\0') {
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04531f54 = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04531f55 == '\0') {
    FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230030);
    DAT_04531f55 = '\x01';
  }
  plVar2 = in_stack_00000010;
  if (in_stack_00000010 == (long *)0x0) {
LAB_032586d8:
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
    if (in_stack_00000010 != (long *)0x0) {
      lVar5 = *in_stack_00000010;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_03258ba0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258ba0:
        (*(code *)*puVar4)(in_stack_00000010,uVar6,puVar4[1]);
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
    FUN_0309ef84(unaff_x19 + 0xc,
                 *(undefined8 *)AeLa_EasyFeedback_APIs_Trello_<GetBoardsAsync>d__20_TypeInfo);
    FUN_03238610();
    if (unaff_w25 < 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = FUN_03236770();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03338b98(lVar5,0);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03200824(unaff_x19 + 2,0);
  }
  else {
    lVar5 = *in_stack_00000010;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto FUN_03259278;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
FUN_03259278:
      iVar3 = (*(code *)*puVar4)(plVar2,uVar6,puVar4[1]);
      if (iVar3 != 0) goto LAB_032586d8;
    }
    else {
      uVar7 = FUN_03344708(in_stack_00000010,0);
      if ((uVar7 & 1) != 0) goto LAB_032586d8;
    }
    *unaff_x19 = 1;
    *(ulong *)(unaff_x19 + 0x18) = uVar6;
    *(long **)(unaff_x19 + 0x16) = in_stack_00000010;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_022f9ca8(unaff_x19 + 2,&stack0x00000010);
  }
  return;
}


