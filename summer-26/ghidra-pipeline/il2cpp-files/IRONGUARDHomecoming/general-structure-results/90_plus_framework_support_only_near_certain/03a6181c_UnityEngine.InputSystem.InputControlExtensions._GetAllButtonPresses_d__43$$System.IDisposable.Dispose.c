/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControlExtensions.<GetAllButtonPresses>d__43$$System.IDisposable.Dispose
ENTRY_POINT: 03a6181c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a61b0c) */
/* WARNING: Removing unreachable block (ram,0x03a619f8) */
/* WARNING: Removing unreachable block (ram,0x03a61a88) */
/* WARNING: Removing unreachable block (ram,0x03a61b28) */

void UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
               (undefined8 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x21;
  int iVar12;
  long *unaff_x22;
  long *plVar13;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
code_r0x03a6181c:
  uVar5 = (*(code *)*param_1)();
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar5 & 1) != 0) {
    lVar10 = *unaff_x22;
                    /* try { // try from 03a61834 to 03b6183b has its CatchHandler @ 03a61868 */
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03a6187c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03a6187c:
    plVar7 = (long *)(*(code *)*puVar6)();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*unaff_x28 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar6 = (undefined8 *)thunk_FUN_01f11920();
    plVar7 = (long *)puVar6[1];
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar7;
    bVar2 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar13 = (long *)*puVar6;
    lVar10 = (**(code **)(lVar10 + 0x198))(plVar7,*(undefined8 *)(lVar10 + 0x1a0));
    if (lVar10 == 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar13);
      }
      puVar8 = (undefined4 *)thunk_FUN_01f11920(plVar13);
      uVar1 = *puVar8;
      lVar10 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      if (uVar3 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
      }
      else {
        FUN_030ba904();
      }
    }
    lVar10 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          param_1 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x03a6181c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    param_1 = (undefined8 *)FUN_01ecb238();
    goto code_r0x03a6181c;
  }
  plVar7 = (long *)thunk_FUN_01f116d0();
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03a619e0;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_03a619e0:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    iVar12 = 0;
    do {
      lVar10 = *unaff_x26;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar10 = *unaff_x26;
      }
      plVar7 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
      uStack0000000000000008 = FUN_030ba614();
      uVar9 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar9,uVar9);
      }
      (**(code **)(*plVar7 + 0x3a8))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x3b0));
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(unaff_x21 + 0x18));
  }
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  return;
}


