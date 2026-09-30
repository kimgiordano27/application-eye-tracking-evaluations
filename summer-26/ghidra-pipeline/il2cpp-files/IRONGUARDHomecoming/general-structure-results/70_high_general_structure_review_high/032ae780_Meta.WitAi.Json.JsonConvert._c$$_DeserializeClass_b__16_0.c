/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c$$<DeserializeClass>b__16_0
ENTRY_POINT: 032ae780
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert_<>c__<DeserializeClass>b__16_0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  puVar1 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  if (**(char **)(lVar3 + 0xb8) != '\0') {
    return;
  }
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_032ae820;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_032ae820:
    iVar2 = (*(code *)*puVar4)();
    lVar3 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_032ae880;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_032ae880:
    lVar3 = (*(code *)*puVar4)();
    if (iVar2 < 0) {
      if (((lVar3 != 0) && (lVar3 = FUN_0390b368(lVar3,0), lVar3 != 0)) &&
         (lVar3 = FUN_0390b70c(lVar3,0), lVar3 != 0)) {
        FUN_0390b988(lVar3,*(undefined8 *)Method_System_Linq_Enumerable_ElementAt<Column>__,0);
        return;
      }
    }
    else {
      uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
      if (lVar3 != 0) {
        FUN_03914a34(lVar3,iVar2,uVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


