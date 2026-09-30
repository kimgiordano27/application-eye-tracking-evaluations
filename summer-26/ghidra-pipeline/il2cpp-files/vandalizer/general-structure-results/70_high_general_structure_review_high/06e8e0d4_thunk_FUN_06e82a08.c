/*
FUNCTION_NAME: thunk_FUN_06e82a08
ENTRY_POINT: 06e8e0d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_4
*/


void thunk_FUN_06e82a08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       long param_5,long param_6,undefined4 param_7)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if ((DAT_07a57451 & 1) == 0) {
    FUN_031f20f4(System_IO_FileStream_TypeInfo);
    FUN_031f20f4(System_IO_FileStreamAsyncResult_TypeInfo);
    DAT_07a57451 = 1;
  }
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06e63ef0(0,*(undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo,0);
  }
  if (param_5 != 0) {
    lVar1 = *(long *)(param_5 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_06e633bc(param_5,0);
    }
    if (param_6 != 0) {
      lVar2 = *(long *)(param_6 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_06e63ef0(param_6,*(undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo,0);
      }
      if (DAT_07a575d8 == (code *)0x0) {
        DAT_07a575d8 = (code *)FUN_031f20b8(
                                           "UnityEngine.Rendering.CommandBuffer::Internal_SetRayTracingVectorParam_Injected(System.IntPtr,System.IntPtr,System.Int32,UnityEngine.Vector4&)"
                                           );
      }
      (*DAT_07a575d8)(lVar1,lVar2,param_7,&uStack_40);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


