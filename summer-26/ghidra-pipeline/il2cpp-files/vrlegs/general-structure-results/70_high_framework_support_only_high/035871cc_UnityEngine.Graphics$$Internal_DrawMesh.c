/*
FUNCTION_NAME: UnityEngine.Graphics$$Internal_DrawMesh
ENTRY_POINT: 035871cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 UnityEngine_Graphics__Internal_DrawMesh(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  long in_x9;
  int in_w10;
  long lVar5;
  int in_w11;
  long lVar6;
  long in_stack_00000020;
  undefined4 in_stack_00000070;
  
  if (in_w11 < in_w10) {
    if (in_w10 != 0x26ab8) {
      if (in_w10 == 0x2d7ad) {
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          in_x9 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
          if (in_x9 == 0) {
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
        }
        if (*(int *)(in_x9 + 0x18) != 0) {
          iVar1 = *(int *)(in_x9 + 0x24);
          if (iVar1 < -0x1b4fbb34) {
            if (iVar1 == -0x1f38ae01) {
              in_stack_00000070 = 8;
            }
            else {
              if (iVar1 != -0x1b4fbb35) {
                return 0;
              }
              in_stack_00000070 = 2;
            }
          }
          else if (iVar1 == 0x825ec40) {
            in_stack_00000070 = 4;
          }
          else if (iVar1 == 0x74b6c44) {
            in_stack_00000070 = 0x10;
          }
          else {
            if (iVar1 != 0x3998db) {
              return 0;
            }
            in_stack_00000070 = 1;
          }
          *(undefined4 *)(in_stack_00000020 + 0x278) = in_stack_00000070;
          FUN_0209ad50(in_stack_00000020 + 0x280,&stack0x00000070,
                       *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass27_0_TypeInfo
                      );
          return 1;
        }
      }
      else {
        if (in_w10 != 0x2d8fe) {
          return 0;
        }
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          param_1 = *(long *)(param_2 + 0xb8);
          in_x9 = *(long *)(param_1 + 0x88);
          if (in_x9 == 0) goto LAB_0358c010;
        }
        if (*(int *)(in_x9 + 0x18) != 0) {
          if (*(int *)(in_x9 + 0x30) != 3) {
            return 0;
          }
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01a58e78();
            param_1 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          lVar6 = *(long *)(param_1 + 0x80);
          if (lVar6 == 0) goto LAB_0358c010;
          if ((7 < *(uint *)(lVar6 + 0x18)) && (*(uint *)(lVar6 + 0x18) != 8)) {
            uVar4 = FUN_03591da0(param_2,*(undefined2 *)(lVar6 + 0x2e));
            cVar3 = FUN_03591da0(uVar4,*(undefined2 *)(lVar6 + 0x30));
            *(char *)(in_stack_00000020 + 0x4ef) = cVar3 + (char)uVar4 * '\x10';
            return 1;
          }
        }
      }
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_0209afdc(in_stack_00000020 + 0x1f0,&stack0x00000070,
                 *(undefined8 *)
                  RengeGames_HealthBars_RadialSegmentedHealthBar_<UpdateShader>d__333_TypeInfo);
    *(undefined4 *)(in_stack_00000020 + 0x1e8) = in_stack_00000070;
  }
  else if (in_w10 == 0x26109) {
    if ((*(char *)(in_stack_00000020 + 0x431) != '\0') &&
       (*(char *)(in_stack_00000020 + 0x3f5) == '\0')) {
      lVar6 = *(long *)(in_stack_00000020 + 0x368);
      if ((lVar6 == 0) || (lVar5 = *(long *)(lVar6 + 0x48), lVar5 == 0)) goto LAB_0358c010;
      uVar2 = *(uint *)(lVar6 + 0x28);
      if ((int)uVar2 < (int)*(uint *)(lVar5 + 0x18)) {
        if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_0358bfac;
        lVar5 = lVar5 + (long)(int)uVar2 * 0x28;
        *(int *)(lVar5 + 0x38) = *(int *)(in_stack_00000020 + 0x494) - *(int *)(lVar5 + 0x34);
        *(uint *)(lVar6 + 0x28) = uVar2 + 1;
      }
    }
  }
  else {
    if (in_w10 != 0x26490) {
      return 0;
    }
    *(undefined1 *)(in_stack_00000020 + 0x2da) = 0;
  }
  return 1;
}


