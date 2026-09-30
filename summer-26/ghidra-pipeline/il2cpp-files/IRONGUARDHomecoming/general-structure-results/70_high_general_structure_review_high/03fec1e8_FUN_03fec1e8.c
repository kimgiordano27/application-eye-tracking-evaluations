/*
FUNCTION_NAME: FUN_03fec1e8
ENTRY_POINT: 03fec1e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_03fec1e8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar4 = PTR_DAT_04584de0;
  puVar3 = PTR_DAT_04583b00;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_0483bba0 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04583b00);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<object>__);
    thunk_FUN_01efb3a4(PTR_DAT_04584de8);
    thunk_FUN_01efb3a4(PTR_DAT_04582038);
    thunk_FUN_01efb3a4(PTR_DAT_04584df0);
    thunk_FUN_01efb3a4(PTR_DAT_04584df8);
    thunk_FUN_01efb3a4(PTR_DAT_04584de0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<SplineKnotIndex>__);
    thunk_FUN_01efb3a4(PTR_DAT_04584e00);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Read__);
    thunk_FUN_01efb3a4(PTR_DAT_04584e08);
    thunk_FUN_01efb3a4(PTR_DAT_04584e10);
    thunk_FUN_01efb3a4(PTR_DAT_04584e18);
    DAT_0483bba0 = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Read__;
  FUN_02dfbefc(param_1,*(undefined8 *)puVar3);
  uVar8 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_03579868(uVar8,0);
  lVar6 = FUN_03fe4c98(param_1,uVar8,*(undefined8 *)puVar2);
  plVar9 = param_1 + 0x16;
  *plVar9 = lVar6;
  thunk_FUN_01f51358(plVar9,lVar6);
  if (*plVar9 != 0) {
    FUN_03fe209c(*plVar9,0,0);
    puVar3 = PTR_DAT_04584e10;
    puVar1 = PTR_DAT_04582038;
    if (*plVar9 != 0) {
      FUN_03fca980(*plVar9,0);
      uVar8 = FUN_03579868(*(undefined8 *)puVar1,0);
      lVar6 = FUN_03fe4c98(param_1,uVar8,*(undefined8 *)puVar3);
      plVar9 = param_1 + 0x15;
      *plVar9 = lVar6;
      thunk_FUN_01f51358(plVar9,lVar6);
      if (*plVar9 != 0) {
        FUN_03fe209c(*plVar9,0,0);
        iVar5 = (**(code **)(*param_1 + 0x6e8))(param_1,*(undefined8 *)(*param_1 + 0x6f0));
        if (iVar5 == 0) {
          return;
        }
        if (iVar5 == 2) {
          uVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04584de8);
          FUN_02e6cdf0(uVar8,param_1,*(undefined8 *)PTR_DAT_04584df8,0);
          lVar6 = FUN_02444db4(param_1,*(undefined8 *)PTR_DAT_04584e18,uVar8,
                               *(undefined8 *)PTR_DAT_04584e00);
          param_1 = param_1 + 0x18;
          *param_1 = lVar6;
        }
        else {
          if (iVar5 != 1) {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                              );
            uVar8 = thunk_FUN_01f117cc();
            FUN_034f7d58(uVar8,0);
            uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04584e20);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar8,uVar7);
          }
          uVar8 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_ToList<object>__);
          FUN_02e6ca9c(uVar8,param_1,*(undefined8 *)PTR_DAT_04584df0,0);
          lVar6 = FUN_02444ca8(param_1,*(undefined8 *)PTR_DAT_04584e08,uVar8,
                               *(undefined8 *)
                                Method_System_Linq_Enumerable_ToList<SplineKnotIndex>__);
          param_1 = param_1 + 0x17;
          *param_1 = lVar6;
        }
        thunk_FUN_01f51358(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


