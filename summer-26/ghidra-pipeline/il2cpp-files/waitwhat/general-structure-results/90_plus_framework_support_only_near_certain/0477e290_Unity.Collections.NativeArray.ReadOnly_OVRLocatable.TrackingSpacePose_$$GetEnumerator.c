/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRLocatable.TrackingSpacePose>$$GetEnumerator
ENTRY_POINT: 0477e290
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


void Unity_Collections_NativeArray_ReadOnly<OVRLocatable_TrackingSpacePose>__GetEnumerator
               (ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  code *pcVar16;
  long unaff_x25;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
LAB_0477e53c:
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return;
    }
    goto 
    Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
    ;
  }
  lVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68))();
  lVar12 = **(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_031c09d4(lVar12);
  }
  if (unaff_x22 == (long *)0x0) goto LAB_0477e570;
  lVar13 = *unaff_x22;
  bVar1 = *(byte *)(lVar13 + 0x130);
  if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)) {
    plVar15 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    lVar12 = *plVar15;
    pcVar16 = *(code **)plVar15[0xd];
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_031c09d4(lVar12);
      lVar13 = *unaff_x22;
      bVar1 = *(byte *)(lVar13 + 0x130);
    }
    if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)) {
      lVar12 = (*pcVar16)();
      lVar13 = **(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_031c09d4(lVar13);
      }
      if (unaff_x20 == (long *)0x0) {
LAB_0477e570:
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      }
      else {
        lVar14 = *unaff_x20;
        bVar1 = *(byte *)(lVar14 + 0x130);
        if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) == lVar13
           )) {
          plVar15 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          lVar13 = *plVar15;
          pcVar16 = *(code **)plVar15[0xd];
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_031c09d4(lVar13);
            lVar14 = *unaff_x20;
            bVar1 = *(byte *)(lVar14 + 0x130);
          }
          if ((*(byte *)(lVar13 + 0x130) <= bVar1) &&
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) ==
              lVar13)) {
            lVar13 = (*pcVar16)();
            puVar2 = PTR_DAT_070f42d8;
            if (lVar12 != 0) {
              iVar4 = FUN_049079b8(lVar12,*(undefined8 *)PTR_DAT_070f42d8);
              puVar3 = PTR_DAT_070f42e0;
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  if (((lVar7 == 0) ||
                      (plVar15 = (long *)FUN_04907a44(lVar7,iVar4,*(undefined8 *)puVar3),
                      lVar13 == 0)) ||
                     (plVar8 = (long *)FUN_04907a44(lVar13,iVar4,*(undefined8 *)puVar3),
                     plVar8 == (long *)0x0)) goto LAB_0477e570;
                  uVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                  if (plVar15 == (long *)0x0) goto LAB_0477e570;
                  (**(code **)(*plVar15 + 0x198))
                            (plVar15,uVar5 & 1,*(undefined8 *)(*plVar15 + 0x1a0));
                  plVar15 = (long *)FUN_04907a44(lVar13,iVar4,*(undefined8 *)puVar3);
                  if (plVar15 == (long *)0x0) goto LAB_0477e570;
                  uVar9 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
                  if ((uVar9 & 1) != 0) {
                    plVar15 = (long *)FUN_04907a44(lVar7,iVar4,*(undefined8 *)puVar3);
                    uVar10 = FUN_04907a44(lVar12,iVar4,*(undefined8 *)puVar3);
                    uVar11 = FUN_04907a44(lVar13,iVar4,*(undefined8 *)puVar3);
                    if (plVar15 == (long *)0x0) goto LAB_0477e570;
                    (**(code **)(*plVar15 + 0x1a8))
                              (plVar15,uVar10,uVar11,*(undefined8 *)(*plVar15 + 0x1b0));
                  }
                  iVar4 = iVar4 + 1;
                  iVar6 = FUN_049079b8(lVar12,*(undefined8 *)puVar2);
                } while (iVar4 < iVar6);
              }
              goto LAB_0477e53c;
            }
            goto LAB_0477e570;
          }
        }
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058();
        }
      }
      goto 
      Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
      ;
    }
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_03189058();
  }

  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


