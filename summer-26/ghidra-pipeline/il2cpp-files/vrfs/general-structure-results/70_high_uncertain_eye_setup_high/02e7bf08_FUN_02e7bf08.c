/*
FUNCTION_NAME: FUN_02e7bf08
ENTRY_POINT: 02e7bf08
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02e7bf08(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_06d9fd78;
  if ((bRam0000000007236a8b & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e434f0);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    thunk_FUN_0159f088(PTR_DAT_06e5c940);
    bRam0000000007236a8b = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar4 = FUN_051d94d4(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_02e7c174;
  lVar5 = FUN_0366303c(*(long *)(param_1 + 0x20),0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar1);
  }
  uVar4 = FUN_051d2ac0(lVar5,0,0);
  if ((uVar4 & 1) == 0) {
LAB_02e7c034:
    if (param_2 == 0) goto LAB_02e7c174;
    uVar7 = 0;
  }
  else {
    if (lVar5 == 0) goto LAB_02e7c174;
    iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar5,0);
    if (iVar2 == 0) goto LAB_02e7c034;
    if (param_2 == 0) goto LAB_02e7c174;
    uVar7 = FUN_0336cf4c(param_2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar1);
    }
    uVar4 = FUN_051d2ac0(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      uVar7 = FUN_051d85c4(0);
    }
    else {
      uVar7 = FUN_0336cf4c(param_2,0);
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x100);
  uVar10 = *(undefined4 *)(param_2 + 0x104);
  if (*(int *)(*(long *)PTR_DAT_06e5c940 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar3 = FUN_01ada070(uVar9,uVar10,0,uVar8,uVar7,0);
  if (uVar3 == 0xffffffff) {
    return;
  }
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar5 = FUN_04ec8ec8(*(long *)(param_1 + 0x20),0), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x48), lVar5 != 0)) {
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_02e7c178:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    lVar5 = lVar5 + (long)(int)uVar3 * 0x28;
    uStack_50 = *(undefined8 *)(lVar5 + 0x40);
    uStack_68 = *(undefined8 *)(lVar5 + 0x28);
    uStack_70 = *(undefined8 *)(lVar5 + 0x20);
    uStack_58 = *(undefined8 *)(lVar5 + 0x38);
    uStack_60 = *(undefined8 *)(lVar5 + 0x30);
    lVar5 = FUN_04809fc8(&uStack_70,0);
    uVar4 = FUN_02526f10(lVar5,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    lVar6 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06e434f0,2);
    if (lVar6 != 0) {
      if ((*(int *)(lVar6 + 0x18) == 0) ||
         (*(undefined2 *)(lVar6 + 0x20) = 0x27, *(int *)(lVar6 + 0x18) == 1)) goto LAB_02e7c178;
      *(undefined2 *)(lVar6 + 0x22) = 0x22;
      if (lVar5 != 0) {
        uVar7 = FUN_0252b5e0(lVar5,lVar6,0);
        uVar4 = FUN_02526f10(uVar7,0);
        if ((uVar4 & 1) != 0) {
          return;
        }
        FUN_04f19850(uVar7,0);
        return;
      }
    }
  }
LAB_02e7c174:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


