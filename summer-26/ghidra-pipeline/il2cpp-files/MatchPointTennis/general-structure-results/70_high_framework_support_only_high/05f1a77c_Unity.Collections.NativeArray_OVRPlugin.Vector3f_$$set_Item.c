/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$set_Item
ENTRY_POINT: 05f1a77c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long *param_5
               ,long param_6)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  int unaff_w25;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  if (in_NG == in_OV) {
    if (param_1 == 0) {
LAB_05f1a8e4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      uVar1 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar4 = param_1 + (long)(int)uVar1 * 0x30;
      uVar14 = *(undefined8 *)(lVar4 + 0x38);
      uVar12 = *(undefined8 *)(lVar4 + 0x30);
      uVar10 = *(undefined8 *)(lVar4 + 0x48);
      uVar8 = *(undefined8 *)(lVar4 + 0x40);
      uVar19 = *(undefined8 *)(lVar4 + 0x28);
      uVar18 = *(undefined8 *)(lVar4 + 0x20);
      uVar15 = param_4[3];
      uVar13 = param_4[2];
      uVar11 = param_4[5];
      uVar9 = param_4[4];
      uVar17 = param_4[1];
      uVar16 = *param_4;
      if (param_5 == (long *)0x0) goto LAB_05f1a8e4;
      lVar4 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      lVar4 = **(long **)(lVar4 + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8(lVar4);
      }
      lVar5 = *param_5;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05f1a888;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(param_5,lVar4,0);
LAB_05f1a888:
      in_stack_000000c0 = uVar16;
      in_stack_000000c8 = uVar17;
      in_stack_000000d0 = uVar13;
      in_stack_000000d8 = uVar15;
      in_stack_000000e0 = uVar9;
      in_stack_000000e8 = uVar11;
      in_stack_000000f0 = uVar18;
      in_stack_000000f8 = uVar19;
      in_stack_00000100 = uVar12;
      in_stack_00000108 = uVar14;
      in_stack_00000110 = uVar8;
      in_stack_00000118 = uVar10;
      iVar2 = (*(code *)*puVar3)(param_5,&stack0x000000f0,&stack0x000000c0,puVar3[1]);
      if (iVar2 == 0) {
        return uVar1;
      }
      if (iVar2 < 0) {
        unaff_w19 = uVar1 + 1;
      }
      else {
        unaff_w25 = uVar1 - 1;
      }
    } while ((int)unaff_w19 <= unaff_w25);
  }
  return ~unaff_w19;
}


