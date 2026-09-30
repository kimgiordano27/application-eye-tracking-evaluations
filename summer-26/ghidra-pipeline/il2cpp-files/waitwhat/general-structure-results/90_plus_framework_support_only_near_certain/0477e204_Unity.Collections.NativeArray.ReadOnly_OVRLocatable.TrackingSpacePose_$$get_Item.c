/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRLocatable.TrackingSpacePose>$$get_Item
ENTRY_POINT: 0477e204
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


void Unity_Collections_NativeArray_ReadOnly<OVRLocatable_TrackingSpacePose>__get_Item
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *__src;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long unaff_x21;
  long unaff_x23;
  ulong uVar15;
  code *pcVar16;
  long unaff_x25;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  if ((*(byte *)(unaff_x23 + 0x8e6) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f42d8);
    FUN_03188a78(PTR_DAT_070f42e0);
    *(undefined1 *)(unaff_x23 + 0x8e6) = 1;
  }
  lVar11 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  uVar15 = (ulong)*(uint *)(*(long *)(lVar11 + 0x10) + 0xfc);
  __src = (void *)thunk_FUN_031e5890(param_2,*(undefined8 *)(*(long *)(lVar11 + 8) + 0x80));
  memcpy(&stack0x00000000 + -(uVar15 + 0xf & 0x1fffffff0),__src,uVar15);
  uVar15 = FUN_03188c88(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10),
                        &stack0x00000000 + -(uVar15 + 0xf & 0x1fffffff0));
  if ((uVar15 & 1) == 0) {
LAB_0477e53c:
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return;
    }
    goto 
    Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
    ;
  }
  lVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68))
                     (param_2);
  lVar10 = **(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4(lVar10);
  }
  if (param_3 == (long *)0x0) goto LAB_0477e570;
  lVar12 = *param_3;
  bVar1 = *(byte *)(lVar12 + 0x130);
  if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)) {
    plVar14 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    lVar10 = *plVar14;
    pcVar16 = *(code **)plVar14[0xd];
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4(lVar10);
      lVar12 = *param_3;
      bVar1 = *(byte *)(lVar12 + 0x130);
    }
    if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)) {
      lVar10 = (*pcVar16)(param_3,*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68));
      lVar12 = **(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_031c09d4(lVar12);
      }
      if (param_4 == (long *)0x0) {
LAB_0477e570:
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      }
      else {
        lVar13 = *param_4;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
           )) {
          plVar14 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          lVar12 = *plVar14;
          pcVar16 = *(code **)plVar14[0xd];
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_031c09d4(lVar12);
            lVar13 = *param_4;
            bVar1 = *(byte *)(lVar13 + 0x130);
          }
          if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) ==
              lVar12)) {
            lVar12 = (*pcVar16)(param_4,*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68));
            puVar2 = PTR_DAT_070f42d8;
            if (lVar10 != 0) {
              iVar4 = FUN_049079b8(lVar10,*(undefined8 *)PTR_DAT_070f42d8);
              puVar3 = PTR_DAT_070f42e0;
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  if (((lVar11 == 0) ||
                      (plVar14 = (long *)FUN_04907a44(lVar11,iVar4,*(undefined8 *)puVar3),
                      lVar12 == 0)) ||
                     (plVar7 = (long *)FUN_04907a44(lVar12,iVar4,*(undefined8 *)puVar3),
                     plVar7 == (long *)0x0)) goto LAB_0477e570;
                  uVar5 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
                  if (plVar14 == (long *)0x0) goto LAB_0477e570;
                  (**(code **)(*plVar14 + 0x198))
                            (plVar14,uVar5 & 1,*(undefined8 *)(*plVar14 + 0x1a0));
                  plVar14 = (long *)FUN_04907a44(lVar12,iVar4,*(undefined8 *)puVar3);
                  if (plVar14 == (long *)0x0) goto LAB_0477e570;
                  uVar15 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                  if ((uVar15 & 1) != 0) {
                    plVar14 = (long *)FUN_04907a44(lVar11,iVar4,*(undefined8 *)puVar3);
                    uVar8 = FUN_04907a44(lVar10,iVar4,*(undefined8 *)puVar3);
                    uVar9 = FUN_04907a44(lVar12,iVar4,*(undefined8 *)puVar3);
                    if (plVar14 == (long *)0x0) goto LAB_0477e570;
                    (**(code **)(*plVar14 + 0x1a8))
                              (plVar14,uVar8,uVar9,*(undefined8 *)(*plVar14 + 0x1b0));
                  }
                  iVar4 = iVar4 + 1;
                  iVar6 = FUN_049079b8(lVar10,*(undefined8 *)puVar2);
                } while (iVar4 < iVar6);
              }
              goto LAB_0477e53c;
            }
            goto LAB_0477e570;
          }
        }
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(param_4);
        }
      }
      goto 
      Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
      ;
    }
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_03189058(param_3);
  }

  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


