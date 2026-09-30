/*
FUNCTION_NAME: FUN_0589adc8
ENTRY_POINT: 0589adc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void FUN_0589adc8(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_68;
  
  local_68 = param_3;
  if ((DAT_066d3142 & 1) == 0) {
    FUN_02b3c81c(Method_System_Nullable<Vector2>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<Vector2>_GetValueOrDefault__);
    FUN_02b3c81c(Method_System_Nullable<InputControlScheme>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<InputDeviceMatcher>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<InputDeviceMatcher>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<InputDeviceMatcher>_get_Value__);
    FUN_02b3c81c(PTR_DAT_06320cb0);
    DAT_066d3142 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x50);
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar7 = Method_System_Nullable<OVRPlugin_XrApi>_get_Value__;
    puVar6 = Method_System_Nullable<Vector2>_GetValueOrDefault__;
    puVar5 = Method_System_Nullable<Vector2>__ctor__;
    puVar4 = Method_System_Nullable<InputDeviceMatcher>__ctor__;
    puVar3 = Method_System_Nullable<InputControlScheme>_get_Value__;
    puVar2 = PTR_DAT_06320cb0;
    if (param_2 != 0) {
      FUN_038145fc(&local_b0,param_2,
                   *(undefined8 *)Method_System_Nullable<InputDeviceMatcher>_get_Value__);
      uStack_88 = uStack_a8;
      local_90 = local_b0;
      local_78 = uStack_98;
      local_80 = local_a0;
      while( true ) {
        do {
          while( true ) {
            uVar8 = FUN_04738328(&local_90,*(undefined8 *)puVar4);
            if ((uVar8 & 1) == 0) {
              FUN_04738324(&local_90,*(undefined8 *)puVar3);
              if ((param_4 & 1) != 0) {
                uVar12 = *(undefined8 *)(param_1 + 0x50);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_05cc9df8(&local_68,uVar12,0);
              }
              return;
            }
            uVar8 = local_78 & 0xffffffff;
            if ((int)local_80 != 1) break;
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4(0,uVar8);
            }
            lVar9 = FUN_0463e17c(*(long *)(param_1 + 0x20),uVar8,*(undefined8 *)puVar5);
            *(undefined1 *)(lVar9 + 0x18) = 1;
          }
        } while ((int)local_80 != 0);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4(0,uVar8);
        }
        lVar9 = FUN_0463f048(*(long *)(param_1 + 0x18),uVar8,*(undefined8 *)puVar6);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05cc95ac(&local_b0,&local_68,lVar9,0);
        *(undefined8 *)(lVar9 + 0x138) = uStack_a8;
        *(undefined8 *)(lVar9 + 0x130) = local_b0;
        *(undefined8 *)(lVar9 + 0x140) = local_a0;
        lVar9 = *(long *)(param_1 + 0x50);
        if (lVar9 == 0) break;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar7;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + 0x28) = uStack_a8;
          *(undefined8 *)(lVar10 + 0x20) = local_b0;
          *(undefined8 *)(lVar10 + 0x30) = local_a0;
        }
        else {
          FUN_03810e84(lVar9,&local_b0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


