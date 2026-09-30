/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager.<>c__DisplayClass4_0$$<ProcessType>b__0
ENTRY_POINT: 028ebbb8
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_0__<ProcessType>b__0
               (long param_1,long param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong in_x9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *pcVar9;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000048;
  
  uVar7 = **(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x288);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_0185daa4(param_1);
  }
  in_stack_00000030 = &stack0x00000020;
                    /* try { // try from 028ebbf4 to 029ebc3f has its CatchHandler @ 028ebbf4
                       catch() { ... } // from try @ 028ebbf4 with catch @ 028ebbf4
                       catch() { ... } // from try @ 028ebcb4 with catch @ 028ebbf4
                       catch() { ... } // from try @ 028ebce4 with catch @ 028ebbf4
                       catch() { ... } // from try @ 028ebd64 with catch @ 028ebbf4 */
  in_stack_00000020 = unaff_x24;
  in_stack_00000028 = unaff_x23;
  (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x288) + 0x10))(uVar7);
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
  if (lVar3 == 0) goto LAB_028ec144;
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x19;
  uVar1 = unaff_x19[1];
  uVar2 = *(ushort *)(lVar6 + 0x135);
                    /* try { // try from 028ebc40 to 029ebcb3 has its CatchHandler @ 028ebcb4 */
  lVar4 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
    uVar2 = *(ushort *)(*unaff_x20 + 0x135);
    lVar4 = *unaff_x20;
  }
  uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x290);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_0185daa4(lVar4);
  }
  in_stack_00000038 = &stack0x00000018;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x290);
  in_stack_00000030 = &stack0x00000020;
  in_stack_00000020 = uVar7;
  in_stack_00000028 = uVar1;
  (**(code **)(lVar4 + 0x10))(uVar8,lVar4,lVar3,&stack0x00000030,(long)&stack0x00000048 + 4);
  if (in_stack_00000048._4_1_ != '\0') {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028ebc40 with catch @ 028ebcb4
                       try { // try from 028ebcb4 to 029ebccb has its CatchHandler @ 028ebbf4 */
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                    /* try { // try from 028ebccc to 029ebce3 has its CatchHandler @ 028ebd5c */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 028ebce4 to 029ebd4b has its CatchHandler @ 028ebbf4 */
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
    if (lVar3 == 0) goto LAB_028ec144;
    lVar6 = *unaff_x20;
    uVar7 = *unaff_x19;
    uVar1 = unaff_x19[1];
    uVar2 = *(ushort *)(lVar6 + 0x135);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
      uVar2 = *(ushort *)(*unaff_x20 + 0x135);
      lVar4 = *unaff_x20;
    }
                    /* try { // try from 028ebd4c to 029ebd5b has its CatchHandler @ 028ebd5c */
    uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x2a0);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_0185daa4(lVar4);
                    /* catch() { ... } // from try @ 028ebccc with catch @ 028ebd5c
                       catch() { ... } // from try @ 028ebd4c with catch @ 028ebd5c */
    }
                    /* try { // try from 028ebd60 to 029ebd63 has its CatchHandler @ 028ebd6c */
                    /* try { // try from 028ebd64 to 029ebd6f has its CatchHandler @ 028ebbf4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028ebd60 with catch @ 028ebd6c
                        */
                    /* try { // try from 028ebd70 to 029ec073 has its CatchHandler @ 028ebd70
                       catch() { ... } // from try @ 028ebd70 with catch @ 028ebd70
                       catch() { ... } // from try @ 028ec140 with catch @ 028ebd70
                       catch() { ... } // from try @ 028ec208 with catch @ 028ebd70
                       catch() { ... } // from try @ 028ec2b4 with catch @ 028ebd70 */
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x2a0);
    in_stack_00000030 = &stack0x00000020;
    in_stack_00000020 = uVar7;
    in_stack_00000028 = uVar1;
    (**(code **)(lVar4 + 0x10))(uVar8,lVar4,lVar3,&stack0x00000030,(long)&stack0x00000048 + 4);
    lVar3 = in_stack_00000018;
    if (in_stack_00000018 == 0) goto LAB_028ec144;
    lVar6 = *unaff_x20;
    uVar7 = *unaff_x19;
    uVar1 = unaff_x19[1];
    uVar2 = *(ushort *)(lVar6 + 0x135);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
      uVar2 = *(ushort *)(*unaff_x20 + 0x135);
      lVar4 = *unaff_x20;
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x2b0);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_0185daa4(lVar4);
    }
    (*pcVar9)(lVar3,uVar7,uVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b0));
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
  if (lVar3 == 0) goto LAB_028ec144;
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x19;
  uVar1 = unaff_x19[1];
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar4 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
    uVar2 = *(ushort *)(*unaff_x20 + 0x135);
    lVar4 = *unaff_x20;
  }
  uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x2b8);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_0185daa4(lVar4);
  }
  in_stack_00000038 = &stack0x00000010;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x2b8);
  in_stack_00000030 = &stack0x00000020;
  in_stack_00000020 = uVar7;
  in_stack_00000028 = uVar1;
  (**(code **)(lVar4 + 0x10))(uVar8,lVar4,lVar3,&stack0x00000030,(long)&stack0x00000048 + 4);
  if (in_stack_00000048._4_1_ != '\0') {
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
    if (lVar3 == 0) goto LAB_028ec144;
    lVar6 = *unaff_x20;
    uVar7 = *unaff_x19;
    uVar1 = unaff_x19[1];
    uVar2 = *(ushort *)(lVar6 + 0x135);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
      uVar2 = *(ushort *)(*unaff_x20 + 0x135);
      lVar4 = *unaff_x20;
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x2c0);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_0185daa4(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x2c0);
    in_stack_00000030 = &stack0x00000020;
    in_stack_00000020 = uVar7;
    in_stack_00000028 = uVar1;
    (**(code **)(lVar4 + 0x10))(uVar8,lVar4,lVar3,&stack0x00000030,(long)&stack0x00000048 + 4);
    lVar3 = in_stack_00000010;
    if (in_stack_00000010 == 0) goto LAB_028ec144;
    lVar6 = *unaff_x20;
    uVar7 = *unaff_x19;
    uVar1 = unaff_x19[1];
    uVar2 = *(ushort *)(lVar6 + 0x135);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
      uVar2 = *(ushort *)(*unaff_x20 + 0x135);
      lVar4 = *unaff_x20;
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x138);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_0185daa4(lVar4);
    }
    (*pcVar9)(lVar3,uVar7,uVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x138));
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
  if (lVar3 == 0) {
LAB_028ec144:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar5 = FUN_021722c0(lVar3,*unaff_x19,unaff_x19[1],&stack0x00000008,
                       *(undefined8 *)PTR_DAT_037fb6a8);
  if ((uVar5 & 1) != 0) {
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
    if ((lVar3 == 0) ||
       (FUN_02171ca8(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
       in_stack_00000008 == 0)) goto LAB_028ec144;
    (**(code **)(in_stack_00000008 + 0x18))
              (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
               *(undefined8 *)(in_stack_00000008 + 0x28));
  }
  return;
}


