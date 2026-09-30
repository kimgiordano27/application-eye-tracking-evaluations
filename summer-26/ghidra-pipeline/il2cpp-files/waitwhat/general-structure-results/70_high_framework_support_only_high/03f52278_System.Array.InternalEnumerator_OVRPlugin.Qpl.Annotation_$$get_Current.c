/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 03f52278
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f5278c) */
/* WARNING: Removing unreachable block (ram,0x03f5279c) */

void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__get_Current(undefined8 param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong in_x9;
  ulong uVar11;
  long in_x10;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  code *pcVar12;
  undefined8 uVar13;
  int iVar14;
  long unaff_x27;
  long unaff_x29;
  
  pcVar12 = (code *)**(undefined8 **)(in_x10 + 0x20);
  if ((in_x9 & 1) == 0) {
    FUN_031c09d4(param_1);
  }
  uVar4 = (*pcVar12)();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_031c09d4(lVar9);
  }
  FUN_03188a98(*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),4);
  puVar5 = (undefined4 *)thunk_FUN_031e5890();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  *puVar5 = uVar4;
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  piVar6 = (int *)thunk_FUN_031e5890();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  if (*piVar6 < 2) {
    uVar13 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      FUN_031c09d4(lVar9);
    }
                    /* try { // try from 03f52348 to 0405247b has its CatchHandler @ 03f52348
                       catch() { ... } // from try @ 03f52348 with catch @ 03f52348
                       catch() { ... } // from try @ 03f52550 with catch @ 03f52348
                       catch() { ... } // from try @ 03f525f4 with catch @ 03f52348
                       catch() { ... } // from try @ 03f52680 with catch @ 03f52348 */
    piVar6 = (int *)thunk_FUN_031e5890();
    lVar9 = *(long *)(unaff_x19 + 0x20);
    iVar14 = *piVar6;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4();
    }
    uVar13 = FUN_03188b1c(lVar9,iVar14 + -1);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_031c09d4(lVar9);
  }
  FUN_03188a98(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x40,8);
  puVar7 = (undefined8 *)thunk_FUN_031e5890();
  *puVar7 = uVar13;
  if (unaff_x24 == (long *)0x0) {
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
    }
    lVar10 = *unaff_x24;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar6 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03f52460;
        }
        uVar11 = uVar11 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_031c0d08();
LAB_03f52460:
    plVar8 = (long *)(*(code *)*puVar7)();
    *(long **)(unaff_x29 + -0x18) = plVar8;
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x18;
    puVar3 = PTR_DAT_070c7c80;
    if (plVar8 != (long *)0x0) {
      iVar14 = 0;
      do {
        lVar9 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03f524d8;
            }
            uVar11 = uVar11 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar3,0);
LAB_03f524d8:
        uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          plVar8 = *(long **)(unaff_x29 + -0x18);
          if (plVar8 == (long *)0x0) goto LAB_03f52708;
          lVar9 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_03f526e0;
          piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03f526c8;
        }
        plVar8 = *(long **)(unaff_x29 + -0x18);
        if (plVar8 == (long *)0x0) {
          if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_03f5280c;
        }
        lVar9 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_031c09d4();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_031c09d4(lVar9);
        }
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar6 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar9) {
              lVar9 = lVar10 + (long)*piVar6 * 0x10 + 0x138;
              goto LAB_03f5256c;
            }
            uVar11 = uVar11 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar11 != 0);
        }
        lVar9 = FUN_031c0d08(plVar8,lVar9,0);
LAB_03f5256c:
        lVar9 = *(long *)(lVar9 + 8);
        *(void **)(unaff_x29 + -0x10) = unaff_x22;
        (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar8,unaff_x29 + -0x10);
        memcpy(unaff_x23,unaff_x22,unaff_x21);
        uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
        if (iVar14 != 0) {
          if ((uVar1 & 1) == 0) {
            FUN_031c09d4();
          }
          puVar7 = (undefined8 *)thunk_FUN_031e5890();
          plVar8 = (long *)*puVar7;
          memcpy(unaff_x22,unaff_x23,unaff_x21);
          if (plVar8 == (long *)0x0) {
            if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
          }
          else {
            uVar2 = iVar14 - 1;
            if (uVar2 < *(uint *)(plVar8 + 3)) {
              memcpy((void *)((long)plVar8 +
                             (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar2 + 0x20),unaff_x23,
                     unaff_x21);
              lVar9 = *(long *)(unaff_x19 + 0x20);
              if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_031c09d4();
              }
              if ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
                FUN_031c09d4();
              }
              if (uVar2 < *(uint *)(plVar8 + 3)) goto LAB_03f52678;
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
        plVar8 = *(long **)(unaff_x29 + -0x18);
        iVar14 = iVar14 + 1;
      } while (plVar8 != (long *)0x0);
    }
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  goto LAB_03f5280c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar6 = piVar6 + 4;
    if (uVar11 == 0) break;
LAB_03f526c8:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03f526fc;
    }
  }
LAB_03f526e0:
  puVar7 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)PTR_DAT_070c2e88,0);
LAB_03f526fc:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_03f52708:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_03f5280c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


