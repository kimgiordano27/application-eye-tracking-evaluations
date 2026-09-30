/*
FUNCTION_NAME: Newtonsoft.Json.JsonPropertyAttribute$$set_PropertyName
ENTRY_POINT: 032590b4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03259544) */

void Newtonsoft_Json_JsonPropertyAttribute__set_PropertyName(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long in_x10;
  uint in_w11;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  int unaff_w25;
  long *in_stack_00000010;
  undefined2 uStack0000000000000018;
  undefined6 uStack000000000000001a;
  
  if ((in_w11 < (uint)in_x10) || (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) != in_x9)) {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
          puVar5 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_03259278;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498();
FUN_03259278:
    iVar4 = (*(code *)*puVar5)();
    if (iVar4 != 0) goto LAB_032586d8;
  }
  else {
    uVar7 = FUN_03344708();
    if ((uVar7 & 1) != 0) {
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
      uVar3 = uStack0000000000000018;
      plVar2 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar6 = *in_stack_00000010;
        bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
        if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030))
        {
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_03258ba0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258ba0:
          (*(code *)*puVar5)(plVar2,uVar3,puVar5[1]);
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
      return;
    }
  }
  *unaff_x19 = 1;
  *(ulong *)(unaff_x19 + 0x18) = CONCAT62(uStack000000000000001a,uStack0000000000000018);
  *(long **)(unaff_x19 + 0x16) = in_stack_00000010;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_022f9ca8(unaff_x19 + 2,&stack0x00000010);
  return;
}


