/*
FUNCTION_NAME: UnityEngine.UIElements.FocusController$$ProcessPendingFocusChange
ENTRY_POINT: 0735e498
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0735e6a4) */

void UnityEngine_UIElements_FocusController__ProcessPendingFocusChange
               (undefined1 param_1 [16],float param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  int iStack0000000000000010;
  int iStack0000000000000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000068;
  
  FUN_03642964(PTR_DAT_079ffc18);
  *(undefined1 *)(unaff_x21 + 0x150) = 1;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  _iStack0000000000000018 = 0;
  _iStack0000000000000010 = 0;
  if ((unaff_x20 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
    fVar10 = *(float *)(unaff_x20 + 0xa0);
    fVar11 = *(float *)(unaff_x20 + 0xa4);
    uVar9 = *(undefined4 *)(unaff_x20 + 0xa8);
    fVar8 = (float)FUN_0732095c(*(long *)(unaff_x19 + 0x10),0);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_0732095c(*(long *)(unaff_x19 + 0x10),0);
      if ((*(long *)(unaff_x19 + 0x10) != 0) &&
         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x2e0), lVar2 != 0)) {
        uVar1 = FUN_072b00a4(fVar10 - fVar8,fVar11 - param_2,uVar9,lVar2,1,0);
        if (-1 < (int)uVar1) {
          lVar2 = FUN_0735dad8();
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x40), lVar2 == 0)) goto LAB_0735e698;
          if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          lVar2 = lVar2 + (ulong)uVar1 * 0x30;
          _iStack0000000000000018 = *(undefined8 *)(lVar2 + 0x28);
          _iStack0000000000000010 = *(undefined8 *)(lVar2 + 0x20);
          in_stack_00000028 = *(long *)(lVar2 + 0x38);
          in_stack_00000020 = *(undefined8 *)(lVar2 + 0x30);
          in_stack_00000038 = *(undefined8 *)(lVar2 + 0x48);
          in_stack_00000030 = *(undefined8 *)(lVar2 + 0x40);
          if (((iStack0000000000000010 != 0x26afb9) && (in_stack_00000028 != 0)) &&
             (0 < iStack0000000000000018)) {
            FUN_0727b77c(&stack0x00000010,0);
            uVar3 = FUN_0735dad8();
            FUN_0727b684(&stack0x00000010,uVar3,0);
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                        + 0xe4) == 0) {
              thunk_FUN_036a1978(*(long *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                );
            }
            in_stack_00000068 = (long *)FUN_073d75e0();
            if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000068[7] = *(long *)(unaff_x19 + 0x10);
            thunk_FUN_036b7ad0();
            plVar4 = *(long **)(unaff_x19 + 0x10);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            (**(code **)(*plVar4 + 0x188))(plVar4,in_stack_00000068,*(undefined8 *)(*plVar4 + 400));
            plVar4 = in_stack_00000068;
            if (in_stack_00000068 != (long *)0x0) {
              lVar2 = *in_stack_00000068;
              uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_0735e66c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_0367cd30(in_stack_00000068,*(long *)PTR_DAT_079f4598,0);
LAB_0735e66c:
              (*(code *)*puVar5)(plVar4,puVar5[1]);
            }
          }
        }
        return;
      }
    }
  }
LAB_0735e698:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


