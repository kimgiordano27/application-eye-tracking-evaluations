/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose
ENTRY_POINT: 077379bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSeatPose(void)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  int iVar12;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong uVar13;
  long unaff_x24;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  uint uStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  int iStack000000000000011c;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f31738);
  FUN_04447ba8(PTR_DAT_09f31730);
  FUN_04447ba8(PTR_DAT_09f1e6a8);
  FUN_04447ba8(PTR_DAT_09f319e8);
  FUN_04447ba8(PTR_DAT_09f31990);
  FUN_04447ba8(PTR_DAT_09f31318);
  FUN_04447ba8(PTR_DAT_09f31988);
  FUN_04447ba8(PTR_DAT_09f31320);
  FUN_04447ba8(PTR_DAT_09f20ed0);
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f319f0);
  FUN_04447ba8(PTR_DAT_09f319f8);
  FUN_04447ba8(PTR_DAT_09f31a00);
  FUN_04447ba8(PTR_DAT_09f31a08);
  *(undefined1 *)(unaff_x22 + 0x205) = 1;
  iStack000000000000011c = 0;
  in_stack_00000110 = 0;
  in_stack_000000c0 = 0;
  _uStack00000000000000c8 = 0;
  uStack000000000000007c = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  lVar5 = thunk_FUN_0448520c(*unaff_x21);
  FUN_0753a788(lVar5,*unaff_x20);
  lVar9 = *(long *)(unaff_x19 + 0x28);
  if (lVar9 != 0) {
    iVar12 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (0 < iVar12) {
      FUN_07a61000(*(undefined8 *)(lVar9 + 0x10),0,iVar12,0);
    }
    if (*(int *)(unaff_x19 + 0x10) < 5) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
      FUN_078c1634(lVar9,0);
      if (lVar9 == 0) goto LAB_07738234;
      FUN_078c335c(lVar9,*(undefined8 *)PTR_DAT_09f31a08,0);
    }
    if (unaff_x24 != 0) {
      if (0 < *(int *)(unaff_x24 + 0x18)) {
        iVar12 = 0;
        do {
          lVar6 = FUN_05badb74(unaff_x24,iVar12,*(undefined8 *)PTR_DAT_09f31320);
          if (lVar6 == 0) goto LAB_07738234;
          if (*(char *)(lVar6 + 0xb9) == '\0') {
            lVar6 = FUN_05badb74(unaff_x24,iVar12,*(undefined8 *)PTR_DAT_09f31320);
            if (lVar6 == 0) goto LAB_07738234;
            *(int *)(unaff_x19 + 0x40) = *(int *)(lVar6 + 0x38) + *(int *)(unaff_x19 + 0x40);
            if (*(long *)(lVar6 + 0xe8) == 0) goto LAB_07738234;
            uVar16 = *(ulong *)(*(long *)(lVar6 + 0xe8) + 0x18);
            lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,uVar16 & 0xffffffff);
            iStack000000000000011c = 0;
            if (0 < (int)uVar16) {
              uVar13 = 0;
              lVar18 = 0x20;
              do {
                lVar10 = *(long *)(lVar6 + 0x128);
                if (lVar10 == 0) goto LAB_07738234;
                if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_07738238;
                if (*(char *)(lVar10 + uVar13 + 0x20) != '\0') {
                  lVar10 = *(long *)(lVar6 + 0xe8);
                  if (lVar10 == 0) goto LAB_07738234;
                  if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_07738238;
                  memcpy(&stack0x000000d0,(void *)(lVar10 + lVar18),0x48);
                  memcpy(&stack0x00000120,(void *)(lVar10 + lVar18),0x48);
                  if (lVar5 == 0) goto LAB_07738234;
                  uVar17 = *(undefined8 *)PTR_DAT_09f318c8;
                  memcpy(&stack0x00000168,&stack0x00000120,0x48);
                  uVar8 = FUN_0753d6ec(lVar5,&stack0x00000168,(long)&stack0x000000c8 + 4,uVar17);
                  if ((uVar8 & 1) == 0) {
                    memcpy(&stack0x00000030,&stack0x000000d0,0x48);
                    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07738234;
                    uVar2 = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
                    uVar17 = *(undefined8 *)PTR_DAT_09f31890;
                    memcpy(&stack0x00000168,&stack0x00000030,0x48);
                    FUN_0753b6b4(lVar5,&stack0x00000168,uVar2,uVar17);
                    lVar10 = *(long *)(unaff_x19 + 0x28);
                    if (lVar10 == 0) goto LAB_07738234;
                    uVar4 = *(uint *)(lVar10 + 0x18);
                    iStack000000000000011c = iStack000000000000011c + 1;
                    lVar14 = *(long *)PTR_DAT_09f319e8;
                    _uStack00000000000000c8 = CONCAT44(uVar4,uStack00000000000000c8);
                    memcpy(&stack0x00000120,&stack0x000000d0,0x48);
                    lVar11 = *(long *)(lVar10 + 0x10);
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_07738234;
                    if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar4 + 1;
                      pvVar1 = (void *)(lVar11 + (long)(int)uVar4 * 0x48 + 0x20);
                      memcpy(pvVar1,&stack0x00000120,0x48);
                      thunk_FUN_044bb4b4(pvVar1,0);
                    }
                    else {
                      uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
                      memcpy(&stack0x00000168,&stack0x00000120,0x48);
                      FUN_05da2e8c(lVar10,&stack0x00000168,uVar17);
                    }
                  }
                  if (lVar7 == 0) goto LAB_07738234;
                  if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_07738238;
                  *(undefined4 *)(lVar7 + 0x20 + uVar13 * 4) = uStack00000000000000cc;
                }
                uVar13 = uVar13 + 1;
                lVar18 = lVar18 + 0x48;
              } while ((uVar16 & 0xffffffff) != uVar13);
            }
            *(long *)(lVar6 + 0xf0) = lVar7;
            thunk_FUN_044bb4b4((long *)(lVar6 + 0xf0),lVar7);
            if (4 < *(int *)(unaff_x19 + 0x10)) {
              lVar18 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
              if (lVar18 == 0) goto LAB_07738234;
              if (*(int *)(lVar18 + 0x18) == 0) {
LAB_07738238:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
              thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x20));
              if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_07738238;
              *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)PTR_DAT_09f319f8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x28));
              uVar17 = FUN_07a3b850(&stack0x0000011c,0);
              if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_07738238;
              *(undefined8 *)(lVar18 + 0x30) = uVar17;
              thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x30),uVar17);
              if (*(uint *)(lVar18 + 0x18) < 4) goto LAB_07738238;
              *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)PTR_DAT_09f31a00;
              thunk_FUN_044bb4b4();
              if (lVar7 == 0) goto LAB_07738234;
              _uStack00000000000000c8 =
                   CONCAT44(uStack00000000000000cc,(int)*(undefined8 *)(lVar7 + 0x18));
              uVar17 = FUN_07a3b850(&stack0x000000c8,0);
              if (*(uint *)(lVar18 + 0x18) < 5) goto LAB_07738238;
              *(undefined8 *)(lVar18 + 0x40) = uVar17;
              thunk_FUN_044bb4b4();
              uVar17 = FUN_078b57fc(lVar18,0);
              if (lVar9 == 0) goto LAB_07738234;
              FUN_078c335c(lVar9,uVar17,0);
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(unaff_x24 + 0x18));
      }
      if (unaff_x23 != 0) {
        if (0 < *(int *)(unaff_x23 + 0x18)) {
          iVar12 = 0;
          do {
            lVar6 = FUN_05badb74(unaff_x23,iVar12,*(undefined8 *)PTR_DAT_09f31320);
            if (lVar6 == 0) goto LAB_07738234;
            *(int *)(unaff_x19 + 0x40) = *(int *)(lVar6 + 0x38) + *(int *)(unaff_x19 + 0x40);
            if (*(long *)(lVar6 + 0xe8) == 0) goto LAB_07738234;
            iVar3 = *(int *)(*(long *)(lVar6 + 0xe8) + 0x18);
            lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,iVar3);
            if (0 < iVar3) {
              uVar16 = 0;
              lVar18 = 0x20;
              do {
                lVar10 = *(long *)(lVar6 + 0x128);
                if (lVar10 == 0) goto LAB_07738234;
                if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_07738238;
                if (*(char *)(lVar10 + uVar16 + 0x20) != '\0') {
                  lVar10 = *(long *)(lVar6 + 0xe8);
                  if (lVar10 == 0) goto LAB_07738234;
                  if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_07738238;
                  memcpy(&stack0x00000080,(void *)(lVar10 + lVar18),0x48);
                  memcpy(&stack0x00000120,(void *)(lVar10 + lVar18),0x48);
                  if (lVar5 == 0) goto LAB_07738234;
                  uVar17 = *(undefined8 *)PTR_DAT_09f318c8;
                  memcpy(&stack0x00000168,&stack0x00000120,0x48);
                  uVar13 = FUN_0753d6ec(lVar5,&stack0x00000168,&stack0x0000007c,uVar17);
                  if ((uVar13 & 1) == 0) {
                    memcpy(&stack0x00000030,&stack0x00000080,0x48);
                    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07738234;
                    uVar2 = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
                    uVar17 = *(undefined8 *)PTR_DAT_09f31890;
                    memcpy(&stack0x00000168,&stack0x00000030,0x48);
                    FUN_0753b6b4(lVar5,&stack0x00000168,uVar2,uVar17);
                    lVar10 = *(long *)(unaff_x19 + 0x28);
                    if (lVar10 == 0) goto LAB_07738234;
                    uVar4 = *(uint *)(lVar10 + 0x18);
                    lVar14 = *(long *)PTR_DAT_09f319e8;
                    uStack000000000000007c = uVar4;
                    memcpy(&stack0x00000120,&stack0x00000080,0x48);
                    lVar11 = *(long *)(lVar10 + 0x10);
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_07738234;
                    if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar4 + 1;
                      pvVar1 = (void *)(lVar11 + (long)(int)uVar4 * 0x48 + 0x20);
                      memcpy(pvVar1,&stack0x00000120,0x48);
                      thunk_FUN_044bb4b4(pvVar1,0);
                    }
                    else {
                      uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
                      memcpy(&stack0x00000168,&stack0x00000120,0x48);
                      FUN_05da2e8c(lVar10,&stack0x00000168,uVar17);
                    }
                  }
                  if (lVar7 == 0) goto LAB_07738234;
                  if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_07738238;
                  *(uint *)(lVar7 + 0x20 + uVar16 * 4) = uStack000000000000007c;
                }
                uVar16 = uVar16 + 1;
                lVar18 = lVar18 + 0x48;
              } while ((long)iVar3 != uVar16);
            }
            *(long *)(lVar6 + 0xf0) = lVar7;
            thunk_FUN_044bb4b4((long *)(lVar6 + 0xf0),lVar7);
            if (4 < *(int *)(unaff_x19 + 0x10)) {
              if (lVar7 == 0) goto LAB_07738234;
              uVar15 = *(undefined8 *)(lVar6 + 0x20);
              _uStack00000000000000c8 =
                   CONCAT44(uStack00000000000000cc,(int)*(undefined8 *)(lVar7 + 0x18));
              uVar17 = FUN_07a3b850(&stack0x000000c8,0);
              uVar17 = FUN_078b4f58(uVar15,*(undefined8 *)PTR_DAT_09f31a00,uVar17,0);
              if (lVar9 == 0) goto LAB_07738234;
              FUN_078c335c(lVar9,uVar17,0);
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(unaff_x23 + 0x18));
        }
        if (4 < *(int *)(unaff_x19 + 0x10)) {
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07738234;
          _uStack00000000000000c8 =
               CONCAT44(uStack00000000000000cc,*(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
          uVar17 = FUN_07a3b850(&stack0x000000c8,0);
          uVar17 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f319f0,uVar17,0);
          if (lVar9 == 0) goto LAB_07738234;
          FUN_078c335c(lVar9,uVar17,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c652c(lVar9,0);
        }
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          return *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
        }
      }
    }
  }
LAB_07738234:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


