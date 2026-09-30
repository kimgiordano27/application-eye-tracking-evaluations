/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 036d5db8
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e34bf8);
    thunk_FUN_0159f088(PTR_DAT_06dd0a58);
    thunk_FUN_0159f088(PTR_DAT_06e57760);
    thunk_FUN_0159f088(PTR_DAT_06e08538);
    thunk_FUN_0159f088(PTR_DAT_06e4b3d0);
    thunk_FUN_0159f088(PTR_DAT_06df84c8);
    thunk_FUN_0159f088(PTR_DAT_06da2888);
    *(undefined1 *)(unaff_x22 + 0x91f) = 1;
  }
  puVar2 = PTR_DAT_06e34bf8;
  if (unaff_x21 == 0) goto LAB_036d61a8;
  if (*(long *)(unaff_x21 + 0x88) == 0) {
    if (unaff_x20 == 0) goto LAB_036d61a8;
LAB_036d5ebc:
    plVar8 = (long *)FUN_036d8b4c();
    if (plVar8 == (long *)0x0) {
      plVar8 = *(long **)(unaff_x20 + 0x50);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        FUN_01fbaf30();
        return;
      }
      goto LAB_036d61a8;
    }
    iVar3 = FUN_036f2cf8(plVar8,0);
    if (iVar3 != 0) {
      iVar3 = FUN_036f2cf8(plVar8,0);
      if (iVar3 == 3) {
        lVar6 = FUN_03fc53ec(plVar8,0);
        if ((lVar6 == 0) || (plVar9 = *(long **)(lVar6 + 0x80), plVar9 == (long *)0x0))
        goto LAB_036d61a8;
        uVar5 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        if (((uVar5 & 1) != 0) && (*(long *)(unaff_x20 + 0x58) != 0)) {
          FUN_036d04e0();
          *(undefined8 *)(unaff_x21 + 0x60) = *(undefined8 *)(unaff_x20 + 0x58);
          thunk_FUN_01656ef8();
          goto LAB_036d5ff0;
        }
      }
      FUN_01fbafc0();
      plVar9 = (long *)0x0;
      goto LAB_036d5ffc;
    }
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      FUN_036d04e0();
      if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_036d61a8;
      uVar5 = FUN_03fc5640(*(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x68),plVar8[0xd],0x100,0);
      if ((uVar5 & 1) == 0) {
        FUN_01fbafc0();
      }
LAB_036d5ff0:
      if (*(long *)(unaff_x20 + 0x58) == 0) {
LAB_036d61a8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar9 = *(long **)(*(long *)(unaff_x20 + 0x58) + 0x68);
      goto LAB_036d5ffc;
    }
  }
  else {
    if (unaff_x20 == 0) goto LAB_036d61a8;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar4 = FUN_03fc4050(*(long *)(unaff_x21 + 0x88),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar2);
    }
    uVar5 = FUN_047562e8(uVar7,uVar4,0);
    if ((uVar5 & 1) == 0) goto LAB_036d5ebc;
    plVar8 = *(long **)(unaff_x21 + 0x88);
    if (plVar8 == (long *)0x0) {
      FUN_036cf930();
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_06dd0a58 + 300);
    if ((*(byte *)(*plVar8 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dd0a58)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar8);
    }
    FUN_036cf930();
  }
  plVar9 = (long *)plVar8[0xd];
LAB_036d5ffc:
  lVar6 = FUN_03fc53ec(plVar8,0);
  if ((lVar6 != 0) && ((*(byte *)(plVar8 + 0xe) >> 2 & 1) != 0)) {
    FUN_01fbafc0();
  }
  *(undefined8 *)(unaff_x21 + 0x60) = plVar8;
  thunk_FUN_01656ef8((undefined8 *)(unaff_x21 + 0x60),plVar8);
  if (plVar9 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar9 + 0x278))
                      (plVar9,*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x19 + 0x10));
    *(undefined8 *)(unaff_x21 + 0x68) = uVar4;
    thunk_FUN_01656ef8();
  }
  *(undefined4 *)(unaff_x21 + 0x5c) = 4;
  FUN_036d6848();
  return;
}


