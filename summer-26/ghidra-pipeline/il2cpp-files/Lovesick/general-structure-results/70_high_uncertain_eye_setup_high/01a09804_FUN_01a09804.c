/*
FUNCTION_NAME: FUN_01a09804
ENTRY_POINT: 01a09804
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01a09804(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377a918 & 1) == 0) {
    thunk_FUN_00d48444(Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__);
    thunk_FUN_00d48444(StringLiteral_2555);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377a918 = 1;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_60 = 0;
  local_48 = 0;
  *(undefined1 *)(param_1 + 0x171) = 0;
  uVar12 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0268b4e0(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
LAB_01a099e0:
    *(undefined1 *)(param_1 + 0x171) = 1;
    return;
  }
  FUN_01a099fc(param_1,*(undefined8 *)(param_1 + 200));
  FUN_01a047cc(&local_60,param_1);
  uVar5 = uStack_50;
  uVar4 = uStack_54;
  uVar3 = uStack_58;
  uVar2 = local_60;
  puVar1 = Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__;
  plVar13 = *(long **)(param_1 + 400);
  uVar12 = CONCAT44(local_48,uStack_4c);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto OVRManager__UpdateBoundary;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)
                                   Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__,3);
OVRManager__UpdateBoundary:
    uStack_38 = uVar3;
    local_40 = uVar2;
    uStack_34 = uVar4;
    uStack_30 = uVar5;
    uStack_2c = uVar12;
    (*(code *)*puVar9)(plVar13,&local_40,puVar9[1]);
    plVar13 = *(long **)(param_1 + 400);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 5) * 0x10 + 0x138);
            goto LAB_01a099a0;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,5);
LAB_01a099a0:
      (*(code *)*puVar9)(plVar13,puVar9[1]);
      uVar6 = FUN_01a04184(param_1,*(undefined8 *)(param_1 + 200));
      uVar7 = FUN_01a048e0(param_1,*(undefined8 *)(param_1 + 200));
      uVar6 = (*(uint *)(param_1 + 0x188) | uVar6) & (uVar7 ^ 0xffffffff);
      *(uint *)(param_1 + 0x188) = uVar6;
      if (uVar7 == 0) {
        return;
      }
      if (uVar6 != 0) {
        return;
      }
      goto LAB_01a099e0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


