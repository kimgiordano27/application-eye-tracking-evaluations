/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Recti>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0291a45c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint System_Array_InternalEnumerator<OVRPlugin_Recti>__System_Collections_IEnumerator_get_Current
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar1 = param_3 - param_2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01ae9e74();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74();
  }
  uVar4 = param_2 + (iVar1 >> 1);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  FUN_02919f3c();
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  FUN_02919f3c();
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  FUN_02919f3c();
  if (unaff_x20 == 0) {
System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (uVar4 < *(uint *)(unaff_x20 + 0x18)) {
    uVar3 = *(undefined8 *)(unaff_x20 + (long)(int)uVar4 * 8 + 0x20);
    uVar4 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    FUN_0291a014();
    if ((int)uVar4 <= (int)param_2) {
LAB_0291a65c:
      lVar2 = *(long *)(param_5 + 0x20);
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
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      FUN_0291a014();
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(unaff_x20 + 0x18)) {
      if (param_4 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor;
      uVar5 = *(undefined8 *)(unaff_x20 + (long)(int)param_2 * 8 + 0x20);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      iVar1 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),uVar5,uVar3,*(undefined8 *)(param_4 + 0x28)
                        );
      if (-1 < iVar1) {
        do {
          uVar4 = uVar4 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_0291a6c8;
          uVar5 = *(undefined8 *)(unaff_x20 + (long)(int)uVar4 * 8 + 0x20);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ae9e74();
          }
          iVar1 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar3,uVar5,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar4 <= (int)param_2) goto LAB_0291a65c;
        lVar2 = *(long *)(param_5 + 0x20);
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
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
        FUN_0291a014();
      }
    }
  }
LAB_0291a6c8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


