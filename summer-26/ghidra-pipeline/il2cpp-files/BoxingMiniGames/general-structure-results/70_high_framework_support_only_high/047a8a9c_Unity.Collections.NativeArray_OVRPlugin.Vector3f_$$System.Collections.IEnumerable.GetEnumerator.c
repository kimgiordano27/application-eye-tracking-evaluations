/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 047a8a9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_IEnumerable_GetEnumerator
              (void)

{
  ulong uVar1;
  undefined8 *puVar2;
  int in_w8;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar6;
  uint uVar7;
  ulong unaff_x22;
  int unaff_w23;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    iVar6 = (int)unaff_x22;
    if (in_w8 <= iVar6) {
      FUN_05e3b0f4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,in_w8 - unaff_w21,0);
      iVar6 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = unaff_w21;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar6 - unaff_w21;
    }
    unaff_x22 = (ulong)iVar6;
    lVar4 = (long)iVar6 * (long)unaff_w23 + 0x20;
    do {
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) goto LAB_047a8bac;
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_047a8bb0;
      if (unaff_x20 == 0) goto LAB_047a8bac;
      puVar2 = (undefined8 *)(lVar3 + lVar4);
      in_stack_00000048 = puVar2[1];
      in_stack_00000040 = *puVar2;
      in_stack_00000050 = puVar2[2];
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      in_w8 = *(int *)(unaff_x19 + 0x18);
      if ((uVar1 & 1) == 0) break;
      unaff_x22 = unaff_x22 + 1;
      lVar4 = lVar4 + 0x18;
    } while ((long)unaff_x22 < (long)in_w8);
    uVar7 = (uint)unaff_x22;
    if ((int)uVar7 < in_w8) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) {
LAB_047a8bac:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if ((*(uint *)(lVar4 + 0x18) <= uVar7) || (*(uint *)(lVar4 + 0x18) <= unaff_w21)) {
LAB_047a8bb0:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      puVar5 = (undefined8 *)(lVar4 + 0x20 + (long)(int)uVar7 * (long)unaff_w23);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + (long)(int)unaff_w21 * (long)unaff_w23);
      unaff_w21 = unaff_w21 + 1;
      uVar9 = puVar5[1];
      uVar8 = *puVar5;
      puVar2[2] = puVar5[2];
      puVar2[1] = uVar9;
      *puVar2 = uVar8;
      thunk_FUN_036b7ad0(puVar2,0);
      in_w8 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = (ulong)(uVar7 + 1);
    }
  } while( true );
}


