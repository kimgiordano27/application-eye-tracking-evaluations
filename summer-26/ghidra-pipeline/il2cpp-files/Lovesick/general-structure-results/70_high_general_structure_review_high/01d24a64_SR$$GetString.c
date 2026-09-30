/*
FUNCTION_NAME: SR$$GetString
ENTRY_POINT: 01d24a64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


long SR__GetString(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *unaff_x19;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  uint uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  uVar13 = **(undefined8 **)(param_1 + 0xd80);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01780344(uVar13,0);
  uVar8 = FUN_01789ac0();
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vfmsq_f64__;
  puVar5 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  puVar3 = System_Xml_XmlDeclaration_TypeInfo;
  if (((uVar8 & 1) == 0) || (unaff_x19 == (long *)0x0)) {
LAB_01d24ad0:
    lVar12 = FUN_01ff79f8();
    return lVar12;
  }
  bVar1 = *(byte *)(*unaff_x19 + 300);
  bVar2 = *(byte *)(*(long *)StringLiteral_14163 + 300);
  if ((bVar1 < bVar2) ||
     (lVar12 = *(long *)(*unaff_x19 + 200),
     *(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_14163)) goto LAB_01d24ad0;
  bVar2 = *(byte *)(*(long *)Method_System_ComponentModel_AttributeCollection__ctor__ + 300);
  if ((bVar1 < bVar2) ||
     (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) !=
      *(long *)Method_System_ComponentModel_AttributeCollection__ctor__)) {
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<int>>_get_Current__
                     + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<int>>_get_Current__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    uVar13 = *(undefined8 *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item3__;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar12 = FUN_01780344(uVar13,0);
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,7);
    lVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
    if (plVar9 == (long *)0x0) goto LAB_01d2525c;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if ((int)plVar9[3] == 0) goto LAB_01d2524c;
    plVar9[4] = lVar10;
    lVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 2) goto LAB_01d2524c;
    plVar9[5] = lVar10;
    lVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 3) goto LAB_01d2524c;
    plVar9[6] = lVar10;
    lVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    puVar4 = UnityEngine_XR_ARFoundation_ARSession_TypeInfo;
    if (*(uint *)(plVar9 + 3) < 4) goto LAB_01d2524c;
    plVar9[7] = lVar10;
    lVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    puVar4 = StringLiteral_10352;
    if (*(uint *)(plVar9 + 3) < 5) goto LAB_01d2524c;
    plVar9[8] = lVar10;
    lVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 6) goto LAB_01d2524c;
    plVar9[9] = lVar10;
    lVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 7) goto LAB_01d2524c;
    plVar9[10] = lVar10;
    if (lVar12 == 0) goto LAB_01d2525c;
    uVar13 = FUN_0178c180(lVar12,plVar9,0);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar12);
    }
    uVar8 = FUN_016aa83c(uVar13,0,0);
    if ((uVar8 & 1) == 0) goto LAB_01d24ad0;
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,7);
    lVar12 = (**(code **)(*unaff_x19 + 0x178))();
    if (plVar9 == (long *)0x0) goto LAB_01d2525c;
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    if ((int)plVar9[3] == 0) goto LAB_01d2524c;
    plVar9[4] = lVar12;
    in_stack_00000018 = FUN_01d83d24();
    lVar12 = FUN_01d25268(&stack0x00000018);
    if (lVar12 == 0) goto LAB_01d2525c;
    lVar12 = *(long *)(lVar12 + 0x90);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 2) goto LAB_01d2524c;
    plVar9[5] = lVar12;
    lVar12 = FUN_01d826c0();
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 3) goto LAB_01d2524c;
    plVar9[6] = lVar12;
    lVar12 = FUN_01d826cc();
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 4) goto LAB_01d2524c;
    plVar9[7] = lVar12;
    puVar3 = PTR_DAT_033f6b10;
    uStack0000000000000014 = (**(code **)(*unaff_x19 + 0x278))();
    lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000010 + 4);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 5) goto LAB_01d2524c;
    plVar9[8] = lVar12;
    puVar3 = StringLiteral_11272;
    uStack0000000000000010 = (**(code **)(*unaff_x19 + 0x298))();
    lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000010);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 6) goto LAB_01d2524c;
    plVar9[9] = lVar12;
    in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x2d8))();
    lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 7) goto LAB_01d2524c;
    plVar9[10] = lVar12;
  }
  else {
    uVar13 = *(undefined8 *)
              Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_LineType>__;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar12 = FUN_01780344(uVar13,0);
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,3);
    lVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
    if (plVar9 == (long *)0x0) goto LAB_01d2525c;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
LAB_01d25250:
      uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar13,0);
    }
    if ((int)plVar9[3] == 0) {
LAB_01d2524c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar9[4] = lVar10;
    lVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    puVar4 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
    if (*(uint *)(plVar9 + 3) < 2) goto LAB_01d2524c;
    plVar9[5] = lVar10;
    lVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 3) goto LAB_01d2524c;
    plVar9[6] = lVar10;
    if (lVar12 == 0) goto LAB_01d2525c;
    uVar13 = FUN_0178c180(lVar12,plVar9,0);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar12);
    }
    uVar8 = FUN_016aa83c(uVar13,0,0);
    if ((uVar8 & 1) == 0) goto LAB_01d24ad0;
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,3);
    lVar12 = (**(code **)(*unaff_x19 + 0x178))();
    if (plVar9 == (long *)0x0) goto LAB_01d2525c;
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    if ((int)plVar9[3] == 0) goto LAB_01d2524c;
    plVar9[4] = lVar12;
    lVar12 = FUN_01d8f0f4();
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    puVar3 = StringLiteral_9958;
    if (*(uint *)(plVar9 + 3) < 2) goto LAB_01d2524c;
    plVar9[5] = lVar12;
    uVar7 = FUN_01d900a4();
    uStack0000000000000014 = CONCAT31(uStack0000000000000014._1_3_,uVar7) & 0xffffff01;
    lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000010 + 4);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_01d25250;
    if (*(uint *)(plVar9 + 3) < 3) goto LAB_01d2524c;
    plVar9[6] = lVar12;
  }
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3680);
  if (lVar12 != 0) {
    FUN_0200789c(lVar12,uVar13,plVar9,0);
    return lVar12;
  }
LAB_01d2525c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


