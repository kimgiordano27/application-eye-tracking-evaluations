/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<__Il2CppFullySharedGenericType>$$get_NumberOfDisplayStrings
ENTRY_POINT: 06557988
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<__Il2CppFullySharedGenericType>__get_NumberOfDisplayStrings
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined4 uStack000000000000001c;
  
  if (param_1 != param_2) {
    lVar5 = FUN_038016b4(*(undefined8 *)(unaff_x21 + 0x20));
    uVar8 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 8));
    plVar9 = (long *)thunk_FUN_03d9f2a8(uVar8,0);
    FUN_037e46c4();
    uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar10 = thunk_FUN_03d1e194(PTR_DAT_091fe410);
    uVar8 = FUN_06fac9e0(uVar10,uVar8,0);
    thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
    uVar10 = thunk_FUN_03d2ef40();
    uVar11 = thunk_FUN_03d1e194(PTR_DAT_091bec78);
    FUN_070c4cac(uVar10,uVar8,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar10);
  }
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4();
  }
  puVar6 = (undefined4 *)thunk_FUN_03d2f094();
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(**(undefined8 **)(lVar5 + 0xc0));
  lVar5 = *(long *)(unaff_x21 + 0x20);
  uStack000000000000001c = uVar1;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  thunk_FUN_03d2eb70(**(undefined8 **)(lVar5 + 0xc0),&stack0x0000001c);
  puVar3 = PTR_DAT_091fe408;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *unaff_x19;
  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_091fe408) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_06557a9c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370();
LAB_06557a9c:
  iVar4 = (*(code *)*puVar7)();
  if (iVar4 == 0) {
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10));
    lVar5 = *(long *)(unaff_x21 + 0x20);
    uStack000000000000001c = uVar2;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x0000001c);
    lVar5 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06557b5c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370();
LAB_06557b5c:
    iVar4 = (*(code *)*puVar7)();
    if (iVar4 == 0) {
      lVar5 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06557bc4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03d8f370();
LAB_06557bc4:
      (*(code *)*puVar7)();
    }
  }
  return;
}


