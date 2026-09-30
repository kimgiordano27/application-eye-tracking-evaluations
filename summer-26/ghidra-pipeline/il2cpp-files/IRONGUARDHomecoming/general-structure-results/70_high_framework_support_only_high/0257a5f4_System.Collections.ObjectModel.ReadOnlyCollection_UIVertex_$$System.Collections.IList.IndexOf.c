/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<UIVertex>$$System.Collections.IList.IndexOf
ENTRY_POINT: 0257a5f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_ObjectModel_ReadOnlyCollection<UIVertex>__System_Collections_IList_IndexOf
          (undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000098;
  
FUN_0257a604:
  uVar4 = (*(code *)*param_1)(unaff_x19,param_1[1]);
  if ((uVar4 & 1) == 0) {
    FUN_0257a798();
    *(undefined8 *)(in_stack_00000098 + 0x60) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000098 + 0x60),0);
    uVar1 = *(int *)(in_stack_00000098 + 0x58) + 1;
    *(uint *)(in_stack_00000098 + 0x58) = uVar1;
    plVar5 = (long *)(in_stack_00000098 + 0x50);
    lVar6 = *plVar5;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar1) {
      *plVar5 = 0;
      thunk_FUN_01f51358(plVar5,0);
      return 0;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar5 = *(long **)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_System_DateTime_System_IConvertible_ToBoolean__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0257a580;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)Method_System_DateTime_System_IConvertible_ToBoolean__,0);
LAB_0257a580:
    uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
    *(undefined8 *)(in_stack_00000098 + 0x60) = uVar3;
    thunk_FUN_01f51358();
    unaff_x19 = *(long **)(in_stack_00000098 + 0x60);
    *(undefined4 *)(in_stack_00000098 + 0x10) = 0xfffffffd;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          param_1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto FUN_0257a604;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)
              FUN_01ecb238(unaff_x19,
                           *(long *)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                           ,0);
    goto FUN_0257a604;
  }
  plVar5 = *(long **)(in_stack_00000098 + 0x60);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar5;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Method_System_DateTime_IsLeapYear__) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0257a6b4;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)Method_System_DateTime_IsLeapYear__,0);
LAB_0257a6b4:
  (*(code *)*puVar2)(plVar5,puVar2[1]);
  *(undefined4 *)(in_stack_00000098 + 0x44) = in_stack_00000030;
  *(undefined8 *)(in_stack_00000098 + 0x3c) = in_stack_00000028;
  *(undefined8 *)(in_stack_00000098 + 0x34) = in_stack_00000020;
  *(undefined8 *)(in_stack_00000098 + 0x2c) = in_stack_00000018;
  *(undefined8 *)(in_stack_00000098 + 0x24) = in_stack_00000010;
  *(undefined8 *)(in_stack_00000098 + 0x1c) = in_stack_00000008;
  *(undefined8 *)(in_stack_00000098 + 0x14) = in_stack_00000000;
  *(undefined4 *)(in_stack_00000098 + 0x10) = 1;
  return 1;
}


