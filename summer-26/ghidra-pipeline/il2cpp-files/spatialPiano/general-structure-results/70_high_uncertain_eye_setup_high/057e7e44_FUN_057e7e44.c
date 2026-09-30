/*
FUNCTION_NAME: FUN_057e7e44
ENTRY_POINT: 057e7e44
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_057e7e44(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_06bc0cd4 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067dc1a8);
    FUN_02f08768(PTR_DAT_067d8ae0);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_MoveNext__
                );
    DAT_06bc0cd4 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  uVar1 = *(int *)(param_1 + 0x38) + 1;
  *(uint *)(param_1 + 0x38) = uVar1;
  if (lVar6 != 0) {
    if (uVar1 == *(uint *)(lVar6 + 0x18)) {
      lVar6 = FUN_02f0880c(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_MoveNext__
                           ,uVar1 * 2);
      FUN_050f8cdc(*(undefined8 *)(param_1 + 0x30),lVar6,uVar1,0);
      *(long *)(param_1 + 0x30) = lVar6;
      if (lVar6 == 0) goto LAB_057e7fbc;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    cVar2 = *(char *)(param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 0x38);
    lVar6 = lVar6 + (long)(int)uVar1 * 0x18;
    *(undefined8 *)(lVar6 + 0x20) = param_2;
    *(undefined8 *)(lVar6 + 0x28) = param_3;
    *(undefined4 *)(lVar6 + 0x30) = param_4;
    *(undefined4 *)(lVar6 + 0x34) = 0xffffffff;
    if (cVar2 != '\0') {
      FUN_057e80d4(param_1);
      return;
    }
    if (iVar4 == 0x10) {
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      uVar3 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d8ae0);
      FUN_0491be88(uVar3,uVar5,*(undefined8 *)PTR_DAT_067dc1a8);
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      if (-1 < *(int *)(param_1 + 0x38)) {
        iVar4 = 0;
        do {
          FUN_057e80d4(param_1,iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 <= *(int *)(param_1 + 0x38));
      }
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    return;
  }
LAB_057e7fbc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


