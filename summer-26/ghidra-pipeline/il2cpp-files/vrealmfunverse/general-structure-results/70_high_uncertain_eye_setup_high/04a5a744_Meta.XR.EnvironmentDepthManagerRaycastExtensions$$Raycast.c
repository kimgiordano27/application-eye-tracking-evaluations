/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$Raycast
ENTRY_POINT: 04a5a744
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a5a5d8) */

ulong Meta_XR_EnvironmentDepthManagerRaycastExtensions__Raycast(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if (param_2 == 1) {
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar6 = *plVar2;
    *(long *)(unaff_x29 + -0x20) = lVar6;
    __cxa_end_catch();
    plVar2 = (long *)**(undefined8 **)(unaff_x29 + -0x18);
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04a5a5b4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)PTR_DAT_06312f78,0);
LAB_04a5a5b4:
      (*(code *)*puVar1)(plVar2,puVar1[1]);
    }
    if (lVar6 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return unaff_x25 & 0xffffffff | unaff_x24 << 0x20;
      }
    }
    else if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc(lVar6);
    }
  }
  else {
    FUN_02759724(unaff_x29 + -0x20);
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c2be1c(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


