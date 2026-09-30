/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RaycastAll
ENTRY_POINT: 08a5aa14
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a5af08) */
/* WARNING: Removing unreachable block (ram,0x08a5aeec) */
/* WARNING: Removing unreachable block (ram,0x08a5aef4) */
/* WARNING: Removing unreachable block (ram,0x08a5aed8) */
/* WARNING: Removing unreachable block (ram,0x08a5aefc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 Meta_XR_MRUtilityKit_MRUKRoom__RaycastAll(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  
  lVar4 = FUN_08cd2c20();
  uVar5 = FUN_05b84718(lVar4,0x20,*unaff_x23);
  FUN_05b85828(uVar5,*unaff_x25);
  uVar5 = FUN_05b842d0(lVar4,0x20,*unaff_x21);
  uVar5 = FUN_05b84718(uVar5,0x20,*unaff_x23);
  uVar5 = FUN_05b85828(uVar5,*unaff_x25);
  uVar6 = FUN_05b842d0(lVar4,0x40,*unaff_x21);
  puVar2 = PTR_DAT_0ac539b8;
  puVar1 = PTR_DAT_0ac09b90;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar6 = FUN_05b84718(uVar6,*(int *)(lVar4 + 0x18) + -0x40,*unaff_x23);
  lVar4 = FUN_05b85828(uVar6,*unaff_x25);
  plVar7 = (long *)thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_08c041ac();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar6 = (**(code **)(*plVar7 + 0x188))(plVar7,0x20,*(undefined8 *)(*plVar7 + 400));
  plVar8 = (long *)thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac539c0);
  FUN_08c0eed8(plVar8,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*plVar8 + 0x1a8))(plVar8,0x100,*(undefined8 *)(*plVar8 + 0x1b0));
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*plVar8 + 0x248))(plVar8,1,*(undefined8 *)(*plVar8 + 0x250));
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*plVar8 + 0x268))(plVar8,2,*(undefined8 *)(*plVar8 + 0x270));
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  plVar9 = (long *)(**(code **)(*plVar8 + 0x2a8))
                             (plVar8,uVar6,uVar5,*(undefined8 *)(*plVar8 + 0x2b0));
  plVar10 = (long *)thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac107c8);
  FUN_08d21c14(plVar10,lVar4,0);
  plVar11 = (long *)thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac46a68);
  FUN_08c04950(plVar11,plVar10,plVar9,0,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar4 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09740,*(undefined4 *)(lVar4 + 0x18));
  if ((lVar4 == 0) || (plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar3 = (**(code **)(*plVar11 + 0x368))
                    (plVar11,lVar4,0,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*plVar11 + 0x370)
                    );
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*plVar10 + 0x288))(plVar10,*(undefined8 *)(*plVar10 + 0x290));
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*plVar11 + 0x288))(plVar11,*(undefined8 *)(*plVar11 + 0x290));
  plVar12 = (long *)FUN_08bf7044(0);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar5 = (**(code **)(*plVar12 + 0x398))(plVar12,lVar4,0,uVar3,*(undefined8 *)(*plVar12 + 0x3a0));
  if (plVar11 != (long *)0x0) {
    lVar4 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar13 = (undefined8 *)(lVar4 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08a5acf0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar1,0);
LAB_08a5acf0:
    (*(code *)*puVar13)(plVar11,puVar13[1]);
  }
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar13 = (undefined8 *)(lVar4 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08a5ad58;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar10,*(long *)puVar1,0);
LAB_08a5ad58:
    (*(code *)*puVar13)(plVar10,puVar13[1]);
  }
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar13 = (undefined8 *)(lVar4 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08a5adc4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar9,*(long *)puVar1,0);
LAB_08a5adc4:
    (*(code *)*puVar13)(plVar9,puVar13[1]);
  }
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar13 = (undefined8 *)(lVar4 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08a5ae30;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar8,*(long *)puVar1,0);
LAB_08a5ae30:
    (*(code *)*puVar13)(plVar8,puVar13[1]);
  }
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar13 = (undefined8 *)(lVar4 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08a5ae9c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar7,*(long *)puVar1,0);
LAB_08a5ae9c:
    (*(code *)*puVar13)(plVar7,puVar13[1]);
  }
  return uVar5;
}


