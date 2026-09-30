/*
FUNCTION_NAME: OVRPlugin$$GetNodeAcceleration
ENTRY_POINT: 02c1bf80
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetNodeAcceleration(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  puVar1 = (undefined8 *)FUN_0185dba8();
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 == 0) {
    thunk_FUN_01851c08(PTR_DAT_0380b860);
    uVar6 = thunk_FUN_01861bbc();
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
    FUN_02b0d540(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar6,uVar7);
  }
  if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar3 = FUN_02be74a8();
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,1);
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x20) goto LAB_02c1cbb4;
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
  }
  else {
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x20) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02c1cac4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c1cac4:
    lVar2 = (*(code *)*puVar1)();
    if ((lVar2 == 0) || (FUN_02b188e0(lVar2,0), unaff_x19 == (long *)0x0)) goto LAB_02c1cd6c;
    uVar3 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)PTR_DAT_0380b8b0;
      lVar2 = *(long *)(lVar5 + 0x38);
      if (lVar2 == 0) {
        FUN_0185db00(lVar5);
        lVar2 = *(long *)(lVar5 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar2 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      return (long *)**(undefined8 **)(lVar2 + 0xb8);
    }
    plVar4 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,1);
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x20) goto LAB_02c1cbb4;
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
  }
  puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c1cbc0:
  lVar2 = (*(code *)*puVar1)();
  if (plVar4 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_01861ac0(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar7 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar7,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar2;
      thunk_FUN_0188fd20(plVar4 + 4,lVar2);
      return plVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
LAB_02c1cd6c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
LAB_02c1cbb4:
  puVar1 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
  goto LAB_02c1cbc0;
}


