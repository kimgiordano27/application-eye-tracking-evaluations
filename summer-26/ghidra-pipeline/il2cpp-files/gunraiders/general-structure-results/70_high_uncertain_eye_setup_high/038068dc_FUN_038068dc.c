/*
FUNCTION_NAME: FUN_038068dc
ENTRY_POINT: 038068dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_038068dc(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long local_38;
  
  if ((DAT_045390ad & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__);
    FUN_01c5d288(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__);
    FUN_01c5d288(Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IScrollHandler>__);
    DAT_045390ad = 1;
  }
  local_38 = 0;
  if (param_3 == 0) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_0380bfd4(param_1,**(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8),param_3);
    if (param_2 == 0) goto LAB_03806b04;
  }
  puVar3 = Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__;
  lVar4 = *(long *)Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *(long *)puVar3;
  }
  plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x238))
                               (plVar5,param_2,*(undefined8 *)(param_1 + 0xc0),
                                *(undefined8 *)(param_1 + 0xf0),&local_38,
                                *(undefined8 *)(*plVar5 + 0x240));
    lVar4 = local_38;
    if (plVar5 == (long *)0x0) {
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar7 = *(undefined8 *)PTR_DAT_0422fd68;
      lVar6 = thunk_FUN_01c495e4(local_38,uVar7);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar4,uVar7);
      }
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)(uVar2 - 1)) {
        uVar8 = 1;
        do {
          if (uVar2 <= uVar8 - 1) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          FUN_0380bfd4(param_1,*(undefined8 *)(lVar6 + 0x20 + (long)(int)(uVar8 - 1) * 8),
                       *(undefined8 *)(lVar6 + 0x20 + (long)(int)uVar8 * 8));
          uVar2 = *(uint *)(lVar6 + 0x18);
          iVar1 = uVar8 + 1;
          uVar8 = uVar8 + 2;
        } while (iVar1 < (int)(uVar2 - 1));
      }
LAB_03806b04:
      System_Net_FixedSizeReadStream___ctor(param_1);
      return;
    }
    lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,4);
    if (lVar4 != 0) {
      if ((*(int *)(lVar4 + 0x18) != 0) &&
         (*(undefined8 *)(lVar4 + 0x20) =
               *(undefined8 *)
                Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IScrollHandler>__,
         *(int *)(lVar4 + 0x18) != 1)) {
        *(long *)(lVar4 + 0x28) = param_2;
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar6 == 0) goto LAB_03806b2c;
        uVar7 = FUN_037f6b90(lVar6,0);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = uVar7;
          uVar7 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
          if (3 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x38) = uVar7;
            FUN_03805714(param_1,*(undefined8 *)
                                  Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__
                         ,lVar4,plVar5);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
LAB_03806b2c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


