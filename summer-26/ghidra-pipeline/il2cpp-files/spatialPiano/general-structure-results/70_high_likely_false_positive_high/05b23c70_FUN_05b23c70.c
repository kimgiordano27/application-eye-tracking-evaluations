/*
FUNCTION_NAME: FUN_05b23c70
ENTRY_POINT: 05b23c70
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05b23c70(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_067c99a8;
  if ((DAT_06bc299b & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters__
                );
    FUN_02f08768(PTR_DAT_067c99a8);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<IXRInputButtonReader,_Object>_Set__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_StylePropertyAnimationSystem_Values<Color>__ctor__);
    FUN_02f08768(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRPokeLogic_CalculatePokeParams_000010BD_PostfixBurstDelegate>__
                );
    DAT_06bc299b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar3 = FUN_05b2e508(param_1);
  lVar6 = *(long *)puVar1;
  lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
  if (lVar7 == 0) goto LAB_05b2401c;
  if (uVar3 < *(uint *)(lVar7 + 0x18)) {
    if (*(long **)(lVar7 + (long)(int)uVar3 * 0xb8 + 0x50) == param_2) {
      return;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar6);
      lVar6 = *(long *)puVar1;
      lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_05b2401c;
    }
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters__;
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      plVar10 = *(long **)(lVar7 + (long)(int)uVar3 * 0xb8 + 0x50);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters__
               ) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_05b23dc8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_02f421d0(plVar10,*(long *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters__
                              ,3);
LAB_05b23dc8:
        uStack_98 = 0;
        local_90 = 0;
        local_a0 = 0;
        (*(code *)*puVar4)(plVar10,&local_a0,puVar4[1]);
        lVar6 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_05b23e34;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar2,1);
LAB_05b23e34:
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        local_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        (*(code *)*puVar4)(plVar10,&local_a0,puVar4[1]);
        lVar6 = *(long *)puVar1;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar6);
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
      if (lVar6 == 0) {
LAB_05b2401c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (uVar3 < *(uint *)(lVar6 + 0x18)) {
        *(long **)(lVar6 + (long)(int)uVar3 * 0xb8 + 0x50) = param_2;
        if (param_2 == (long *)0x0) {
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05b2efa8();
        auVar11 = FUN_05b210f0(param_1);
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        FUN_03e1339c(&local_b8,auVar11._0_8_,auVar11._8_8_,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<IXRInputButtonReader,_Object>_Set__
                    );
        lVar6 = *param_2;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        uStack_c8 = uStack_b0;
        local_d0 = local_b8;
        local_c0 = local_a8;
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters__
               ) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_05b23f48;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_02f421d0(param_2,*(long *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters__
                              ,3);
LAB_05b23f48:
        uStack_98 = uStack_c8;
        local_a0 = local_d0;
        local_90 = local_c0;
        (*(code *)*puVar4)(param_2,&local_a0,puVar4[1]);
        lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
        if (lVar6 == 0) goto LAB_05b2401c;
        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
          if (*(char *)(lVar6 + (long)(int)uVar3 * 0xb8 + 0x58) != '\0') {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
              if (lVar6 == 0) goto LAB_05b2401c;
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_05b24018;
            uVar5 = FUN_03e1a160(&local_a0,lVar6 + (long)(int)uVar3 * 0xb8 + 0x58,
                                 *(undefined8 *)
                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRPokeLogic_CalculatePokeParams_000010BD_PostfixBurstDelegate>__
                                );
            uStack_e8 = uStack_98;
            local_f0 = local_a0;
            local_e0 = local_90;
            FUN_05b2f0f8(uVar5,uVar3,&local_f0);
          }
          return;
        }
      }
    }
  }
LAB_05b24018:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


