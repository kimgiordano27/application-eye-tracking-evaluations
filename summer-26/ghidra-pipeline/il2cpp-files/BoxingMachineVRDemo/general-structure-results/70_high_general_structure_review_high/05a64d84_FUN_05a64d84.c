/*
FUNCTION_NAME: FUN_05a64d84
ENTRY_POINT: 05a64d84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_05a64d84(long param_1,undefined8 *param_2,long param_3,undefined4 param_4,int param_5,
                 long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *extraout_x1;
  undefined8 *puVar8;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined1 auVar9 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = param_2;
  if ((DAT_06b813b2 & 1) == 0) {
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000089E_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_06769120);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JArray>_get_IsCompleted__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JConstructor>_GetResult__
                );
    DAT_06b813b2 = 1;
    puVar8 = extraout_x1;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = puVar8;
  auVar9 = auVar9 << 0x40;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_06042d6c(*(long *)(param_1 + 0x10),0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = extraout_x1_00;
    auVar9 = auVar2 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_06040dd4(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = extraout_x1_01;
      auVar9 = auVar3 << 0x40;
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_060411e0(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),0);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = extraout_x1_02;
        auVar9 = auVar4 << 0x40;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (auVar9 = FUN_06042b94(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),param_4,
                                  0,1,0,0),
           puVar6 = 
           Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JConstructor>_GetResult__
           , puVar5 = 
             UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000089E_PostfixBurstDelegate_TypeInfo
           , param_3 != 0)) {
          FUN_06039fdc((float)param_5,param_3,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JArray>_get_IsCompleted__
                       ,0);
          lVar7 = *(long *)puVar6;
          if (param_6 != 0) {
            lVar7 = param_6;
          }
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar7 = FUN_059efbdc(lVar7,0);
          puVar5 = PTR_DAT_06769120;
          uStack_98 = param_2[5];
          local_a0 = param_2[4];
          uStack_88 = param_2[7];
          uStack_90 = param_2[6];
          uStack_b8 = param_2[1];
          local_c0 = *param_2;
          uStack_a8 = param_2[3];
          uStack_b0 = param_2[2];
          auVar1._8_8_ = 0;
          auVar1._0_8_ = *(ulong *)(param_1 + 0x10);
          auVar9 = auVar1 << 0x40;
          local_80 = local_c0;
          uStack_78 = uStack_b8;
          uStack_70 = uStack_b0;
          uStack_68 = uStack_a8;
          local_60 = local_a0;
          uStack_58 = uStack_98;
          uStack_50 = uStack_90;
          uStack_48 = uStack_88;
          if (lVar7 != 0) {
            FUN_06098bb0(lVar7,*(ulong *)(param_1 + 0x10),&local_c0,param_3,0,0,0);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0602c5c4(lVar7,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8(auVar9._0_8_,auVar9._8_8_);
}


