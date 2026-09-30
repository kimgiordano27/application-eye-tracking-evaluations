/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02f15c00
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 157
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_6;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f15ef4) */
/* WARNING: Removing unreachable block (ram,0x02f15fa4) */

void System_Array_InternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x27;
  long unaff_x29;
  
  FUN_03604b0c();
  if (unaff_x23 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8(lVar7);
    }
    lVar8 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02f15d18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc();
LAB_02f15d18:
    puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
    plVar5 = (long *)(*(code *)*puVar4)();
    puVar3 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    do {
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02f15d88;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)puVar3,0);
LAB_02f15d88:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_02f15ee8;
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_02f15ec0;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8(lVar7);
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto 
            System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
            ;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,lVar7,0);
System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar9 = FUN_02f16078();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar9 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar9 = FUN_03604bc4(param_1,iVar1,0);
          if ((uVar9 & 1) == 0) {
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_03604b48();
          }
        }
      }
      else {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_03604b48(param_1,iVar1,0);
      }
    } while( true );
  }
LAB_02f15f90:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02f15edc;
    }
  }
LAB_02f15ec0:
  puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)puVar2,0);
LAB_02f15edc:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02f15ee8:
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) goto LAB_02f15f90;
    uVar9 = 0;
    do {
      uVar6 = FUN_03604bc4();
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15f90;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        FUN_02f123d0();
      }
      uVar9 = uVar9 + 1;
    } while (unaff_x21 != uVar9);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


