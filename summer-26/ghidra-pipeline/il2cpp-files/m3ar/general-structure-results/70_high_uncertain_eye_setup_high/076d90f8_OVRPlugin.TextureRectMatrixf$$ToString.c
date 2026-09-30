/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$ToString
ENTRY_POINT: 076d90f8
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_TextureRectMatrixf__ToString(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_0406ae20();
      goto LAB_076d9120;
    }
    plVar4 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar4 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
LAB_076d9120:
  plVar4 = (long *)(*(code *)*puVar3)();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08f65598 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08f65598)) {
      thunk_FUN_0858dfc0(plVar4,0);
      unaff_x20 = FUN_0736972c();
    }
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_076d91d8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20();
LAB_076d91d8:
  lVar6 = (*(code *)*puVar3)();
  if ((lVar6 != 0) &&
     (plVar4 = (long *)thunk_FUN_0404145c(lVar6,0), puVar2 = PTR_DAT_08fadef8, plVar4 != (long *)0x0
     )) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    uVar5 = FUN_0735fe18(*(undefined8 *)puVar2,uVar5,0);
    FUN_0735c7b4(unaff_x20,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


