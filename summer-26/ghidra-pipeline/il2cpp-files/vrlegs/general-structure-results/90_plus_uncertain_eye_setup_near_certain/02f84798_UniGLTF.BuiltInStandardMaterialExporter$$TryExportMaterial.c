/*
FUNCTION_NAME: UniGLTF.BuiltInStandardMaterialExporter$$TryExportMaterial
ENTRY_POINT: 02f84798
PROGRAM: vrlegs-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f84a60) */
/* WARNING: Removing unreachable block (ram,0x02f8494c) */
/* WARNING: Removing unreachable block (ram,0x02f849e0) */
/* WARNING: Removing unreachable block (ram,0x02f84a7c) */

void UniGLTF_BuiltInStandardMaterialExporter__TryExportMaterial(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x21;
  int iVar10;
  long *unaff_x22;
  long *plVar11;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x02f84798:
  puVar3 = (undefined8 *)FUN_01a472ec();
  do {
    uVar4 = (*(code *)*puVar3)();
    puVar2 = PTR_DAT_03cbed08;
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01a89d6c();
      if (plVar5 == (long *)0x0) goto LAB_02f84940;
      lVar8 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 == 0) goto LAB_02f84918;
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_02f8480c;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec();
LAB_02f8480c:
    plVar5 = (long *)(*(code *)*puVar3)();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x28 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    puVar3 = (undefined8 *)thunk_FUN_01a89fbc();
    plVar5 = (long *)puVar3[1];
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *plVar5;
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    plVar11 = (long *)*puVar3;
    lVar8 = (**(code **)(lVar8 + 0x198))(plVar5,*(undefined8 *)(lVar8 + 0x1a0));
    if (lVar8 == 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar11);
      }
      puVar6 = (undefined4 *)thunk_FUN_01a89fbc(plVar11);
      uStack000000000000000c = *puVar6;
      FUN_01b5f01c();
    }
    lVar8 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 == 0) goto code_r0x02f84798;
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != *unaff_x25) {
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
      if (uVar4 == 0) goto code_r0x02f84798;
    }
    puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02f84934;
    }
  }
LAB_02f84918:
  puVar3 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar2,0);
LAB_02f84934:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
LAB_02f84940:
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    iVar10 = 0;
    do {
      lVar8 = *unaff_x26;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *unaff_x26;
      }
      plVar5 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x38);
      FUN_02215a88();
      uVar7 = thunk_FUN_01a89a98(*unaff_x27,&stack0x00000008);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar7,uVar7);
      }
      (**(code **)(*plVar5 + 0x3a8))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x3b0));
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x21 + 0x18));
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


