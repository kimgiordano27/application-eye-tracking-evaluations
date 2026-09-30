/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 04fd6f34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x26;
  long in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    return;
  }
  uVar2 = FUN_053f2f64(in_stack_00000008,*(undefined8 *)PTR_DAT_06a0f668,0);
  if (in_stack_00000008 != 0) {
    iVar3 = FUN_053f2f64(in_stack_00000008,*(undefined8 *)PTR_DAT_06a11770,0);
    puVar1 = PTR_DAT_069fb9c0;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
    }
    uVar8 = FUN_054f73b4(uVar8,0);
    if (in_stack_00000008 != 0) {
      lVar4 = FUN_053f0e78(in_stack_00000008,*(undefined8 *)PTR_DAT_06a0f658,uVar8,0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02dcfd18(lVar9);
      }
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_02dd3048(lVar4,lVar9);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(lVar4,lVar9);
        }
      }
      lVar9 = *(long *)(unaff_x20 + 0x20);
      *(long *)(unaff_x19 + 0x30) = lVar5;
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02dcfd18(lVar9);
      }
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_02dd3048(lVar4,lVar9);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(lVar4,lVar9);
        }
      }
      LeanTween__value((long *)(unaff_x19 + 0x30),lVar5);
      if (iVar3 == 0) {
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
        LeanTween__value((undefined8 *)(unaff_x19 + 0x10),0);
      }
      else {
        FUN_04fd68e8();
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar8 = FUN_054f73b4(uVar8,0);
        if (in_stack_00000008 == 0) goto LAB_04fd71e4;
        lVar4 = FUN_053f0e78(in_stack_00000008,*(undefined8 *)PTR_DAT_06a11778,uVar8,0);
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02dcfd18(lVar9);
        }
        if (lVar4 == 0) {
          FUN_0550953c(0x10,0);
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar5 = thunk_FUN_02dd3048(lVar4,lVar9);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(lVar4,lVar9);
        }
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar7 = 0;
          uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            FUN_04fd69c8();
            uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
      }
      lVar4 = *unaff_x26;
      *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar4 = FUN_0548850c(0);
      if (lVar4 != 0) {
        FUN_04b86570();
        return;
      }
    }
  }
LAB_04fd71e4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


