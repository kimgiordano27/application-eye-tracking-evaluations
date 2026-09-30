/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_32
ENTRY_POINT: 03e21de0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_32(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long *plVar7;
  long *unaff_x20;
  long unaff_x21;
  long in_stack_00000018;
  
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == **(long **)(in_x10 + 0xe08)) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03e21e30;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03e21e30:
  uVar5 = (*(code *)*puVar1)();
  if ((uVar5 & 1) == 0) {
    FUN_03e22348();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(unaff_x21 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = FUN_02728cf4(*(long *)(unaff_x21 + 0x50),*(undefined8 *)PTR_DAT_04579900);
    *(undefined8 *)(in_stack_00000018 + 0x48) = uVar2;
    thunk_FUN_01f51358();
    plVar7 = *(long **)(in_stack_00000018 + 0x48);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffa;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e21f40;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03e21f40:
    uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      FUN_03e223f8();
      *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x48),0);
      return 0;
    }
    plVar7 = *(long **)(in_stack_00000018 + 0x48);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798d8) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e2207c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798d8,0);
LAB_03e2207c:
    lVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
    thunk_FUN_01f51358();
    uVar4 = 4;
  }
  else {
    plVar7 = *(long **)(in_stack_00000018 + 0x40);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_045798e8) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_38;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045798e8,0);
Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_38:
    lVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
    thunk_FUN_01f51358();
    uVar4 = 3;
  }
  *(undefined4 *)(in_stack_00000018 + 0x10) = uVar4;
  return 1;
}


