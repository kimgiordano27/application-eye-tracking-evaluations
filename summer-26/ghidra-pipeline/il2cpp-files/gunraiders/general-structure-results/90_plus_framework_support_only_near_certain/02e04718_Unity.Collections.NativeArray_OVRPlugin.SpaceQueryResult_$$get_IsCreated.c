/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 02e04718
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated
              (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  uVar8 = param_3._8_8_;
  uVar7 = param_3._0_8_;
  uVar10 = param_2._8_8_;
  uVar9 = param_2._0_8_;
  do {
    uStack0000000000000040 = uVar9;
    uStack0000000000000048 = uVar10;
    uStack0000000000000050 = uVar7;
    uStack0000000000000058 = uVar8;
    uVar3 = (*param_1)(*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) == 0) {
      iVar4 = *(int *)(unaff_x19 + 0x18);
LAB_02e0474c:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar4) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) {
LAB_02e047e4:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_02e047e8;
        lVar2 = lVar5 + (long)(int)uVar6 * 0x20;
        uVar8 = *(undefined8 *)(lVar2 + 0x20);
        uVar9 = *(undefined8 *)(lVar2 + 0x38);
        uVar7 = *(undefined8 *)(lVar2 + 0x30);
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_02e047e8;
        lVar5 = lVar5 + (long)(int)unaff_w21 * 0x20;
        unaff_w21 = unaff_w21 + 1;
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar5 + 0x20) = uVar8;
        *(undefined8 *)(lVar5 + 0x38) = uVar9;
        *(undefined8 *)(lVar5 + 0x30) = uVar7;
        iVar4 = *(int *)(unaff_x19 + 0x18);
        unaff_x22 = (ulong)(uVar6 + 1);
      }
      if (iVar4 <= (int)unaff_x22) {
        FUN_032f3ffc(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar4 - unaff_w21,0);
        iVar4 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar4 - unaff_w21;
      }
      unaff_x23 = -(unaff_x22 >> 0x1f & 1) & 0xffffffe000000000 | (unaff_x22 & 0xffffffff) << 5;
      unaff_x22 = (ulong)(int)unaff_x22;
    }
    else {
      iVar4 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      if ((long)iVar4 <= (long)unaff_x22) goto LAB_02e0474c;
    }
    unaff_x23 = unaff_x23 + 0x20;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) goto LAB_02e047e4;
    if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) {
LAB_02e047e8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    puVar1 = (undefined8 *)(lVar5 + unaff_x23);
    uVar10 = puVar1[1];
    uVar9 = *puVar1;
    uVar8 = puVar1[3];
    uVar7 = puVar1[2];
    if (unaff_x20 == 0) goto LAB_02e047e4;
    param_1 = *(code **)(unaff_x20 + 0x18);
  } while( true );
}


