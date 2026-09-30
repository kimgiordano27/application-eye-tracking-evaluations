/*
FUNCTION_NAME: UniGLTF.GltfMaterialExportUtils$$ExportTextureTransform
ENTRY_POINT: 02f84f68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f84fb4) */
/* WARNING: Removing unreachable block (ram,0x02f85460) */
/* WARNING: Removing unreachable block (ram,0x02f85308) */

void UniGLTF_GltfMaterialExportUtils__ExportTextureTransform(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
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
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02210f18(param_1,unaff_x22,*unaff_x25);
    lVar5 = *unaff_x24;
    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    while (unaff_x22 = *(long *)(lVar9 + 0x10), unaff_x22 == 0) {
      if (cStack0000000000000020 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x21,0);
      }
      do {
        iVar3 = thunk_FUN_01a4a380(0);
        lVar5 = *unaff_x24;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *unaff_x24;
        }
        if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar2 = false;
        iVar11 = 0;
        lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x10);
        while (lVar5 != 0) {
          FUN_01ea4674(lVar5,&stack0x00000028,*unaff_x27);
          if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar6 = (long *)(**(code **)(*in_stack_00000028 + 0x198))
                                     (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1a0))
          ;
          if (plVar6 == (long *)0x0) {
            lVar9 = FUN_0220fecc(lVar5,*unaff_x29);
            lVar7 = *unaff_x24;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar7 = *unaff_x24;
            }
            if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_02211adc(**(long **)(lVar7 + 0xb8),lVar5,*unaff_x20);
            lVar5 = lVar9;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03d254e0 + 0x130);
            if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03d254e0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0();
            }
            uVar8 = FUN_02f85510(plVar6,(long)&stack0x00000018 + 4);
            iVar4 = in_stack_00000018._4_4_;
            if ((uVar8 & 1) != 0) {
              if (bVar2) {
                if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (iVar3 <= iVar11 == (iVar4 < iVar3 != iVar11 <= iVar4)) {
                  bVar2 = true;
                  goto LAB_02f850ec;
                }
              }
              bVar2 = true;
              iVar11 = iVar4;
            }
LAB_02f850ec:
            lVar5 = FUN_0220fecc(lVar5,*unaff_x29);
          }
        }
        iVar4 = thunk_FUN_01a4a380(0);
        if (bVar2) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (iVar3 <= iVar11 == (iVar4 < iVar3 != (iVar11 - iVar4 == 0 || iVar11 < iVar4))) {
            iVar3 = 0;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iVar3 = FUN_0276c26c(iVar11 - iVar4,0x7ffffff0,0);
            iVar3 = iVar3 + 0xf;
          }
        }
        else {
          iVar3 = 30000;
        }
        lVar5 = *unaff_x24;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *unaff_x24;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x26);
        }
        iVar3 = FUN_027e6630(uVar10,iVar3,0,0);
        if (iVar3 == 0) goto LAB_02f853fc;
        if (!bVar2 && iVar3 == 0x102) {
          lVar5 = *unaff_x24;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar5 = *unaff_x24;
          }
          thunk_FUN_01aa519c(*(long *)(lVar5 + 0xb8) + 0x10,0,1,0);
          plVar6 = *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar8 = (**(code **)(*plVar6 + 0x1b8))(plVar6,0,0,*(undefined8 *)(*plVar6 + 0x1c0));
          if ((uVar8 & 1) == 0) {
LAB_02f853fc:
            if (cStack0000000000000024 != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
            }
            return;
          }
          lVar5 = *unaff_x24;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar5 = *unaff_x24;
          }
          iVar3 = thunk_FUN_01aa519c(*(long *)(lVar5 + 0xb8) + 0x10,1,0,0);
          if (iVar3 != 0) goto LAB_02f853fc;
        }
        lVar5 = *unaff_x24;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar5);
          lVar5 = *unaff_x24;
        }
        lVar9 = *(long *)(lVar5 + 0xb8);
        if (*(long *)(lVar9 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      } while (*(int *)(*(long *)(lVar9 + 8) + 0x18) < 1);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar5);
        lVar9 = *(long *)(*unaff_x24 + 0xb8);
      }
      unaff_x21 = *(undefined8 *)(lVar9 + 8);
      cStack0000000000000020 = '\0';
      FUN_027e0bd8(unaff_x21,&stack0x00000020,0);
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *unaff_x24;
      }
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *unaff_x24;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211adc(lVar5,unaff_x22,*unaff_x20);
    param_1 = **(long **)(*unaff_x24 + 0xb8);
  } while( true );
}


