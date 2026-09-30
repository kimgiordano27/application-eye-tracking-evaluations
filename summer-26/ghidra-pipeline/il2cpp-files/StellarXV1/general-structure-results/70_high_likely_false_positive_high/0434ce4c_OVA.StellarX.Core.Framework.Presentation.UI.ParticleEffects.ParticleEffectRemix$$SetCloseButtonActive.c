/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.UI.ParticleEffects.ParticleEffectRemix$$SetCloseButtonActive
ENTRY_POINT: 0434ce4c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0434d028) */

undefined1  [16]
OVA_StellarX_Core_Framework_Presentation_UI_ParticleEffects_ParticleEffectRemix__SetCloseButtonActive
          (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long *unaff_x19;
  long *unaff_x22;
  long *in_stack_00000028;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_040b1e00();
      goto 
      OVA_StellarX_Core_Framework_Presentation_UI_ParticleEffects_ParticleEffectRemix__PlacePanelTopAndBottomCurves
      ;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
                    /* try { // try from 0434ce74 to 0444ceaf has its CatchHandler @ 0434cb6c */
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);

  OVA_StellarX_Core_Framework_Presentation_UI_ParticleEffects_ParticleEffectRemix__PlacePanelTopAndBottomCurves
  :
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0928fac8 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0928fac8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar3);
    }
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0434cf18;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0434cf18:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_09292400 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09292400)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar3);
    }
  }
  FUN_068bb688();
  if (in_stack_00000028 != (long *)0x0) {
    lVar4 = *in_stack_00000028;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0434cfe8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000028,*(long *)PTR_DAT_092860c0,0);
LAB_0434cfe8:
    (*(code *)*puVar2)(in_stack_00000028,puVar2[1]);
  }
  return ZEXT816(0);
}


