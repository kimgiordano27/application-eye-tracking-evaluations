/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 036d57c4
PROGRAM: vrfs-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *unaff_x22;
  long unaff_x23;
  long *plVar10;
  ulong unaff_x24;
  long unaff_x25;
  
code_r0x036d57c4:
  FUN_036d5a24();
  do {
    if ((*(byte *)(unaff_x25 + 0x70) >> 4 & 1) != 0) {
      FUN_01fbafc0();
    }
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x24) {
      plVar10 = *(long **)(unaff_x19 + 0x50);
      if ((plVar10 != (long *)0x0) &&
         (iVar3 = FUN_03f054bc(plVar10,0), puVar2 = PTR_DAT_06d8f138, 0 < iVar3)) {
        iVar3 = 0;
        do {
          plVar5 = (long *)(**(code **)(*plVar10 + 0x308))
                                     (plVar10,iVar3,*(undefined8 *)(*plVar10 + 0x310));
          if (plVar5 == (long *)0x0) {
            FUN_036d04e0();
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          bVar1 = *(byte *)(*(long *)puVar2 + 300);
          if ((*(byte *)(*plVar5 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar5);
          }
          FUN_036d04e0();
          plVar5 = (long *)plVar5[0xd];
          if (plVar5 == (long *)0x0) {
LAB_036d5978:
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
          if (iVar4 == 2) {
            FUN_036d5a24();
          }
          else {
            (**(code **)(*unaff_x22 + 0x308))();
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_03f054bc(plVar10,0);
        } while (iVar3 < iVar4);
      }
      puVar2 = PTR_DAT_06e0d4e8;
      uVar9 = *(undefined8 *)PTR_DAT_06e09688;
      if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_031c8668(uVar9,0);
      uVar9 = (**(code **)(*unaff_x22 + 0x428))();
      uVar9 = thunk_FUN_015d0480(uVar9,*(undefined8 *)puVar2);
      puVar8 = (undefined8 *)(unaff_x19 + 0x60);
      *puVar8 = uVar9;
      thunk_FUN_01656ef8(puVar8,uVar9);
      return *puVar8;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    unaff_x25 = FUN_036d5598();
    if (unaff_x25 == 0) {
      FUN_011a9bc8();
      plVar10 = (long *)FUN_012a3424();
      FUN_011a9bc8();
      uVar9 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      thunk_FUN_0159f088(PTR_DAT_06dfb810);
      uVar6 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar7 = thunk_FUN_0159f088(PTR_DAT_06dade58);
      FUN_036f573c(uVar6,uVar7,uVar9);
      uVar9 = thunk_FUN_0159f088(PTR_DAT_06dee308);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar6,uVar9);
    }
    plVar10 = *(long **)(unaff_x25 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_036d5978;
    iVar3 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    if (iVar3 == 2) goto code_r0x036d57c4;
    (**(code **)(*unaff_x22 + 0x308))();
  } while( true );
}


