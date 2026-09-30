/*
FUNCTION_NAME: UniGLTF.BuiltInGenericUnlitMaterialExporter$$ExportRenderingSettings
ENTRY_POINT: 02f85098
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
/* WARNING: Removing unreachable block (ram,0x02f85308) */
/* WARNING: Removing unreachable block (ram,0x02f85460) */

void UniGLTF_BuiltInGenericUnlitMaterialExporter__ExportRenderingSettings
               (long *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint unaff_w19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 uVar7;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  int unaff_w28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char cStack0000000000000020;
  char cStack0000000000000024;
  long *in_stack_00000028;
  
  do {
    uVar5 = FUN_02f85510(param_1,param_2);
    iVar2 = in_stack_00000018._4_4_;
    if ((uVar5 & 1) != 0) {
      if ((unaff_w19 & 1) != 0) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (unaff_w21 <= unaff_w28 == (iVar2 < unaff_w21 != unaff_w28 <= iVar2)) {
          unaff_w19 = 1;
          goto LAB_02f850ec;
        }
      }
      unaff_w19 = 1;
      unaff_w28 = iVar2;
    }
LAB_02f850ec:
    unaff_x22 = FUN_0220fecc(unaff_x22,*unaff_x29);
LAB_02f84ff0:
    while (unaff_x22 == 0) {
      iVar2 = thunk_FUN_01a4a380(0);
      if ((unaff_w19 & 1) == 0) {
        iVar2 = 30000;
      }
      else {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (unaff_w21 <= unaff_w28 ==
            (iVar2 < unaff_w21 != (unaff_w28 - iVar2 == 0 || unaff_w28 < iVar2))) {
          iVar2 = 0;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar2 = FUN_0276c26c(unaff_w28 - iVar2,0x7ffffff0,0);
          iVar2 = iVar2 + 0xf;
        }
      }
      lVar3 = *unaff_x24;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x24;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*unaff_x26);
      }
      iVar2 = FUN_027e6630(uVar7,iVar2,0,0);
      if (iVar2 == 0) goto LAB_02f853fc;
      if ((unaff_w19 & 1) == 0 && iVar2 == 0x102) {
        lVar3 = *unaff_x24;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar3 = *unaff_x24;
        }
        thunk_FUN_01aa519c(*(long *)(lVar3 + 0xb8) + 0x10,0,1,0);
        plVar6 = *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar5 = (**(code **)(*plVar6 + 0x1b8))(plVar6,0,0,*(undefined8 *)(*plVar6 + 0x1c0));
        if ((uVar5 & 1) == 0) {
LAB_02f853fc:
          if (cStack0000000000000024 != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
          }
          return;
        }
        lVar3 = *unaff_x24;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar3 = *unaff_x24;
        }
        iVar2 = thunk_FUN_01aa519c(*(long *)(lVar3 + 0xb8) + 0x10,1,0,0);
        if (iVar2 != 0) goto LAB_02f853fc;
      }
      lVar3 = *unaff_x24;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar3);
        lVar3 = *unaff_x24;
      }
      lVar4 = *(long *)(lVar3 + 0xb8);
      if (*(long *)(lVar4 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < *(int *)(*(long *)(lVar4 + 8) + 0x18)) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar3);
          lVar4 = *(long *)(*unaff_x24 + 0xb8);
        }
        uVar7 = *(undefined8 *)(lVar4 + 8);
        cStack0000000000000020 = '\0';
        FUN_027e0bd8(uVar7,&stack0x00000020,0);
        lVar3 = *unaff_x24;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar3 = *unaff_x24;
        }
        lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        while (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0) {
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar3 = *unaff_x24;
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02211adc(lVar3,lVar4,*unaff_x20);
          if (**(long **)(*unaff_x24 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02210f18(**(long **)(*unaff_x24 + 0xb8),lVar4,*unaff_x25);
          lVar3 = *unaff_x24;
          lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
        }
        if (cStack0000000000000020 != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
      }
      unaff_w21 = thunk_FUN_01a4a380(0);
      lVar3 = *unaff_x24;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x24;
      }
      if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      unaff_w19 = 0;
      unaff_w28 = 0;
      unaff_x22 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x10);
    }
    FUN_01ea4674(unaff_x22,&stack0x00000028,*unaff_x27);
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    param_1 = (long *)(**(code **)(*in_stack_00000028 + 0x198))
                                (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1a0));
    if (param_1 == (long *)0x0) {
      lVar3 = FUN_0220fecc(unaff_x22,*unaff_x29);
      lVar4 = *unaff_x24;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *unaff_x24;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02211adc(**(long **)(lVar4 + 0xb8),unaff_x22,*unaff_x20);
      unaff_x22 = lVar3;
      goto LAB_02f84ff0;
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d254e0 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d254e0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    param_2 = (long)&stack0x00000018 + 4;
  } while( true );
}


