/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 03cb88d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong unaff_x22;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  lVar8 = 0x20;
  do {
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) goto LAB_03cb8a6c;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_03cb8a70;
    if (unaff_x20 == 0) goto LAB_03cb8a6c;
    puVar1 = (undefined8 *)(lVar6 + lVar8);
    in_stack_00000088 = puVar1[1];
    in_stack_00000080 = *puVar1;
    in_stack_00000098 = puVar1[3];
    in_stack_00000090 = puVar1[2];
    in_stack_000000a8 = puVar1[5];
    in_stack_000000a0 = puVar1[4];
    in_stack_000000b8 = puVar1[7];
    in_stack_000000b0 = puVar1[6];
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar3 = *(int *)(unaff_x19 + 0x18);
    if ((uVar4 & 1) != 0) break;
    unaff_x22 = unaff_x22 + 1;
    lVar8 = lVar8 + 0x40;
  } while ((long)unaff_x22 < (long)iVar3);
  if (iVar3 <= (int)unaff_x22) {
    return 0;
  }
  uVar4 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      uVar7 = (uint)uVar4;
      if (iVar3 <= (int)unaff_x22) {
        Newtonsoft_Json_Linq_JObject__LoadAsync
                  (*(undefined8 *)(unaff_x19 + 0x10),uVar4,iVar3 - uVar7,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar7;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - uVar7;
      }
      unaff_x22 = (ulong)(int)unaff_x22;
      uVar10 = unaff_x22 << 6 | 0x20;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x10);
        if (lVar8 == 0) goto LAB_03cb8a6c;
        if (*(uint *)(lVar8 + 0x18) <= (uint)unaff_x22) goto LAB_03cb8a70;
        if (unaff_x20 == 0) goto LAB_03cb8a6c;
        puVar1 = (undefined8 *)(lVar8 + uVar10);
        in_stack_00000088 = puVar1[1];
        in_stack_00000080 = *puVar1;
        in_stack_00000098 = puVar1[3];
        in_stack_00000090 = puVar1[2];
        in_stack_000000a8 = puVar1[5];
        in_stack_000000a0 = puVar1[4];
        in_stack_000000b8 = puVar1[7];
        in_stack_000000b0 = puVar1[6];
        uVar5 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar3 = *(int *)(unaff_x19 + 0x18);
        if ((uVar5 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        uVar10 = uVar10 + 0x40;
      } while ((long)unaff_x22 < (long)iVar3);
      uVar9 = (uint)unaff_x22;
    } while (iVar3 <= (int)uVar9);
    lVar8 = *(long *)(unaff_x19 + 0x10);
    if (lVar8 == 0) {
LAB_03cb8a6c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(uint *)(lVar8 + 0x18) <= uVar9) || (*(uint *)(lVar8 + 0x18) <= uVar7)) {
LAB_03cb8a70:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    puVar1 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar9 * 0x40);
    puVar2 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar7 * 0x40);
    uVar13 = puVar1[4];
    uVar12 = puVar1[7];
    uVar11 = puVar1[6];
    uVar15 = puVar1[1];
    uVar14 = *puVar1;
    uVar17 = puVar1[3];
    uVar16 = puVar1[2];
    uVar4 = (ulong)(uVar7 + 1);
    puVar2[5] = puVar1[5];
    puVar2[4] = uVar13;
    puVar2[7] = uVar12;
    puVar2[6] = uVar11;
    puVar2[1] = uVar15;
    *puVar2 = uVar14;
    puVar2[3] = uVar17;
    puVar2[2] = uVar16;
    iVar3 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


