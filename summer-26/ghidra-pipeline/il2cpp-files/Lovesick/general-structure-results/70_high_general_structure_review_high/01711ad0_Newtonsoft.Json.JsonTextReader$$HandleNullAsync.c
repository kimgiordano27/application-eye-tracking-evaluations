/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$HandleNullAsync
ENTRY_POINT: 01711ad0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader__HandleNullAsync(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  int in_w8;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar5;
  ulong uVar6;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 == 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01711f1c;
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x50);
      *(long *)(unaff_x19 + 0x20) = lVar3;
      if (lVar3 == 0) goto LAB_01711f1c;
    }
    FUN_015fe250(lVar3,*(undefined8 *)StringLiteral_8902,0);
  }
  FUN_01711fc0();
  if (in_stack_00000008._4_1_ == '\0') {
    FUN_0170f380();
    FUN_01711fc0();
  }
  puVar1 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  FUN_01712b98();
  iVar5 = 1;
  do {
    FUN_017108b8();
    FUN_01711fc0();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar6 = FUN_01710fb8();
    if ((uVar6 & 1) != 0) goto LAB_01711bec;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_01711bec:
    iVar5 = 1;
    do {
      FUN_0170fd38();
      FUN_01711fc0();
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xe);
  }
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = FUN_01710fb8();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar5 = 1;
    do {
      FUN_0170fd38();
      FUN_01711fc0();
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xe);
  }
  iVar5 = 0;
  do {
    FUN_017107b8();
    FUN_01711fc0();
    FUN_0170ff8c();
    FUN_01711fc0();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  plVar4 = *(long **)(unaff_x19 + 0x78);
  if ((plVar4 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)), lVar3 != 0))
  {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar5 = 1;
      do {
        Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString();
        FUN_01711fc0();
        FUN_0170f240();
        FUN_01711fc0();
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(int *)(lVar3 + 0x18));
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar3 = FUN_0170ea70();
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x38) == 0) {
        if (*(long *)(lVar3 + 0x10) == 0) goto LAB_01711f1c;
        *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
      }
      FUN_01711fc0();
      lVar3 = FUN_0170ea70();
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x40) == 0) {
          if (*(long *)(lVar3 + 0x10) == 0) goto LAB_01711f1c;
          *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x18);
        }
        iVar5 = 1;
        FUN_01711fc0();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_017109bc(lVar3,iVar5);
          FUN_01711fc0();
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_017108b8(lVar3,iVar5);
          FUN_01711fc0();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0xd);
        iVar5 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_017107b8(lVar3,iVar5);
          FUN_01711fc0();
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_0170ff8c(lVar3,iVar5);
          FUN_01711fc0();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 7);
        lVar3 = FUN_0170f32c();
        if (lVar3 != 0) {
          uVar6 = 0;
          do {
            if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar6) {
              FUN_01711fc0();
              FUN_01711fc0();
              FUN_01711fc0();
              FUN_01711fc0();
              FUN_01711fc0();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              return;
            }
            lVar3 = FUN_0170f32c();
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar6 = uVar6 + 1;
            FUN_01711fc0();
            lVar3 = FUN_0170f32c();
          } while (lVar3 != 0);
        }
      }
    }
  }
LAB_01711f1c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


