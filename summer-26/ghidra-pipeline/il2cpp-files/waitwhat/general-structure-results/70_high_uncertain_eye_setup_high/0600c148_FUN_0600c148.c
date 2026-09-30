/*
FUNCTION_NAME: FUN_0600c148
ENTRY_POINT: 0600c148
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0600c148(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 extraout_x1;
  int iVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  int iVar22;
  undefined8 uVar23;
  long *plVar24;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar3 = PTR_DAT_07131d38;
  puVar2 = PTR_DAT_07131d30;
  if ((bRam00000000075546de & 1) == 0) {
    FUN_03188a78(PTR_DAT_07131d40);
    FUN_03188a78(PTR_DAT_07131d48);
    FUN_03188a78(PTR_DAT_07131d50);
    FUN_03188a78(PTR_DAT_070c7c80);
    FUN_03188a78(PTR_DAT_07131d58);
    FUN_03188a78(PTR_DAT_07131d60);
    FUN_03188a78(PTR_DAT_07131d68);
    FUN_03188a78(PTR_DAT_07131d70);
    FUN_03188a78(PTR_DAT_07131d78);
    FUN_03188a78(PTR_DAT_07131d80);
    FUN_03188a78(PTR_DAT_07131d38);
    FUN_03188a78(PTR_DAT_07131d30);
    bRam00000000075546de = 1;
  }
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyTo(lVar9,*(undefined8 *)puVar3);
  if (param_4 == (long *)0x0) {
    lVar19 = *(long *)PTR_DAT_07131d40;
    lVar14 = *(long *)(lVar19 + 0x38);
    if (lVar14 == 0) {
      FUN_031c0a30(lVar19);
      lVar14 = *(long *)(lVar19 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_031c09d4();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar14 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_031c09d4();
    }
    param_4 = (long *)**(undefined8 **)(lVar14 + 0xb8);
    if (param_4 == (long *)0x0) goto LAB_0600c70c;
  }
  lVar14 = *param_4;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07131d48) {
        puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_0600c2f4;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_031c0d08(param_4,*(long *)PTR_DAT_07131d48,0);
LAB_0600c2f4:
  plVar11 = (long *)(*(code *)*puVar10)(param_4,puVar10[1]);
  plVar20 = (long *)PTR_DAT_070c7c80;
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_070c7c80) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto System_Data_SqlTypes_SqlString___ctor;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_031c0d08(plVar11,*(long *)PTR_DAT_070c7c80,0);
System_Data_SqlTypes_SqlString___ctor:
    uVar16 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if (param_1 != (long *)0x0) {
      lVar14 = *param_1;
      uVar16 = uVar16 & 0xffffffff;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07131d58) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0600c3c4;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_031c0d08(param_1,*(long *)PTR_DAT_07131d58,0);
LAB_0600c3c4:
      iVar4 = (*(code *)*puVar10)(param_1,puVar10[1]);
      if (iVar4 < 1) {
        if (lVar9 == 0) goto LAB_0600c70c;
      }
      else {
        iVar13 = 0;
        iVar15 = 0;
        iVar22 = 0;
        plVar21 = (long *)PTR_DAT_07131d50;
        plVar24 = (long *)PTR_DAT_07131d78;
        do {
          lVar14 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07131d60) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_0600c454;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_031c0d08(param_1,*(long *)PTR_DAT_07131d60,0);
LAB_0600c454:
          plVar12 = (long *)(*(code *)*puVar10)(param_1,iVar22,puVar10[1]);
          uVar23 = 0;
          while ((uVar16 & 1) != 0) {
            lVar14 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *plVar21) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                  goto System_Data_SqlTypes_SqlString__get_Value;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined8 *)FUN_031c0d08(plVar11,*plVar21,0);
System_Data_SqlTypes_SqlString__get_Value:
            iVar5 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            if (iVar22 != iVar5) {
              uVar16 = 1;
              goto joined_r0x0600c5a4;
            }
            lVar14 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *plVar21) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0600c520;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined8 *)FUN_031c0d08(plVar11,*plVar21,0);
LAB_0600c520:
            (*(code *)*puVar10)(plVar11,puVar10[1]);
            lVar14 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *plVar20) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0600c580;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined8 *)FUN_031c0d08(plVar11,*plVar20,0);
LAB_0600c580:
            uVar16 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            uVar23 = extraout_x1;
          }
          uVar16 = 0;
joined_r0x0600c5a4:
          if (plVar12 == (long *)0x0) goto LAB_0600c70c;
          iVar5 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
          iVar6 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
          iVar7 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
          iVar8 = (**(code **)(*plVar12 + 0x198))(plVar12,*(undefined8 *)(*plVar12 + 0x1a0));
          uVar23 = (**(code **)(*plVar12 + 0x1d8))
                             (plVar12,iVar22,uVar23,param_3,param_2,
                              *(undefined8 *)(*plVar12 + 0x1e0));
          if (lVar9 == 0) goto LAB_0600c70c;
          lVar14 = *(long *)(lVar9 + 0x10);
          lVar19 = *plVar24;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0600c70c;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar1 * 0x20;
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + 0x30) = uVar23;
            *(long **)(lVar14 + 0x38) = plVar12;
            *(int *)(lVar14 + 0x20) = iVar22;
            *(int *)(lVar14 + 0x24) = iVar13;
            *(int *)(lVar14 + 0x28) = iVar15;
            *(undefined4 *)(lVar14 + 0x2c) = 0;
          }
          else {
            uStack_74 = 0;
            iStack_80 = iVar22;
            iStack_7c = iVar13;
            iStack_78 = iVar15;
            uStack_70 = uVar23;
            plStack_68 = plVar12;
            FUN_044f240c(lVar9,&iStack_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            plVar21 = (long *)PTR_DAT_07131d50;
            plVar24 = (long *)PTR_DAT_07131d78;
          }
          iVar13 = (iVar5 + iVar13) - iVar6;
          iVar22 = iVar22 + 1;
          iVar15 = (iVar7 + iVar15) - iVar8;
          plVar20 = (long *)PTR_DAT_070c7c80;
        } while (iVar22 != iVar4);
      }
      FUN_044f40e0(lVar9,*(undefined8 *)PTR_DAT_07131d80);
      return;
    }
  }
LAB_0600c70c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


