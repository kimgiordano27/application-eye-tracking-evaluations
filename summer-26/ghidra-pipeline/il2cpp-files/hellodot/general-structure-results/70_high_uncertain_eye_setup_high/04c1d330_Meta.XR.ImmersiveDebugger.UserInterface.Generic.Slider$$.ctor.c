/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$.ctor
ENTRY_POINT: 04c1d330
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c1d3b4) */
/* WARNING: Removing unreachable block (ram,0x04c1d3fc) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider___ctor(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04c1d288;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1d288:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_04c1d3a0;
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_04c1d378;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04c1d2e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1d2e4:
    plVar2 = (long *)(*(code *)*puVar1)();
    lVar4 = FUN_04dc7f18();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar3,uVar3);
    }
    FUN_04dc7b08(lVar4,uVar3,0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04c1d394;
    }
  }
LAB_04c1d378:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1d394:
  (*(code *)*puVar1)();
LAB_04c1d3a0:
  FUN_04dc7b08();
  (**(code **)(*unaff_x19 + 0x168))();
  return;
}


