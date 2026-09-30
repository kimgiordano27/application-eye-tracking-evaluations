/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 036860e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 113
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_foveation_hits_2;frame_or_lifecycle_behavior;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_fixedFoveatedRenderingLevel(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x21;
  undefined1 auVar7 [16];
  long in_stack_00000018;
  
LAB_036860f0:
  do {
    lVar1 = (*(code *)*param_1)(unaff_x19,param_1[1]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar2 = (long *)FUN_0367da44();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_30__) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03686160;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_30__,0);
LAB_03686160:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    *(undefined8 *)(in_stack_00000018 + 0x40) = uVar4;
    thunk_FUN_01f51358();
    plVar2 = *(long **)(in_stack_00000018 + 0x40);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_036861dc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x21,0);
LAB_036861dc:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar5 & 1) != 0) {
      plVar2 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar1 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 == 0) goto LAB_03686268;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    FUN_03686358();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
    plVar2 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0368607c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x21,0);
LAB_0368607c:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      FUN_03686408();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38),0);
      return 0;
    }
    unaff_x19 = *(long **)(in_stack_00000018 + 0x38);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_17__) {
          param_1 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_036860f0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    param_1 = (undefined8 *)
              FUN_01ecb238(unaff_x19,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_17__,0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_4__) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03686284;
    }
  }
LAB_03686268:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_4__,0);
LAB_03686284:
  auVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar7;
  thunk_FUN_01f51358(in_stack_00000018 + 0x20,0);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


