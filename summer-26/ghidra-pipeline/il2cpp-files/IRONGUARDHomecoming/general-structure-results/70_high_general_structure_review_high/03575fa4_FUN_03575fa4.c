/*
FUNCTION_NAME: FUN_03575fa4
ENTRY_POINT: 03575fa4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_03575fa4(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 local_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_04833315 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<ImagePosition>__
                      );
    DAT_04833315 = 1;
  }
  puVar2 = Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__;
  uStack_5e = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_66 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  if (param_3 < 8) {
    local_dc[0] = 0;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03576154(param_1,param_2,param_3,param_4,&local_d8,local_dc);
    uVar3 = local_dc[0];
joined_r0x03576100:
    local_dc[0] = uVar3;
    if ((uVar4 & 1) == 0) {
      FUN_01bc4c70(*(undefined8 *)puVar2);
LAB_03576148:
      uVar5 = FUN_035749d4(uVar3,*(undefined8 *)
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<ImagePosition>__
                          );
      goto LAB_03576150;
    }
  }
  else {
    if ((param_3 >> 9 & 1) != 0) {
      local_dc[0] = 0;
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_035754d0(param_1,param_2,param_3);
      uVar3 = local_dc[0];
      goto joined_r0x03576100;
    }
    uStack_5e = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    local_66 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03574dac(param_1,param_2,param_3,&local_d0,param_4,0);
    uVar4 = FUN_03574344(&local_d0,&local_d8);
    if ((uVar4 & 1) == 0) {
      FUN_01bc4c70(*(undefined8 *)puVar2);
      uVar3 = 1;
      goto LAB_03576148;
    }
  }
  uVar5 = local_d8;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_03576150:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


