/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$AsReadOnlySpan
ENTRY_POINT: 04a12b38
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__AsReadOnlySpan
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  
  uStack0000000000000118 = 0;
  uStack0000000000000110 = 0;
  uStack0000000000000128 = 0;
  uStack0000000000000120 = 0;
  if (param_1 == 0) {
LAB_04a12d60:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar7 = *(uint *)(param_1 + 0x18);
  iVar4 = param_4 + -1;
  uVar5 = iVar4 + param_2;
  if (uVar5 < uVar7) {
    lVar8 = (long)(int)uVar5;
    lVar1 = param_1 + lVar8 * 0x20;
    uStack0000000000000118 = *(undefined8 *)(lVar1 + 0x28);
    uStack0000000000000110 = *(undefined8 *)(lVar1 + 0x20);
    uStack0000000000000128 = *(undefined8 *)(lVar1 + 0x38);
    uStack0000000000000120 = *(undefined8 *)(lVar1 + 0x30);
    iVar3 = param_3;
    if (param_3 < 0) {
      iVar3 = param_3 + 1;
    }
    if ((int)param_2 <= iVar3 >> 1) {
      do {
        uVar7 = param_2 * 2;
        if ((int)uVar7 < param_3) {
          uVar5 = uVar7 + param_4;
          if (*(uint *)(param_1 + 0x18) <= uVar5 - 1) goto LAB_04a12d5c;
          lVar1 = param_1 + (long)(int)(uVar5 - 1) * 0x20;
          uVar15 = *(undefined8 *)(lVar1 + 0x28);
          uVar13 = *(undefined8 *)(lVar1 + 0x20);
          uVar11 = *(undefined8 *)(lVar1 + 0x38);
          uVar9 = *(undefined8 *)(lVar1 + 0x30);
          if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_04a12d5c;
          lVar1 = param_1 + (long)(int)uVar5 * 0x20;
          uVar16 = *(undefined8 *)(lVar1 + 0x28);
          uVar14 = *(undefined8 *)(lVar1 + 0x20);
          uVar12 = *(undefined8 *)(lVar1 + 0x38);
          uVar10 = *(undefined8 *)(lVar1 + 0x30);
          if (param_5 == 0) goto LAB_04a12d60;
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          in_stack_00000130 = uVar14;
          in_stack_00000138 = uVar16;
          in_stack_00000140 = uVar10;
          in_stack_00000148 = uVar12;
          in_stack_00000150 = uVar13;
          in_stack_00000158 = uVar15;
          in_stack_00000160 = uVar9;
          in_stack_00000168 = uVar11;
          uVar5 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                             *(undefined8 *)(param_5 + 0x28));
          uVar7 = uVar7 | uVar5 >> 0x1f;
        }
        uVar15 = uStack0000000000000128;
        uVar13 = uStack0000000000000120;
        uVar11 = uStack0000000000000118;
        uVar9 = uStack0000000000000110;
        uVar5 = iVar4 + uVar7;
        if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_04a12d5c;
        lVar8 = (long)(int)uVar5;
        lVar1 = param_1 + lVar8 * 0x20;
        uVar16 = *(undefined8 *)(lVar1 + 0x28);
        uVar14 = *(undefined8 *)(lVar1 + 0x20);
        uVar12 = *(undefined8 *)(lVar1 + 0x38);
        uVar10 = *(undefined8 *)(lVar1 + 0x30);
        if (param_5 == 0) goto LAB_04a12d60;
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        in_stack_00000158 = uVar11;
        in_stack_00000150 = uVar9;
        in_stack_00000168 = uVar15;
        in_stack_00000160 = uVar13;
        in_stack_00000130 = uVar14;
        in_stack_00000138 = uVar16;
        in_stack_00000140 = uVar10;
        in_stack_00000148 = uVar12;
        iVar6 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x00000150,&stack0x00000130,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar6) {
          uVar5 = iVar4 + param_2;
          lVar8 = (long)(int)uVar5;
          break;
        }
        if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_04a12d5c;
        uVar13 = *(undefined8 *)(lVar1 + 0x20);
        uVar11 = *(undefined8 *)(lVar1 + 0x38);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        if (*(uint *)(param_1 + 0x18) <= iVar4 + param_2) goto LAB_04a12d5c;
        lVar2 = param_1 + (long)(int)(iVar4 + param_2) * 0x20;
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        *(undefined8 *)(lVar2 + 0x20) = uVar13;
        *(undefined8 *)(lVar2 + 0x38) = uVar11;
        *(undefined8 *)(lVar2 + 0x30) = uVar9;
        thunk_FUN_0329bf60(lVar2 + 0x30,0);
        param_2 = uVar7;
      } while ((int)uVar7 <= iVar3 >> 1);
      uVar7 = *(uint *)(param_1 + 0x18);
    }
    if (uVar5 < uVar7) {
      param_1 = param_1 + lVar8 * 0x20;
      *(undefined8 *)(param_1 + 0x28) = uStack0000000000000118;
      *(undefined8 *)(param_1 + 0x20) = uStack0000000000000110;
      *(undefined8 *)(param_1 + 0x38) = uStack0000000000000128;
      *(undefined8 *)(param_1 + 0x30) = uStack0000000000000120;
      thunk_FUN_0329bf60(param_1 + 0x30,0);
      return;
    }
  }
LAB_04a12d5c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


