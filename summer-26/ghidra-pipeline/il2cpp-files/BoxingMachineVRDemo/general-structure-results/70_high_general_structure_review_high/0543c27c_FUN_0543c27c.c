/*
FUNCTION_NAME: FUN_0543c27c
ENTRY_POINT: 0543c27c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0543c27c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 local_58;
  
  puVar4 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_var;
  if ((DAT_06b7e6fe & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0678fd98);
    FUN_02d6084c(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_var);
    FUN_02d6084c(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var);
    FUN_02d6084c(System_Reflection_MethodBase_var);
    FUN_02d6084c(System_Reflection_MethodInfo_var);
    FUN_02d6084c(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_var);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(System_Data_MissingSchemaAction_var);
    FUN_02d6084c(Unity_VisualScripting_MissingType_var);
    FUN_02d6084c(UnityEngine_MonoBehaviour_var);
    FUN_02d6084c(System_MonoCustomAttrs_var);
    FUN_02d6084c(PTR_DAT_0675e638);
    FUN_02d6084c(System_Reflection_MonoEventInfo_var);
    DAT_06b7e6fe = 1;
  }
  puVar10 = UnityEngine_MonoBehaviour_var;
  puVar9 = System_Data_MissingSchemaAction_var;
  puVar8 = System_Reflection_MethodInfo_var;
  puVar7 = System_Reflection_MethodBase_var;
  puVar6 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var;
  puVar5 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_var;
  puVar3 = PTR_DAT_0678fd98;
  puVar2 = PTR_DAT_0675e638;
  puVar1 = PTR_DAT_0675e238;
  uVar15 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar15 = FUN_05015c2c(uVar15,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar15;
  thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar15);
  uVar15 = FUN_05015c2c(*(undefined8 *)puVar7,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar14 = uVar15;
  thunk_FUN_02dd37b4(puVar14,uVar15);
  uVar15 = FUN_05015c2c(*(undefined8 *)puVar9,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  *puVar14 = uVar15;
  thunk_FUN_02dd37b4(puVar14,uVar15);
  uVar15 = FUN_05015c2c(*(undefined8 *)puVar6,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  *puVar14 = uVar15;
  thunk_FUN_02dd37b4(puVar14,uVar15);
  uVar15 = FUN_05015c2c(*(undefined8 *)puVar5,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
  *puVar14 = uVar15;
  thunk_FUN_02dd37b4(puVar14,uVar15);
  uVar15 = FUN_05015c2c(*(undefined8 *)puVar8,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  *puVar14 = uVar15;
  thunk_FUN_02dd37b4(puVar14,uVar15);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30) = *(undefined8 *)puVar2;
  thunk_FUN_02dd37b4();
  lVar12 = FUN_02d60934(*(undefined8 *)puVar1,4);
  uVar15 = FUN_05394c20(*(undefined8 *)puVar10,0);
  puVar4 = System_Reflection_MonoEventInfo_var;
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      *(undefined8 *)(lVar12 + 0x20) = uVar15;
      thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20),uVar15);
      uVar15 = FUN_05394c20(*(undefined8 *)puVar4,0);
      puVar4 = Unity_VisualScripting_MissingType_var;
      if (1 < *(uint *)(lVar12 + 0x18)) {
        *(undefined8 *)(lVar12 + 0x28) = uVar15;
        thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x28),uVar15);
        uVar15 = FUN_05394c20(*(undefined8 *)puVar4,0);
        puVar4 = System_MonoCustomAttrs_var;
        if (2 < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + 0x30) = uVar15;
          thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x30),uVar15);
          uVar15 = FUN_05394c20(*(undefined8 *)puVar4,0);
          if (3 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x38) = uVar15;
            thunk_FUN_02dd37b4();
            plVar13 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
            *plVar13 = lVar12;
            thunk_FUN_02dd37b4(plVar13,lVar12);
            local_58 = 0;
            FUN_05052430(&local_58,0,0);
            *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = local_58;
            uVar11 = FUN_0504dcd0(0);
            *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48) = uVar11;
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


