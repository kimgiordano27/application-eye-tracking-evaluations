/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 05ea6460
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


/* WARNING: Removing unreachable block (ram,0x05ea66b0) */

void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions
               (ulong param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(Method_System_IO_BinaryReader_ReadString__);
    FUN_02d6084c(Method_System_Collections_BitArray_Get__);
    FUN_02d6084c(
                Method_UnityEngine_Bindings_BlittableArrayWrapper_Unmarshal<MarkToBaseAdjustmentRecord>__
                );
    *(undefined1 *)(unaff_x23 + 0xb09) = 1;
  }
  puVar2 = Method_UnityEngine_Bindings_BlittableArrayWrapper_Unmarshal<MarkToBaseAdjustmentRecord>__
  ;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x20 + 0x20),param_2);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x98);
  if (lVar3 != 0) {
    FUN_06012f08(lVar3,0);
  }
  puVar2 = Method_System_Collections_BitArray_Get__;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = *param_3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Method_System_Collections_BitArray_Get__) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_05ea6540;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)Method_System_Collections_BitArray_Get__,9);
LAB_05ea6540:
  (*(code *)*puVar4)(param_3);
  puVar1 = Method_System_IO_BinaryReader_ReadString__;
  if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = *param_4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Method_System_IO_BinaryReader_ReadString__) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_05ea65ac;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(param_4,*(long *)Method_System_IO_BinaryReader_ReadString__,9)
  ;
LAB_05ea65ac:
  (*(code *)*puVar4)(param_4);
  lVar5 = *param_3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 10) * 0x10 + 0x138);
        goto LAB_05ea660c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar2,10);
LAB_05ea660c:
  (*(code *)*puVar4)(param_3);
  lVar5 = *param_4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 10) * 0x10 + 0x138);
        goto LAB_05ea666c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(param_4,*(long *)puVar1,10);
LAB_05ea666c:
  (*(code *)*puVar4)(param_4);
  if (lVar3 != 0) {
    FUN_06012f90(lVar3,0);
  }
  return;
}


