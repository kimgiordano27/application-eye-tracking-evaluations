/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$StartSpaceMapInternal
ENTRY_POINT: 0774a268
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__StartSpaceMapInternal(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  ulong unaff_x22;
  long lVar8;
  long unaff_x23;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x428));
  FUN_04447ba8(PTR_DAT_09f31b90);
  *(undefined1 *)(unaff_x23 + 599) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if ((unaff_x22 & 1) == 0) {
    if (unaff_x21 == (long *)0x0) {
LAB_0774a35c:
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31b90,0);
    }
    else {
      lVar5 = *unaff_x21;
      bVar1 = *(byte *)(*(long *)PTR_DAT_09f1ed58 + 0x130);
      if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f1ed58)) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
        if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f31428))
        goto LAB_0774a35c;
      }
      uVar6 = FUN_095259a0();
      lVar5 = FUN_0775abb4(uVar6,0);
      *(undefined2 *)(unaff_x19 + 1) = 0x101;
      if (lVar5 == 0) goto LAB_0774a57c;
      uVar3 = FUN_094f3ae4(lVar5,0);
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_05f6aa84(&stack0x00000010,uVar3,2,1,*(undefined8 *)PTR_DAT_09f31a20);
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
      iVar4 = FUN_094f3ae4(lVar5,0);
      if (0 < iVar4) {
        lVar8 = 0;
        do {
          *(undefined1 *)(*(long *)(unaff_x19 + 8) + lVar8) = 1;
          *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + lVar8 * 8) = in_stack_00000028;
          lVar8 = lVar8 + 1;
          iVar4 = FUN_094f3ae4(lVar5,0);
        } while (lVar8 < iVar4);
      }
    }
  }
  else {
    if (unaff_x21 == (long *)0x0) goto LAB_0774a57c;
    bVar1 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
    if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f31428)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4();
    }
    lVar5 = FUN_094ede70();
    *(undefined2 *)(unaff_x19 + 1) = 1;
    if (lVar5 == 0) goto LAB_0774a57c;
    auVar9 = FUN_094f3a68(lVar5,0);
    *(undefined1 (*) [16])(unaff_x19 + 8) = auVar9;
    auVar9 = FUN_094f390c(lVar5,0);
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar9;
  }
  uVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f29870,unaff_w20);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28));
  if (0 < *(int *)(unaff_x19 + 0x20)) {
    lVar5 = 0;
    do {
      lVar8 = *(long *)(unaff_x19 + 0x28);
      in_stack_00000020 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + lVar5 * 8);
      uVar2 = FUN_094fdbc8(&stack0x00000020,0);
      if (lVar8 == 0) goto LAB_0774a57c;
      if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_0774a578;
      *(undefined1 *)(lVar8 + (int)uVar2 + 0x20) = 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(unaff_x19 + 0x20));
  }
  lVar5 = *(long *)(unaff_x19 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (0 < (long)((ulong)uVar2 << 0x20)) {
      uVar7 = 0;
      iVar4 = 0;
      do {
        if (uVar2 <= uVar7) {
LAB_0774a578:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (*(char *)(lVar5 + 0x20 + uVar7) != '\0') {
          iVar4 = iVar4 + 1;
          *(int *)(unaff_x19 + 0x30) = iVar4;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar2);
    }
    return;
  }
LAB_0774a57c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


