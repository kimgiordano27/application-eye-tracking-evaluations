/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.Android.NativeRequestNotificationPermissionsListener.OnSuccessDelegate$$EndInvoke
ENTRY_POINT: 03eba700
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnSuccessDelegate__EndInvoke
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  code *in_x9;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar3 = (*in_x9)();
                    /* catch() { ... } // from try @ 03eba6e8 with catch @ 03eba704 */
  if (*(long *)(unaff_x22 + 0x28) != 0) {
    uVar10 = *unaff_x21;
    uVar1 = *(undefined4 *)(unaff_x21 + 1);
    uVar2 = *(undefined4 *)(unaff_x21 + 3);
    FUN_03f11b9c(*(long *)(unaff_x22 + 0x28),0);
    plVar4 = (long *)FUN_03eb6f64();
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_11941) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_03eba788;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)StringLiteral_11941,5);
LAB_03eba788:
      uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      *unaff_x19 = uVar3;
      unaff_x19[1] = uVar10;
      *(undefined4 *)(unaff_x19 + 2) = uVar1;
      *(undefined4 *)((long)unaff_x19 + 0x14) = uVar2;
      unaff_x19[3] = uVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


