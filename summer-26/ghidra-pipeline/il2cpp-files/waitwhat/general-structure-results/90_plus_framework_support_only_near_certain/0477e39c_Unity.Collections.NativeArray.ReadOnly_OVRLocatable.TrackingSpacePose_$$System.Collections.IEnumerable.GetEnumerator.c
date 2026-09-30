/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRLocatable.TrackingSpacePose>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0477e39c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void Unity_Collections_NativeArray_ReadOnly<OVRLocatable_TrackingSpacePose>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long in_x10;
  long *plVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  code *pcVar12;
  long unaff_x25;
  long unaff_x29;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  if (((uint)in_x10 <= (uint)bVar1) &&
     (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) == param_3)) {
    plVar11 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    lVar10 = *plVar11;
    pcVar12 = *(code **)plVar11[0xd];
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4(lVar10);
      param_1 = *unaff_x20;
      bVar1 = *(byte *)(param_1 + 0x130);
    }
    if ((*(byte *)(lVar10 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10))
    {
      lVar10 = (*pcVar12)();
      if (unaff_x22 == 0) {
LAB_0477e570:
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      }
      else {
        iVar3 = FUN_049079b8();
        puVar2 = PTR_DAT_070f42e0;
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            if (((unaff_x19 == 0) || (plVar11 = (long *)FUN_04907a44(), lVar10 == 0)) ||
               (plVar6 = (long *)FUN_04907a44(lVar10,iVar3,*(undefined8 *)puVar2),
               plVar6 == (long *)0x0)) goto LAB_0477e570;
            uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
            if (plVar11 == (long *)0x0) goto LAB_0477e570;
            (**(code **)(*plVar11 + 0x198))(plVar11,uVar4 & 1,*(undefined8 *)(*plVar11 + 0x1a0));
            plVar11 = (long *)FUN_04907a44(lVar10,iVar3,*(undefined8 *)puVar2);
            if (plVar11 == (long *)0x0) goto LAB_0477e570;
            uVar7 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
            if ((uVar7 & 1) != 0) {
              plVar11 = (long *)FUN_04907a44();
              uVar8 = FUN_04907a44();
              uVar9 = FUN_04907a44(lVar10,iVar3,*(undefined8 *)puVar2);
              if (plVar11 == (long *)0x0) goto LAB_0477e570;
              (**(code **)(*plVar11 + 0x1a8))(plVar11,uVar8,uVar9,*(undefined8 *)(*plVar11 + 0x1b0))
              ;
            }
            iVar3 = iVar3 + 1;
            iVar5 = FUN_049079b8();
          } while (iVar3 < iVar5);
        }
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
          return;
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


