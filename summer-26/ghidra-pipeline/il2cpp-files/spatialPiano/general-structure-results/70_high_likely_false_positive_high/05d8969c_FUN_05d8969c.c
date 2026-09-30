/*
FUNCTION_NAME: FUN_05d8969c
ENTRY_POINT: 05d8969c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05d8a0b8) */
/* WARNING: Removing unreachable block (ram,0x05d8993c) */
/* WARNING: Removing unreachable block (ram,0x05d89c88) */
/* WARNING: Removing unreachable block (ram,0x05d8a0dc) */
/* WARNING: Removing unreachable block (ram,0x05d8a08c) */

void FUN_05d8969c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x28;
  undefined8 unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_000000a0;
  long in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  long *in_stack_000000d8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  
  (*(code *)*param_1)();
  plVar3 = in_stack_000000d8;
  if (in_stack_000000d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar8 = *in_stack_00000018;
  *(undefined8 *)(in_stack_000000d0 + 0x18) = in_stack_00000018[1];
  *(undefined8 *)(in_stack_000000d0 + 0x10) = uVar8;
  if (in_stack_000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *in_stack_000000d8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
         ) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05d89724;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02f421d0(in_stack_000000d8,
                        *(long *)
                         Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                        ,0);
LAB_05d89724:
  (*(code *)*puVar2)(plVar3,in_stack_00000018,1,puVar2[1]);
  plVar3 = in_stack_000000d8;
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  _in_stack_000000c0 = FUN_05d6df38();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
         ) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05d897a8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02f421d0(plVar3,*(long *)
                                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                        ,0);
LAB_05d897a8:
  (*(code *)*puVar2)(plVar3,&stack0x000000c0,1,puVar2[1]);
  plVar3 = in_stack_000000d8;
  if (in_stack_000000d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *unaff_x28;
  *(undefined8 *)(in_stack_000000d0 + 0x40) = unaff_x29;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *unaff_x28;
  }
  puVar2 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar2[6];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar2 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__
                              );
    FUN_04237db8(lVar7,uVar8,
                 *(undefined8 *)Method_Oculus_Interaction_PointableCanvasModule_<Start>b__40_0__,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x30) = lVar7;
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  lVar9 = *(long *)Method_Oculus_Interaction_Locomotion_PlayerLocomotor_MovePlayer__;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_05d8989c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = FUN_02f421d0(plVar3);
LAB_05d8989c:
  lVar4 = thunk_FUN_02f2742c(*(undefined8 *)(lVar4 + 8),lVar9);
  (**(code **)(lVar4 + 8))(plVar3,lVar7,lVar4);
  plVar3 = in_stack_000000d8;
  if (in_stack_000000d8 != (long *)0x0) {
    lVar4 = *in_stack_000000d8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05d89924;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(in_stack_000000d8,*(long *)PTR_DAT_067c91b0,0);
LAB_05d89924:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  FUN_034dac00(0x24,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
  plVar3 = (long *)FUN_03523990();
  uVar1 = in_stack_000000f8;
  uVar8 = in_stack_000000f0;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x19) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05d899f0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0(plVar3,*unaff_x19,0);
LAB_05d899f0:
  (*(code *)*puVar2)(plVar3,uVar8,uVar1,0,2,puVar2[1]);
  if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(undefined8 *)(in_stack_000000b0 + 0x20) = unaff_x22;
  *(undefined8 *)(in_stack_000000b0 + 0x28) = unaff_x23;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x19) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_05d89a70;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0(plVar3,*unaff_x19,4);
LAB_05d89a70:
  (*(code *)*puVar2)(plVar3);
  if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(undefined8 *)(in_stack_000000b0 + 0x18) = in_stack_00000208;
  *(undefined8 *)(in_stack_000000b0 + 0x10) = in_stack_00000200;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
         ) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05d89af4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02f421d0(plVar3,*(long *)
                                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                        ,0);
LAB_05d89af4:
  (*(code *)*puVar2)(plVar3,&stack0x00000200,1,puVar2[1]);
  if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *unaff_x28;
  *(undefined8 *)(in_stack_000000b0 + 0x40) = unaff_x29;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *unaff_x28;
  }
  puVar2 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar2[7];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar2 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__
                              );
    FUN_04237db8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableHoverEnter__
                 ,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x38) = lVar7;
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  lVar9 = *(long *)Method_Oculus_Interaction_Locomotion_PlayerLocomotor_MovePlayer__;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_05d89be8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = FUN_02f421d0(plVar3);
LAB_05d89be8:
  lVar4 = thunk_FUN_02f2742c(*(undefined8 *)(lVar4 + 8),lVar9);
  (**(code **)(lVar4 + 8))(plVar3,lVar7,lVar4);
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05d89c70;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)PTR_DAT_067c91b0,0);
LAB_05d89c70:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  FUN_034dac00(0x25,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
  plVar3 = (long *)FUN_03523990();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
         ) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_05d89d44;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02f421d0(plVar3,*(long *)
                                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                        ,0xc);
LAB_05d89d44:
  (*(code *)*puVar2)(plVar3,1,puVar2[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  uVar8 = *in_stack_00000010;
  uVar1 = in_stack_00000010[1];
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x19) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05d89db0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0(plVar3,*unaff_x19,0);
LAB_05d89db0:
  (*(code *)*puVar2)(plVar3,uVar8,uVar1,0,2,puVar2[1]);
  if (in_stack_000000a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar8 = *in_stack_00000018;
  *(undefined8 *)(in_stack_000000a0 + 0x18) = in_stack_00000018[1];
  *(undefined8 *)(in_stack_000000a0 + 0x10) = uVar8;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
         ) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05d89e3c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02f421d0(plVar3,*(long *)
                                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                        ,0);
LAB_05d89e3c:
  (*(code *)*puVar2)(plVar3,in_stack_00000018,1,puVar2[1]);
  if (in_stack_000000a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(undefined8 *)(in_stack_000000a0 + 0x38) = in_stack_000000f8;
  *(undefined8 *)(in_stack_000000a0 + 0x30) = in_stack_000000f0;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
         ) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05d89ebc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02f421d0(plVar3,*(long *)
                                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                        ,0);
LAB_05d89ebc:
  (*(code *)*puVar2)(plVar3,&stack0x000000f0,1,puVar2[1]);
  if (in_stack_000000a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *unaff_x28;
  *(undefined8 *)(in_stack_000000a0 + 0x40) = unaff_x29;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *unaff_x28;
  }
  puVar2 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar2[8];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar2 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__
                              );
    FUN_04237db8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableHoverExit__
                 ,0);
    *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x40) = lVar7;
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar3;
  lVar9 = *(long *)Method_Oculus_Interaction_Locomotion_PlayerLocomotor_MovePlayer__;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_05d89fb0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = FUN_02f421d0(plVar3);
LAB_05d89fb0:
  lVar4 = thunk_FUN_02f2742c(*(undefined8 *)(lVar4 + 8),lVar9);
  (**(code **)(lVar4 + 8))(plVar3,lVar7,lVar4);
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05d8a034;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)PTR_DAT_067c91b0,0);
LAB_05d8a034:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  return;
}


