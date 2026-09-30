/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<UIVertex>$$System.Collections.IList.Contains
ENTRY_POINT: 0257a51c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_ObjectModel_ReadOnlyCollection<UIVertex>__System_Collections_IList_Contains(void)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint in_w9;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long *plVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000098;
  
  do {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar6 = *(long **)(in_x10 + (long)(int)in_w9 * 8 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_System_DateTime_System_IConvertible_ToBoolean__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0257a580;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)Method_System_DateTime_System_IConvertible_ToBoolean__,0);
LAB_0257a580:
    uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    *(undefined8 *)(in_stack_00000098 + 0x60) = uVar2;
    thunk_FUN_01f51358();
    plVar6 = *(long **)(in_stack_00000098 + 0x60);
    *(undefined4 *)(in_stack_00000098 + 0x10) = 0xfffffffd;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_0257a604;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
FUN_0257a604:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar4 & 1) != 0) {
      plVar6 = *(long **)(in_stack_00000098 + 0x60);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_0257a698;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    FUN_0257a798();
    *(undefined8 *)(in_stack_00000098 + 0x60) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000098 + 0x60),0);
    in_w9 = *(int *)(in_stack_00000098 + 0x58) + 1;
    *(uint *)(in_stack_00000098 + 0x58) = in_w9;
    plVar6 = (long *)(in_stack_00000098 + 0x50);
    in_x10 = *plVar6;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    in_CY = *(uint *)(in_x10 + 0x18) <= in_w9;
    if ((int)*(uint *)(in_x10 + 0x18) <= (int)in_w9) {
      *plVar6 = 0;
      thunk_FUN_01f51358(plVar6,0);
      return 0;
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)Method_System_DateTime_IsLeapYear__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0257a6b4;
    }
  }
LAB_0257a698:
  puVar1 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)Method_System_DateTime_IsLeapYear__,0);
LAB_0257a6b4:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
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


