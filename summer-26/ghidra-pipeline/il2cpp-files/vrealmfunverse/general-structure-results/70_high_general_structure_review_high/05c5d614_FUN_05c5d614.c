/*
FUNCTION_NAME: FUN_05c5d614
ENTRY_POINT: 05c5d614
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05c5d614(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_60;
  long local_58 [2];
  uint local_48;
  uint local_34;
  
  local_34 = param_5;
  if (((param_2 & 0x1f0) != 0) && (uVar1 = FUN_05c97594(0), (uVar1 & 1) == 0)) {
    local_58[0] = thunk_FUN_02ba3594(
                                    Method_Oculus_Interaction_PinchPointerVisual_HandleStateChanged__
                                    );
    local_58[1] = 0xffffffffffffffff;
    local_48 = param_2;
    uVar2 = FUN_04db1580(local_58,0);
    uVar5 = thunk_FUN_02ba3594(Method_Autohand_PlacePoint_RecacluatePoseAfterGrab__);
    uVar2 = FUN_04bffdac(uVar5,uVar2,0);
LAB_05c5d86c:
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar5 = thunk_FUN_02b79644();
    FUN_04cf4a4c(uVar5,uVar2,0);
LAB_05c5d890:
    uVar2 = thunk_FUN_02ba3594(Method_Oculus_Interaction_PinchPointerVisual_HandlePostprocessed__);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5,uVar2);
  }
  if ((int)param_4 < 1) {
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar5 = thunk_FUN_02b79644();
    uVar2 = thunk_FUN_02ba3594(Method_RootMotion_Demos_PickUp2Handed_OnPause__);
    puVar3 = PTR_DAT_0631ea50;
  }
  else {
    if ((int)param_5 < 1) {
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar5 = thunk_FUN_02b79644();
      puVar3 = Method_RootMotion_Demos_PickUp2Handed_OnStart__;
    }
    else {
      if ((((param_2 >> 1 & 1) != 0) && (param_5 != 2)) && (param_5 != 4)) {
        uVar2 = FUN_04d78c14(&local_34,0);
        uVar5 = thunk_FUN_02ba3594(Method_Autohand_PlacePoint_RecalculateBeforeGrab__);
        uVar2 = FUN_04bffdac(uVar5,uVar2,0);
        thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
        uVar5 = thunk_FUN_02b79644();
        uVar4 = thunk_FUN_02ba3594(PTR_DAT_0631fa88);
        FUN_04cee0f4(uVar5,uVar2,uVar4,0);
        goto LAB_05c5d890;
      }
      if ((param_2 < 0x10) || ((param_5 & 3) == 0)) {
        lVar6 = (ulong)param_5 * (ulong)param_4;
        local_60 = FUN_05c95430(0);
        puVar3 = PTR_DAT_06312310;
        if (lVar6 - local_60 == 0 || lVar6 < local_60) {
          if (((param_2 >> 3 & 1) == 0) || ((param_3 & 1) == 0)) {
            if (DAT_066d7988 == (code *)0x0) {
              DAT_066d7988 = (code *)FUN_02b3c7e0(
                                                 "UnityEngine.GraphicsBuffer::InitBuffer(UnityEngine.GraphicsBuffer/Target,UnityEngine.GraphicsBuffer/UsageFlags,System.Int32,System.Int32)"
                                                 );
            }
            uVar2 = (*DAT_066d7988)(param_2,param_3,param_4,param_5);
            *(undefined8 *)(param_1 + 0x10) = uVar2;
            return;
          }
          thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
          uVar5 = thunk_FUN_02b79644();
          uVar2 = thunk_FUN_02ba3594(Method_PicoEntitlementAndUserFetcher_<Start>b__1_1__);
          FUN_04cf4a4c(uVar5,uVar2,0);
          goto LAB_05c5d814;
        }
        local_58[0] = lVar6;
        uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x68),local_58);
        uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(puVar3 + 0x68),&local_60);
        uVar4 = thunk_FUN_02ba3594(Method_PicoEntitlementAndUserFetcher_<Start>b__1_0__);
        uVar2 = FUN_04c0af28(uVar4,uVar2,uVar5,0);
        goto LAB_05c5d86c;
      }
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar5 = thunk_FUN_02b79644();
      puVar3 = Method_PicoEntitlementAndUserFetcher_<FetchUser>b__2_0__;
    }
    uVar2 = thunk_FUN_02ba3594(puVar3);
    puVar3 = PTR_DAT_0631fa88;
  }
  uVar4 = thunk_FUN_02ba3594(puVar3);
  FUN_04cee0f4(uVar5,uVar2,uVar4,0);
LAB_05c5d814:
  uVar2 = thunk_FUN_02ba3594(Method_Oculus_Interaction_PinchPointerVisual_HandlePostprocessed__);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar5,uVar2);
}


