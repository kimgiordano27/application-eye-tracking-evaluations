/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$.ctor
ENTRY_POINT: 02f15c90
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

void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  lVar4 = thunk_FUN_01de27b8(*unaff_x28);
  FUN_03604ad4();
  if (unaff_x23 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01dde7f8(lVar8);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02f15d18;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc();
LAB_02f15d18:
    puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar3 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    do {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02f15d88;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)puVar3,0);
LAB_02f15d88:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_02f15ee8;
        lVar4 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 == 0) goto LAB_02f15ec0;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext;
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01dde7f8(lVar8);
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto 
            System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
            ;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,lVar8,0);
System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar10 = FUN_02f16078();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar10 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar10 = FUN_03604bc4(lVar4,iVar1,0);
          if ((uVar10 & 1) == 0) {
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_03604b48();
          }
        }
      }
      else {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_03604b48(lVar4,iVar1,0);
      }
    } while( true );
  }
LAB_02f15f90:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext:
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02f15edc;
    }
  }
LAB_02f15ec0:
  puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)puVar2,0);
LAB_02f15edc:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_02f15ee8:
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) goto LAB_02f15f90;
    uVar10 = 0;
    do {
      uVar7 = FUN_03604bc4();
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15f90;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        FUN_02f123d0();
      }
      uVar10 = uVar10 + 1;
    } while (unaff_x21 != uVar10);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


