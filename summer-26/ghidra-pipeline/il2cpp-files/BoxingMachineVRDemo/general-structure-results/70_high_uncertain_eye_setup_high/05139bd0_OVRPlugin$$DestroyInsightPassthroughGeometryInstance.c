/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightPassthroughGeometryInstance
ENTRY_POINT: 05139bd0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05139d38) */

void OVRPlugin__DestroyInsightPassthroughGeometryInstance
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  int unaff_w23;
  int unaff_w24;
  ulong unaff_x25;
  undefined8 uStack_8;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_05139bfc;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_05139bfc:
  (*(code *)*puVar1)();
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0();
  }
  if ((unaff_x25 & 1) != 0) {
    unaff_w23 = 0;
  }
  if ((unaff_w24 < 0) && (plVar6 = *(long **)(unaff_x19 + 0xc), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05139c7c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_0675f3d0,0);
LAB_05139c7c:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  if (unaff_w23 == 0) {
    *unaff_x19 = 0xfffffffe;
    lVar3 = thunk_FUN_02dc61f4(PTR_DAT_067816e8);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06781718);
    FUN_03deda94(unaff_x19 + 2,uStack_8,uVar2);
  }
  else if (unaff_w23 == 7) {
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)PTR_DAT_067816e8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_03ded864(unaff_x19 + 2);
  }
  return;
}


