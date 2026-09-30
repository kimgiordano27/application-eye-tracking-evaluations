/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 0518763c
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_7;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 Meta_XR_MetaXREyeTrackedFoveationFeature___ctor(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  undefined1 auVar6 [16];
  long in_stack_00000018;
  
  plVar1 = (long *)(*(code *)*param_1)();
  *(long **)(in_stack_00000018 + 0x38) = plVar1;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  do {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_051876f4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*unaff_x21,0);
LAB_051876f4:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar4 & 1) == 0) {
      FUN_05187a58();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      return 0;
    }
    plVar1 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06608048) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05187768;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*(long *)PTR_DAT_06608048,0);
LAB_05187768:
    lVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar1 = (long *)FUN_0517f5d0(lVar3,0);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_066080c0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_051877dc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*(long *)PTR_DAT_066080c0,0);
LAB_051877dc:
    plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    *(long **)(in_stack_00000018 + 0x40) = plVar1;
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0518784c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*unaff_x21,0);
LAB_0518784c:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar4 & 1) != 0) {
      plVar1 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_051878cc;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    FUN_051879a8();
    plVar1 = *(long **)(in_stack_00000018 + 0x38);
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_066080c8) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_051878e8;
    }
  }
LAB_051878cc:
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*(long *)PTR_DAT_066080c8,0);
LAB_051878e8:
  auVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar6;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


