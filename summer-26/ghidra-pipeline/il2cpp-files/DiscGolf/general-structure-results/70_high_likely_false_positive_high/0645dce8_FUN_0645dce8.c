/*
FUNCTION_NAME: FUN_0645dce8
ENTRY_POINT: 0645dce8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


void FUN_0645dce8(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  int local_34;
  
  if ((DAT_06dcce3f & 1) == 0) {
    FUN_02d965b8(
                Method_Unity_Services_Qos_Http_HttpClient_<>c__DisplayClass4_0_<CreateHttpClientResponse>b__0__
                );
    FUN_02d965b8(
                Method_Unity_Services_Relay_Http_HttpClient_<>c__DisplayClass4_0_<CreateHttpClientResponse>b__0__
                );
    FUN_02d965b8(
                Method_Assets_Scripts_HoleDifficultyImporter_<>c__DisplayClass3_0_<GetHoleStats>b__6__
                );
    DAT_06dcce3f = 1;
  }
  puVar1 = Method_Assets_Scripts_HoleDifficultyImporter_<>c__DisplayClass3_0_<GetHoleStats>b__6__;
  local_34 = 0;
  if (*param_2 != 0) {
    lVar8 = *(long *)(*param_2 + 0xb8);
    if (lVar8 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar2 = FUN_04e8aacc(*(long *)(param_1 + 0x28),lVar8,&local_34,
                           *(undefined8 *)
                            Method_Unity_Services_Qos_Http_HttpClient_<>c__DisplayClass4_0_<CreateHttpClientResponse>b__0__
                          );
      if ((uVar2 & 1) == 0) {
        local_34 = 0;
      }
      plVar3 = (long *)thunk_FUN_02dd3048(lVar8,*(undefined8 *)puVar1);
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0645dddc;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_02dd004c(plVar3,*(long *)puVar1,0);
LAB_0645dddc:
        uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        FUN_0645ff4c(param_1,uVar5);
        lVar6 = *plVar3;
        lVar9 = *param_2;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto UnityEngine_UIElements_GenericDropdownMenu__set_closeOnParentResize;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_02dd004c(plVar3,*(long *)puVar1,0);
UnityEngine_UIElements_GenericDropdownMenu__set_closeOnParentResize:
        uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (lVar9 == 0) goto LAB_0645de9c;
        *(undefined8 *)(lVar9 + 0x158) = uVar5;
        LeanTween__value(lVar9 + 0x158,uVar5);
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_04e88f90(*(long *)(param_1 + 0x28),lVar8,local_34 + 1,
                     *(undefined8 *)
                      Method_Unity_Services_Relay_Http_HttpClient_<>c__DisplayClass4_0_<CreateHttpClientResponse>b__0__
                    );
        return;
      }
    }
  }
LAB_0645de9c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


