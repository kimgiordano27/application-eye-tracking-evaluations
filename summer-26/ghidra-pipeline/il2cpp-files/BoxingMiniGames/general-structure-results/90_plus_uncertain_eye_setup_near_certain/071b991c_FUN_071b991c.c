/*
FUNCTION_NAME: FUN_071b991c
ENTRY_POINT: 071b991c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * FUN_071b991c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 *puVar16;
  
  if ((DAT_07eef682 & 1) == 0) {
    FUN_03642964(PTR_DAT_079fd140);
    FUN_03642964(PTR_DAT_07a1dec8);
    FUN_03642964(PTR_DAT_079fdb58);
    FUN_03642964(PTR_DAT_079fdb60);
    FUN_03642964(PTR_DAT_079f9e90);
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_GetEnumerator__
                );
    FUN_03642964(PTR_DAT_079f7098);
    DAT_07eef682 = 1;
  }
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_GetEnumerator__
  ;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
  ;
  puVar4 = PTR_DAT_079fd140;
  puVar3 = PTR_DAT_079f9e90;
  puVar2 = PTR_DAT_079f4610;
  lVar13 = 0;
  puVar16 = (undefined8 *)PTR_DAT_07a1dec8;
  do {
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar7 = FUN_05e31434(param_1,0,0);
    if ((uVar7 & 1) == 0) {
LAB_071b9cf0:
      if (lVar13 == 0) {
        return (long *)0x0;
      }
      plVar10 = (long *)FUN_045a0b8c(lVar13,*puVar16);
      return plVar10;
    }
    uVar14 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar14 = FUN_05e26f18(uVar14,0);
    uVar7 = FUN_05e31434(param_1,uVar14,0);
    if ((uVar7 & 1) == 0) goto LAB_071b9cf0;
    uVar14 = *(undefined8 *)puVar6;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar14 = FUN_05e26f18(uVar14,0);
    if (param_1 == (long *)0x0) {
LAB_071b9e04:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = (**(code **)(*param_1 + 0x218))(param_1,uVar14,0,*(undefined8 *)(*param_1 + 0x220));
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      uVar14 = *(undefined8 *)puVar5;
      lVar9 = thunk_FUN_0367fd24(lVar8,uVar14);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(lVar8,uVar14);
      }
    }
    param_1 = (long *)(**(code **)(*param_1 + 0x878))(param_1,*(undefined8 *)(*param_1 + 0x880));
    if (lVar9 == 0) goto LAB_071b9e04;
    uVar14 = *(undefined8 *)(lVar9 + 0x18);
    if (0 < (int)uVar14) {
      uVar15 = 0;
      do {
        if ((uint)uVar14 <= uVar15) goto LAB_071b9e08;
        lVar8 = *(long *)(lVar9 + (long)(int)uVar15 * 8 + 0x20);
        if (lVar13 == 0) {
          if ((uint)uVar14 == 1) {
            uVar14 = *(undefined8 *)puVar3;
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar14 = FUN_05e26f18(uVar14,0);
            uVar7 = FUN_05e30794(param_1,uVar14,0);
            if ((uVar7 & 1) != 0) {
              plVar10 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,3);
              if ((lVar8 != 0) && (plVar10 != (long *)0x0)) {
                lVar13 = *(long *)(lVar8 + 0x10);
                if ((lVar13 != 0) &&
                   (lVar9 = thunk_FUN_0367fd24(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)
                   ) {
LAB_071b9e18:
                  uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar14,0);
                }
                if ((int)plVar10[3] != 0) {
                  plVar10[4] = lVar13;
                  thunk_FUN_036b7ad0(plVar10 + 4,lVar13);
                  lVar13 = *(long *)(lVar8 + 0x18);
                  if ((lVar13 != 0) &&
                     (lVar9 = thunk_FUN_0367fd24(lVar13,*(undefined8 *)(*plVar10 + 0x40)),
                     lVar9 == 0)) goto LAB_071b9e18;
                  if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
                    plVar10[5] = lVar13;
                    thunk_FUN_036b7ad0(plVar10 + 5,lVar13);
                    lVar13 = *(long *)(lVar8 + 0x20);
                    if ((lVar13 != 0) &&
                       (lVar8 = thunk_FUN_0367fd24(lVar13,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar8 == 0)) goto LAB_071b9e18;
                    if (2 < *(uint *)(plVar10 + 3)) {
                      plVar10[6] = lVar13;
                      thunk_FUN_036b7ad0(plVar10 + 6,lVar13);
                      return plVar10;
                    }
                  }
                }
LAB_071b9e08:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              goto LAB_071b9e04;
            }
          }
          lVar13 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fdb60);
          FUN_0459e7d4(lVar13,*(undefined8 *)PTR_DAT_079fdb58);
        }
        if (lVar8 == 0) goto LAB_071b9e04;
        uVar14 = *(undefined8 *)(lVar8 + 0x10);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar7 = FUN_05e31434(uVar14,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar13 == 0) goto LAB_071b9e04;
          lVar11 = *(long *)(lVar13 + 0x10);
          uVar14 = *(undefined8 *)(lVar8 + 0x10);
          lVar12 = *(long *)puVar4;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_071b9e04;
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
            thunk_FUN_036b7ad0();
          }
          else {
            FUN_0459f03c(lVar13,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = *(undefined8 *)(lVar8 + 0x18);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar7 = FUN_05e31434(uVar14,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar13 == 0) goto LAB_071b9e04;
          lVar11 = *(long *)(lVar13 + 0x10);
          uVar14 = *(undefined8 *)(lVar8 + 0x18);
          lVar12 = *(long *)puVar4;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_071b9e04;
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
            thunk_FUN_036b7ad0();
          }
          else {
            FUN_0459f03c(lVar13,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = *(undefined8 *)(lVar8 + 0x20);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar7 = FUN_05e31434(uVar14,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar13 == 0) goto LAB_071b9e04;
          lVar11 = *(long *)(lVar13 + 0x10);
          uVar14 = *(undefined8 *)(lVar8 + 0x20);
          lVar8 = *(long *)puVar4;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_071b9e04;
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
            thunk_FUN_036b7ad0();
          }
          else {
            FUN_0459f03c(lVar13,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = *(undefined8 *)(lVar9 + 0x18);
        uVar15 = uVar15 + 1;
        puVar16 = (undefined8 *)PTR_DAT_07a1dec8;
      } while ((int)uVar15 < (int)uVar14);
    }
  } while( true );
}


