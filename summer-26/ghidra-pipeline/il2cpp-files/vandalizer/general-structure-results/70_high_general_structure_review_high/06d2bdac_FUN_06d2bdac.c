/*
FUNCTION_NAME: FUN_06d2bdac
ENTRY_POINT: 06d2bdac
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_06d2bdac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40 [2];
  
  if ((DAT_07a50d44 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(UnityEngine_Events_UnityAction<FocusEnterEventArgs>_TypeInfo);
    FUN_031f20f4(UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo);
    FUN_031f20f4(UnityEngine_Events_UnityAction<Color>_TypeInfo);
    FUN_031f20f4(UnityEngine_Events_UnityAction<GameObject>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d64d0);
    FUN_031f20f4(System_Func<Attribute,_bool>_TypeInfo);
    FUN_031f20f4(System_Func<CancellationToken,_Task<HttpWebResponse>>_TypeInfo);
    FUN_031f20f4(UnityEngine_Events_UnityAction<GetArtworksRequest_Response>_TypeInfo);
    DAT_07a50d44 = 1;
  }
  local_40[0] = 0;
  local_40[1] = 0;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_06d2bfcc;
  uVar2 = FUN_056ee1c4(*(long *)(param_1 + 0x28),param_2,param_3,
                       *(undefined8 *)UnityEngine_Events_UnityAction<FocusEnterEventArgs>_TypeInfo);
  if ((uVar2 & 1) != 0) {
    local_50 = param_2;
    uStack_48 = param_3;
    uVar3 = thunk_FUN_0322ed78(*(undefined8 *)PTR_DAT_075d64d0,&local_50);
    uVar3 = FUN_05c7ecc4(*(undefined8 *)
                          UnityEngine_Events_UnityAction<GetArtworksRequest_Response>_TypeInfo,uVar3
                         ,0);
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_0759b238);
    }
    FUN_06de0af4(uVar3,0);
    puVar1 = UnityEngine_Events_UnityAction<Color>_TypeInfo;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_06d2bfcc;
    uVar2 = FUN_056ec6d8(*(long *)(param_1 + 0x30),param_2,param_3,local_40,
                         *(undefined8 *)UnityEngine_Events_UnityAction<Color>_TypeInfo);
    if ((uVar2 & 1) != 0) {
      if (local_40[0] != 0) {
        FUN_04aeddf8(local_40,*(undefined8 *)System_Func<Attribute,_bool>_TypeInfo);
      }
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_06d2bfcc;
      FUN_056ec00c(*(long *)(param_1 + 0x30),param_2,param_3,
                   *(undefined8 *)UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo);
    }
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_06d2bfcc;
    uVar2 = FUN_056ec6d8(*(long *)(param_1 + 0x38),param_2,param_3,local_40,*(undefined8 *)puVar1);
    if ((uVar2 & 1) != 0) {
      if (local_40[0] != 0) {
        FUN_04aeddf8(local_40,*(undefined8 *)System_Func<Attribute,_bool>_TypeInfo);
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_06d2bfcc;
      FUN_056ec00c(*(long *)(param_1 + 0x38),param_2,param_3,
                   *(undefined8 *)UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo);
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_056edfa4(*(long *)(param_1 + 0x28),param_2,param_3,param_4,
                 *(undefined8 *)UnityEngine_Events_UnityAction<GameObject>_TypeInfo);
    return;
  }
LAB_06d2bfcc:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


