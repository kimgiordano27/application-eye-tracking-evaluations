/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$ToArray
ENTRY_POINT: 0276aabc
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ToArray
               (long param_1,int param_2,undefined8 param_3,undefined8 *param_4,long *param_5,
               long param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  int unaff_w25;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  if (param_2 <= unaff_w25) {
    if (param_1 == 0) {
LAB_0276ac2c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    do {
      uVar1 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      lVar4 = param_1 + (long)(int)uVar1 * 0x18;
      uVar7 = *(undefined8 *)(lVar4 + 0x30);
      uVar12 = *(undefined8 *)(lVar4 + 0x28);
      uVar10 = *(undefined8 *)(lVar4 + 0x20);
      uVar5 = param_4[2];
      uVar13 = param_4[1];
      uVar11 = *param_4;
      if (param_5 == (long *)0x0) goto LAB_0276ac2c;
      lVar4 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      lVar4 = **(long **)(lVar4 + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4(lVar4);
      }
      lVar6 = *param_5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0276abd0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0185dba8(param_5,lVar4,0);
LAB_0276abd0:
      in_stack_00000080 = uVar11;
      in_stack_00000088 = uVar13;
      in_stack_00000090 = uVar5;
      in_stack_000000a0 = uVar10;
      in_stack_000000a8 = uVar12;
      in_stack_000000b0 = uVar7;
      iVar2 = (*(code *)*puVar3)(param_5,&stack0x000000a0,&stack0x00000080,puVar3[1]);
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


