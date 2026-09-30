/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControlPath$$CleanSlashes
ENTRY_POINT: 03a61bac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a61cb8) */
/* WARNING: Removing unreachable block (ram,0x03a61a88) */
/* WARNING: Removing unreachable block (ram,0x03a61c80) */

void UnityEngine_InputSystem_InputControlPath__CleanSlashes(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  int iVar8;
  long lVar9;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 == 1) {
    plVar4 = (long *)__cxa_begin_catch(param_1);
    lVar9 = *plVar4;
    __cxa_end_catch();
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar4 = (long *)thunk_FUN_01f116d0();
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03a619e0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03a619e0:
      (*(code *)*puVar2)(plVar4,puVar2[1]);
    }
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar9);
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      iVar8 = 0;
      do {
        lVar9 = *unaff_x26;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *unaff_x26;
        }
        plVar4 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x38);
        uStack0000000000000008 = FUN_030ba614();
        uVar3 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar3,uVar3);
        }
        (**(code **)(*plVar4 + 0x3a8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x3b0));
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(unaff_x21 + 0x18));
    }
    lVar9 = 0;
  }
  else {
    plVar4 = (long *)thunk_FUN_01f116d0();
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x03a61c48;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
code_r0x03a61c48:
      (*(code *)*puVar2)(plVar4,puVar2[1]);
    }
    if (param_2 != 1) {
      if (cStack000000000000000c != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14(param_1);
    }
    plVar4 = (long *)__cxa_begin_catch(param_1);
    lVar9 = *plVar4;
    __cxa_end_catch();
  }
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar9);
}


