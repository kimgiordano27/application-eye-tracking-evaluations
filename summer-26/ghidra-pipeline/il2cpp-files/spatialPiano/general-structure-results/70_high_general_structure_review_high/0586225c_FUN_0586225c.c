/*
FUNCTION_NAME: FUN_0586225c
ENTRY_POINT: 0586225c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_0586225c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_3c [4];
  long local_38;
  undefined8 local_28;
  
  if ((DAT_06bc1075 & 1) == 0) {
    FUN_02f08768(UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo);
    DAT_06bc1075 = 1;
  }
  local_28 = 0;
  local_38 = 0;
  local_3c[0] = 0;
  FUN_05116b38(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar6 = thunk_FUN_02f45270();
    uVar7 = thunk_FUN_02f6ef30(Method_Unity_AppUI_Core_GestureRecognizer<float>_set_value__);
    FUN_0504ee1c(uVar6,uVar7,0);
  }
  else {
    if (*(long *)(param_2 + 0x20) != 0) {
      FUN_05862144(param_1,param_3);
      local_28 = 0;
      if (*(long *)(param_2 + 0x20) != 0) {
        uVar4 = FUN_05894048(*(long *)(param_2 + 0x20),0);
        puVar1 = UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo;
        if ((uVar4 & 1) == 0) {
          local_3c[0] = 0;
          if (*(long *)(param_2 + 0x20) == 0) goto LAB_058623d4;
          local_28 = FUN_058940a4(*(long *)(param_2 + 0x20),param_2,param_1,&local_38,0);
          lVar2 = local_38;
          if (local_38 != 0) {
            uVar7 = thunk_FUN_02f6ef30(
                                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_arSessionOrigin__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(lVar2,uVar7);
          }
          bVar3 = false;
        }
        else {
          local_3c[0] = (byte)(*(uint *)(param_1 + 0x30) >> 0x13) & 1;
          if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar5 = FUN_05861c24(param_2,param_1,&local_28,local_3c,&local_38);
          lVar2 = local_38;
          if (local_38 != 0) {
            uVar7 = thunk_FUN_02f6ef30(
                                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_arSessionOrigin__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(lVar2,uVar7);
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (lVar5 != 0) {
            if (lVar5 == param_1) {
              return;
            }
            FUN_05862144(param_1,lVar5);
            return;
          }
          bVar3 = local_3c[0] != 0;
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        FUN_05861798(param_1,local_28,bVar3,1);
        return;
      }
LAB_058623d4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar6 = thunk_FUN_02f45270();
    uVar7 = thunk_FUN_02f6ef30(Method_Unity_AppUI_Core_GestureRecognizer<float>_set_value__);
    FUN_05056bc4(uVar6,uVar7,0);
  }
  uVar7 = thunk_FUN_02f6ef30(
                            Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_arSessionOrigin__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar6,uVar7);
}


