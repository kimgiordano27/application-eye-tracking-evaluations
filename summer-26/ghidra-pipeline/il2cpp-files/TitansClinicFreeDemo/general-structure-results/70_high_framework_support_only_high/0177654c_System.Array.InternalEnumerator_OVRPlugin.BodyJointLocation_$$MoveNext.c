/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$MoveNext
ENTRY_POINT: 0177654c
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


uint System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__MoveNext(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0x48);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0122e748();
  }
  uVar5 = unaff_w19 + (unaff_w24 >> 1);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  FUN_01776010();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  FUN_01776010();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
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
    uVar5 = unaff_w23 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    FUN_017760e4();
    if ((int)uVar5 <= (int)unaff_w19) {
System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor:
      lVar4 = *(long *)(unaff_x21 + 0x20);
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
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      FUN_017760e4();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_017767a0;
      cVar2 = *(char *)(unaff_x20 + (int)unaff_w19 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      iVar3 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),cVar2 != '\0',cVar1 != '\0',
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar3) {
        do {
          uVar5 = uVar5 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar5) goto LAB_0177679c;
          cVar2 = *(char *)(unaff_x20 + (int)uVar5 + 0x20);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_0122e748();
          }
          iVar3 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),cVar1 != '\0',cVar2 != '\0',
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar3 < 0);
        if ((int)uVar5 <= (int)unaff_w19)
        goto System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor;
        lVar4 = *(long *)(unaff_x21 + 0x20);
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
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
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


