/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceQueryResult,-IntPtr>
ENTRY_POINT: 03ed1748
PROGRAM: vandalizer-libil2cpp.so
SCORE: 200
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__As<OVRPlugin_SpaceQueryResult,_IntPtr>(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    FUN_0322bef4(lVar3);
  }
  plVar1 = (long *)thunk_FUN_0322f04c();
  if ((plVar1 == (long *)0x0) || (lVar3 = thunk_FUN_0322f04c(), lVar3 == 0)) {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar3);
    }
    plVar1 = (long *)thunk_FUN_0322f04c();
    if ((plVar1 == (long *)0x0) || (lVar3 = thunk_FUN_0322f04c(), lVar3 == 0)) {
      lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        FUN_0322bef4(lVar3);
      }
      plVar1 = (long *)thunk_FUN_0322f04c();
      if ((plVar1 == (long *)0x0) || (lVar3 = thunk_FUN_0322f04c(), lVar3 == 0)) {
        lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          FUN_0322bef4(lVar3);
        }
        plVar1 = (long *)thunk_FUN_0322f04c();
        if ((plVar1 == (long *)0x0) || (lVar3 = thunk_FUN_0322f04c(), lVar3 == 0)) {
          lVar3 = **(long **)(unaff_x22 + 0x38);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0322bef4(lVar3);
          }
          lVar4 = *unaff_x21;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto System_Runtime_CompilerServices_Unsafe__AsRef<Vertex>;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_0322c1e8();
System_Runtime_CompilerServices_Unsafe__AsRef<Vertex>:
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          goto System_Runtime_CompilerServices_Unsafe__AsRef<RenderBuffer>;
        }
        lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4(lVar3);
        }
        lVar4 = *plVar1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3)
            goto System_Runtime_CompilerServices_Unsafe__AsRef<Pose>;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
      }
      else {
        lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4(lVar3);
        }
        lVar4 = *plVar1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3)
            goto System_Runtime_CompilerServices_Unsafe__AsRef<Pose>;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
      }
    }
    else {
      lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4(lVar3);
      }
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3)
          goto System_Runtime_CompilerServices_Unsafe__AsRef<Pose>;
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3)
        goto System_Runtime_CompilerServices_Unsafe__AsRef<Pose>;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(plVar1,lVar3,0);
System_Runtime_CompilerServices_Unsafe__AsRef<RaycastHit2D>:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
System_Runtime_CompilerServices_Unsafe__AsRef<RenderBuffer>:
                    /* WARNING: Could not recover jumptable at 0x03ed19d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
System_Runtime_CompilerServices_Unsafe__AsRef<Pose>:
  puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  goto System_Runtime_CompilerServices_Unsafe__AsRef<RaycastHit2D>;
}


