/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 036d7fcc
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  
  if ((DAT_07239944 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d92be8);
    thunk_FUN_0159f088(PTR_DAT_06db44b8);
    thunk_FUN_0159f088(PTR_DAT_06d98c30);
    thunk_FUN_0159f088(PTR_DAT_06e13ab0);
    thunk_FUN_0159f088(PTR_DAT_06de6fb8);
    thunk_FUN_0159f088(PTR_DAT_06e69590);
    thunk_FUN_0159f088(PTR_DAT_06e5dc58);
    thunk_FUN_0159f088(PTR_DAT_06e5e548);
    DAT_07239944 = 1;
  }
  puVar3 = PTR_DAT_06db44b8;
  if (param_2 == 0) {
LAB_036d83f8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  iVar6 = FUN_036f2cf8(param_2,0);
  if (iVar6 == 1) {
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar11 = *(long *)puVar3;
    }
    plVar18 = *(long **)(lVar11 + 0xb8);
  }
  else {
    iVar6 = FUN_036f2cf8(param_2,0);
    puVar4 = PTR_DAT_06e5dc58;
    if (iVar6 == 0) {
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar11 = *(long *)puVar3;
      }
      return *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    }
    plVar18 = *(long **)(param_2 + 0xb8);
    if (plVar18 != (long *)0x0) {
      lVar11 = *(long *)PTR_DAT_06e5dc58;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar11 = *(long *)puVar4;
      }
      puVar4 = PTR_DAT_06de6fb8;
      if (plVar18 != (long *)**(long **)(lVar11 + 0xb8)) {
        plVar12 = *(long **)(param_1 + 0x88);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x268))(plVar12,param_2,*(undefined8 *)(*plVar12 + 0x270));
          bVar1 = *(byte *)(*(long *)puVar4 + 300);
          if ((*(byte *)(*plVar18 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
            uVar7 = FUN_036f2cf8(param_2,0);
            if (*(long *)(param_1 + 0x28) != 0) {
              cVar2 = *(char *)(*(long *)(param_1 + 0x28) + 0x10);
              lVar11 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e13ab0);
              if (lVar11 != 0) {
                FUN_01fc21b8(lVar11,uVar7,cVar2 != '\0',0);
                FUN_01fc22f4(lVar11,0);
                uVar8 = FUN_036dd7e0(param_1,lVar11,plVar18);
                FUN_036f2e20(param_2,uVar8 & 1,0);
                lVar11 = FUN_01fc2d64(lVar11,1,0);
                return lVar11;
              }
            }
          }
          else {
            uVar7 = FUN_036f2cf8(param_2,0);
            lVar11 = (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
            puVar4 = PTR_DAT_06d98c30;
            puVar3 = PTR_DAT_06d92be8;
            if (lVar11 != 0) {
              uVar9 = FUN_03f054bc(lVar11,0);
              lVar19 = *(long *)puVar4;
              lVar11 = plVar18[10];
              lVar13 = plVar18[0xb];
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_016466fc(lVar19);
                lVar19 = *(long *)puVar4;
              }
              uVar8 = FUN_0371033c(lVar11,lVar13,**(undefined8 **)(lVar19 + 0xb8),
                                   (*(undefined8 **)(lVar19 + 0xb8))[1],0);
              lVar11 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
              if (lVar11 != 0) {
                FUN_01c95704(lVar11,uVar7,uVar9,uVar8 & 1,0);
                lVar13 = (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
                puVar5 = PTR_DAT_06e69590;
                puVar3 = PTR_DAT_06e5e548;
                if (lVar13 != 0) {
                  iVar6 = 0;
                  do {
                    iVar10 = FUN_03f054bc(lVar13,0);
                    if (iVar10 <= iVar6) {
                      return lVar11;
                    }
                    plVar12 = (long *)(**(code **)(*plVar18 + 0x238))
                                                (plVar18,*(undefined8 *)(*plVar18 + 0x240));
                    if ((plVar12 == (long *)0x0) ||
                       (plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                                    (plVar12,iVar6,*(undefined8 *)(*plVar12 + 0x310)
                                                    ), plVar12 == (long *)0x0)) break;
                    bVar1 = *(byte *)(*(long *)puVar5 + 300);
                    if ((*(byte *)(*plVar12 + 300) < bVar1) ||
                       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
                      FUN_0160f170(plVar12);
                    }
                    lVar14 = *(long *)puVar4;
                    lVar20 = plVar12[0x18];
                    lVar13 = plVar12[10];
                    lVar19 = plVar12[0xb];
                    if (*(int *)(lVar14 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                      lVar14 = *(long *)puVar4;
                    }
                    uVar8 = FUN_0371033c(lVar13,lVar19,**(undefined8 **)(lVar14 + 0xb8),
                                         (*(undefined8 **)(lVar14 + 0xb8))[1],0);
                    uVar15 = FUN_01c95838(lVar11,lVar20,plVar12,uVar8 & 1,0);
                    if ((uVar15 & 1) == 0) {
                      plVar16 = (long *)plVar12[0x18];
                      if (plVar16 == (long *)0x0) break;
                      uVar17 = (**(code **)(*plVar16 + 0x168))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                      FUN_01fbaf30(param_1,*(undefined8 *)puVar3,uVar17,plVar12,0);
                    }
                    iVar6 = iVar6 + 1;
                    lVar13 = (**(code **)(*plVar18 + 0x238))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x240));
                  } while (lVar13 != 0);
                }
              }
            }
          }
        }
        goto LAB_036d83f8;
      }
    }
    iVar6 = FUN_036f2cf8(param_2,0);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar11);
      lVar11 = *(long *)puVar3;
    }
    plVar18 = *(long **)(lVar11 + 0xb8);
    if (iVar6 != 2) {
      return plVar18[2];
    }
  }
  return *plVar18;
}


