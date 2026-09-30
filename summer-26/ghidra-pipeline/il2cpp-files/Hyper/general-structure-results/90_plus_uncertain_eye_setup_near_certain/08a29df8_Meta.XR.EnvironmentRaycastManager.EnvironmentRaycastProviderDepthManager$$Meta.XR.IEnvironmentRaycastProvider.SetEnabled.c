/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.SetEnabled
ENTRY_POINT: 08a29df8
PROGRAM: Hyper-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_SetEnabled
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar4;
  undefined4 unaff_s8;
  undefined8 in_stack_00000018;
  
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    in_stack_00000018 = uVar2;
    lVar1 = FUN_089bc7d4();
    if (lVar1 != 0) {
      in_stack_00000018 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = FUN_06fc9c98(0x3f800000,&stack0x00000018,*unaff_x25);
      lVar1 = thunk_FUN_04983f60(*unaff_x24);
      FUN_08dbf2f0(lVar1,0);
      *(int *)(lVar1 + 0x20) = (int)((ulong)uVar2 >> 0x20);
      uVar2 = DAT_01da6300;
      plVar3 = (long *)(unaff_x19 + 0xa0);
      *plVar3 = lVar1;
      *(undefined4 *)(lVar1 + 0x24) = uVar4;
      *(undefined8 *)(lVar1 + 0x18) = uVar2;
      thunk_FUN_049ee3d8(plVar3,lVar1);
      lVar1 = *plVar3;
      uVar2 = thunk_FUN_04983f60(*unaff_x23);
      FUN_05f901fc();
      if (lVar1 != 0) {
        FUN_08a28508(lVar1,uVar2);
        lVar1 = FUN_089bc7d4();
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x28);
          in_stack_00000018 = uVar2;
          lVar1 = FUN_089bc7d4();
          if (lVar1 != 0) {
            in_stack_00000018 = *(undefined8 *)(lVar1 + 0x30);
            uVar4 = FUN_06fc9c98(unaff_s8,&stack0x00000018,*unaff_x25);
            lVar1 = thunk_FUN_04983f60(*unaff_x24);
            FUN_08dbf2f0(lVar1,0);
            *(int *)(lVar1 + 0x20) = (int)((ulong)uVar2 >> 0x20);
            uVar2 = DAT_01da64d8;
            plVar3 = (long *)(unaff_x19 + 0xa8);
            *plVar3 = lVar1;
            *(undefined4 *)(lVar1 + 0x24) = uVar4;
            *(undefined8 *)(lVar1 + 0x18) = uVar2;
            thunk_FUN_049ee3d8(plVar3,lVar1);
            lVar1 = *plVar3;
            uVar2 = thunk_FUN_04983f60(*unaff_x23);
            FUN_05f901fc();
            if (lVar1 != 0) {
              FUN_08a28508(lVar1,uVar2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


