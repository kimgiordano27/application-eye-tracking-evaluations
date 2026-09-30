/*
FUNCTION_NAME: StrikerLink.ThirdParty.WebSocketSharp.Server.WebSocketSessionManager.<get_InactiveIDs>d__20$$System.IDisposable.Dispose
ENTRY_POINT: 0656e9ac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__20__System_IDisposable_Dispose
               (long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  
  while (uVar2 = FUN_049cec24(param_1,param_2,param_3), unaff_x19 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar3 == 0) break;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    if ((*(long *)(unaff_x20 + 0x70) == 0) ||
       (lVar3 = FUN_049cec24(*(long *)(unaff_x20 + 0x70),unaff_x21 & 0xffffffff,*unaff_x22),
       lVar3 == 0)) break;
    *(undefined8 *)(lVar3 + 0xf0) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0xf0),0);
    if (*(long *)(unaff_x20 + 0x70) == 0) break;
    FUN_049d05ec(*(long *)(unaff_x20 + 0x70),unaff_x21 & 0xffffffff,*unaff_x24);
    param_2 = unaff_x21;
    do {
      uVar1 = (int)param_2 - 1;
      param_2 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
        return;
      }
      if (((*(long *)(unaff_x20 + 0x70) == 0) ||
          (lVar3 = FUN_049cec24(*(long *)(unaff_x20 + 0x70),param_2,*unaff_x22), lVar3 == 0)) ||
         (*(long *)(lVar3 + 0xe8) == 0)) goto LAB_0656ea54;
    } while (*(int *)(*(long *)(lVar3 + 0xe8) + 0x18) != 0);
    param_1 = *(long *)(unaff_x20 + 0x70);
    if (param_1 == 0) break;
    param_3 = *unaff_x22;
    unaff_x21 = param_2;
  }
LAB_0656ea54:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


