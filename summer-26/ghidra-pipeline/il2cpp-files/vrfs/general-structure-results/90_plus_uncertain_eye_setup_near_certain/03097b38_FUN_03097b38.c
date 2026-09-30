/*
FUNCTION_NAME: FUN_03097b38
ENTRY_POINT: 03097b38
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_03097b38(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000007237420 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam0000000007237420 = 1;
  }
  puVar1 = PTR_DAT_06d9fd78;
  if (*(char *)(param_1 + 0xf6) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar2 = FUN_051e0350(uVar3,0);
    if ((uVar2 & 1) != 0) {
      FUN_04f1d3d0(param_1 + 0x118,param_1,*(undefined8 *)(param_1 + 0x108),0x1502,0);
      lVar4 = *(long *)(param_1 + 0x108);
      if (lVar4 == 0) goto System_Array__InternalArray__set_Item<OVRPlugin_Bone>;
      FUN_04f1d5e4(lVar4,0);
      FUN_04f1d674(0,lVar4,0);
      lVar4 = *(long *)(param_1 + 0x108);
      if (lVar4 == 0) goto System_Array__InternalArray__set_Item<OVRPlugin_Bone>;
      FUN_04f1d700(lVar4,0);
      FUN_04f1d790(0x3f800000,lVar4,0);
      lVar4 = *(long *)(param_1 + 0x108);
      if (lVar4 == 0) goto System_Array__InternalArray__set_Item<OVRPlugin_Bone>;
      FUN_04f1d81c(lVar4,0);
      FUN_04f1d8ac(0,lVar4,0);
      uVar2 = FUN_0309736c(param_1);
      lVar4 = *(long *)(param_1 + 0x108);
      if ((uVar2 & 1) == 0) {
        if (lVar4 == 0) goto System_Array__InternalArray__set_Item<OVRPlugin_Bone>;
        FUN_04f1d938(lVar4,0);
        fVar6 = 0.0;
      }
      else {
        if (lVar4 == 0) goto System_Array__InternalArray__set_Item<OVRPlugin_Bone>;
        fVar6 = *(float *)(param_1 + 0x5c);
        fVar7 = *(float *)(param_1 + 0xfc);
        FUN_04f1d938(lVar4,0);
        fVar6 = -(fVar6 + fVar7);
      }
      FUN_04f1d9c8(fVar6,lVar4,0);
    }
  }
  if (*(char *)(param_1 + 0xf5) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar2 = FUN_051e0350(uVar3,0);
    if ((uVar2 & 1) != 0) {
      FUN_04f1d3d0(param_1 + 0x118,param_1,*(undefined8 *)(param_1 + 0x110),0x2a04,0);
      lVar4 = *(long *)(param_1 + 0x110);
      if (lVar4 != 0) {
        uVar5 = FUN_04f1d5e4(lVar4,0);
        FUN_04f1d674(uVar5,0,lVar4,0);
        lVar4 = *(long *)(param_1 + 0x110);
        if (lVar4 != 0) {
          uVar5 = FUN_04f1d700(lVar4,0);
          FUN_04f1d790(uVar5,0x3f800000,lVar4,0);
          lVar4 = *(long *)(param_1 + 0x110);
          if (lVar4 != 0) {
            uVar5 = FUN_04f1d81c(lVar4,0);
            FUN_04f1d8ac(uVar5,0,lVar4,0);
            uVar2 = FUN_03097310(param_1);
            lVar4 = *(long *)(param_1 + 0x110);
            if (lVar4 != 0) {
              uVar5 = FUN_04f1d938(lVar4,0);
              if ((uVar2 & 1) == 0) {
                fVar6 = 0.0;
              }
              else {
                fVar6 = -(*(float *)(param_1 + 0xf8) + *(float *)(param_1 + 0x58));
              }
              FUN_04f1d9c8(uVar5,fVar6,lVar4,0);
              return;
            }
          }
        }
      }
System_Array__InternalArray__set_Item<OVRPlugin_Bone>:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
  }
  return;
}


