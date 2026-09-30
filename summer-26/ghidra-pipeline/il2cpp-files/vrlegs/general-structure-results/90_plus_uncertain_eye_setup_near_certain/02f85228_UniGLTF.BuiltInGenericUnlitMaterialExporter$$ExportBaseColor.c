/*
FUNCTION_NAME: UniGLTF.BuiltInGenericUnlitMaterialExporter$$ExportBaseColor
ENTRY_POINT: 02f85228
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f84fb4) */
/* WARNING: Removing unreachable block (ram,0x02f85460) */
/* WARNING: Removing unreachable block (ram,0x02f85308) */

void UniGLTF_BuiltInGenericUnlitMaterialExporter__ExportBaseColor(ulong param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  int iVar11;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char cStack0000000000000020;
  char cStack0000000000000024;
  long *in_stack_00000028;
  
  while ((param_1 & 1) != 0) {
    lVar8 = *unaff_x24;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *unaff_x24;
    }
    iVar4 = thunk_FUN_01aa519c(*(long *)(lVar8 + 0xb8) + 0x10,1,0,0);
    if (iVar4 != 0) break;
    do {
      lVar8 = *unaff_x24;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar8);
        lVar8 = *unaff_x24;
      }
      lVar9 = *(long *)(lVar8 + 0xb8);
      if (*(long *)(lVar9 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < *(int *)(*(long *)(lVar9 + 8) + 0x18)) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar8);
          lVar9 = *(long *)(*unaff_x24 + 0xb8);
        }
        uVar10 = *(undefined8 *)(lVar9 + 8);
        cStack0000000000000020 = '\0';
        FUN_027e0bd8(uVar10,&stack0x00000020,0);
        lVar8 = *unaff_x24;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *unaff_x24;
        }
        lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        while (lVar9 = *(long *)(lVar9 + 0x10), lVar9 != 0) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar8 = *unaff_x24;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02211adc(lVar8,lVar9,*unaff_x20);
          if (**(long **)(*unaff_x24 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02210f18(**(long **)(*unaff_x24 + 0xb8),lVar9,*unaff_x25);
          lVar8 = *unaff_x24;
          lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
        }
        if (cStack0000000000000020 != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
        }
      }
      iVar4 = thunk_FUN_01a4a380(0);
      lVar8 = *unaff_x24;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *unaff_x24;
      }
      if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar2 = false;
      iVar11 = 0;
      lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x10);
      while (lVar8 != 0) {
        FUN_01ea4674(lVar8,&stack0x00000028,*unaff_x27);
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar5 = (long *)(**(code **)(*in_stack_00000028 + 0x198))
                                   (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1a0));
        if (plVar5 == (long *)0x0) {
          lVar9 = FUN_0220fecc(lVar8,*unaff_x29);
          lVar6 = *unaff_x24;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = *unaff_x24;
          }
          if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02211adc(**(long **)(lVar6 + 0xb8),lVar8,*unaff_x20);
          lVar8 = lVar9;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_03d254e0 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_03d254e0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0();
          }
          uVar7 = FUN_02f85510(plVar5,(long)&stack0x00000018 + 4);
          iVar3 = in_stack_00000018._4_4_;
          if ((uVar7 & 1) != 0) {
            if (bVar2) {
              if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (iVar4 <= iVar11 == (iVar3 < iVar4 != iVar11 <= iVar3)) {
                bVar2 = true;
                goto LAB_02f850ec;
              }
            }
            bVar2 = true;
            iVar11 = iVar3;
          }
LAB_02f850ec:
          lVar8 = FUN_0220fecc(lVar8,*unaff_x29);
        }
      }
      iVar3 = thunk_FUN_01a4a380(0);
      if (bVar2) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (iVar4 <= iVar11 == (iVar3 < iVar4 != (iVar11 - iVar3 == 0 || iVar11 < iVar3))) {
          iVar4 = 0;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar4 = FUN_0276c26c(iVar11 - iVar3,0x7ffffff0,0);
          iVar4 = iVar4 + 0xf;
        }
      }
      else {
        iVar4 = 30000;
      }
      lVar8 = *unaff_x24;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *unaff_x24;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x28);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*unaff_x26);
      }
      iVar4 = FUN_027e6630(uVar10,iVar4,0,0);
      if (iVar4 == 0) goto LAB_02f853fc;
    } while (bVar2 || iVar4 != 0x102);
    lVar8 = *unaff_x24;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *unaff_x24;
    }
    thunk_FUN_01aa519c(*(long *)(lVar8 + 0xb8) + 0x10,0,1,0);
    plVar5 = *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    param_1 = (**(code **)(*plVar5 + 0x1b8))(plVar5,0,0,*(undefined8 *)(*plVar5 + 0x1c0));
  }
LAB_02f853fc:
  if (cStack0000000000000024 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  return;
}


