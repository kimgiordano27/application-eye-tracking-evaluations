/*
FUNCTION_NAME: FUN_02f1eda8
ENTRY_POINT: 02f1eda8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1
*/


void FUN_02f1eda8(int *param_1,int param_2,long param_3)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  
  if ((DAT_0483195d & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_Core_Extensions_Blendable<Quaternion,_Vector3,_QuaternionOptions>__
                      );
    DAT_0483195d = 1;
  }
  if (-1 < param_2) {
    if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    if ((DAT_0483195a & 1) == 0) {
      thunk_FUN_01efb3a4(
                        Method_System_Linq_Expressions_ExpressionVisitor_VisitAndConvert<ParameterExpression>__
                        );
      DAT_0483195a = 1;
    }
    iVar7 = 0;
    if (*(long *)(param_1 + 2) != 0) {
      iVar7 = param_1[4];
    }
    if (iVar7 < param_2) {
      lVar3 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      FUN_02f1e5d4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28));
    }
    if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    if (*param_1 < param_2) {
      lVar3 = FUN_0239addc(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),
                           *(undefined8 *)
                            Method_DG_Tweening_Core_Extensions_Blendable<Quaternion,_Vector3,_QuaternionOptions>__
                          );
      lVar8 = *(long *)(param_3 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      if ((uVar2 & 1) == 0) {
        FUN_01ecaf44(lVar8);
        lVar8 = *(long *)(param_3 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
      iVar7 = *param_1;
      iVar1 = iVar7;
      if ((uVar2 & 1) == 0) {
        FUN_01ecaf44(lVar8);
        iVar1 = *param_1;
      }
      FUN_04038528(lVar3 + (iVar7 << 3),0xff,(long)(param_2 - iVar1),0);
    }
    *param_1 = param_2;
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar4 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_Core_Extensions_Blendable<Vector3,_Vector3[],_Vector3ArrayOptions>__
                            );
  uVar6 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_Core_Extensions_Blendable<Vector3,_Vector3,_VectorOptions>__
                            );
  FUN_034f3578(uVar4,uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_3);
}


