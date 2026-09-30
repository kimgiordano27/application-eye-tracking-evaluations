/*
FUNCTION_NAME: FUN_0172a964
ENTRY_POINT: 0172a964
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4
*/


long FUN_0172a964(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* try { // try from 0172a968 to 0182a96f has its CatchHandler @ 0172ad58 */
  if ((DAT_03778adc & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_5740);
    thunk_FUN_00d48444(PTR_DAT_033eb138);
    thunk_FUN_00d48444(DG_Tweening_Core_TweenerCore<Quaternion,_Vector3,_QuaternionOptions>_TypeInfo
                      );
    DAT_03778adc = 1;
  }
                    /* try { // try from 0172a9b4 to 0182a9bf has its CatchHandler @ 0172ad50 */
  lVar4 = *(long *)(param_1 + 0x40);
  thunk_FUN_00d8e500();
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  if (lVar4 != 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    goto LAB_0172aad0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 0172a9d4 to 0182a9db has its CatchHandler @ 0172ad38 */
  uVar2 = thunk_FUN_015fe514(uVar5,*(undefined8 *)StringLiteral_5740,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = thunk_FUN_015fe514(uVar5,*(undefined8 *)
                                      DG_Tweening_Core_TweenerCore<Quaternion,_Vector3,_QuaternionOptions>_TypeInfo
                               ,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_00da4fb8(*(undefined8 *)puVar1,2);
      if (lVar4 == 0) goto Newtonsoft_Json_JsonTextWriter__DoWriteValueAsync;
      if ((*(int *)(lVar4 + 0x18) == 0) ||
         (*(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_1 + 100),
         *(int *)(lVar4 + 0x18) == 1)) goto LAB_0172ab0c;
      uVar3 = 4;
      goto LAB_0172aac4;
    }
    uVar2 = thunk_FUN_015fe514(uVar5,*(undefined8 *)PTR_DAT_033eb138,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_00da4fb8(*(undefined8 *)puVar1,2);
      if (lVar4 == 0) {
Newtonsoft_Json_JsonTextWriter__DoWriteValueAsync:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((*(int *)(lVar4 + 0x18) == 0) ||
         (*(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_1 + 100),
         *(int *)(lVar4 + 0x18) == 1)) {
LAB_0172ab0c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar3 = 8;
      goto LAB_0172aac4;
    }
    lVar4 = FUN_00da4fb8(*(undefined8 *)puVar1,1);
    if (lVar4 == 0) goto Newtonsoft_Json_JsonTextWriter__DoWriteValueAsync;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0172ab0c;
    *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_1 + 100);
  }
  else {
    lVar4 = FUN_00da4fb8(*(undefined8 *)puVar1,2);
    if (lVar4 == 0) goto Newtonsoft_Json_JsonTextWriter__DoWriteValueAsync;
    if ((*(int *)(lVar4 + 0x18) == 0) ||
       (*(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_1 + 100), *(int *)(lVar4 + 0x18) == 1)
       ) goto LAB_0172ab0c;
    uVar3 = 3;
LAB_0172aac4:
    *(undefined4 *)(lVar4 + 0x24) = uVar3;
  }
  thunk_FUN_00d8e500();
  *(long *)(param_1 + 0x40) = lVar4;
LAB_0172aad0:
  thunk_FUN_00d8e500();
  return lVar4;
}


