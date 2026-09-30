/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$Decorate
ENTRY_POINT: 07757b7c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__Decorate(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w21;
  uint unaff_w23;
  undefined8 *unaff_x24;
  
  while (param_1 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x868))();
    if ((*(long *)(unaff_x19 + 0x98) == 0) ||
       (lVar2 = FUN_05badb74(*(long *)(unaff_x19 + 0x98),unaff_w21,*unaff_x24), lVar2 == 0)) break;
    unaff_w23 = unaff_w23 & uVar1;
    *(undefined1 *)(lVar2 + 0x40) = 0;
    do {
      lVar2 = *(long *)(unaff_x19 + 0x98);
      unaff_w21 = unaff_w21 + 1;
      if (lVar2 == 0) goto LAB_07757cb0;
      if (*(int *)(lVar2 + 0x18) <= unaff_w21) {
        plVar3 = (long *)FUN_07715da0();
        if (plVar3 == (long *)0x0) goto LAB_07757cb0;
        lVar2 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 == 0) goto LAB_07757c4c;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_07757c34;
      }
      lVar2 = FUN_05badb74(lVar2,unaff_w21,*unaff_x24);
      if (lVar2 == 0) goto LAB_07757cb0;
    } while (*(char *)(lVar2 + 0x40) == '\0');
    if ((*(long *)(unaff_x19 + 0x98) == 0) ||
       (lVar2 = FUN_05badb74(*(long *)(unaff_x19 + 0x98),unaff_w21,*unaff_x24), lVar2 == 0)) break;
    param_1 = *(long **)(lVar2 + 0x10);
  }
LAB_07757cb0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_07757c34:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f30ab8) {
      puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0x22) * 0x10 + 0x138);
      goto LAB_07757c6c;
    }
  }
LAB_07757c4c:
  puVar4 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f30ab8,0x22);
LAB_07757c6c:
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_07757cb0;
    FUN_0731b15c(*(long *)(unaff_x19 + 0x90),*(undefined8 *)PTR_DAT_09f32900);
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  return unaff_w23 & 1;
}


