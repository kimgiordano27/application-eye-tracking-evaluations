/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05187590
PROGRAM: hellodot-libil2cpp.so
SCORE: 156
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8
Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingSupported(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  long in_stack_00000018;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 200));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608048);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
  *(undefined1 *)(unaff_x19 + 0x16f) = 1;
  puVar1 = PTR_DAT_065c8d08;
  if (*(int *)(unaff_x20 + 0x10) == 1) {
    plVar7 = *(long **)(unaff_x20 + 0x40);
    *(undefined4 *)(unaff_x20 + 0x10) = 0xfffffffc;
    goto LAB_051877fc;
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
  if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar7 = *(long **)(lVar3 + 0x40);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06608040) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto FUN_0518765c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_06608040,0);
FUN_0518765c:
  plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
  *(long **)(in_stack_00000018 + 0x38) = plVar7;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *plVar7;
    lVar3 = *(long *)puVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_051876f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,lVar3,0);
LAB_051876f4:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      FUN_05187a58();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      return 0;
    }
    plVar7 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06608048) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05187768;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_06608048,0);
LAB_05187768:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar7 = (long *)FUN_0517f5d0(lVar3,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_066080c0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_051877dc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_066080c0,0);
LAB_051877dc:
    plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
    *(long **)(in_stack_00000018 + 0x40) = plVar7;
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
LAB_051877fc:
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *plVar7;
    lVar3 = *(long *)puVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0518784c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,lVar3,0);
LAB_0518784c:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) != 0) {
      plVar7 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_051878cc;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    FUN_051879a8();
    plVar7 = *(long **)(in_stack_00000018 + 0x38);
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_066080c8) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_051878e8;
    }
  }
LAB_051878cc:
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_066080c8,0);
LAB_051878e8:
  auVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar8;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


