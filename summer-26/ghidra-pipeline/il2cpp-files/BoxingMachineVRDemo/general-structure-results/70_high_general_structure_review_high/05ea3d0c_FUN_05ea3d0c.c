/*
FUNCTION_NAME: FUN_05ea3d0c
ENTRY_POINT: 05ea3d0c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_5;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


void FUN_05ea3d0c(long *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_06b83af7 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067628f0);
    FUN_02d6084c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_00000349_PostfixBurstDelegate>__
                );
    FUN_02d6084c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034C_PostfixBurstDelegate>__
                );
    DAT_06b83af7 = 1;
  }
  puVar2 = PTR_DAT_067628f0;
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067628f0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_05ea3db4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)PTR_DAT_067628f0,4);
LAB_05ea3db4:
    lVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
    puVar3 = 
    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034C_PostfixBurstDelegate>__
    ;
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      do {
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          return;
        }
        lVar6 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto 
              UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_NativeApi__UnityOpenXRMeta_Session_Start
              ;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar2,4);

        UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_NativeApi__UnityOpenXRMeta_Session_Start
        :
        lVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if (lVar6 == 0) break;
        uVar5 = FUN_03aac1c4(lVar6,iVar1,*(undefined8 *)puVar3);
        (**(code **)(*param_1 + 1000))(param_1,uVar5,param_2,*(undefined8 *)(*param_1 + 0x3f0));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


