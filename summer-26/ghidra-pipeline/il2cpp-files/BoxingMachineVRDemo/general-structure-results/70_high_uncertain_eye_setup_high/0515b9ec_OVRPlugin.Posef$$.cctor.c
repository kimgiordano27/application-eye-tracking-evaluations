/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 0515b9ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0515ba30;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_0515ba30:
  lVar3 = (*(code *)*puVar2)();
  plVar4 = (long *)FUN_02d60934(*unaff_x22,2);
  if (plVar4 == (long *)0x0) {
LAB_0515bb5c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_02d9d438(), lVar5 == 0)) {
LAB_0515bb64:
    uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = unaff_x21;
    thunk_FUN_02dd37b4();
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_02d9d438(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_0515bb64;
    puVar1 = PTR_DAT_0675e238;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar3;
      thunk_FUN_02dd37b4(plVar4 + 5,lVar3);
      FUN_05020f78();
      lVar3 = FUN_02d60934(*(undefined8 *)puVar1,2);
      if (lVar3 == 0) goto LAB_0515bb5c;
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_06769a20;
        thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
        if (1 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_06769a28;
          thunk_FUN_02dd37b4();
          FUN_050eb714();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


