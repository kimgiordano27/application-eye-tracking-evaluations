/*
FUNCTION_NAME: FUN_0350b0c4
ENTRY_POINT: 0350b0c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


void FUN_0350b0c4(long *param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if ((DAT_04832fb6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Mathematics_math_select_shuffle_component__);
    thunk_FUN_01efb3a4(Method_ftLightmaps_OnSceneChangedPlay__);
    thunk_FUN_01efb3a4(Method_Oculus_Voice_ObjectVoiceExperience_HandleUploadProgressChange__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832fb6 = 1;
  }
  puVar3 = Method_ftLightmaps_OnSceneChangedPlay__;
  if (param_1 == (long *)0x0) {
    lVar6 = *(long *)Method_ftLightmaps_OnSceneChangedPlay__;
    iVar1 = *(int *)(lVar6 + 0xe0);
joined_r0x0350b18c:
    if (iVar1 == 0) {
      thunk_FUN_01ee6d7c(lVar6);
    }
    FUN_0350afb8();
    return;
  }
  lVar6 = *param_1;
  bVar2 = *(byte *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0x130);
  if (((bVar2 <= *(byte *)(lVar6 + 0x130)) &&
      (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) ==
       *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__)) &&
     ((char)param_1[0x19] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0350b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x238))(param_1,*(undefined8 *)(lVar6 + 0x240));
    return;
  }
  plVar5 = param_1;
  if (lVar6 != *(long *)Method_ftLightmaps_OnSceneChangedPlay__) {
    plVar5 = (long *)0x0;
  }
  if (plVar5 == (long *)0x0) {
    uVar9 = *(undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03579868(uVar9,0);
    lVar6 = *param_1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Oculus_Voice_ObjectVoiceExperience_HandleUploadProgressChange__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0350b21c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)
                                   Method_Oculus_Voice_ObjectVoiceExperience_HandleUploadProgressChange__
                          ,0);
LAB_0350b21c:
    plVar5 = (long *)(*(code *)*puVar4)(param_1,uVar9,puVar4[1]);
    lVar6 = *(long *)puVar3;
    if ((plVar5 == (long *)0x0) || (*plVar5 != lVar6)) {
      iVar1 = *(int *)(lVar6 + 0xe0);
      goto joined_r0x0350b18c;
    }
  }
  return;
}


