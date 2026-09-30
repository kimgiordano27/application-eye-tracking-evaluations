/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 054e04d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long *param_5
               ,long param_6)

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
  long unaff_x23;
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
  
  if (param_1 != 0) {
    while( true ) {
      uVar1 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar4 = unaff_x23 + (long)(int)uVar1 * 0x18;
      uVar7 = *(undefined8 *)(lVar4 + 0x30);
      uVar12 = *(undefined8 *)(lVar4 + 0x28);
      uVar10 = *(undefined8 *)(lVar4 + 0x20);
      uVar5 = param_4[2];
      uVar13 = param_4[1];
      uVar11 = *param_4;
      if (param_5 == (long *)0x0) break;
      lVar4 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244();
      }
      lVar4 = **(long **)(lVar4 + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244(lVar4);
      }
      lVar6 = *param_5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_054e05bc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(param_5,lVar4,0);
LAB_054e05bc:
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
      if (unaff_w25 < (int)unaff_w19) {
        return ~unaff_w19;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


