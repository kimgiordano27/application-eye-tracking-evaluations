/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetEnumerator
ENTRY_POINT: 050a4584
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetEnumerator
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long *param_5
               ,long param_6)

{
  uint uVar1;
  char in_NG;
  char in_OV;
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
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (in_NG == in_OV) {
    if (param_1 == 0) {
LAB_050a46d4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    do {
      uVar1 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
                    /* try { // try from 050a45d4 to 051a45db has its CatchHandler @ 050a46e8 */
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar4 = param_1 + (long)(int)uVar1 * 0x18;
      uVar11 = param_4[1];
      uVar10 = *param_4;
      uVar7 = param_4[2];
      uVar13 = *(undefined8 *)(lVar4 + 0x28);
      uVar12 = *(undefined8 *)(lVar4 + 0x20);
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      if (param_5 == (long *)0x0) goto LAB_050a46d4;
      lVar4 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      lVar4 = **(long **)(lVar4 + 0xc0);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090(lVar4);
      }
      lVar6 = *param_5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_050a467c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(param_5,lVar4,0);
LAB_050a467c:
      in_stack_00000040 = uVar10;
      in_stack_00000048 = uVar11;
      in_stack_00000050 = uVar7;
      in_stack_00000060 = uVar12;
      in_stack_00000068 = uVar13;
      in_stack_00000070 = uVar5;
      iVar2 = (*(code *)*puVar3)(param_5,&stack0x00000060,&stack0x00000040,puVar3[1]);
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


