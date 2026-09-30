/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-InputControlLayout.ControlItem>$$GetObjectData
ENTRY_POINT: 02a9ff84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Collections_Generic_Dictionary<object,_InputControlLayout_ControlItem>__GetObjectData(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w8;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar9 [16];
  long in_stack_00000018;
  long in_stack_00000028;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (in_w8 == 1) goto LAB_02aa01fc;
  if (in_w8 != 0) {
    return 0;
  }
  plVar8 = *(long **)(unaff_x20 + 0x28);
  *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02aa0010;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02aa0010:
  uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  *(undefined8 *)(in_stack_00000028 + 0x48) = uVar3;
  thunk_FUN_01f51358();
  *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffd;
  do {
    plVar8 = *(long **)(in_stack_00000028 + 0x48);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar8;
    lVar4 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02aa00a4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02aa00a4:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      FUN_02aa03f8();
      *(undefined8 *)(in_stack_00000028 + 0x48) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x48),0);
      return 0;
    }
    plVar8 = *(long **)(in_stack_00000028 + 0x48);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02aa0130;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02aa0130:
    auVar9 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    lVar4 = *(long *)(in_stack_00000028 + 0x38);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = (long *)(**(code **)(lVar4 + 0x18))
                               (*(undefined8 *)(lVar4 + 0x40),auVar9._0_8_,auVar9._8_8_,
                                *(undefined8 *)(lVar4 + 0x28));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x50);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02aa01dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02aa01dc:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    *(undefined8 *)(in_stack_00000028 + 0x50) = uVar3;
    thunk_FUN_01f51358();
    unaff_x20 = in_stack_00000028;
LAB_02aa01fc:
    plVar8 = *(long **)(unaff_x20 + 0x50);
    *(undefined4 *)(unaff_x20 + 0x10) = 0xfffffffc;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar8;
    lVar4 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02aa0258;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02aa0258:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(in_stack_00000028 + 0x50);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_02aa02fc;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    FUN_02aa04a8();
    *(undefined8 *)(in_stack_00000028 + 0x50) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x50),0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == lVar4) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02aa0318;
    }
  }
LAB_02aa02fc:
  puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02aa0318:
  uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  *(undefined8 *)(in_stack_00000028 + 0x18) = uVar3;
  thunk_FUN_01f51358();
  *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
  return 1;
}


