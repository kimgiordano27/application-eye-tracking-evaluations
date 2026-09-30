/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 0906c824
PROGRAM: Hyper-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long in_x10;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == **(long **)(in_x10 + 0xfe0)) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0906c870;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_0906c870:
  uVar5 = (*(code *)*puVar2)();
  if ((uVar5 & 1) == 0) {
    puVar4 = (undefined4 *)(unaff_x19 + 0x50);
    puVar6 = (undefined4 *)(unaff_x19 + 0x54);
    puVar8 = (undefined4 *)(unaff_x19 + 0x58);
    puVar9 = (undefined4 *)(unaff_x19 + 0x5c);
  }
  else {
    puVar4 = (undefined4 *)(unaff_x19 + 0x40);
    puVar6 = (undefined4 *)(unaff_x19 + 0x44);
    puVar8 = (undefined4 *)(unaff_x19 + 0x48);
    puVar9 = (undefined4 *)(unaff_x19 + 0x4c);
  }
  if (unaff_x20 != (long *)0x0) {
    (**(code **)(*unaff_x20 + 0x2a8))(*puVar4,*puVar6,*puVar8,*puVar9);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar3 = FUN_0a178414(*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (iVar1 = FUN_0a18bd78(*(long *)(unaff_x19 + 0x20),0), lVar3 != 0)) {
        FUN_0a17ba14(lVar3,0 < iVar1,0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar3 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar3 != 0)) {
          FUN_0a17ba14(lVar3,*(char *)(unaff_x19 + 0x68) == '\0',0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


