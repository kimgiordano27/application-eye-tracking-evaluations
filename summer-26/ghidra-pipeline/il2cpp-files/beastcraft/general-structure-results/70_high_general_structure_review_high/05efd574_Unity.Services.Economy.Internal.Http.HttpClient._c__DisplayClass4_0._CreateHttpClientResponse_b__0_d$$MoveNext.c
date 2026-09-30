/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Http.HttpClient.<>c__DisplayClass4_0.<<CreateHttpClientResponse>b__0>d$$MoveNext
ENTRY_POINT: 05efd574
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05efdaac) */

void Unity_Services_Economy_Internal_Http_HttpClient_<>c__DisplayClass4_0_<<CreateHttpClientResponse>b__0>d__MoveNext
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  long in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((DAT_06e943b6 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_InputSystem_InputDevice_var);
    FUN_02e3ca1c(PTR_DAT_06ab5e90);
    FUN_02e3ca1c(PTR_DAT_06ab07f8);
    FUN_02e3ca1c(UnityEngine_InputSystem_Layouts_InputDeviceBuilder_var);
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
    FUN_02e3ca1c(PTR_DAT_06aaf0b8);
    FUN_02e3ca1c(UnityEngine_InputSystem_Layouts_InputDeviceMatcher_var);
    FUN_02e3ca1c(UnityEngine_UI_InputField_var);
    FUN_02e3ca1c(UnityEngine_InputSystem_InputInteractionContext_var);
    FUN_02e3ca1c(UnityEngine_InputSystem_InputProcessor_var);
    DAT_06e943b6 = 1;
  }
  puVar1 = PTR_DAT_06aaf0b8;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = (long *)0x0;
  if (param_3 != 0) {
    lVar3 = FUN_05eaedc0(param_3,*(undefined8 *)PTR_DAT_06ab5e90);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*(long *)puVar1);
    }
    if (DAT_06e939f3 == '\0') {
      FUN_02e3ca1c(PTR_DAT_06aaf0b8);
      DAT_06e939f3 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar4 = *(long *)puVar1;
    }
    lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x18) != '\0') {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (DAT_06e939f3 == '\0') {
          FUN_02e3ca1c(PTR_DAT_06aaf0b8);
          DAT_06e939f3 = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar4 = *(long *)puVar1;
        }
        if ((lVar3 == 0) || (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8), lVar4 == 0))
        goto LAB_05efdaa4;
        uVar5 = FUN_05dd97f0(lVar4,*(undefined8 *)(lVar3 + 0xd8),&stack0x00000028,&stack0x00000020,0
                            );
        if ((uVar5 & 1) != 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x40);
          uVar6 = FUN_05eafd40(param_1,0);
          if (param_2 == 0) goto LAB_05efdaa4;
          in_stack_00000018 =
               (long *)FUN_03a6b2d4(param_2,uVar11,&stack0x00000010,uVar6,
                                    *(undefined8 *)UnityEngine_InputSystem_InputProcessor_var,0x51,
                                    *(undefined8 *)
                                     UnityEngine_InputSystem_Layouts_InputDeviceMatcher_var);
          if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          *(undefined8 *)(in_stack_00000010 + 0x24) = in_stack_00000020;
          *(undefined8 *)(in_stack_00000010 + 0x10) = *(undefined8 *)(param_1 + 0xb8);
          thunk_FUN_02ee2be8();
          lVar3 = in_stack_00000010;
          auVar12 = FUN_05e2ced8(param_2,in_stack_00000028,0,0);
          plVar2 = in_stack_00000018;
          lVar4 = in_stack_00000010;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          *(undefined1 (*) [12])(lVar3 + 0x18) = auVar12;
          if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          *(undefined8 *)(in_stack_00000010 + 0x34) = param_5;
          *(undefined8 *)(in_stack_00000010 + 0x2c) = param_4;
          *(undefined8 *)(in_stack_00000010 + 0x3c) = param_6;
          *(undefined8 *)(in_stack_00000010 + 0x44) = param_7;
          puVar1 = PTR_DAT_06ab07f8;
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          lVar3 = *in_stack_00000018;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06ab07f8) {
                puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                goto LAB_05efd81c;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000018,*(long *)PTR_DAT_06ab07f8,4);
LAB_05efd81c:
          (*(code *)*puVar7)(plVar2,lVar4 + 0x18,2,puVar7[1]);
          plVar2 = in_stack_00000018;
          lVar3 = in_stack_00000010;
          if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          lVar9 = *in_stack_00000018;
          lVar4 = *(long *)puVar1;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar4) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05efd88c;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000018,lVar4,0);
LAB_05efd88c:
          (*(code *)*puVar7)(plVar2,lVar3 + 0x2c,1,puVar7[1]);
          plVar2 = in_stack_00000018;
          lVar3 = in_stack_00000010;
          if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          lVar9 = *in_stack_00000018;
          lVar4 = *(long *)puVar1;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar4) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05efd8fc;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000018,lVar4,0);
LAB_05efd8fc:
          (*(code *)*puVar7)(plVar2,lVar3 + 0x3c,1,puVar7[1]);
          plVar2 = in_stack_00000018;
          puVar1 = UnityEngine_InputSystem_InputInteractionContext_var;
          lVar3 = *(long *)UnityEngine_InputSystem_InputInteractionContext_var;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar4 = puVar7[1];
          if (lVar4 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar6 = *puVar7;
            lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_InputSystem_InputDevice_var);
            FUN_04b21638(lVar4,uVar6,*(undefined8 *)UnityEngine_UI_InputField_var,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar8 = lVar4;
            thunk_FUN_02ee2be8(plVar8,lVar4);
          }
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          lVar3 = *plVar2;
          lVar9 = *(long *)UnityEngine_InputSystem_Layouts_InputDeviceBuilder_var;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)(lVar9 + 0x20)) {
                lVar3 = lVar3 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_05efd9f4;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          lVar3 = FUN_02e759c0(plVar2);
LAB_05efd9f4:
          lVar3 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar3 + 8),lVar9);
          (**(code **)(lVar3 + 8))(plVar2,lVar4,lVar3);
          plVar2 = in_stack_00000018;
          if (in_stack_00000018 != (long *)0x0) {
            lVar3 = *in_stack_00000018;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a2ef10) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_05efda78;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000018,*(long *)PTR_DAT_06a2ef10,0);
LAB_05efda78:
            (*(code *)*puVar7)(plVar2,puVar7[1]);
          }
        }
      }
      return;
    }
  }
LAB_05efdaa4:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


