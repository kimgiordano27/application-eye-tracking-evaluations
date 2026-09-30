/*
FUNCTION_NAME: FUN_0570dfc0
ENTRY_POINT: 0570dfc0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3
*/


void FUN_0570dfc0(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_066d22fa & 1) == 0) {
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactor<HandGrabInteractor,_HandGrabInteractable>_get_Identifier__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactor<HandGrabInteractor,_HandGrabInteractable>_get_Interactable__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactor<HandGrabInteractor,_HandGrabInteractable>_get_SelectedInteractable__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<Tuple<Vector3,_float>>_Add__);
    FUN_02b3c81c(PTR_DAT_06314ce8);
    FUN_02b3c81c(Oculus_Platform_Request<RejoinDialogResult>_TypeInfo);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactor<HandGrabInteractor,_HandGrabInteractable>_get_HasSelectedInteractable__
                );
    DAT_066d22fa = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  if ((param_3 - 4U < 3) && (*(char *)(param_1 + 0x10) != '\0')) {
    if (param_2 != (long *)0x0) {
      if (*param_2 != *(long *)Oculus_Platform_Request<RejoinDialogResult>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(param_2);
      }
      if (param_2[0x19] != 0) {
        local_40 = *(undefined8 *)(param_2[0x19] + 0x60);
        lVar6 = param_2[0x18];
        local_38 = 0;
        thunk_FUN_02bb0e9c(&local_40);
        local_38 = CONCAT44(local_38._4_4_,(int)lVar6);
        FUN_0570d4c4(param_1,local_40,local_38);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((param_2 == (long *)0x0) || (param_3 != 7)) {
    return;
  }
  lVar6 = *param_2;
  if (lVar6 == *(long *)Oculus_Platform_Request<RejoinDialogResult>_TypeInfo) {
    param_2 = (long *)param_2[0x19];
  }
  else if (lVar6 != *(long *)PTR_DAT_06314ce8) {
    bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_List<Tuple<Vector3,_float>>_Add__ +
                     0x130);
    if (*(byte *)(lVar6 + 0x130) < bVar1) {
      return;
    }
    if (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<Tuple<Vector3,_float>>_Add__) {
      return;
    }
    local_68 = FUN_056e1348(param_2,0);
    FUN_03ccc0c0(&local_58,local_68,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<HandGrabInteractor,_HandGrabInteractable>_get_HasSelectedInteractable__
                );
    puVar3 = 
    Method_Oculus_Interaction_Interactor<HandGrabInteractor,_HandGrabInteractable>_get_SelectedInteractable__
    ;
    puVar2 = 
    Method_Oculus_Interaction_Interactor<HandGrabInteractor,_HandGrabInteractable>_get_Interactable__
    ;
    local_78 = 0;
    puStack_70 = &local_58;
    while( true ) {
      uVar4 = FUN_04730480(&local_58,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) break;
      uVar5 = FUN_047304ac(&local_58,*(undefined8 *)puVar3);
      FUN_0570e21c(param_1,uVar5);
    }
    FUN_02ae1778(&local_78);
    return;
  }
  FUN_0570e21c(param_1,param_2);
  return;
}


