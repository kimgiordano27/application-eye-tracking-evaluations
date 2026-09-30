/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 03d437ac
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject<object>(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x22;
  long lVar5;
  undefined8 in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x28);
  lVar1 = *(long *)(lVar5 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar1 = *(long *)(lVar5 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_03d48384(*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x38));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) goto LAB_03d438e8;
  }
  uVar3 = FUN_03ede168();
  if ((uVar3 & 1) != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x68);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4(lVar1);
    }
    plVar2 = (long *)thunk_FUN_0322f04c(in_stack_00000018,lVar1);
    if (plVar2 == (long *)0x0) {
      FUN_03f01128();
      return;
    }
    lVar1 = *plVar2;
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x70);
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar1 = lVar1 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto LAB_03d43938;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    lVar1 = FUN_0322c1e8(plVar2);
LAB_03d43938:
    lVar1 = thunk_FUN_03211620(*(undefined8 *)(lVar1 + 8),lVar5);
    (**(code **)(lVar1 + 8))(plVar2);
    return;
  }
LAB_03d438e8:
  FUN_04d56b3c();
  FUN_0706d7e4();
  return;
}


