/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.Android.NotificationCenterInterface.<>c__DisplayClass3_0$$<RequestPermission>b__1
ENTRY_POINT: 03ebc66c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_6;attempted_eye_tracking_permission_or_feature_enable
*/


void VoxelBusters_EssentialKit_NotificationServicesCore_Android_NotificationCenterInterface_<>c__DisplayClass3_0__<RequestPermission>b__1
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(in_x10[4] + 0x34) * 0x10 + 0x138);
      goto LAB_03ebc694;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_01c72498();
LAB_03ebc694:
  (*(code *)*puVar1)();
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    plVar2 = (long *)FUN_03f0d9bc(*(long *)(unaff_x19 + 0x58),0);
    uVar3 = FUN_030d67d4(1,*(undefined8 *)StringLiteral_11947);
    if (plVar2 == (long *)0x0) goto LAB_03ebc800;
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x34) * 0x10 + 0x138);
          goto LAB_03ebc72c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01c72498(plVar2,*(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo,0x34);
LAB_03ebc72c:
    (*(code *)*puVar1)(plVar2,uVar3,puVar1[1]);
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) {
    return;
  }
  plVar2 = (long *)FUN_03f0d9bc(*(long *)(unaff_x19 + 0x60),0);
  uVar3 = FUN_030d67d4(1,*(undefined8 *)StringLiteral_11947);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x34) * 0x10 + 0x138);
          goto LAB_03ebc7d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01c72498(plVar2,*(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo,0x34);
LAB_03ebc7d8:
                    /* WARNING: Could not recover jumptable at 0x03ebc7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(plVar2,uVar3,puVar1[1]);
    return;
  }
LAB_03ebc800:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


