/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetHashCode
ENTRY_POINT: 03c6e9fc
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

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetHashCode(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int in_w8;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint in_w11;
  int iVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long *plVar10;
  uint unaff_w23;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_06769b70;
  uVar6 = 10000;
  if (unaff_w22 != 2) {
    uVar6 = 60000;
  }
  if ((0 < in_w8 && unaff_w23 < in_w11) || (uVar6 < unaff_w23 - in_w11)) {
    lVar3 = *(long *)PTR_DAT_06769b70;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar1;
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
      lVar3 = **(long **)(lVar3 + 0xb8);
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
        uVar6 = in_w8 - 1;
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        puVar4 = (undefined8 *)(lVar7 + (ulong)uVar6 * 8 + 0x20);
        plVar10 = (long *)*puVar4;
        *puVar4 = 0;
        thunk_FUN_02dd37b4(puVar4,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar5 = FUN_04fa51f0(lVar3,0);
        if ((uVar5 & 1) != 0) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar2 = (**(code **)(*plVar10 + 0x158))(plVar10,*(undefined8 *)(*plVar10 + 0x160));
          FUN_04fb6e20(lVar3,uVar2,(int)plVar10[3],unaff_w20,0);
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


