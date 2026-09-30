/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 0368612c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 113
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_foveation_hits_2;frame_or_lifecycle_behavior;functionality_foveated_rendering
*/


undefined8 OVRPlugin__set_fixedFoveatedRenderingLevel(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong in_x9;
  ulong uVar4;
  int *piVar5;
  int *in_x10;
  long *unaff_x19;
  long *plVar6;
  long *unaff_x21;
  undefined1 auVar7 [16];
  long in_stack_00000018;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_03686160;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01ecb238(unaff_x19,param_3,0);
LAB_03686160:
      uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
      *(undefined8 *)(in_stack_00000018 + 0x40) = uVar2;
      thunk_FUN_01f51358();
      plVar6 = *(long **)(in_stack_00000018 + 0x40);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_036861dc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x21,0);
LAB_036861dc:
      uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      if ((uVar4 & 1) != 0) {
        plVar6 = *(long **)(in_stack_00000018 + 0x40);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_03686268;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03686250;
      }
      FUN_03686358();
      *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
      plVar6 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0368607c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x21,0);
LAB_0368607c:
      uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      if ((uVar4 & 1) == 0) {
        FUN_03686408();
        *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
        thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38),0);
        return 0;
      }
      plVar6 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_17__) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_036860f0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_17__,0);
LAB_036860f0:
      lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_x19 = (long *)FUN_0367da44();
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      param_1 = *unaff_x19;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)Method_OVRControllerTest_<>c_<Start>b__4_30__;
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_03686250:
    if (*(long *)(piVar5 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_4__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03686284;
    }
  }
LAB_03686268:
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_4__,0);
LAB_03686284:
  auVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar7;
  thunk_FUN_01f51358(in_stack_00000018 + 0x20,0);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


