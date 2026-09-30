/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$RegisterAction
ENTRY_POINT: 0144a648
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Member__RegisterAction
               (long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_03776a58 & 1) == 0) {
    thunk_FUN_00d48444(System_Func<Vector3,_float>_TypeInfo);
    DAT_03776a58 = 1;
  }
  puVar2 = System_Func<Vector3,_float>_TypeInfo;
  if (param_3 != (long *)0x0) {
    lVar5 = *param_3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)System_Func<Vector3,_float>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0144a6d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(param_3,*(long *)System_Func<Vector3,_float>_TypeInfo,0);
LAB_0144a6d0:
    uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
    if (param_2 != 0) {
      uVar6 = FUN_0267e21c(param_2,uVar4,0);
      if ((uVar6 & 1) != 0) {
        lVar5 = *param_3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0144a740;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(param_3,*(long *)puVar2,0);
LAB_0144a740:
        uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
        fVar8 = (float)FUN_0267f5a0(param_2,uVar4,0);
        iVar1 = *(int *)(param_1 + 0x14) + 1;
        fVar9 = (float)iVar1;
        *(float *)(param_1 + 0x10) =
             (*(float *)(param_1 + 0x10) * (float)*(int *)(param_1 + 0x14)) / fVar9 + fVar8 / fVar9;
        *(int *)(param_1 + 0x14) = iVar1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


