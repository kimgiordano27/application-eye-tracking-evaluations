/*
FUNCTION_NAME: OVRObjectPool$$List<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03cced00
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ccee68) */
/* WARNING: Removing unreachable block (ram,0x03ccee7c) */
/* WARNING: Removing unreachable block (ram,0x03ccee88) */
/* WARNING: Removing unreachable block (ram,0x03ccee98) */
/* WARNING: Removing unreachable block (ram,0x03ccee9c) */
/* WARNING: Removing unreachable block (ram,0x03cceea4) */
/* WARNING: Removing unreachable block (ram,0x03cceea8) */
/* WARNING: Removing unreachable block (ram,0x03cceebc) */
/* WARNING: Removing unreachable block (ram,0x03cceec0) */
/* WARNING: Removing unreachable block (ram,0x03ccef00) */

long OVRObjectPool__List<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined1 auVar8 [16];
  long in_stack_00000018;
  long *in_stack_00000028;
  
  do {
    if (unaff_w24 == *(uint *)(unaff_x25 + 0x18)) {
      uVar1 = unaff_w22;
      if ((int)unaff_w22 <= (int)unaff_w24) {
        uVar1 = unaff_w24 + 1;
      }
      if (unaff_w24 << 1 <= unaff_w22) {
        uVar1 = unaff_w24 << 1;
      }
      FUN_03b0e9f0(&stack0x00000018,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
      unaff_x25 = in_stack_00000018;
    }
    plVar2 = in_stack_00000028;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cceda8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar2,lVar4,0);
LAB_03cceda8:
    auVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    plVar2 = in_stack_00000028;
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined1 (*) [16])(unaff_x25 + (long)(int)unaff_w24 * 0x10 + 0x20) = auVar8;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *in_stack_00000028;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03ccece8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(in_stack_00000028,*unaff_x23,0);
LAB_03ccece8:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    plVar2 = in_stack_00000028;
    lVar4 = in_stack_00000018;
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = unaff_w24 + 1;
      if (in_stack_00000028 == (long *)0x0) {
        return in_stack_00000018;
      }
      lVar5 = *in_stack_00000028;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_03ccee30;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    unaff_x25 = in_stack_00000018;
    unaff_w24 = unaff_w24 + 1;
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03ccee4c;
    }
  }
LAB_03ccee30:
  puVar3 = (undefined8 *)FUN_0367cd30(in_stack_00000028,*(long *)PTR_DAT_079f4598,0);
LAB_03ccee4c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return lVar4;
}


