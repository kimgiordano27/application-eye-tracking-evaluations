/*
FUNCTION_NAME: FUN_03b1dd98
ENTRY_POINT: 03b1dd98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


ulong FUN_03b1dd98(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int local_48;
  int local_44;
  
  if ((DAT_0483936c & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_11580);
    DAT_0483936c = 1;
  }
  lVar7 = *(long *)(param_1 + 200);
  if (lVar7 == 0) {
    FUN_03b1da04(param_1);
    lVar7 = *(long *)(param_1 + 200);
    if (lVar7 == 0) goto LAB_03b1df28;
  }
  lVar7 = *(long *)(lVar7 + 0x30);
  uVar2 = FUN_02293fcc(lVar7,*(undefined8 *)StringLiteral_11580);
  if ((int)uVar2 < 1) {
    iVar10 = -1;
  }
  else {
    if (lVar7 == 0) {
LAB_03b1df28:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = 0;
    lVar9 = lVar7 + 0x20;
    iVar10 = -1;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar3 = FUN_03b3137c(lVar9,param_1,0);
      if ((uVar3 & 1) != 0) {
        iVar10 = iVar10 + 1;
        if (iVar10 == param_2) {
          return uVar8 & 0xffffffff;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x58;
    } while (uVar2 != uVar8);
  }
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_44 = param_2;
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_44);
  local_48 = iVar10 + 1;
  uVar5 = thunk_FUN_01efb3a4(puVar1);
  uVar5 = thunk_FUN_01f113fc(uVar5,&local_48);
  uVar6 = thunk_FUN_01efb3a4(StringLiteral_11581);
  uVar4 = FUN_0340f334(uVar6,uVar4,param_1,uVar5,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(StringLiteral_11582);
  FUN_034f3578(uVar5,uVar6,uVar4,0);
  uVar4 = thunk_FUN_01efb3a4(StringLiteral_11583);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar4);
}


