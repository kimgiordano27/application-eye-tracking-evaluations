/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 05ef62a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ef633c) */

int OVRManager_Observable<__Il2CppFullySharedGenericType>__set_Value(code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  
  do {
    (*param_1)();
    unaff_w21 = unaff_w21 + 1;
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05ef621c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_05ef621c:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c(lVar2);
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05ef62a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_05ef62a0:
    param_1 = (code *)*puVar1;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05ef6310;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_05ef6310:
    (*(code *)*puVar1)();
  }
  return unaff_w21;
}


