/*
FUNCTION_NAME: FUN_021b078c
ENTRY_POINT: 021b078c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void FUN_021b078c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((DAT_037815b2 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>__ctor__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B
                      );
    DAT_037815b2 = 1;
  }
  if (*(char *)((long)param_1 + 0x93) != '\0') {
    lVar1 = FUN_021271d4(param_1 + 5,0);
    if (lVar1 != 0) {
      lVar1 = FUN_021271d4(param_1 + 5,0);
      if (lVar1 == 0) goto LAB_021b08c8;
      FUN_010ecb34(lVar1,&local_30,
                   *(undefined8 *)
                    Field_<PrivateImplementationDetails>_1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B
                  );
      param_1[0xe] = local_30;
      *(undefined4 *)(param_1 + 0xf) = uStack_28;
    }
    lVar1 = FUN_021271d4(param_1 + 8,0);
    if (lVar1 != 0) {
      lVar1 = FUN_021271d4(param_1 + 8,0);
      if (lVar1 == 0) {
LAB_021b08c8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_010ecb34(lVar1,&local_30,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>__ctor__);
      *(ulong *)((long)param_1 + 0x84) = CONCAT44(uStack_24,uStack_28);
      *(long *)((long)param_1 + 0x7c) = local_30;
    }
    FUN_021b08cc(param_1);
    *(undefined1 *)((long)param_1 + 0x93) = 0;
  }
  if (DAT_03781178 == '\0') {
    thunk_FUN_00d48444(Method_System_IO_FileStream_BeginRead__);
    DAT_03781178 = '\x01';
  }
  lVar1 = *param_1;
  if (*(int *)(*(long *)(*(long *)Method_System_IO_FileStream_BeginRead__ + 0xb8) + 4) == 4) {
    pcVar3 = *(code **)(lVar1 + 0x1c8);
    uVar2 = *(undefined8 *)(lVar1 + 0x1d0);
  }
  else {
    pcVar3 = *(code **)(lVar1 + 0x1b8);
    uVar2 = *(undefined8 *)(lVar1 + 0x1c0);
  }
  (*pcVar3)(param_1,uVar2);
  return;
}


