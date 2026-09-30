/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector4f,-IntPtr>
ENTRY_POINT: 03ed176c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 180
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__As<OVRPlugin_Vector4f,_IntPtr>(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_0322f04c(), lVar1 == 0)) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar1);
    }
    param_1 = (long *)thunk_FUN_0322f04c();
    if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_0322f04c(), lVar1 == 0)) {
      lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        FUN_0322bef4(lVar1);
      }
      param_1 = (long *)thunk_FUN_0322f04c();
      if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_0322f04c(), lVar1 == 0)) {
        lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          FUN_0322bef4(lVar1);
        }
        param_1 = (long *)thunk_FUN_0322f04c();
        if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_0322f04c(), lVar1 == 0)) {
          lVar1 = **(long **)(unaff_x22 + 0x38);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0322bef4(lVar1);
          }
          lVar3 = *unaff_x21;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == lVar1) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                goto System_Runtime_CompilerServices_Unsafe__AsRef<Vertex>;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_0322c1e8();
System_Runtime_CompilerServices_Unsafe__AsRef<Vertex>:
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          goto System_Runtime_CompilerServices_Unsafe__AsRef<RenderBuffer>;
        }
        lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0322bef4(lVar1);
        }
        lVar3 = *param_1;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar1)
            goto System_Runtime_CompilerServices_Unsafe__AsRef<Pose>;
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
      }
      else {
        lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0322bef4(lVar1);
        }
        lVar3 = *param_1;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar1)
            goto System_Runtime_CompilerServices_Unsafe__AsRef<Pose>;
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
      }
    }
    else {
      lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4(lVar1);
      }
      lVar3 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar1)
          goto System_Runtime_CompilerServices_Unsafe__AsRef<Pose>;
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4(lVar1);
    }
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar1)
        goto System_Runtime_CompilerServices_Unsafe__AsRef<Pose>;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(param_1,lVar1,0);
System_Runtime_CompilerServices_Unsafe__AsRef<RaycastHit2D>:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
System_Runtime_CompilerServices_Unsafe__AsRef<RenderBuffer>:
                    /* WARNING: Could not recover jumptable at 0x03ed19d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
System_Runtime_CompilerServices_Unsafe__AsRef<Pose>:
  puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  goto System_Runtime_CompilerServices_Unsafe__AsRef<RaycastHit2D>;
}


