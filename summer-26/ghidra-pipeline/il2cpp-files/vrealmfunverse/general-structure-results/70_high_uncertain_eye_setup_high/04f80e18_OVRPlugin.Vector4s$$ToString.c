/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 04f80e18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s__ToString(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  lVar4 = FUN_02b3c908();
  if (lVar4 == 0) goto LAB_04f81680;
  if (*(int *)(lVar4 + 0x18) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    *(undefined4 *)(lVar4 + 0x20) = 0x19;
    if (0x18 < uVar1) {
      *(long *)(unaff_x19 + 0xe0) = lVar4;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0xe0));
      uVar5 = FUN_02b3c908(*unaff_x22,0);
      puVar3 = Firebase_Firestore_Converters_DictionaryConverter<uint>_TypeInfo;
      puVar2 = UnityEngine_UIElements_DefaultTreeViewController<object>_TypeInfo;
      if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0xe8) = uVar5;
        thunk_FUN_02bb0e9c();
        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
        thunk_FUN_02bb0e9c();
        lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
        FUN_037550f8(lVar4,*(undefined8 *)puVar3);
        puVar2 = System_Func<DeactivateEventArgs>_TypeInfo;
        if (lVar4 != 0) {
          lVar8 = *(long *)(lVar4 + 0x10);
          lVar9 = *(long *)System_Func<DeactivateEventArgs>_TypeInfo;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,9,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0xb,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0xc,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0xd,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0xe,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0x10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0x11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0x12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0x13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0x15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0x16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0x17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,0x18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,2,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar4,3,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f81680;
            }
            puVar2 = System_Func<DropEventArgs>_TypeInfo;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
            }
            else {
              FUN_03755988(lVar4,4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
            }
            plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
            *plVar6 = lVar4;
            thunk_FUN_02bb0e9c(plVar6,lVar4);
            uVar5 = FUN_02b3c908(*unaff_x22,5);
            FUN_04cac0f0(uVar5,*(undefined8 *)puVar2,0);
            puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
            *puVar7 = uVar5;
            thunk_FUN_02bb0e9c(puVar7,uVar5);
            return;
          }
        }
LAB_04f81680:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


