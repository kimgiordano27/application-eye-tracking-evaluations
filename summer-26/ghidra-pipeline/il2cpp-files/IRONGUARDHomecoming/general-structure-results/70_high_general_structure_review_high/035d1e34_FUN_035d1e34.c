/*
FUNCTION_NAME: FUN_035d1e34
ENTRY_POINT: 035d1e34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x035d2054) */

int FUN_035d1e34(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int local_48;
  char local_44 [4];
  
  if ((DAT_048336d2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_ProxyElement__ctor__);
    DAT_048336d2 = 1;
  }
  local_44[0] = '\0';
  FUN_035d1618(param_1);
  if (0 < param_2) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    local_44[0] = '\0';
    FUN_035ce230(uVar7,local_44);
    iVar8 = *(int *)(param_1 + 0x10);
    thunk_FUN_01f3e6f0();
    if (*(int *)(param_1 + 0x14) - iVar8 < param_2) {
      thunk_FUN_01efb3a4(Method_DG_Tweening_DOVirtual_<>c__DisplayClass1_0_<Int>b__1__);
      uVar7 = thunk_FUN_01f117cc();
      FUN_035cca9c();
      uVar6 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOVirtual_<>c__DisplayClass1_0_<Int>b__0__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,uVar6);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    thunk_FUN_01f3e6f0();
    param_2 = iVar8 + param_2;
    if ((param_2 == 1) || (iVar2 == 1)) {
      FUN_035d2118(*(undefined8 *)(param_1 + 0x20));
    }
    else if (1 < iVar2) {
      FUN_035ce460(*(undefined8 *)(param_1 + 0x20));
    }
    puVar3 = Method_System_Net_Configuration_ProxyElement__ctor__;
    iVar10 = param_2;
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar1 = param_2;
      if (-1 < param_2 - iVar2) {
        iVar1 = iVar2;
      }
      while ((iVar10 = iVar1, 0 < param_2 - iVar2 &&
             (lVar9 = *(long *)(param_1 + 0x30), iVar10 = param_2, lVar9 != 0))) {
        FUN_035d1d44(param_1,lVar9);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        param_2 = param_2 + -1;
        FUN_035d9fbc(lVar9,0,0);
      }
    }
    thunk_FUN_01f3e6f0();
    lVar9 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x10) = iVar10;
    thunk_FUN_01f3e6f0();
    if (((0 < iVar10) && (iVar8 == 0)) && (lVar9 != 0)) {
      lVar9 = *(long *)(param_1 + 0x28);
      thunk_FUN_01f3e6f0();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_035ce250(lVar9);
      iVar8 = 0;
    }
    if (local_44[0] != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar7);
    }
    return iVar8;
  }
  local_48 = param_2;
  uVar7 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar7 = thunk_FUN_01f113fc(uVar7,&local_48);
  thunk_FUN_01efb3a4(Method_System_Net_Configuration_ProxyElement__ctor__);
  FUN_01bc4c70();
  thunk_FUN_01efb3a4(Method_DG_Tweening_DOVirtual_<>c__DisplayClass0_0_<Float>b__1__);
  uVar6 = FUN_035d10e4();
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar4 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOVirtual_<>c__DisplayClass0_0_<Float>b__2__);
  FUN_034f48f0(uVar4,uVar5,uVar7,uVar6,0);
  uVar7 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOVirtual_<>c__DisplayClass1_0_<Int>b__0__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar7);
}


