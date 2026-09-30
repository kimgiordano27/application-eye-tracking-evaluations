/*
FUNCTION_NAME: FUN_038cf4c4
ENTRY_POINT: 038cf4c4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void FUN_038cf4c4(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_045396ac & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04230f30);
    DAT_045396ac = 1;
  }
  if ((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x20), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x10) == 0) {
      if (*(long *)(param_2 + 0x28) == 0) goto LAB_038cf5b0;
      uVar1 = *(undefined8 *)PTR_DAT_04230f30;
      if (*(int *)(*(long *)(param_2 + 0x28) + 0x10) != 0) {
        uVar1 = 0;
      }
      *(undefined8 *)(param_2 + 0x38) = uVar1;
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_038cf5b0;
      lVar3 = (**(code **)(*param_3 + 0x238))(param_3,lVar3,*(undefined8 *)(*param_3 + 0x240));
      *(long *)(param_2 + 0x38) = lVar3;
      if (lVar3 == 0) {
        FUN_019b2708(param_2);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
        uVar1 = thunk_FUN_01c496e0();
        uVar2 = thunk_FUN_01c273e8(
                                  Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<ProbeBrickIndex_Brick>__
                                  );
        FUN_037f036c(uVar1,uVar2,uVar4,0);
        uVar2 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_ProbeVolumeDebug_<GetReset>b__19_0__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar1,uVar2);
      }
    }
    return;
  }
LAB_038cf5b0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


