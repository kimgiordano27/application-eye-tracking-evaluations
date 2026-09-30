/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnly
ENTRY_POINT: 036d9948
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnly(void)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar15;
  ulong unaff_x22;
  long lVar16;
  
  thunk_FUN_0159f088(PTR_DAT_06e18a00);
  thunk_FUN_0159f088(PTR_DAT_06e1f8f0);
  thunk_FUN_0159f088(PTR_DAT_06e5dc58);
  thunk_FUN_0159f088(PTR_DAT_06dc8bb8);
  thunk_FUN_0159f088(PTR_DAT_06d94930);
  thunk_FUN_0159f088(PTR_DAT_06dd1a30);
  thunk_FUN_0159f088(PTR_DAT_06e2cb30);
  thunk_FUN_0159f088(PTR_DAT_06e3b3e0);
  thunk_FUN_0159f088(PTR_DAT_06da9588);
  *(undefined1 *)(unaff_x21 + 0x927) = 1;
  puVar7 = PTR_DAT_06e5dc58;
  if (unaff_x19 == 0) goto LAB_036d9c58;
  plVar15 = *(long **)(unaff_x19 + 0x88);
  if (plVar15 == (long *)0x0) {
    if (*(long *)(unaff_x20 + 0x68) == 0) goto LAB_036d9c58;
    plVar15 = (long *)FUN_03fbac38(*(long *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x19 + 0x78),0);
    if (plVar15 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_06e1f8f0 + 300);
      if ((*(byte *)(*plVar15 + 300) < bVar2) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06e1f8f0)
         ) goto LAB_036d9e14;
      goto LAB_036d9a20;
    }
    plVar15 = *(long **)(unaff_x19 + 0x78);
    if (plVar15 == (long *)0x0) goto LAB_036d9c58;
    (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
LAB_036d9c94:
    FUN_01fbaf30();
LAB_036d9ca4:
    lVar10 = *(long *)puVar7;
LAB_036d9ca8:
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar10 = *(long *)puVar7;
    }
    return (long *)**(undefined8 **)(lVar10 + 0xb8);
  }
LAB_036d9a20:
  lVar16 = plVar15[0xc];
  if (lVar16 == 0) {
    FUN_036cefb8();
    lVar16 = plVar15[0xc];
  }
  lVar10 = *(long *)puVar7;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar10 = *(long *)puVar7;
  }
  puVar6 = PTR_DAT_06e184b0;
  puVar5 = PTR_DAT_06de6fb8;
  puVar4 = PTR_DAT_06d98c30;
  if (lVar16 == **(long **)(lVar10 + 0xb8)) goto LAB_036d9ca8;
  plVar15 = (long *)plVar15[0xc];
  if (plVar15 == (long *)0x0) {
LAB_036d9b68:
    plVar11 = (long *)thunk_FUN_015d056c(*(undefined8 *)puVar5);
    if (plVar11 == (long *)0x0) goto LAB_036d9c58;
    FUN_036efd90(plVar11,0);
  }
  else {
    lVar16 = *plVar15;
    bVar2 = *(byte *)(lVar16 + 300);
    bVar3 = *(byte *)(*(long *)PTR_DAT_06e18a00 + 300);
    if ((bVar2 < bVar3) ||
       (lVar10 = *(long *)(lVar16 + 200),
       *(long *)(lVar10 + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06e18a00)) {
LAB_036d9e14:
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar15);
    }
    bVar3 = *(byte *)(*(long *)PTR_DAT_06de6fb8 + 300);
    if ((bVar3 <= bVar2) && (*(long *)(lVar10 + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_06de6fb8)
       ) {
      if ((unaff_x22 & 1) == 0) goto LAB_036d9c94;
      lVar16 = *(long *)PTR_DAT_06d98c30;
      uVar12 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar16 = *(long *)puVar4;
      }
      uVar14 = FUN_03710578(uVar12,uVar1,*(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x10),
                            *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x18),0);
      if ((uVar14 & 1) == 0) {
        lVar16 = *(long *)puVar4;
        uVar12 = *(undefined8 *)(unaff_x19 + 0x60);
        uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar16 = *(long *)puVar4;
        }
        uVar14 = FUN_037103cc(uVar12,uVar1,*(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x10),
                              *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x18),0);
        if ((uVar14 & 1) == 0) goto LAB_036d9b10;
      }
      FUN_01fbafc0();
      goto LAB_036d9ca4;
    }
    bVar3 = *(byte *)(*(long *)PTR_DAT_06e184b0 + 300);
    if ((bVar3 <= bVar2) && (*(long *)(lVar10 + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_06e184b0)
       ) {
      lVar16 = (**(code **)(lVar16 + 0x238))(plVar15,*(undefined8 *)(lVar16 + 0x240));
      if (lVar16 == 0) goto LAB_036d9c58;
      iVar8 = FUN_03f054bc(lVar16,0);
      if (iVar8 == 0) {
        lVar16 = *(long *)puVar4;
        uVar12 = *(undefined8 *)(unaff_x19 + 0x50);
        uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar16 = *(long *)puVar4;
        }
        uVar14 = FUN_037103cc(uVar12,uVar1,**(undefined8 **)(lVar16 + 0xb8),
                              (*(undefined8 **)(lVar16 + 0xb8))[1],0);
        if ((uVar14 & 1) != 0) {
          FUN_01fbb444();
        }
        goto LAB_036d9ca4;
      }
    }
LAB_036d9b10:
    lVar16 = *plVar15;
    bVar2 = *(byte *)(*(long *)PTR_DAT_06dc8bb8 + 300);
    if ((*(byte *)(lVar16 + 300) < bVar2) ||
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dc8bb8)) {
      bVar2 = *(byte *)(*(long *)puVar6 + 300);
      if ((*(byte *)(lVar16 + 300) < bVar2) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6))
      goto LAB_036d9b68;
      plVar11 = (long *)thunk_FUN_015d056c();
      if (plVar11 == (long *)0x0) goto LAB_036d9c58;
      FUN_036f1538(plVar11,0);
    }
    else {
      plVar11 = (long *)thunk_FUN_015d056c();
      if (plVar11 == (long *)0x0) goto LAB_036d9c58;
      FUN_03fbc544(plVar11,0);
    }
  }
  if (plVar11 != (long *)0x0) {
    FUN_03fbbd88(plVar11,*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)(unaff_x19 + 0x58),0);
    uVar12 = FUN_03fbbec4(plVar11,*(undefined8 *)(unaff_x19 + 0x60),
                          *(undefined8 *)(unaff_x19 + 0x68),0);
    FUN_036dac4c(uVar12,plVar11);
    if ((plVar15 != (long *)0x0) &&
       (lVar16 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240)),
       lVar16 != 0)) {
      iVar8 = 0;
      do {
        iVar9 = FUN_03f054bc(lVar16,0);
        if (iVar9 <= iVar8) {
          *(long *)(unaff_x19 + 0x80) = (long)plVar11;
          thunk_FUN_01656ef8((long *)(unaff_x19 + 0x80),plVar11);
          return plVar11;
        }
        lVar16 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
        plVar13 = (long *)(**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240))
        ;
        if ((plVar13 == (long *)0x0) ||
           (uVar12 = (**(code **)(*plVar13 + 0x308))
                               (plVar13,iVar8,*(undefined8 *)(*plVar13 + 0x310)), lVar16 == 0))
        break;
        FUN_036ef950(lVar16,uVar12,0);
        iVar8 = iVar8 + 1;
        lVar16 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
      } while (lVar16 != 0);
    }
  }
LAB_036d9c58:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


