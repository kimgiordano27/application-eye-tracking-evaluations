/*
FUNCTION_NAME: FUN_02affdf8
ENTRY_POINT: 02affdf8
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02affdf8(long *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  
  if ((DAT_03a25450 & 1) == 0) {
    FUN_017fc350(PTR_DAT_038040e0);
    FUN_017fc350(PTR_DAT_037f45f0);
    FUN_017fc350(PTR_DAT_037f89e0);
    DAT_03a25450 = 1;
  }
  if (param_4 != 0) {
    uVar3 = FUN_02c49ce4(0);
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_02c42414(param_4,0);
      if (param_2 == 0) goto LAB_02afffa0;
      plVar4 = (long *)thunk_FUN_0187f3ac(param_2,0);
      if (plVar4 == (long *)0x0) goto LAB_02afffa0;
      uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      uVar5 = FUN_02a43498(*(undefined8 *)PTR_DAT_037f89e0,uVar5,0);
      FUN_02c4cfbc(0,uVar2,uVar5,0,0);
    }
    puVar1 = PTR_DAT_037f45f0;
    lVar6 = *(long *)PTR_DAT_037f45f0;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar6 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 0x10) != '\0') {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      OVRPlugin_Qpl__MarkerPoint(param_4,0);
    }
  }
  *param_1 = param_2;
  thunk_FUN_0188fd20(param_1,param_2);
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_038040e0) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02afff70;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)PTR_DAT_038040e0,1);
LAB_02afff70:
    (*(code *)*puVar7)(plVar4,plVar4,puVar7[1]);
    if (param_3 != 0) {
      *(long *)(param_3 + 0x18) = *param_1;
      thunk_FUN_0188fd20((long *)(param_3 + 0x18));
      return;
    }
  }
LAB_02afffa0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


