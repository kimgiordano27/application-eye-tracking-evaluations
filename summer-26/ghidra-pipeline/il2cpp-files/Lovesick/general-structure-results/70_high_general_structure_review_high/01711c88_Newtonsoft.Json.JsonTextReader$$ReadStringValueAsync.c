/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ReadStringValueAsync
ENTRY_POINT: 01711c88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader__ReadStringValueAsync(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  int iVar3;
  ulong uVar4;
  long *unaff_x28;
  
  do {
    FUN_017107b8();
    FUN_01711fc0();
    FUN_0170ff8c();
    FUN_01711fc0();
    unaff_w21 = unaff_w21 + 1;
  } while (unaff_w21 != 7);
  plVar1 = *(long **)(unaff_x19 + 0x78);
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (lVar2 != 0) {
      if (0 < *(int *)(lVar2 + 0x18)) {
        iVar3 = 1;
        do {
          Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString();
          FUN_01711fc0();
          FUN_0170f240();
          FUN_01711fc0();
          iVar3 = iVar3 + 1;
        } while (iVar3 <= *(int *)(lVar2 + 0x18));
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar2 = FUN_0170ea70();
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x38) == 0) {
          if (*(long *)(lVar2 + 0x10) == 0) goto LAB_01711f1c;
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
        }
        FUN_01711fc0();
        lVar2 = FUN_0170ea70();
        if (lVar2 != 0) {
          if (*(long *)(lVar2 + 0x40) == 0) {
            if (*(long *)(lVar2 + 0x10) == 0) goto LAB_01711f1c;
            *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x18);
          }
          iVar3 = 1;
          FUN_01711fc0();
          do {
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar2 = FUN_0170ea70();
            if (lVar2 == 0) goto LAB_01711f1c;
            FUN_017109bc(lVar2,iVar3);
            FUN_01711fc0();
            lVar2 = FUN_0170ea70();
            if (lVar2 == 0) goto LAB_01711f1c;
            FUN_017108b8(lVar2,iVar3);
            FUN_01711fc0();
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0xd);
          iVar3 = 0;
          do {
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar2 = FUN_0170ea70();
            if (lVar2 == 0) goto LAB_01711f1c;
            FUN_017107b8(lVar2,iVar3);
            FUN_01711fc0();
            lVar2 = FUN_0170ea70();
            if (lVar2 == 0) goto LAB_01711f1c;
            FUN_0170ff8c(lVar2,iVar3);
            FUN_01711fc0();
            iVar3 = iVar3 + 1;
          } while (iVar3 != 7);
          lVar2 = FUN_0170f32c();
          if (lVar2 != 0) {
            uVar4 = 0;
            do {
              if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar4) {
                FUN_01711fc0();
                FUN_01711fc0();
                FUN_01711fc0();
                FUN_01711fc0();
                FUN_01711fc0();
                *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
                return;
              }
              lVar2 = FUN_0170f32c();
              if (lVar2 == 0) break;
              if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar4 = uVar4 + 1;
              FUN_01711fc0();
              lVar2 = FUN_0170f32c();
            } while (lVar2 != 0);
          }
        }
      }
    }
  }
LAB_01711f1c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


