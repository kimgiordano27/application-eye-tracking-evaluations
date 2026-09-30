/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerEnd
ENTRY_POINT: 02c49708
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


/* WARNING: Removing unreachable block (ram,0x02c49844) */
/* WARNING: Removing unreachable block (ram,0x02c4986c) */
/* WARNING: Removing unreachable block (ram,0x02c4991c) */

void OVRPlugin_Qpl__MarkerEnd(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  do {
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02c49750;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c49750:
    uVar6 = (*(code *)*puVar1)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_02c49838;
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_02c49810;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02c497ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c497ac:
    lVar5 = (*(code *)*puVar1)();
    if (lVar5 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar2 = thunk_FUN_01861bbc();
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c838);
      uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb630);
      FUN_02b3cc64(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c878);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar2,uVar3);
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_02826708();
    param_1 = *unaff_x20;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02c4982c;
    }
  }
LAB_02c49810:
  puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c4982c:
  (*(code *)*puVar1)();
LAB_02c49838:
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (*(int *)(unaff_x19 + 0x18) == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar2 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c848);
    uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb630);
    FUN_02b3cc64(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c878);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar2,uVar3);
  }
  FUN_02c49394();
  return;
}


