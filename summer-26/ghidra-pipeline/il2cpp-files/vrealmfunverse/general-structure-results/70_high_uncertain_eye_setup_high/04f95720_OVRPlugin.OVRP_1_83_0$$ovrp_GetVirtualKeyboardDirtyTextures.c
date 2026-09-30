/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 04f95720
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


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardDirtyTextures(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  *(undefined8 *)(unaff_x20 + 0xc0) = param_1;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0xc0),param_1);
  uVar4 = FUN_02b3c908(*unaff_x22,0);
  if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 200) = uVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 200),uVar4);
    uVar4 = FUN_02b3c908(*unaff_x22,0);
    if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd0),uVar4);
      uVar4 = FUN_02b3c908(*unaff_x22,0);
      puVar3 = System_Func<StructMultiKey<Type,_Type>,_Func<object,_object>>_TypeInfo;
      puVar2 = System_Func<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo;
      if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0xd8) = uVar4;
        thunk_FUN_02bb0e9c();
        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
        thunk_FUN_02bb0e9c();
        lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
        FUN_037550f8(lVar5,*(undefined8 *)puVar2);
        puVar2 = System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo;
        if (lVar5 != 0) {
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,9,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 10;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,10,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,0xb,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,0xc,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,0xd,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,0xe,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,0xf,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,0x10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,0x11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,0x12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,2,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,3,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            }
            else {
              FUN_03755988(lVar5,4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04f95ef0;
            }
            puVar2 = System_Func<ValueTuple<string,_Type>,_string>_TypeInfo;
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 5;
            }
            else {
              FUN_03755988(lVar5,5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
            }
            plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
            *plVar6 = lVar5;
            thunk_FUN_02bb0e9c(plVar6,lVar5);
            uVar4 = FUN_02b3c908(*unaff_x22,5);
            FUN_04cac0f0(uVar4,*(undefined8 *)puVar2,0);
            puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
            *puVar7 = uVar4;
            thunk_FUN_02bb0e9c(puVar7,uVar4);
            return;
          }
        }
LAB_04f95ef0:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


