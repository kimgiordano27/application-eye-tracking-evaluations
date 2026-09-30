/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRLocatable.TrackingSpacePose>$$.ctor
ENTRY_POINT: 0477e1f0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 108
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void Unity_Collections_NativeArray_ReadOnly<OVRLocatable_TrackingSpacePose>___ctor
               (undefined4 param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *__src;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  code *pcVar17;
  long unaff_x29;
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(lVar2 + 0x28);
  if ((DAT_075488e6 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f42d8);
    FUN_03188a78(PTR_DAT_070f42e0);
    DAT_075488e6 = 1;
  }
  lVar12 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  uVar16 = (ulong)*(uint *)(*(long *)(lVar12 + 0x10) + 0xfc);
  __src = (void *)thunk_FUN_031e5890(param_2,*(undefined8 *)(*(long *)(lVar12 + 8) + 0x80));
  memcpy(&stack0x00000000 + -(uVar16 + 0xf & 0x1fffffff0),__src,uVar16);
  uVar16 = FUN_03188c88(*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10),
                        &stack0x00000000 + -(uVar16 + 0xf & 0x1fffffff0));
  if ((uVar16 & 1) == 0) {
LAB_0477e53c:
    if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return;
    }
    goto 
    Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
    ;
  }
  lVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x68))(param_2)
  ;
  lVar11 = **(long **)(*(long *)(param_5 + 0x20) + 0xc0);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_031c09d4(lVar11);
  }
  if (param_3 == (long *)0x0) goto LAB_0477e570;
  lVar13 = *param_3;
  bVar1 = *(byte *)(lVar13 + 0x130);
  if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)) {
    plVar15 = *(long **)(*(long *)(param_5 + 0x20) + 0xc0);
    lVar11 = *plVar15;
    pcVar17 = *(code **)plVar15[0xd];
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
      lVar13 = *param_3;
      bVar1 = *(byte *)(lVar13 + 0x130);
    }
    if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)) {
      lVar11 = (*pcVar17)(param_3,*(undefined8 *)
                                   (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x68));
      lVar13 = **(long **)(*(long *)(param_5 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_031c09d4(lVar13);
      }
      if (param_4 == (long *)0x0) {
LAB_0477e570:
        if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      }
      else {
        lVar14 = *param_4;
        bVar1 = *(byte *)(lVar14 + 0x130);
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
           )) {
          plVar15 = *(long **)(*(long *)(param_5 + 0x20) + 0xc0);
          lVar13 = *plVar15;
          pcVar17 = *(code **)plVar15[0xd];
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_031c09d4(lVar13);
            lVar14 = *param_4;
            bVar1 = *(byte *)(lVar14 + 0x130);
          }
          if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) ==
              lVar13)) {
            lVar13 = (*pcVar17)(param_4,*(undefined8 *)
                                         (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x68));
            puVar3 = PTR_DAT_070f42d8;
            if (lVar11 != 0) {
              iVar5 = FUN_049079b8(lVar11,*(undefined8 *)PTR_DAT_070f42d8);
              puVar4 = PTR_DAT_070f42e0;
              if (0 < iVar5) {
                iVar5 = 0;
                do {
                  if (((lVar12 == 0) ||
                      (plVar15 = (long *)FUN_04907a44(lVar12,iVar5,*(undefined8 *)puVar4),
                      lVar13 == 0)) ||
                     (plVar8 = (long *)FUN_04907a44(lVar13,iVar5,*(undefined8 *)puVar4),
                     plVar8 == (long *)0x0)) goto LAB_0477e570;
                  uVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                  if (plVar15 == (long *)0x0) goto LAB_0477e570;
                  (**(code **)(*plVar15 + 0x198))
                            (plVar15,uVar6 & 1,*(undefined8 *)(*plVar15 + 0x1a0));
                  plVar15 = (long *)FUN_04907a44(lVar13,iVar5,*(undefined8 *)puVar4);
                  if (plVar15 == (long *)0x0) goto LAB_0477e570;
                  uVar16 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
                  if ((uVar16 & 1) != 0) {
                    plVar15 = (long *)FUN_04907a44(lVar12,iVar5,*(undefined8 *)puVar4);
                    uVar9 = FUN_04907a44(lVar11,iVar5,*(undefined8 *)puVar4);
                    uVar10 = FUN_04907a44(lVar13,iVar5,*(undefined8 *)puVar4);
                    if (plVar15 == (long *)0x0) goto LAB_0477e570;
                    (**(code **)(*plVar15 + 0x1a8))
                              (param_1,plVar15,uVar9,uVar10,*(undefined8 *)(*plVar15 + 0x1b0));
                  }
                  iVar5 = iVar5 + 1;
                  iVar7 = FUN_049079b8(lVar11,*(undefined8 *)puVar3);
                } while (iVar5 < iVar7);
              }
              goto LAB_0477e53c;
            }
            goto LAB_0477e570;
          }
        }
        if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(param_4);
        }
      }
      goto 
      Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
      ;
    }
  }
  if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_03189058(param_3);
  }

  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


