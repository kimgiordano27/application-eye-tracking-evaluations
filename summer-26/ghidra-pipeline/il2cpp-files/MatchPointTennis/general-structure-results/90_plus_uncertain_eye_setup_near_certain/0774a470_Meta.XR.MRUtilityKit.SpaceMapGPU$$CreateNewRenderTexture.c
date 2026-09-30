/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$CreateNewRenderTexture
ENTRY_POINT: 0774a470
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__CreateNewRenderTexture(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  long lVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar4 = FUN_095259a0();
  lVar5 = FUN_0775abb4(uVar4,0);
  *(undefined2 *)(unaff_x19 + 1) = 0x101;
  if (lVar5 != 0) {
    uVar2 = FUN_094f3ae4(lVar5,0);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_05f6aa84(&stack0x00000010,uVar2,2,1,*(undefined8 *)PTR_DAT_09f31a20);
    *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
    FUN_094f3ae4(lVar5,0);
    Unity_Collections_NativeArray<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_44>___ctor
              ();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 8) = 0;
    in_stack_00000028 = 0;
    FUN_094fdbd0(&stack0x00000028,0,0);
    FUN_094fdbc0(0x3f800000,&stack0x00000028,0);
    iVar3 = FUN_094f3ae4(lVar5,0);
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        *(undefined1 *)(*(long *)(unaff_x19 + 8) + lVar7) = 1;
        *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + lVar7 * 8) = in_stack_00000028;
        lVar7 = lVar7 + 1;
        iVar3 = FUN_094f3ae4(lVar5,0);
      } while (lVar7 < iVar3);
    }
    uVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f29870,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28));
    if (0 < *(int *)(unaff_x19 + 0x20)) {
      lVar5 = 0;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x28);
        in_stack_00000020 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + lVar5 * 8);
        uVar1 = FUN_094fdbc8(&stack0x00000020,0);
        if (lVar7 == 0) goto LAB_0774a57c;
        if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_0774a578;
        *(undefined1 *)(lVar7 + (int)uVar1 + 0x20) = 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(unaff_x19 + 0x20));
    }
    lVar5 = *(long *)(unaff_x19 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (long)((ulong)uVar1 << 0x20)) {
        uVar6 = 0;
        iVar3 = 0;
        do {
          if (uVar1 <= uVar6) {
LAB_0774a578:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          if (*(char *)(lVar5 + 0x20 + uVar6) != '\0') {
            iVar3 = iVar3 + 1;
            *(int *)(unaff_x19 + 0x30) = iVar3;
          }
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)uVar1);
      }
      return;
    }
  }
LAB_0774a57c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


