/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ToggleMenu
ENTRY_POINT: 06deefac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06def3a8) */

undefined8 Meta_XR_MRUtilityKit_SceneDebugger__ToggleMenu(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  undefined8 unaff_x22;
  undefined8 uVar14;
  int iVar15;
  undefined8 in_stack_00000018;
  
  FUN_0716f8f0();
  if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar4 = FUN_06a4e574();
  if ((uVar4 & 1) == 0) {
    plVar5 = (long *)0x0;
    iVar15 = 4;
  }
  else {
    if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar5 = (long *)FUN_06a4e300();
    if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4f87c();
    lVar6 = *(long *)(unaff_x19 + 0x70);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar10 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
      *puVar11 = unaff_x22;
      thunk_FUN_03d233cc(puVar11);
    }
    else {
      FUN_05212cf4();
    }
    iVar15 = 5;
  }
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_03cdf404();
  }
  puVar3 = PTR_DAT_08e91328;
  if ((iVar15 != 5) && (iVar15 != 0)) {
    return 0;
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e91328) {
          puVar11 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
          goto LAB_06def124;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e91328,0x15);
LAB_06def124:
    uVar7 = (*(code *)*puVar11)(plVar5,puVar11[1]);
    puVar2 = PTR_DAT_08e912a8;
    uVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e912a8);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              ();
    lVar6 = FUN_07148944(uVar7,uVar8,0);
    lVar10 = *(long *)puVar3;
    if (lVar6 == 0) {
      lVar9 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_03cf5138(lVar6,uVar7);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar6,uVar7);
      }
    }
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar11 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
          goto LAB_06def1f4;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar5,lVar10,0x16);
LAB_06def1f4:
    (*(code *)*puVar11)(plVar5,lVar9,puVar11[1]);
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
          goto LAB_06def254;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,0xc);
LAB_06def254:
    uVar4 = (*(code *)*puVar11)(plVar5,puVar11[1]);
    if ((uVar4 & 1) == 0) {
      lVar6 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
            goto LAB_06def2b4;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar11 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,0x10);
LAB_06def2b4:
      (*(code *)*puVar11)(plVar5,puVar11[1]);
    }
    plVar13 = *(long **)(unaff_x19 + 0x60);
    uVar7 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e91e98,plVar5,0);
    if (plVar13 != (long *)0x0) {
      lVar6 = *plVar13;
      uVar8 = *(undefined8 *)PTR_DAT_08e91e90;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      uVar14 = *(undefined8 *)PTR_DAT_08e91cf0;
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e82378) {
            puVar11 = (undefined8 *)(lVar6 + (long)(*piVar12 + 7) * 0x10 + 0x138);
            goto LAB_06def354;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar11 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e82378,7);
LAB_06def354:
      (*(code *)*puVar11)(plVar13,uVar7,0,0,0,0,uVar8,uVar14);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


