/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<RequestScenePermissionIfNeeded>d__13$$MoveNext
ENTRY_POINT: 08a82598
PROGRAM: Hyper-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x25;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(in_x10[4] + 0x2f) * 0x10 + 0x138);
      goto LAB_08a828b4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_08a828b4:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac4e5c8) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_08a82920;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac4e5c8,4);
LAB_08a82920:
  uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
  if ((uVar5 & 1) != 0) {
    FUN_08997230(0x3fc00000);
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar4 = *(long *)(unaff_x20 + 0xb0);
  *(undefined1 *)(*(long *)(unaff_x19 + 0xc) + 0x38) = 1;
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),1,*(undefined8 *)(lVar4 + 0x28));
  }
  puVar1 = PTR_DAT_0ac46eb8;
  if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *(long *)puVar1;
  }
  plVar3 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  uVar7 = *(undefined8 *)PTR_DAT_0ac54958;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_08a82728;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a82728:
  (*(code *)*puVar2)(plVar3,uVar7,puVar2[1]);
  lVar4 = *unaff_x25;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


