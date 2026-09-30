/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.Qpl.Annotation.Builder.Entry>$$.ctor
ENTRY_POINT: 05eede64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05eee0c4) */

int System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Qpl_Annotation_Builder_Entry>___ctor
              (void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long *plVar7;
  long unaff_x20;
  int iVar8;
  long unaff_x21;
  int iStack000000000000000c;
  
  FUN_03d2d2b0(PTR_DAT_091a14e0);
  FUN_03d2d2b0(PTR_DAT_091a1508);
  *(undefined1 *)(unaff_x21 + 0x958) = 1;
  iStack000000000000000c = 0;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar2 = System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__IndexOf
                    ();
  if ((uVar2 & 1) != 0) {
    return iStack000000000000000c;
  }
  iStack000000000000000c = 0;
  plVar7 = (long *)*unaff_x19;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c(lVar3);
  }
  lVar5 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05eedf38;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370(plVar7,lVar3,0);
LAB_05eedf38:
  plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  puVar1 = PTR_DAT_091a1508;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar8 = 0;
  do {
    lVar3 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05eedfa4;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar1,0);
LAB_05eedfa4:
    uVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if ((uVar2 & 1) == 0) break;
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c(lVar3);
    }
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05eee028;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar7,lVar3,0);
LAB_05eee028:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
    iVar8 = iVar8 + 1;
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05eee098;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091a14e0,0);
LAB_05eee098:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  return iVar8;
}


