/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDestroy
ENTRY_POINT: 08a274c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__OnDestroy(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar8;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x311) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar2 = *unaff_x21;
  }
  if (unaff_x19 != 0) {
    plVar8 = (long *)**(undefined8 **)(lVar2 + 0xb8);
    plVar3 = (long *)FUN_08dc6074();
    puVar1 = PTR_DAT_0ac52568;
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      uVar4 = FUN_08bcc3c0(*(undefined8 *)puVar1,uVar4,0);
      if (plVar8 != (long *)0x0) {
        lVar2 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac46ed8) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_08a275b0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a275b0:
        (*(code *)*puVar5)(plVar8,uVar4,puVar5[1]);
        if (*(long *)(unaff_x20 + 0x18) != 0) {
          FUN_0845c8d4();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


