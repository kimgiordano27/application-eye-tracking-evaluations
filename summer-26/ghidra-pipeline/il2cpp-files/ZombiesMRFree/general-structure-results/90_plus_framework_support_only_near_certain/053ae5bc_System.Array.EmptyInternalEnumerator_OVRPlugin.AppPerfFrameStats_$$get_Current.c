/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 053ae5bc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  char cStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 053ae584 with catch @ 053ae5bc
                        */
    unaff_w29 = unaff_w29 + 1;
    uVar5 = (uint)param_1;
    if (uVar5 <= unaff_w24) break;
    if (*(int *)(unaff_x26 + (long)(int)unaff_w24 * (long)(int)unaff_x22 + 0x20) == unaff_w27) {
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02feb2c4(lVar7);
      }
      lVar6 = *unaff_x23;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_053ae57c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_053ae57c:
      uVar8 = (*(code *)*puVar3)();
      if ((uVar8 & 1) != 0) {
        if (cStack0000000000000008 == '\x02') {
          in_stack_00000010 = in_stack_00000018;
          uVar4 = thunk_FUN_0301043c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000010);
          FUN_05b107f0(uVar4,0);
        }
        else if (cStack0000000000000008 == '\x01') {
          if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + (long)(int)unaff_w24 * 0x14 + 0x30) = uStack000000000000000c
            ;
            return 1;
          }
          goto LAB_053ae804;
        }
        return 0;
      }
      uVar5 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar5 <= unaff_w24) goto LAB_053ae804;
    unaff_w24 = *(uint *)(unaff_x26 + (int)unaff_w24 * unaff_x22 + 0x24);
    if ((int)uVar5 <= unaff_w29) {
      FUN_05b108f4(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x20 + 0x20);
    if (uVar10 == uVar5) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
      lVar7 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
      if (lVar7 == 0) goto LAB_053ae808;
      uVar5 = *(uint *)(lVar7 + 0x18);
      iVar2 = 0;
      if (uVar5 != 0) {
        iVar2 = unaff_w27 / (int)uVar5;
      }
      uVar1 = unaff_w27 - iVar2 * uVar5;
      if (uVar5 <= uVar1) goto LAB_053ae804;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
    }
    if (unaff_x26 == 0) {
LAB_053ae808:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (uVar10 < *(uint *)(unaff_x26 + 0x18)) {
      lVar7 = (long)(int)uVar10;
      goto LAB_053ae720;
    }
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar10 = *(uint *)(unaff_x20 + 0x24);
    if (uVar10 < *(uint *)(unaff_x26 + 0x18)) {
      lVar7 = (long)(int)uVar10;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x14 + 0x24);
LAB_053ae720:
      lVar7 = unaff_x26 + lVar7 * 0x14;
      *(int *)(lVar7 + 0x20) = unaff_w27;
      *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
      *(undefined4 *)(lVar7 + 0x30) = uStack000000000000000c;
      *(undefined8 *)(lVar7 + 0x28) = in_stack_00000018;
      *unaff_x28 = uVar10 + 1;
      return 1;
    }
  }
LAB_053ae804:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


