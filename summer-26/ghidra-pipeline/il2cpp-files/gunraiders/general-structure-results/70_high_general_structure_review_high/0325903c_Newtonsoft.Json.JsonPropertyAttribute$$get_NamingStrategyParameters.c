/*
FUNCTION_NAME: Newtonsoft.Json.JsonPropertyAttribute$$get_NamingStrategyParameters
ENTRY_POINT: 0325903c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03259544) */

void Newtonsoft_Json_JsonPropertyAttribute__get_NamingStrategyParameters(void)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  int in_w8;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar7;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  long unaff_x26;
  ulong uStack0000000000000018;
  
  uStack0000000000000018 = in_x9;
  if (in_w8 == 0) {
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    *(undefined1 *)(unaff_x26 + 0xf54) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04531f55 == '\0') {
    FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230030);
    DAT_04531f55 = '\x01';
  }
  if (unaff_x21 == (long *)0x0) {
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
    if (unaff_x21 != (long *)0x0) {
      lVar4 = *unaff_x21;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_03258ba0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01c72498(unaff_x21,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258ba0:
        (*(code *)*puVar3)(unaff_x21,uStack0000000000000018 & 0xffff,puVar3[1]);
      }
      else {
        FUN_032018f0(unaff_x21,0);
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
      lVar4 = FUN_03236770();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03338b98(lVar4,0);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03200824(unaff_x19 + 2,0);
  }
  else {
    lVar4 = *unaff_x21;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar7 = uStack0000000000000018 & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto FUN_03259278;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(unaff_x21,*(long *)System_Threading_Tasks_Task_TypeInfo,0)
      ;
FUN_03259278:
      iVar2 = (*(code *)*puVar3)(unaff_x21,uVar7,puVar3[1]);
      if (iVar2 != 0) goto LAB_032586d8;
    }
    else {
      uVar5 = FUN_03344708(unaff_x21,0);
      if ((uVar5 & 1) != 0) goto LAB_032586d8;
    }
    *unaff_x19 = 1;
    *(ulong *)(unaff_x19 + 0x18) = uStack0000000000000018;
    *(long **)(unaff_x19 + 0x16) = unaff_x21;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_022f9ca8(unaff_x19 + 2,&stack0x00000010);
  }
  return;
}


