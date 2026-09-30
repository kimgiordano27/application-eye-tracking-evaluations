/*
FUNCTION_NAME: Unity.VisualScripting.StaticActionInvoker$$Invoke
ENTRY_POINT: 036b179c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


void Unity_VisualScripting_StaticActionInvoker__Invoke
               (ulong param_1,undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar5;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_528);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9ca80);
    *(undefined1 *)(unaff_x21 + 0x498) = 1;
  }
  uVar2 = FUN_036b1408();
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*unaff_x20);
  }
  uVar3 = FUN_03922f24(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_0391c2b8();
    if (lVar4 == 0) goto LAB_036b18dc;
    uVar2 = FUN_01ed7044(lVar4,*(undefined8 *)StringLiteral_528);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
    thunk_FUN_01b4f09c();
  }
  puVar1 = PTR_DAT_03d9ca80;
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    fVar5 = (float)FUN_03928018(*(long *)(unaff_x19 + 0x68),0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar1;
    }
    fVar5 = fVar5 - **(float **)(lVar4 + 0xb8);
    param_3 = param_3 - (*(float **)(lVar4 + 0xb8))[1];
    if (DAT_00b55084 <= fVar5 * fVar5 + param_3 * param_3) {
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_036b18dc;
      FUN_03928018(*(long *)(unaff_x19 + 0x68),0);
      FUN_036b12ec();
    }
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      FUN_03928134(*(long *)(unaff_x19 + 0x68),0);
      FUN_036b0f74();
      *(undefined1 *)(unaff_x19 + 0x20) = 1;
      FUN_036b10c4();
      return;
    }
  }
LAB_036b18dc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


