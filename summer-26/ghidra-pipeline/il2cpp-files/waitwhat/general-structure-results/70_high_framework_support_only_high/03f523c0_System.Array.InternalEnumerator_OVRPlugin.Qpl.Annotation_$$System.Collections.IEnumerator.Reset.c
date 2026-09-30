/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03f523c0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f5278c) */
/* WARNING: Removing unreachable block (ram,0x03f5279c) */

void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_Reset
               (long *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  int iVar10;
  long unaff_x27;
  long unaff_x29;
  
  FUN_03188a98(*(long *)(*param_1 + 0x80) + 0x40);
  puVar4 = (undefined8 *)thunk_FUN_031e5890();
  *puVar4 = unaff_x25;
  if (unaff_x24 == (long *)0x0) {
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
    }
    lVar7 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f52460;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08();
LAB_03f52460:
    plVar6 = (long *)(*(code *)*puVar4)();
    *(long **)(unaff_x29 + -0x18) = plVar6;
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x18;
    puVar3 = PTR_DAT_070c7c80;
    if (plVar6 != (long *)0x0) {
      iVar10 = 0;
      do {
        lVar5 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03f524d8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar3,0);
LAB_03f524d8:
        uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar6 = *(long **)(unaff_x29 + -0x18);
          if (plVar6 == (long *)0x0) goto LAB_03f52708;
          lVar5 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 == 0) goto LAB_03f526e0;
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_03f526c8;
        }
        plVar6 = *(long **)(unaff_x29 + -0x18);
        if (plVar6 == (long *)0x0) {
          if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_03f5280c;
        }
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_031c09d4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_031c09d4(lVar5);
        }
        lVar7 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              lVar5 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
              goto LAB_03f5256c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        lVar5 = FUN_031c0d08(plVar6,lVar5,0);
LAB_03f5256c:
        lVar5 = *(long *)(lVar5 + 8);
        *(void **)(unaff_x29 + -0x10) = unaff_x22;
        (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar6,unaff_x29 + -0x10);
        memcpy(unaff_x23,unaff_x22,unaff_x21);
        uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
        if (iVar10 != 0) {
          if ((uVar1 & 1) == 0) {
            FUN_031c09d4();
          }
          puVar4 = (undefined8 *)thunk_FUN_031e5890();
          plVar6 = (long *)*puVar4;
          memcpy(unaff_x22,unaff_x23,unaff_x21);
          if (plVar6 == (long *)0x0) {
            if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
          }
          else {
            uVar2 = iVar10 - 1;
            if (uVar2 < *(uint *)(plVar6 + 3)) {
              memcpy((void *)((long)plVar6 +
                             (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar2 + 0x20),unaff_x23,
                     unaff_x21);
              lVar5 = *(long *)(unaff_x19 + 0x20);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_031c09d4();
              }
              if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
                FUN_031c09d4();
              }
              if (uVar2 < *(uint *)(plVar6 + 3)) goto LAB_03f52678;
            }
            if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
          }
          goto LAB_03f5280c;
        }
        if ((uVar1 & 1) == 0) {
          FUN_031c09d4();
        }
        FUN_03188aa0();
LAB_03f52678:
        plVar6 = *(long **)(unaff_x29 + -0x18);
        iVar10 = iVar10 + 1;
      } while (plVar6 != (long *)0x0);
    }
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  goto LAB_03f5280c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03f526c8:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03f526fc;
    }
  }
LAB_03f526e0:
  puVar4 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_070c2e88,0);
LAB_03f526fc:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
LAB_03f52708:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_03f5280c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


