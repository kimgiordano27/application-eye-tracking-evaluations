/*
FUNCTION_NAME: UniGLTF.BuiltInGltfMaterialExporter$$ExportMaterial
ENTRY_POINT: 02f84558
PROGRAM: vrlegs-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f84a60) */
/* WARNING: Removing unreachable block (ram,0x02f8494c) */
/* WARNING: Removing unreachable block (ram,0x02f849e0) */
/* WARNING: Removing unreachable block (ram,0x02f84a7c) */

long * UniGLTF_BuiltInGltfMaterialExporter__ExportMaterial
                 (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  long in_x9;
  ulong uVar16;
  int *piVar17;
  undefined4 unaff_w21;
  int iVar18;
  long *plVar19;
  long *plVar20;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  plVar7 = (long *)(**(code **)(param_1 + 0x198))(param_2,*(undefined8 *)(param_1 + 0x1a0));
  lVar14 = *(long *)PTR_DAT_03d254e0;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)thunk_FUN_01a89e68(lVar14);
    FUN_02f8423c(plVar7,unaff_w21);
    uVar8 = thunk_FUN_01a89e68(*unaff_x24);
    FUN_027ce35c(uVar8,plVar7,0);
    lVar14 = *unaff_x26;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar14 = *unaff_x26;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02210dd4(lVar14,uVar8,*(undefined8 *)PTR_DAT_03d254d8);
    plVar19 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 0x38);
    uStack000000000000000c = unaff_w21;
    uVar9 = thunk_FUN_01a89a98(*unaff_x27,(long)&stack0x00000008 + 4);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar9,uVar9);
    }
    (**(code **)(*plVar19 + 0x318))(plVar19,uVar9,uVar8,*(undefined8 *)(*plVar19 + 800));
    uVar1 = *(int *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) + 1;
    *(uint *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) = uVar1;
    if ((uVar1 & 0x1f) == 0) {
      lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
      Animancer_AnimancerState__OnSetIsPlaying(lVar14,*(undefined8 *)PTR_DAT_03cbe510);
      lVar10 = *unaff_x26;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar10 = *unaff_x26;
      }
      plVar19 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x328))(plVar19,*(undefined8 *)(*plVar19 + 0x330));
      puVar6 = PTR_DAT_03cdb5d0;
      puVar5 = PTR_DAT_03cbed20;
      puVar3 = PTR_DAT_03cbe508;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar15 = *plVar19;
        lVar10 = *(long *)puVar5;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar10) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02f847ac;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(plVar19,lVar10,0);
LAB_02f847ac:
        uVar16 = (*(code *)*puVar11)(plVar19,puVar11[1]);
        puVar4 = PTR_DAT_03cbed08;
        if ((uVar16 & 1) == 0) {
          plVar19 = (long *)thunk_FUN_01a89d6c(plVar19,*(undefined8 *)PTR_DAT_03cbed08);
          if (plVar19 == (long *)0x0) goto LAB_02f84940;
          lVar10 = *plVar19;
          uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar16 == 0) goto LAB_02f84918;
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_02f84900;
        }
        lVar15 = *plVar19;
        lVar10 = *(long *)puVar5;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar10) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_02f8480c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(plVar19,lVar10,1);
LAB_02f8480c:
        plVar12 = (long *)(*(code *)*puVar11)(plVar19,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        puVar11 = (undefined8 *)thunk_FUN_01a89fbc();
        plVar12 = (long *)puVar11[1];
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar10 = *plVar12;
        bVar2 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        plVar20 = (long *)*puVar11;
        lVar10 = (**(code **)(lVar10 + 0x198))(plVar12,*(undefined8 *)(lVar10 + 0x1a0));
        if (lVar10 == 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(*plVar20 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar20);
          }
          puVar13 = (undefined4 *)thunk_FUN_01a89fbc(plVar20);
          uStack000000000000000c = *puVar13;
          FUN_01b5f01c(lVar14,(long)&stack0x00000008 + 4,*(undefined8 *)puVar3);
        }
      } while( true );
    }
  }
  else if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
          (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
          )) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(plVar7);
  }
  goto LAB_02f846a4;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_02f84900:
    if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02f84934;
    }
  }
LAB_02f84918:
  puVar11 = (undefined8 *)FUN_01a472ec(plVar19,*(long *)puVar4,0);
LAB_02f84934:
  (*(code *)*puVar11)(plVar19,puVar11[1]);
LAB_02f84940:
  puVar3 = PTR_DAT_03cbe590;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < *(int *)(lVar14 + 0x18)) {
    iVar18 = 0;
    do {
      lVar10 = *unaff_x26;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar10 = *unaff_x26;
      }
      plVar19 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
      FUN_02215a88(lVar14,iVar18,&stack0x00000008,*(undefined8 *)puVar3);
      uVar8 = thunk_FUN_01a89a98(*unaff_x27,&stack0x00000008);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar8,uVar8);
      }
      (**(code **)(*plVar19 + 0x3a8))(plVar19,uVar8,*(undefined8 *)(*plVar19 + 0x3b0));
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(lVar14 + 0x18));
  }
LAB_02f846a4:
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return plVar7;
}


