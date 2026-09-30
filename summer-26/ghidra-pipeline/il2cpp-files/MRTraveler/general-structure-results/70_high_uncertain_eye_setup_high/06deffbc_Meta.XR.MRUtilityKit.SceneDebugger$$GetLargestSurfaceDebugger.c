/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetLargestSurfaceDebugger
ENTRY_POINT: 06deffbc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06df0190) */
/* WARNING: Removing unreachable block (ram,0x06df05f4) */

void Meta_XR_MRUtilityKit_SceneDebugger__GetLargestSurfaceDebugger(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 in_stack_00000010;
  char cStack000000000000001c;
  
  if ((DAT_09419e24 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e91b98);
    FUN_03c8f898(PTR_DAT_08e6eab8);
    FUN_03c8f898(PTR_DAT_08e91b88);
    FUN_03c8f898(PTR_DAT_08e69e98);
    FUN_03c8f898(PTR_DAT_08e91ee8);
    FUN_03c8f898(PTR_DAT_08e69550);
    FUN_03c8f898(PTR_DAT_08e91ef0);
    FUN_03c8f898(PTR_DAT_08e91ef8);
    FUN_03c8f898(PTR_DAT_08e8d020);
    FUN_03c8f898(PTR_DAT_08e91d38);
    FUN_03c8f898(PTR_DAT_08e69a80);
    FUN_03c8f898(PTR_DAT_08e91f00);
    FUN_03c8f898(PTR_DAT_08e91f08);
    FUN_03c8f898(PTR_DAT_08e91f10);
    FUN_03c8f898(PTR_DAT_08e91f18);
    DAT_09419e24 = 1;
  }
  puVar3 = PTR_DAT_08e69550;
  cStack000000000000001c = '\0';
  in_stack_00000010 = 0;
  iVar2 = *param_1;
  lVar11 = *(long *)(param_1 + 8);
  if (iVar2 == 0) {
    in_stack_00000010 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(undefined1 *)(lVar11 + 0x24) = 0;
    if (*(long *)(lVar11 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = FUN_06a4e060(*(long *)(lVar11 + 0x68),*(undefined8 *)PTR_DAT_08e91ef0);
    puVar4 = PTR_DAT_08e8d020;
    lVar7 = FUN_046337ac(uVar6,*(undefined8 *)PTR_DAT_08e8d020);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar13 = 0;
      uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_06deeee0(lVar11,*(undefined8 *)(lVar7 + 0x20 + uVar13 * 8));
        uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    uVar6 = *(undefined8 *)(lVar11 + 0x68);
    cStack000000000000001c = '\0';
    FUN_0716f8f0(uVar6,&stack0x0000001c,0);
    lVar7 = *(long *)(lVar11 + 0x70);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_071245a8(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
    if ((iVar2 < 0) && (cStack000000000000001c != '\0')) {
      thunk_FUN_03cdf404(uVar6,0);
    }
    if (*(long *)(lVar11 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = FUN_06a4e060(*(long *)(lVar11 + 0x88),*(undefined8 *)PTR_DAT_08e91ef8);
    lVar7 = FUN_046337ac(uVar6,*(undefined8 *)puVar4);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar13 = 0;
      uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar6 = *(undefined8 *)(lVar7 + 0x20 + uVar13 * 8);
        uVar5 = FUN_06deec30(lVar11,uVar6);
        if ((uVar5 < 5) && ((1 << (ulong)(uVar5 & 0x1f) & 0x16U) != 0)) {
          FUN_06def6e4(lVar11,uVar6,1);
        }
        else {
          FUN_06defc38(lVar11,uVar6,1);
        }
        uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    plVar12 = *(long **)(lVar11 + 0x78);
    if (plVar12 == (long *)0x0) goto LAB_06df0550;
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e69e98);
    FUN_07064478(uVar6,lVar11,*(undefined8 *)PTR_DAT_08e91f00,0);
    puVar4 = PTR_DAT_08e91d38;
    lVar7 = *plVar12;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e91d38) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_06df02e0;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e91d38,2);
LAB_06df02e0:
    (*(code *)*puVar8)(plVar12,uVar6,puVar8[1]);
    plVar12 = *(long **)(lVar11 + 0x78);
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e91b88);
    FUN_04f12e94(uVar6,lVar11,*(undefined8 *)PTR_DAT_08e91f18,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar12;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_06df0374;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)puVar4,4);
LAB_06df0374:
    (*(code *)*puVar8)(plVar12,uVar6,puVar8[1]);
    plVar12 = *(long **)(lVar11 + 0x78);
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6eab8);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              (uVar6,lVar11,*(undefined8 *)PTR_DAT_08e91f10,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar12;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_06df0408;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)puVar4,6);
LAB_06df0408:
    (*(code *)*puVar8)(plVar12,uVar6,puVar8[1]);
    plVar12 = *(long **)(lVar11 + 0x78);
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e91b98);
    FUN_04cee708(uVar6,lVar11,*(undefined8 *)PTR_DAT_08e91f08,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar12;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_06df049c;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)puVar4,8);
LAB_06df049c:
    (*(code *)*puVar8)(plVar12,uVar6,puVar8[1]);
    plVar12 = *(long **)(lVar11 + 0x78);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar12;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_06df0504;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)puVar4,0xb);
LAB_06df0504:
    lVar7 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000010 = FUN_071787d8(lVar7,0);
    uVar13 = FUN_0701d1d0(&stack0x00000010,0);
    if ((uVar13 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = in_stack_00000010;
      thunk_FUN_03d233cc(param_1 + 10,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_045275c8(param_1 + 2,&stack0x00000010,param_1,*(undefined8 *)PTR_DAT_08e91ee8);
      return;
    }
  }
  FUN_0701d29c(&stack0x00000010,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  *(undefined8 *)(lVar11 + 0x78) = 0;
  thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x78),0);
LAB_06df0550:
  *(undefined8 *)(lVar11 + 0x58) = 0;
  *param_1 = -2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701e078(param_1 + 2,0);
  return;
}


