/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 05ccd6e0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Length(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xb50));
  FUN_03d2d2b0(PTR_DAT_091fcb58);
  FUN_03d2d2b0(PTR_DAT_091fcb60);
  *(undefined1 *)(unaff_x22 + 0x4e5) = 1;
  lVar4 = unaff_x19 + 0xf0;
  uVar3 = FUN_06093334(lVar4,*unaff_x21);
  if ((uVar3 & 1) == 0) {
LAB_05ccd81c:
    FUN_051b177c(&stack0x00000058,*(undefined8 *)(unaff_x19 + 0x108),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50));
    puVar1 = (undefined8 *)(unaff_x19 + 0xd8);
    in_stack_00000080 = in_stack_00000068;
    in_stack_00000078 = in_stack_00000060;
    in_stack_00000070 = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_00000068;
    *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_00000060;
    *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000058;
    thunk_FUN_03d1023c(puVar1,0);
    uVar3 = FUN_06093294(puVar1,*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60));
    if ((uVar3 & 1) == 0) {
      in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0xe8);
      in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0xe0);
      in_stack_00000070 = *puVar1;
      FUN_060921c8(&stack0x00000058,&stack0x00000070,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70));
      *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000068;
      *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000060;
      *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000058;
      thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
      FUN_06092a44(puVar1,*(undefined8 *)(unaff_x19 + 0xd0),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
    }
    else {
      in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0xe8);
      in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0xe0);
      in_stack_00000070 = *puVar1;
      FUN_05ccd9c0();
    }
    return;
  }
  iVar2 = FUN_06093590(lVar4,*(undefined8 *)PTR_DAT_091fcb60);
  if (iVar2 == 1) {
    lVar4 = FUN_0609352c(lVar4,*(undefined8 *)PTR_DAT_091fcb58);
    if (lVar4 != 0) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar3 = 0;
        uVar9 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
          lVar10 = *(long *)(lVar4 + 0x20 + uVar3 * 8);
          lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03d8f26c(lVar8);
          }
          lVar8 = thunk_FUN_03d2ee44(lVar10,lVar8);
          lVar11 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_03d8f26c(lVar11);
          }
          if (lVar8 != 0) {
            lVar5 = thunk_FUN_03d2ee44(lVar8,lVar11);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d8e4(lVar8,lVar11);
            }
            if (*(char *)(unaff_x19 + 0x110) == '\0') goto LAB_05ccd98c;
            if (lVar10 == 0) goto LAB_05ccd9b0;
            uVar12 = *(undefined8 *)(unaff_x19 + 0x118);
            uVar6 = FUN_08a550fc(lVar10,0);
            uVar9 = FUN_06fd1ba0(uVar12,uVar6,0);
            if ((uVar9 & 1) == 0) goto LAB_05ccd98c;
          }
          uVar9 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      goto LAB_05ccd81c;
    }
  }
  else {
    plVar7 = (long *)FUN_0609337c(lVar4,*(undefined8 *)PTR_DAT_091fcb50);
    if ((plVar7 != (long *)0x0) &&
       ((**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)), unaff_x19 != 0)) {
LAB_05ccd98c:
      FUN_05fbbdc8();
      return;
    }
  }
LAB_05ccd9b0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


