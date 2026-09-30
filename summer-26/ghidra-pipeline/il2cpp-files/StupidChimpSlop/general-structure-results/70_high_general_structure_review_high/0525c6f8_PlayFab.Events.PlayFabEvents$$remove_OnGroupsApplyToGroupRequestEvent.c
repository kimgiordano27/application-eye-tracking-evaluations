/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGroupsApplyToGroupRequestEvent
ENTRY_POINT: 0525c6f8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0525c7bc) */
/* WARNING: Removing unreachable block (ram,0x0525ca14) */
/* WARNING: Removing unreachable block (ram,0x0525c8dc) */
/* WARNING: Removing unreachable block (ram,0x0525c830) */

void PlayFab_Events_PlayFabEvents__remove_OnGroupsApplyToGroupRequestEvent
               (undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int unaff_w19;
  long *unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  long *plVar10;
  long unaff_x22;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 uStack0000000000000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_000000b8;
  
  do {
    uVar3 = FUN_04a08dd8(param_1,param_2);
    lVar7 = in_stack_00000088;
    if ((uVar3 & 1) == 0) {
      FUN_04a08efc(&stack0x00000070,
                   *(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_036122c4(&stack0x00000028,unaff_x22,
                   *(undefined8 *)UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo)
      ;
      in_stack_00000050 = in_stack_00000028;
      in_stack_00000028 = 0;
      in_stack_00000058 = in_stack_00000030;
      in_stack_00000060 = in_stack_00000038;
      while (uVar3 = FUN_049b0478(&stack0x00000050,*unaff_x27), (uVar3 & 1) != 0) {
        FUN_0479b8e4(unaff_x21,in_stack_00000060 & 0xff,*unaff_x28);
      }
      FUN_049b0474(&stack0x00000050,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                  );
      uVar3 = FUN_04a12944(&stack0x000000a0,
                           *(undefined8 *)System_Func<JsonSchemaGenerator_TypeSchema,_bool>_TypeInfo
                          );
      unaff_x21 = in_stack_000000b8;
      if ((uVar3 & 1) == 0) {
        FUN_04a12a68(in_stack_00000020,
                     *(undefined8 *)System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
        if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee0(in_stack_00000018);
        }
        plVar10 = *(long **)(in_stack_00000010 + 0x18);
        uVar4 = FUN_0524ff40(in_stack_00000010,unaff_w19);
        uVar4 = FUN_04e80678(*(undefined8 *)
                              Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_TypeInfo
                             ,uVar4,*(undefined8 *)
                                     Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo
                             ,0);
        lVar6 = *(long *)PTR_DAT_06648110;
        lVar7 = *(long *)(lVar6 + 0x38);
        if (lVar7 == 0) {
          FUN_02d87268(lVar6);
          lVar7 = *(long *)(lVar6 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02d8720c();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02d8720c();
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar6 = *plVar10;
        uVar9 = **(undefined8 **)(lVar7 + 0xb8);
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 == 0) goto LAB_0525c9b8;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        break;
      }
      unaff_x22 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066480b0);
      FUN_03610fb4(unaff_x22,*(undefined8 *)PTR_DAT_066480a8);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0479a870(&stack0x00000028,unaff_x21,
                   *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
      in_stack_00000070 = in_stack_00000028;
      in_stack_00000028 = 0;
      in_stack_00000088 = in_stack_00000040;
      _uStack0000000000000080 = in_stack_00000038;
      in_stack_00000090 = in_stack_00000048;
      in_stack_00000030 = unaff_x26;
      in_stack_00000078 = unaff_x25;
    }
    else {
      if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(int *)(in_stack_00000088 + 0x98) == unaff_w19) {
        lVar6 = *(long *)(in_stack_00000088 + 0x48);
        uVar2 = uStack0000000000000080;
        uVar3 = _uStack0000000000000080 & 0xff;
        if (lVar6 != 0) {
                    /* try { // try from 0525c724 to 0535c72b has its CatchHandler @ 0525c858 */
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        }
        FUN_05254740(lVar7);
                    /* try { // try from 0525c738 to 0535c73f has its CatchHandler @ 0525c854 */
        if (unaff_x22 == 0) {
LAB_0525c83c:
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
                    /* try { // try from 0525c740 to 0535c747 has its CatchHandler @ 0525c850 */
        lVar7 = *(long *)(unaff_x22 + 0x10);
        lVar6 = *unaff_x20;
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_0525c83c;
        uVar1 = *(uint *)(unaff_x22 + 0x18);
                    /* try { // try from 0525c75c to 0535c767 has its CatchHandler @ 0525c848 */
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 0525c768 to 0535c827 has its CatchHandler @ 0525c440 */
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          *(undefined1 *)(lVar7 + (int)uVar1 + 0x20) = uVar2;
        }
        else {
          FUN_03611844(unaff_x22,uVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    param_2 = *unaff_x29;
    param_1 = &stack0x00000070;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0664b728) {
      puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
      goto LAB_0525c9d8;
    }
  }
LAB_0525c9b8:
  puVar5 = (undefined8 *)FUN_02d87540(plVar10,*(long *)PTR_DAT_0664b728,1);
LAB_0525c9d8:
  (*(code *)*puVar5)(plVar10,3,uVar4,uVar9,puVar5[1]);
  return;
}


