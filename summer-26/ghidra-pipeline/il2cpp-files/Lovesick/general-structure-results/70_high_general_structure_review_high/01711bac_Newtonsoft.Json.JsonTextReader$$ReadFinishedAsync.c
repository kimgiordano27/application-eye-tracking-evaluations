/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ReadFinishedAsync
ENTRY_POINT: 01711bac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader__ReadFinishedAsync(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  int iVar4;
  ulong uVar5;
  long *unaff_x28;
  
  while( true ) {
    FUN_01711fc0();
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 0xe) break;
    FUN_017108b8();
  }
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar5 = FUN_01710fb8();
    if ((uVar5 & 1) != 0) goto LAB_01711bec;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_01711bec:
    iVar4 = 1;
    do {
      FUN_0170fd38();
      FUN_01711fc0();
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xe);
  }
  uVar1 = *(uint *)(unaff_x19 + 0x144);
  if (uVar1 == 0xffffffff) {
    uVar1 = FUN_01710fb8();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    iVar4 = 1;
    do {
      FUN_0170fd38();
      FUN_01711fc0();
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xe);
  }
  iVar4 = 0;
  do {
    FUN_017107b8();
    FUN_01711fc0();
    FUN_0170ff8c();
    FUN_01711fc0();
    iVar4 = iVar4 + 1;
  } while (iVar4 != 7);
  plVar2 = *(long **)(unaff_x19 + 0x78);
  if ((plVar2 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240)), lVar3 != 0))
  {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar4 = 1;
      do {
        Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString();
        FUN_01711fc0();
        FUN_0170f240();
        FUN_01711fc0();
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)(lVar3 + 0x18));
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
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
        iVar4 = 1;
        FUN_01711fc0();
        do {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_017109bc(lVar3,iVar4);
          FUN_01711fc0();
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_017108b8(lVar3,iVar4);
          FUN_01711fc0();
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xd);
        iVar4 = 0;
        do {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_017107b8(lVar3,iVar4);
          FUN_01711fc0();
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_0170ff8c(lVar3,iVar4);
          FUN_01711fc0();
          iVar4 = iVar4 + 1;
        } while (iVar4 != 7);
        lVar3 = FUN_0170f32c();
        if (lVar3 != 0) {
          uVar5 = 0;
          do {
            if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar5) {
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
            if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar5 = uVar5 + 1;
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


