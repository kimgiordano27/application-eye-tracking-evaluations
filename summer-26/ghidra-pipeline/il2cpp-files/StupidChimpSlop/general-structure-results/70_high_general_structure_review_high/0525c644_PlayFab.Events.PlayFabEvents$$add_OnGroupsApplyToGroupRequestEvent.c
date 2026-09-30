/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGroupsApplyToGroupRequestEvent
ENTRY_POINT: 0525c644
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0525c7bc) */
/* WARNING: Removing unreachable block (ram,0x0525ca14) */
/* WARNING: Removing unreachable block (ram,0x0525c8dc) */
/* WARNING: Removing unreachable block (ram,0x0525ca2c) */
/* WARNING: Removing unreachable block (ram,0x0525c830) */

void PlayFab_Events_PlayFabEvents__add_OnGroupsApplyToGroupRequestEvent
               (undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int unaff_w19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 *unaff_x21;
  long *plVar11;
  long unaff_x27;
  undefined8 *puVar12;
  long unaff_x28;
  undefined8 *puVar13;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined1 uStack0000000000000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  puVar12 = *(undefined8 **)(unaff_x27 + 0x170);
  puVar13 = *(undefined8 **)(unaff_x28 + 0x410);
  FUN_047cea60(&stack0x00000028,param_2,*param_1);
  in_stack_000000c0 = in_stack_00000048;
  unaff_x21[1] = in_stack_00000030;
  *unaff_x21 = in_stack_00000028;
  unaff_x21[3] = in_stack_00000040;
  unaff_x21[2] = in_stack_00000038;
                    /* try { // try from 0525c680 to 0535c6a7 has its CatchHandler @ 0525c870 */
  while (uVar3 = FUN_04a12944(&stack0x000000a0,
                              *(undefined8 *)
                               System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo),
        lVar8 = in_stack_000000b8, (uVar3 & 1) != 0) {
    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066480b0);
    FUN_03610fb4(lVar4,*(undefined8 *)PTR_DAT_066480a8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_0479a870(&stack0x00000028,lVar8,
                 *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
    in_stack_00000070 = in_stack_00000028;
                    /* try { // try from 0525c6e4 to 0535c70b has its CatchHandler @ 0525c86c */
    in_stack_00000028 = 0;
    in_stack_00000078 = in_stack_00000030;
    in_stack_00000088 = in_stack_00000040;
    _uStack0000000000000080 = in_stack_00000038;
    in_stack_00000090 = in_stack_00000048;
    in_stack_00000030 = &stack0x00000070;
LAB_0525c6f0:
    uVar3 = FUN_04a08dd8(&stack0x00000070,*unaff_x29);
    lVar7 = in_stack_00000088;
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(int *)(in_stack_00000088 + 0x98) == unaff_w19) {
        lVar6 = *(long *)(in_stack_00000088 + 0x48);
        uVar2 = uStack0000000000000080;
        uVar3 = _uStack0000000000000080 & 0xff;
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        }
        FUN_05254740(lVar7);
        if (lVar4 != 0) {
          lVar7 = *(long *)(lVar4 + 0x10);
          lVar6 = *unaff_x20;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined1 *)(lVar7 + (int)uVar1 + 0x20) = uVar2;
            }
            else {
              FUN_03611844(lVar4,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0525c6f0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_0525c6f0;
    }
    FUN_04a08efc(&stack0x00000070,*(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo)
    ;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_036122c4(&stack0x00000028,lVar4,
                 *(undefined8 *)UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000028 = 0;
    in_stack_00000058 = in_stack_00000030;
    in_stack_00000060 = in_stack_00000038;
    in_stack_00000030 = &stack0x00000050;
    while (uVar3 = FUN_049b0478(&stack0x00000050,*puVar12), (uVar3 & 1) != 0) {
      FUN_0479b8e4(lVar8,in_stack_00000060 & 0xff,*puVar13);
    }
    FUN_049b0474(&stack0x00000050,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                );
  }
  FUN_04a12a68(&stack0x000000a0,
               *(undefined8 *)System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
  plVar11 = *(long **)(in_stack_00000010 + 0x18);
  uVar5 = FUN_0524ff40(in_stack_00000010,unaff_w19);
  uVar5 = FUN_04e80678(*(undefined8 *)
                        Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_TypeInfo,
                       uVar5,*(undefined8 *)
                              Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo
                       ,0);
  lVar4 = *(long *)PTR_DAT_06648110;
  lVar8 = *(long *)(lVar4 + 0x38);
  if (lVar8 == 0) {
    FUN_02d87268(lVar4);
    lVar8 = *(long *)(lVar4 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar8 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar4 = *plVar11;
  uVar10 = **(undefined8 **)(lVar8 + 0xb8);
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0664b728) {
        puVar12 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0525c9d8;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar12 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_0664b728,1);
LAB_0525c9d8:
  (*(code *)*puVar12)(plVar11,3,uVar5,uVar10,puVar12[1]);
  return;
}


