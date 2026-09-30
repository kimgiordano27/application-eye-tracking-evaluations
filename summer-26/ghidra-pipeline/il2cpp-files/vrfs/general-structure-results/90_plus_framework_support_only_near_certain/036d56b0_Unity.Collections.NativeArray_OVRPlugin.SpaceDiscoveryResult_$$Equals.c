/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 036d56b0
PROGRAM: vrfs-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x19;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar15;
  ulong uVar16;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x6f0));
  thunk_FUN_0159f088(PTR_DAT_06e0d4e8);
  thunk_FUN_0159f088(PTR_DAT_06da0688);
  thunk_FUN_0159f088(PTR_DAT_06e09688);
  thunk_FUN_0159f088(PTR_DAT_06d8f138);
  thunk_FUN_0159f088(PTR_DAT_06d98c88);
  *(undefined1 *)(unaff_x19 + 0x91b) = 1;
  plVar5 = (long *)thunk_FUN_015d056c(*unaff_x22);
  if (((plVar5 != (long *)0x0) && (FUN_0381c9fc(plVar5,0), unaff_x21 != 0)) &&
     (plVar13 = *(long **)(unaff_x21 + 0x98), plVar13 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06da0688 + 300);
    if ((*(byte *)(*plVar13 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06da0688))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar13);
    }
    lVar15 = plVar13[0xb];
    if ((lVar15 != 0) && (0 < (int)*(ulong *)(lVar15 + 0x18))) {
      uVar16 = 0;
      uVar12 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        lVar6 = FUN_036d5598();
        if (lVar6 == 0) {
          FUN_011a9bc8(lVar15);
          plVar5 = (long *)FUN_012a3424(lVar15,uVar16);
          FUN_011a9bc8();
          uVar14 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          thunk_FUN_0159f088(PTR_DAT_06dfb810);
          uVar10 = thunk_FUN_015d056c();
          FUN_011a9bc8();
          uVar11 = thunk_FUN_0159f088(PTR_DAT_06dade58);
          FUN_036f573c(uVar10,uVar11,uVar14,plVar13,0);
          uVar14 = thunk_FUN_0159f088(PTR_DAT_06dee308);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar10,uVar14);
        }
        plVar7 = *(long **)(lVar6 + 0x68);
        if (plVar7 == (long *)0x0) goto LAB_036d5978;
        iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        if (iVar3 == 2) {
          FUN_036d5a24();
        }
        else {
          (**(code **)(*plVar5 + 0x308))(plVar5,lVar6,*(undefined8 *)(*plVar5 + 0x310));
        }
        if ((*(byte *)(lVar6 + 0x70) >> 4 & 1) != 0) {
          FUN_01fbafc0();
        }
        uVar12 = (ulong)*(uint *)(lVar15 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)(int)*(uint *)(lVar15 + 0x18));
    }
    plVar7 = (long *)plVar13[10];
    if ((plVar7 != (long *)0x0) &&
       (iVar3 = FUN_03f054bc(plVar7,0), puVar2 = PTR_DAT_06d8f138, 0 < iVar3)) {
      iVar3 = 0;
      do {
        plVar8 = (long *)(**(code **)(*plVar7 + 0x308))
                                   (plVar7,iVar3,*(undefined8 *)(*plVar7 + 0x310));
        if (plVar8 == (long *)0x0) {
          FUN_036d04e0();
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if ((*(byte *)(*plVar8 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar8);
        }
        FUN_036d04e0();
        plVar9 = (long *)plVar8[0xd];
        if (plVar9 == (long *)0x0) goto LAB_036d5978;
        iVar4 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        if (iVar4 == 2) {
          FUN_036d5a24();
        }
        else {
          (**(code **)(*plVar5 + 0x308))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x310));
        }
        iVar3 = iVar3 + 1;
        iVar4 = FUN_03f054bc(plVar7,0);
      } while (iVar3 < iVar4);
    }
    puVar2 = PTR_DAT_06e0d4e8;
    uVar14 = *(undefined8 *)PTR_DAT_06e09688;
    if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar14 = FUN_031c8668(uVar14,0);
    uVar14 = (**(code **)(*plVar5 + 0x428))(plVar5,uVar14,*(undefined8 *)(*plVar5 + 0x430));
    lVar15 = thunk_FUN_015d0480(uVar14,*(undefined8 *)puVar2);
    plVar13 = plVar13 + 0xc;
    *plVar13 = lVar15;
    thunk_FUN_01656ef8(plVar13,lVar15);
    return *plVar13;
  }
LAB_036d5978:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


