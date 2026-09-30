/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector3>
ENTRY_POINT: 01e74a78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector3>
               (long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w24;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_01ae9ed0();
  }
  if (param_2 == 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar4 = thunk_FUN_01afaadc();
    uVar5 = thunk_FUN_01ad9084(StringLiteral_2281);
    FUN_02fd1220(uVar4,uVar5,0);
  }
  else if ((unaff_w24 < 0) || (param_3 < 0)) {
    puVar1 = StringLiteral_2280;
    if (-1 < param_3) {
      puVar1 = StringLiteral_2286;
    }
    uVar5 = thunk_FUN_01ad9084(puVar1);
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar4 = thunk_FUN_01afaadc();
    uVar3 = thunk_FUN_01ad9084(StringLiteral_2285);
    FUN_02fd4a78(uVar4,uVar5,uVar3,0);
  }
  else {
    if (unaff_w24 <= *(int *)(param_2 + 0x18) - param_3) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_02c97274(**(long **)(lVar2 + 0xb8),param_2,param_3,unaff_w24);
      return;
    }
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                      );
    uVar4 = thunk_FUN_01afaadc();
    uVar5 = thunk_FUN_01ad9084(StringLiteral_2287);
    FUN_02fd7c54(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar4);
}


