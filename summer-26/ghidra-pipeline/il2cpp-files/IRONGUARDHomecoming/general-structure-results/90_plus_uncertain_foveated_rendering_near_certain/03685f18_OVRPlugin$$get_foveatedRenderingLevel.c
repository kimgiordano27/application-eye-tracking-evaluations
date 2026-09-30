/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 03685f18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 203
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_foveation_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  undefined1 auVar9 [16];
  long in_stack_00000018;
  
  thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_4__);
  thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_17__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  *(undefined1 *)(unaff_x19 + 0xe7b) = 1;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(unaff_x20 + 0x10) == 1) goto OVRPlugin__get_useDynamicFoveatedRendering;
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
  if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x30);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar8 = *(long **)(lVar4 + 0x40);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03685fd8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__,0);
LAB_03685fd8:
  uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  *(undefined8 *)(in_stack_00000018 + 0x38) = uVar3;
  thunk_FUN_01f51358();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  do {
    plVar8 = *(long **)(in_stack_00000018 + 0x38);
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
          goto LAB_0368607c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_0368607c:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      FUN_03686408();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38),0);
      return 0;
    }
    plVar8 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_17__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_036860f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_17__,0);
LAB_036860f0:
    lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = (long *)FUN_0367da44();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_30__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03686160;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_30__,0);
LAB_03686160:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    *(undefined8 *)(in_stack_00000018 + 0x40) = uVar3;
    thunk_FUN_01f51358();
    unaff_x20 = in_stack_00000018;
OVRPlugin__get_useDynamicFoveatedRendering:
    plVar8 = *(long **)(unaff_x20 + 0x40);
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
          goto LAB_036861dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_036861dc:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_03686268;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    FUN_03686358();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_4__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03686284;
    }
  }
LAB_03686268:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_4__,0);
LAB_03686284:
  auVar9 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar9;
  thunk_FUN_01f51358(in_stack_00000018 + 0x20,0);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


