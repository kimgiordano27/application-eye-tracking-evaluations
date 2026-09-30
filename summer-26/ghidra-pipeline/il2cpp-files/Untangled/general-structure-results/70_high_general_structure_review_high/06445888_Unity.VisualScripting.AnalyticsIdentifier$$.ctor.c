/*
FUNCTION_NAME: Unity.VisualScripting.AnalyticsIdentifier$$.ctor
ENTRY_POINT: 06445888
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_16;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_AnalyticsIdentifier___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  int iVar16;
  undefined8 *unaff_x20;
  int iVar17;
  long unaff_x23;
  undefined8 uVar18;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long *in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  FUN_02f07e70(System_Func<IUnitPortDefinition,_bool>_TypeInfo);
  FUN_02f07e70(System_Func<IUnitPortDefinition,_string>_TypeInfo);
  FUN_02f07e70(System_Func<IUnitRelation,_bool>_TypeInfo);
  FUN_02f07e70(System_Func<InputControl,_bool>_TypeInfo);
  FUN_02f07e70(System_Func<InputDevice,_string>_TypeInfo);
  FUN_02f07e70(System_Func<InputEventPtr,_InputControl>_TypeInfo);
  FUN_02f07e70(System_Func<InputUpdateType,_bool>_TypeInfo);
  FUN_02f07e70(System_Func<InstanceHandle,_IInspector>_TypeInfo);
  FUN_02f07e70(System_Func<short,_short>_TypeInfo);
  FUN_02f07e70(System_Func<FusionGlobalScriptableObjectSourceAttribute,_int>_TypeInfo);
  FUN_02f07e70(System_Func<double,_object>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x978) = 1;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = (long *)0x0;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
    return;
  }
  uVar18 = FUN_03b538bc();
  lVar12 = *(long *)(unaff_x19 + 0x20);
  *(uint *)(unaff_x19 + 0x28) = (uint)(*(int *)(unaff_x19 + 0x28) == 0);
  puVar2 = System_EventHandler<ErrorEventArgs>_TypeInfo;
  if (lVar12 != 0) {
    iVar17 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar17) {
      FUN_05624da8(*(undefined8 *)(lVar12 + 0x10),0,iVar17,0);
    }
    lVar12 = *(long *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar8 = FUN_0643defc(uVar18,0);
    if (lVar12 != 0) {
      FUN_03de1e90(lVar12,uVar8,*(undefined8 *)(unaff_x19 + 0x20),
                   *(undefined8 *)System_Func<IUnitPortDefinition,_string>_TypeInfo);
      puVar7 = System_Func<short,_short>_TypeInfo;
      puVar6 = System_Func<InputDevice,_string>_TypeInfo;
      puVar5 = System_Func<IUnitRelation,_bool>_TypeInfo;
      puVar4 = System_Func<IUnitPort,_IEnumerable<IUnitConnection>>_TypeInfo;
      puVar3 = System_Func<IUnitOutputPort,_bool>_TypeInfo;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_03fd16fc(&stack0x00000100,*(long *)(unaff_x19 + 0x20),
                     *(undefined8 *)System_Func<InputDevice,_string>_TypeInfo);
        in_stack_000000a8 = in_stack_00000108;
        in_stack_000000a0 = in_stack_00000100;
        in_stack_000000b0 = in_stack_00000110;
        while (uVar9 = FUN_04df6d30(&stack0x000000a0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          if (in_stack_000000b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          *(undefined4 *)(in_stack_000000b0 + 2) = *(undefined4 *)(unaff_x19 + 0x28);
        }
        FUN_04df6d2c(&stack0x000000a0,*(undefined8 *)puVar3);
        FUN_03b52b1c();
        in_stack_000000c0 = 0;
        FUN_0643d80c(&stack0x000000c0,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_0642dbbc(in_stack_000000c0,0);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          FUN_03fd16fc(&stack0x00000100,*(long *)(unaff_x19 + 0x18),*(undefined8 *)puVar6);
          in_stack_000000a8 = in_stack_00000108;
          in_stack_000000a0 = in_stack_00000100;
          in_stack_000000b0 = in_stack_00000110;
          while (uVar9 = FUN_04df6d30(&stack0x000000a0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
            if (in_stack_000000b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if ((int)in_stack_000000b0[2] != *(int *)(unaff_x19 + 0x28)) {
              in_stack_000000e8 = unaff_x20[5];
              in_stack_000000e0 = unaff_x20[4];
              in_stack_000000f8 = unaff_x20[7];
              in_stack_000000f0 = unaff_x20[6];
              in_stack_000000c8 = unaff_x20[1];
              in_stack_000000c0 = *unaff_x20;
              in_stack_000000d8 = unaff_x20[3];
              in_stack_000000d0 = unaff_x20[2];
              (**(code **)(*in_stack_000000b0 + 0x1d8))
                        (uVar18,uVar8,in_stack_000000b0,&stack0x000000c0,
                         *(undefined8 *)(*in_stack_000000b0 + 0x1e0));
            }
          }
          FUN_04df6d2c(&stack0x000000a0,*(undefined8 *)puVar3);
          lVar12 = *(long *)(unaff_x19 + 0x18);
          if (lVar12 != 0) {
            iVar17 = *(int *)(lVar12 + 0x18);
            *(undefined4 *)(lVar12 + 0x18) = 0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (0 < iVar17) {
              FUN_05624da8(*(undefined8 *)(lVar12 + 0x10),0,iVar17,0);
            }
            lVar12 = *(long *)(unaff_x19 + 0x20);
            if (lVar12 != 0) {
              iVar17 = 0;
              do {
                puVar3 = System_Func<InstanceHandle,_IInspector>_TypeInfo;
                puVar2 = System_Func<IUnitPortDefinition,_bool>_TypeInfo;
                if (*(int *)(lVar12 + 0x18) <= iVar17) {
                  lVar12 = *(long *)(unaff_x19 + 0x30);
                  if (lVar12 != 0) {
                    iVar17 = *(int *)(lVar12 + 0x18);
                    if (iVar17 < 1) {
                      return;
                    }
                    iVar16 = 0;
                    goto LAB_06445c54;
                  }
                  break;
                }
                plVar10 = (long *)FUN_03fd09cc(lVar12,iVar17,*(undefined8 *)puVar7);
                if (plVar10 == (long *)0x0) break;
                in_stack_00000100 = *unaff_x20;
                in_stack_00000108 = unaff_x20[1];
                in_stack_00000110 = (long *)unaff_x20[2];
                in_stack_00000118 = unaff_x20[3];
                in_stack_00000120 = unaff_x20[4];
                in_stack_00000128 = unaff_x20[5];
                in_stack_00000130 = unaff_x20[6];
                in_stack_00000138 = unaff_x20[7];
                (**(code **)(*plVar10 + 0x1c8))
                          (uVar18,plVar10,&stack0x00000100,*(undefined8 *)(*plVar10 + 0x1d0));
                if (*(long *)(unaff_x19 + 0x20) == 0) break;
                lVar12 = *(long *)(unaff_x19 + 0x18);
                uVar8 = FUN_03fd09cc(*(long *)(unaff_x19 + 0x20),iVar17,*(undefined8 *)puVar7);
                if (lVar12 == 0) break;
                lVar13 = *(long *)(lVar12 + 0x10);
                lVar14 = *(long *)puVar5;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar13 == 0) break;
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                  thunk_FUN_02f411dc();
                }
                else {
                  FUN_03fd0c9c(lVar12,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                lVar12 = *(long *)(unaff_x19 + 0x20);
                iVar17 = iVar17 + 1;
              } while (lVar12 != 0);
            }
          }
        }
      }
    }
  }
  goto LAB_06445cd4;
LAB_06445c54:
  do {
    plVar10 = (long *)FUN_03fd09cc(lVar12,iVar16,*(undefined8 *)puVar3);
    if (plVar10 == (long *)0x0) break;
    lVar12 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06445cb4;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar2,0);
LAB_06445cb4:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
    iVar16 = iVar16 + 1;
    if (iVar16 == iVar17) {
      return;
    }
    lVar12 = *(long *)(unaff_x19 + 0x30);
  } while (lVar12 != 0);
LAB_06445cd4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


