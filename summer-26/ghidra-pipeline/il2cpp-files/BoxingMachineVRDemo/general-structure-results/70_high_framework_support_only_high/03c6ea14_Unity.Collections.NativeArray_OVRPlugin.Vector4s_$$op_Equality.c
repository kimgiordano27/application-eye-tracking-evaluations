/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$op_Equality
ENTRY_POINT: 03c6ea14
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6eb74) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__op_Equality(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int in_w8;
  uint in_w9;
  long lVar7;
  int iVar8;
  uint in_w11;
  int iVar9;
  byte in_w12;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long *plVar10;
  uint unaff_w23;
  undefined8 in_stack_00000008;
  
  puVar2 = PTR_DAT_06769b70;
  if (((in_w12 & unaff_w23 < in_w11) != 0) || (in_w9 < unaff_w23 - in_w11)) {
    lVar4 = *(long *)PTR_DAT_06769b70;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar2;
      in_w8 = *(int *)(unaff_x19 + 0x18);
    }
    if (0 < in_w8) {
      iVar8 = 1;
      if (unaff_w22 == 1) {
        iVar8 = 2;
      }
      iVar9 = 8;
      if (0x4000 < unaff_w21) {
        iVar9 = 9;
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      if (unaff_w22 == 2) {
        iVar8 = iVar9;
      }
      iVar8 = iVar8 + 1;
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 < 1) {
          if (*(uint *)(unaff_x19 + 0x1c) < 0xffffc567) {
            *(uint *)(unaff_x19 + 0x1c) = *(uint *)(unaff_x19 + 0x1c) + 15000;
          }
          break;
        }
        lVar7 = *(long *)(unaff_x19 + 0x10);
        uVar1 = in_w8 - 1;
        *(uint *)(unaff_x19 + 0x18) = uVar1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        puVar5 = (undefined8 *)(lVar7 + (ulong)uVar1 * 8 + 0x20);
        plVar10 = (long *)*puVar5;
        *puVar5 = 0;
        thunk_FUN_02dd37b4(puVar5,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar6 = FUN_04fa51f0(lVar4,0);
        if ((uVar6 & 1) != 0) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar3 = (**(code **)(*plVar10 + 0x158))(plVar10,*(undefined8 *)(*plVar10 + 0x160));
          FUN_04fb6e20(lVar4,uVar3,(int)plVar10[3],unaff_w20,0);
        }
        in_w8 = *(int *)(unaff_x19 + 0x18);
      } while (0 < in_w8);
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_02d6ec70();
  }
  return;
}


