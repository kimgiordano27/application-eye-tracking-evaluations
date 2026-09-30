/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ShiftBufferIfNeeded
ENTRY_POINT: 01712944
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void Newtonsoft_Json_JsonTextReader__ShiftBufferIfNeeded(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  int iVar7;
  uint uVar8;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  puVar1 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  uVar2 = FUN_015fe250(param_2,**(undefined8 **)(param_1 + 0xb8),0);
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 == 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x58);
      *(long *)(unaff_x20 + 0x18) = lVar4;
      if (lVar4 == 0) goto LAB_01712b70;
    }
    uVar2 = FUN_015fe250(lVar4,*(undefined8 *)Method_System_Array_SetValue__,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar4 = FUN_0171153c();
      if ((lVar4 != 0) && (plVar5 = *(long **)(lVar4 + 0x78), plVar5 != (long *)0x0)) {
        iVar7 = 1;
        do {
          lVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
          if (lVar6 == 0) break;
          if (*(int *)(lVar6 + 0x18) < iVar7) {
            return;
          }
          lVar6 = Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar4,iVar7);
          if (lVar6 == 0) break;
          if (0 < *(int *)(lVar6 + 0x10)) {
            Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar4,iVar7);
            FUN_01711fc0();
          }
          plVar5 = *(long **)(lVar4 + 0x78);
          iVar7 = iVar7 + 1;
        } while (plVar5 != (long *)0x0);
      }
LAB_01712b70:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    iVar7 = 0;
    do {
      uVar3 = FUN_0170ff8c();
      FUN_01600424(*unaff_x25,uVar3,*unaff_x26,0);
      FUN_01711fc0();
      iVar7 = iVar7 + 1;
    } while (iVar7 != 7);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_01712f84(uVar3);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar4 = FUN_017113a8();
      if ((lVar4 != 0) && (plVar5 = *(long **)(lVar4 + 0x78), plVar5 != (long *)0x0)) {
        uVar8 = 0;
        do {
          lVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
          if (lVar6 == 0) break;
          iVar7 = uVar8 + 1;
          if (*(int *)(lVar6 + 0x18) < iVar7) {
            return;
          }
          Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar4,iVar7);
          FUN_01711fc0();
          FUN_0170f240(lVar4,iVar7);
          FUN_01711fc0();
          lVar6 = FUN_0170f32c(lVar4);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          FUN_01711fc0();
          plVar5 = *(long **)(lVar4 + 0x78);
          uVar8 = uVar8 + 1;
        } while (plVar5 != (long *)0x0);
      }
      goto LAB_01712b70;
    }
  }
  return;
}


