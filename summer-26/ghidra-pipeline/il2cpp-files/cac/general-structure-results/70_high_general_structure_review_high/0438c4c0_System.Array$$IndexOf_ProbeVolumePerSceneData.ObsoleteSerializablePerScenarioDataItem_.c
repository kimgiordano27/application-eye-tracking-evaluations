/*
FUNCTION_NAME: System.Array$$IndexOf<ProbeVolumePerSceneData.ObsoleteSerializablePerScenarioDataItem>
ENTRY_POINT: 0438c4c0
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined4
System_Array__IndexOf<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 0438c354 with catch @ 0438c4c0
                        */
  FUN_03f13384();
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 0438c3fc with catch @ 0438c4c4
                        */
  FUN_03f13384(&DAT_092c0650);
  FUN_03f13384(&DAT_092af0e0);
                    /* try { // try from 0438c4e0 to 0448c4e3 has its CatchHandler @ 0438c4f0 */
  FUN_03f13384(&DAT_092c1de8);
                    /* catch() { ... } // from try @ 0438c4e0 with catch @ 0438c4f0 */
  FUN_03f13384(&DAT_092c4170);
                    /* try { // try from 0438c4f4 to 0448c4fb has its CatchHandler @ 0438c504 */
                    /* try { // try from 0438c4fc to 0448c507 has its CatchHandler @ 0438c2a8 */
  FUN_03f13384(&DAT_092ae150);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0438c4f4 with catch @ 0438c504
                        */
  FUN_03f13384(&DAT_092ae160);
  FUN_03f13384(&DAT_092ae178);
  FUN_03f13384(&DAT_092ae188);
  FUN_03f13384(&DAT_092ae148);
  FUN_03f13384(&DAT_092ae168);
  FUN_03f13384(&DAT_092ae158);
  FUN_03f13384(&DAT_092ae1a0);
  FUN_03f13384(&DAT_092ae128);
  FUN_03f13384(&DAT_092ae180);
  FUN_03f13384(&DAT_092ae170);
  FUN_03f13384(&DAT_092ae1a8);
  FUN_03f13384(&DAT_092ae138);
  FUN_03f13384(&DAT_092ae140);
  FUN_03f13384(&DAT_092ae130);
  FUN_03f13384(&DAT_092ae1b0);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_03f4b2bc();
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(unaff_x20 + 0x1c));
  plVar5 = (long *)thunk_FUN_03f4e2c4(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),
                                      &stack0x00000028);
  if (plVar5 == (long *)0x0) {
LAB_0438d20c:
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    goto LAB_0438d484;
  }
  if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_092c4170 + 0x40)) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_0438d484;
  }
  puVar6 = (undefined8 *)thunk_FUN_03f4e7d4();
  in_stack_00000018 = puVar6[1];
  in_stack_00000010 = *puVar6;
  uVar3 = FUN_07772d00(&stack0x00000010,0);
  uVar3 = uVar3 & 0xff;
  if (uVar3 - 5 < 2) {
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(DAT_096a6f98 + 0x20,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar8 = FUN_074ce748(uVar11,uVar7,0);
      if ((uVar8 & 1) == 0) goto LAB_0438d3c0;
    }
    uVar1 = FUN_07773170(&stack0x00000010,0);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1) & 0xffffffffffffff01;
    lVar10 = DAT_096a6f98;
LAB_0438c9a0:
    plVar5 = (long *)thunk_FUN_03f4e2c4(lVar10,&stack0x00000028);
LAB_0438c9ac:
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f4b260(lVar10);
    }
    if (plVar5 == (long *)0x0) goto LAB_0438d20c;
    if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar10 + 0x40)) {
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(plVar5);
      }
      goto LAB_0438d484;
    }
    puVar9 = (undefined4 *)thunk_FUN_03f4e7d4(plVar5);
LAB_0438c9f0:
    uVar4 = *puVar9;
  }
  else {
    if (uVar3 == 3) {
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar7 = FUN_074c4a14(DAT_096a7000 + 0x20,0);
      uVar8 = FUN_074ce748(uVar11,uVar7,0);
      if ((uVar8 & 1) != 0) {
        plVar5 = (long *)FUN_077731d4(&stack0x00000010,0);
        goto LAB_0438c9ac;
      }
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
      uVar8 = FUN_074ce748(uVar11,uVar7,0);
      if ((uVar8 & 1) != 0) {
LAB_0438c8d0:
        uVar11 = FUN_07773880(&stack0x00000010,0);
        in_stack_00000028 = uVar11;
        lVar10 = DAT_092c03c8;
        goto LAB_0438c9a0;
      }
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
      uVar8 = FUN_074ce748(uVar11,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_0438c8d0;
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
      uVar8 = FUN_074ce748(uVar11,uVar7,0);
      if ((uVar8 & 1) != 0) {
LAB_0438cac0:
        _in_stack_00000028 = FUN_077738fc(&stack0x00000010,0);
        lVar10 = DAT_092c0400;
        goto LAB_0438c9a0;
      }
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
      uVar8 = FUN_074ce748(uVar11,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_0438cac0;
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
      uVar8 = FUN_074ce748(uVar11,uVar7,0);
      if ((uVar8 & 1) == 0) {
        uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar11 = FUN_074c4a14(uVar11,0);
        uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
        uVar8 = FUN_074ce748(uVar11,uVar7,0);
        if ((uVar8 & 1) != 0) goto LAB_0438cc44;
        uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar11 = FUN_074c4a14(uVar11,0);
        uVar7 = FUN_074c4a14(DAT_096a6ff8 + 0x20,0);
        uVar8 = FUN_074ce748(uVar11,uVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar11 = FUN_074c4a14(uVar11,0);
          uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
          uVar8 = FUN_074ce748(uVar11,uVar7,0);
          if ((uVar8 & 1) == 0) goto LAB_0438d3c0;
        }
        lVar10 = FUN_077731d4(&stack0x00000010,0);
        if (lVar10 == 0) goto LAB_0438d20c;
        if (*(int *)(lVar10 + 0x10) != 1) goto LAB_0438d3c0;
        uVar2 = FUN_073213d0(lVar10,0,0);
        lVar10 = DAT_096a6ff8;
LAB_0438cde4:
        in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
      }
      else {
LAB_0438cc44:
        _in_stack_00000028 = FUN_07773978(&stack0x00000010,0);
        plVar5 = &DAT_092c1de8;
LAB_0438cc58:
        lVar10 = *plVar5;
      }
LAB_0438cdf0:
      uVar11 = thunk_FUN_03f4e2c4(lVar10,&stack0x00000028);
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f4b260(lVar10);
      }
      puVar9 = (undefined4 *)FUN_03951c9c(uVar11,lVar10);
      goto LAB_0438c9f0;
    }
    if (uVar3 != 4) {
LAB_0438d3c0:
      thunk_FUN_03f786f8(&DAT_092c7648);
      FUN_0395b070();
      uVar11 = FUN_0775d89c(0);
      uVar1 = FUN_07772d00(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
      uVar7 = thunk_FUN_03f786f8(&DAT_092c43a0);
      uVar7 = thunk_FUN_03f4e2c4(uVar7,&stack0x00000028);
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar11 = FUN_077594ec(uVar11,uVar7,uVar12,0);
      thunk_FUN_03f786f8(&DAT_092c3ef0);
      uVar7 = thunk_FUN_03f4e68c();
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                (uVar7,uVar11,0);
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar7);
      }
      goto LAB_0438d484;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(DAT_096a6fb8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_0438c6e8:
      uVar4 = FUN_077734ec(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
      lVar10 = DAT_096a6fb8;
      goto LAB_0438c9a0;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_0438c6e8;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(DAT_096a6fd8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_0438c98c:
      uVar11 = FUN_077735e4(&stack0x00000010,0);
      in_stack_00000028 = uVar11;
      lVar10 = DAT_096a6fd8;
      goto LAB_0438c9a0;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_0438c98c;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(DAT_096a6ff0 + 0x20,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_0438cb80:
      uVar11 = FUN_077736dc(&stack0x00000010,0);
      in_stack_00000028 = uVar11;
      lVar10 = DAT_096a6ff0;
      goto LAB_0438cdf0;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_0438cb80;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(DAT_096a6fa8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_0438cd04:
      uVar2 = FUN_077733cc(&stack0x00000010,0);
      lVar10 = DAT_096a6fa8;
      goto LAB_0438cde4;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_0438cd04;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_0438cecc:
      _in_stack_00000028 = FUN_077737d4(&stack0x00000010,0);
      plVar5 = &DAT_092c0650;
      goto LAB_0438cc58;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_0438cecc;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(DAT_096a6f88 + 0x20,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_0438cf84:
      uVar1 = FUN_0777333c(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
      lVar10 = DAT_096a6f88;
      goto LAB_0438cdf0;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_0438cf84;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar7 = FUN_074c4a14(DAT_096a6fe8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar11,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar8 = FUN_074ce748(uVar11,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_0438d040;
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar7 = FUN_074c4a14(DAT_096a6fc0 + 0x20,0);
      uVar8 = FUN_074ce748(uVar11,uVar7,0);
      if ((uVar8 & 1) == 0) {
        uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar11 = FUN_074c4a14(uVar11,0);
        uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar8 = FUN_074ce748(uVar11,uVar7,0);
        if ((uVar8 & 1) != 0) goto LAB_0438d0fc;
        uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar11 = FUN_074c4a14(uVar11,0);
        uVar7 = FUN_074c4a14(DAT_096a6fb0 + 0x20,0);
        uVar8 = FUN_074ce748(uVar11,uVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar11 = FUN_074c4a14(uVar11,0);
          uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar8 = FUN_074ce748(uVar11,uVar7,0);
          if ((uVar8 & 1) != 0) goto LAB_0438d1f4;
          uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar11 = FUN_074c4a14(uVar11,0);
          uVar7 = FUN_074c4a14(DAT_096a6fe0 + 0x20,0);
          uVar8 = FUN_074ce748(uVar11,uVar7,0);
          if ((uVar8 & 1) == 0) {
            uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar11 = FUN_074c4a14(uVar11,0);
            uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar8 = FUN_074ce748(uVar11,uVar7,0);
            if ((uVar8 & 1) != 0) goto LAB_0438d2d4;
            uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar11 = FUN_074c4a14(uVar11,0);
            uVar7 = FUN_074c4a14(DAT_096a6fa0 + 0x20,0);
            uVar8 = FUN_074ce748(uVar11,uVar7,0);
            if ((uVar8 & 1) == 0) {
              uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar11 = FUN_074c4a14(uVar11,0);
              uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar8 = FUN_074ce748(uVar11,uVar7,0);
              if ((uVar8 & 1) == 0) goto LAB_0438d3c0;
            }
            uVar1 = FUN_077732ac(&stack0x00000010,0);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
            lVar10 = DAT_096a6fa0;
          }
          else {
LAB_0438d2d4:
            in_stack_00000028 = FUN_07773660(&stack0x00000010,0);
            lVar10 = DAT_096a6fe0;
          }
        }
        else {
LAB_0438d1f4:
          uVar2 = FUN_0777345c(&stack0x00000010,0);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
          lVar10 = DAT_096a6fb0;
        }
      }
      else {
LAB_0438d0fc:
        uVar4 = FUN_07773568(&stack0x00000010,0);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
        lVar10 = DAT_096a6fc0;
      }
    }
    else {
LAB_0438d040:
      uVar4 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
      lVar10 = DAT_096a6fe8;
    }
    uVar11 = thunk_FUN_03f4e2c4(lVar10,&stack0x00000028);
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f4b260(lVar10);
    }
    puVar9 = (undefined4 *)FUN_03951c9c(uVar11,lVar10);
    uVar4 = *puVar9;
  }
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return uVar4;
  }
LAB_0438d484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


