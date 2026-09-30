/*
FUNCTION_NAME: FUN_06268e60
ENTRY_POINT: 06268e60
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_06268e60(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  
  if ((DAT_076de201 & 1) == 0) {
    thunk_FUN_032e1da0(OVRPlugin_EyeGazeState___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(UnityEngine_XR_ARFoundation_ARMeshesChangedEventArgs_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07292ac8);
    thunk_FUN_032e1da0(bool____TypeInfo);
    DAT_076de201 = 1;
  }
  puVar4 = OVRPlugin_EyeGazeState___TypeInfo;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x50) != 0)) {
    uVar8 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,
                         *(undefined4 *)(*(long *)(param_2 + 0x50) + 0x18));
    plVar12 = *(long **)(param_2 + 0x10);
    if (*(char *)(param_2 + 0x48) == '\0') {
      if (plVar12 != (long *)0x0) {
        lVar13 = *(long *)puVar4;
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) !=
            lVar13)) goto LAB_062692dc;
      }
      FUN_06269810(param_1,plVar12,uVar8,1,*(int *)(param_1 + 0xd8) == 0);
LAB_062692a8:
      if (*(int *)(param_1 + 0xd8) == 0) {
        FUN_062669c0(param_1);
      }
      return uVar8;
    }
    if (plVar12 != (long *)0x0) {
      lVar13 = *(long *)puVar4;
      if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13
         )) {
LAB_062692dc:
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar12,lVar13);
      }
      plVar12 = (long *)plVar12[7];
      if (plVar12 != (long *)0x0) {
        iVar6 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
        puVar2 = UnityEngine_XR_ARFoundation_ARMeshesChangedEventArgs_TypeInfo;
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            plVar9 = (long *)(**(code **)(*plVar12 + 0x2e8))
                                       (plVar12,iVar6,*(undefined8 *)(*plVar12 + 0x2f0));
            if (plVar9 == (long *)0x0) goto LAB_06269244;
            bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c(plVar9);
            }
            uVar10 = FUN_0627a060(plVar9,0);
            if ((uVar10 & 1) == 0) {
              if (plVar9[5] == 0) goto LAB_06269244;
              uVar10 = FUN_062523e0(plVar9[5],0);
              if ((uVar10 & 1) != 0) {
                if (plVar9[5] == 0) goto LAB_06269244;
                uVar11 = FUN_062692e8(uVar10,*(undefined8 *)(plVar9[5] + 0x10));
                FUN_0626934c(param_1,plVar9,uVar8,uVar11,1);
              }
            }
            iVar6 = iVar6 + 1;
            iVar7 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
          } while (iVar6 < iVar7);
        }
        puVar5 = bool____TypeInfo;
        puVar3 = PTR_DAT_072a1998;
        puVar2 = PTR_DAT_07292ac8;
        if (*(int *)(param_1 + 0xd8) != 0) {
LAB_06269030:
          do {
            plVar12 = *(long **)(param_1 + 0x18);
            if (plVar12 == (long *)0x0) goto LAB_06269244;
            iVar6 = (**(code **)(*plVar12 + 0x198))(plVar12,*(undefined8 *)(*plVar12 + 0x1a0));
            if (iVar6 == 0xf) goto LAB_062692a8;
            plVar12 = *(long **)(param_1 + 0x18);
            if (plVar12 == (long *)0x0) goto LAB_06269244;
            iVar6 = (**(code **)(*plVar12 + 0x358))(plVar12,*(undefined8 *)(*plVar12 + 0x360));
            if (iVar6 != 1) goto LAB_062692a8;
            plVar12 = *(long **)(param_1 + 0x18);
            if (plVar12 == (long *)0x0) goto LAB_06269244;
            uVar10 = (**(code **)(*plVar12 + 0x428))
                               (plVar12,*(undefined8 *)(param_2 + 0x30),
                                *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(*plVar12 + 0x430));
            if (((uVar10 & 1) == 0) && (*(int *)(param_1 + 0xd8) != 0)) {
              uVar11 = FUN_062680bc(param_1,0);
              FUN_06267e44(param_1,uVar11,0,0);
            }
            else {
              plVar12 = *(long **)(param_2 + 0x10);
              if (plVar12 != (long *)0x0) {
                lVar13 = *(long *)puVar4;
                if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8)
                    != lVar13)) goto LAB_062692dc;
              }
              FUN_0626940c(param_1,plVar12,uVar8,1);
              plVar12 = *(long **)(param_1 + 0x18);
              if (plVar12 == (long *)0x0) goto LAB_06269244;
              uVar10 = (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
              plVar12 = *(long **)(param_1 + 0x18);
              if (plVar12 == (long *)0x0) goto LAB_06269244;
              lVar13 = *plVar12;
              if ((uVar10 & 1) == 0) {
                (**(code **)(lVar13 + 0x3f8))(plVar12,*(undefined8 *)(lVar13 + 0x400));
                plVar12 = *(long **)(param_2 + 0x10);
                if (plVar12 != (long *)0x0) {
                  lVar13 = *(long *)puVar4;
                  if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 +
                               -8) != lVar13)) goto LAB_062692dc;
                }
                FUN_06269810(param_1,plVar12,uVar8,1,0);
                FUN_062654d8(param_1);
                goto LAB_062692a8;
              }
              (**(code **)(lVar13 + 0x368))(plVar12,*(undefined8 *)(lVar13 + 0x370));
            }
            plVar12 = *(long **)(param_1 + 0x18);
            if (plVar12 == (long *)0x0) goto LAB_06269244;
            (**(code **)(*plVar12 + 1000))(plVar12,*(undefined8 *)(*plVar12 + 0x3f0));
          } while( true );
        }
        plVar12 = *(long **)(param_1 + 0x18);
        while (plVar12 != (long *)0x0) {
          iVar6 = (**(code **)(*plVar12 + 0x198))(plVar12,*(undefined8 *)(*plVar12 + 0x1a0));
          if (iVar6 != 1) goto LAB_06269030;
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) break;
          lVar13 = (**(code **)(*plVar12 + 0x2a8))
                             (plVar12,*(undefined8 *)puVar2,*(undefined8 *)puVar5,
                              *(undefined8 *)(*plVar12 + 0x2b0));
          if (lVar13 == 0) goto LAB_06269030;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar10 = FUN_062424c0(lVar13,0);
          if ((uVar10 & 1) != 0) goto LAB_06269030;
          FUN_062656dc(param_1);
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) break;
          (**(code **)(*plVar12 + 1000))(plVar12,*(undefined8 *)(*plVar12 + 0x3f0));
          plVar12 = *(long **)(param_1 + 0x18);
        }
      }
    }
  }
LAB_06269244:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


