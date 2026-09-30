/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$.ctor
ENTRY_POINT: 01776528
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>___ctor
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  char cVar1;
  char cVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  long lVar4;
  int in_w9;
  long unaff_x20;
  uint uVar5;
  
  if (in_NG != in_OV) {
    in_w9 = in_w9 + 1;
  }
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0122e748();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0122e748();
  }
  uVar5 = param_2 + (in_w9 >> 1);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  FUN_01776010();
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  FUN_01776010();
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  FUN_01776010();
  if (unaff_x20 == 0) {
LAB_017767a0:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (uVar5 < *(uint *)(unaff_x20 + 0x18)) {
    cVar1 = *(char *)(unaff_x20 + (int)uVar5 + 0x20);
    uVar5 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    FUN_017760e4();
    if ((int)uVar5 <= (int)param_2) {
System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor:
      lVar4 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0122e748();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0122e748();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      FUN_017760e4();
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(unaff_x20 + 0x18)) {
      if (param_4 == 0) goto LAB_017767a0;
      cVar2 = *(char *)(unaff_x20 + (int)param_2 + 0x20);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      iVar3 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),cVar2 != '\0',cVar1 != '\0',
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar3) {
        do {
          uVar5 = uVar5 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar5) goto LAB_0177679c;
          cVar2 = *(char *)(unaff_x20 + (int)uVar5 + 0x20);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0122e748();
          }
          iVar3 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),cVar1 != '\0',cVar2 != '\0',
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar3 < 0);
        if ((int)uVar5 <= (int)param_2) goto System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor;
        lVar4 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0122e748();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0122e748();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0122e748();
        }
        FUN_017760e4();
      }
    }
  }
LAB_0177679c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


