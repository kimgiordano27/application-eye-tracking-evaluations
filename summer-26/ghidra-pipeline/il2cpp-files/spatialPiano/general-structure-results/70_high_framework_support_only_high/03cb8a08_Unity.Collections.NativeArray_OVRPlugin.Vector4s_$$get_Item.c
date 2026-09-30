/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Item
ENTRY_POINT: 03cb8a08
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Item(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *in_x9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar5;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    uVar9 = in_x9[4];
    uVar8 = in_x9[7];
    uVar7 = in_x9[6];
    uVar11 = in_x9[1];
    uVar10 = *in_x9;
    uVar13 = in_x9[3];
    uVar12 = in_x9[2];
    unaff_w21 = unaff_w21 + 1;
    param_1[5] = in_x9[5];
    param_1[4] = uVar9;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    param_1[1] = uVar11;
    *param_1 = uVar10;
    param_1[3] = uVar13;
    param_1[2] = uVar12;
    iVar2 = *(int *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      if (iVar2 <= (int)unaff_x22) {
        Newtonsoft_Json_Linq_JObject__LoadAsync
                  (*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar2 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      unaff_x22 = (ulong)(int)unaff_x22;
      uVar6 = unaff_x23 | unaff_x22 << 6;
      do {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_03cb8a6c;
        if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) goto LAB_03cb8a70;
        if (unaff_x20 == 0) goto LAB_03cb8a6c;
        puVar1 = (undefined8 *)(lVar4 + uVar6);
        in_stack_00000088 = puVar1[1];
        in_stack_00000080 = *puVar1;
        in_stack_00000098 = puVar1[3];
        in_stack_00000090 = puVar1[2];
        in_stack_000000a8 = puVar1[5];
        in_stack_000000a0 = puVar1[4];
        in_stack_000000b8 = puVar1[7];
        in_stack_000000b0 = puVar1[6];
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar2 = *(int *)(unaff_x19 + 0x18);
        if ((uVar3 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        uVar6 = uVar6 + 0x40;
      } while ((long)unaff_x22 < (long)iVar2);
      uVar5 = (uint)unaff_x22;
    } while (iVar2 <= (int)uVar5);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_03cb8a6c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(uint *)(lVar4 + 0x18) <= uVar5) || (*(uint *)(lVar4 + 0x18) <= unaff_w21)) {
LAB_03cb8a70:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    in_x9 = (undefined8 *)(lVar4 + 0x20 + (long)(int)uVar5 * 0x40);
    param_1 = (undefined8 *)(lVar4 + 0x20 + (long)(int)unaff_w21 * 0x40);
  } while( true );
}


