/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Equals
ENTRY_POINT: 05f19c20
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Equals(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  
  do {
    uVar5 = unaff_w24 * 2;
    if ((int)uVar5 < unaff_w23) {
      if ((*(uint *)(unaff_x19 + 0x18) <= (uVar5 + in_stack_00000008._4_4_) - 1) ||
         (*(uint *)(unaff_x19 + 0x18) <= uVar5 + in_stack_00000008._4_4_)) goto LAB_05f19e58;
      if (unaff_x21 == 0) goto LAB_05f19e5c;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      uVar3 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000290,&stack0x00000250,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar5 = uVar5 | uVar3 >> 0x1f;
    }
    uVar3 = unaff_w25 + uVar5;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar3) goto LAB_05f19e58;
    lVar6 = (long)(int)uVar3;
    lVar1 = unaff_x19 + lVar6 * 0x40;
    if (unaff_x21 == 0) {
LAB_05f19e5c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    iVar4 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000290,&stack0x00000250,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar4) {
      uVar3 = unaff_w25 + unaff_w24;
      lVar6 = (long)(int)uVar3;
      goto FUN_05f19dfc;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar3) goto LAB_05f19e58;
    uVar7 = *(undefined8 *)(lVar1 + 0x40);
    uVar9 = *(undefined8 *)(lVar1 + 0x58);
    uVar8 = *(undefined8 *)(lVar1 + 0x50);
    uVar11 = *(undefined8 *)(lVar1 + 0x28);
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    uVar13 = *(undefined8 *)(lVar1 + 0x38);
    uVar12 = *(undefined8 *)(lVar1 + 0x30);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_05f19e58;
    lVar2 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * 0x40;
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar2 + 0x40) = uVar7;
    *(undefined8 *)(lVar2 + 0x58) = uVar9;
    *(undefined8 *)(lVar2 + 0x50) = uVar8;
    *(undefined8 *)(lVar2 + 0x28) = uVar11;
    *(undefined8 *)(lVar2 + 0x20) = uVar10;
    *(undefined8 *)(lVar2 + 0x38) = uVar13;
    *(undefined8 *)(lVar2 + 0x30) = uVar12;
    thunk_FUN_044bb4b4(lVar2 + 0x20,0);
    unaff_w24 = uVar5;
    if (unaff_w26 < (int)uVar5) {
FUN_05f19dfc:
      if (uVar3 < *(uint *)(unaff_x19 + 0x18)) {
        lVar1 = unaff_x19 + lVar6 * 0x40;
        *(undefined8 *)(lVar1 + 0x48) = in_stack_00000238;
        *(undefined8 *)(lVar1 + 0x40) = in_stack_00000230;
        *(undefined8 *)(lVar1 + 0x58) = in_stack_00000248;
        *(undefined8 *)(lVar1 + 0x50) = in_stack_00000240;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000218;
        *(undefined8 *)(lVar1 + 0x20) = in_stack_00000210;
        *(undefined8 *)(lVar1 + 0x38) = in_stack_00000228;
        *(undefined8 *)(lVar1 + 0x30) = in_stack_00000220;
        thunk_FUN_044bb4b4(lVar1 + 0x20,0);
        return;
      }
LAB_05f19e58:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
  } while( true );
}


