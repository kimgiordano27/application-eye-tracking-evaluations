/*
FUNCTION_NAME: System.Array$$IndexOf<KeyValuePair<NamespaceDefinitionHandle,-object>>
ENTRY_POINT: 04374b20
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOf<KeyValuePair<NamespaceDefinitionHandle,_object>>
               (long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_03f13384(&DAT_092aea88);
    FUN_03f13384(&DAT_092c0400);
    FUN_03f13384(&DAT_092aea68);
    FUN_03f13384(&DAT_092c03c8);
    FUN_03f13384(&DAT_092aeb30);
    FUN_03f13384(&DAT_092c0650);
    FUN_03f13384(&DAT_092af0e0);
    FUN_03f13384(&DAT_092c1de8);
    FUN_03f13384(&DAT_092c4170);
    FUN_03f13384(&DAT_092ae150);
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
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_03f4b2bc(param_2);
    }
  }
  local_60 = 0;
  uStack_58 = 0;
  local_48._0_2_ = *(undefined2 *)(param_1 + 0x1a);
  plVar6 = (long *)thunk_FUN_03f4e2c4(**(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0),local_48);
  if (plVar6 == (long *)0x0) {
LAB_043758d0:
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    goto LAB_04375b48;
  }
  if (*(long *)(*plVar6 + 0x40) != *(long *)(DAT_092c4170 + 0x40)) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_04375b48;
  }
  puVar7 = (undefined8 *)thunk_FUN_03f4e7d4();
  uStack_58 = puVar7[1];
  local_60 = *puVar7;
  uVar4 = FUN_07772d00(&local_60,0);
  uVar4 = uVar4 & 0xff;
  if (uVar4 - 5 < 2) {
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6f98 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) goto LAB_04375a84;
    }
    uVar2 = FUN_07773170(&local_60,0);
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar2) & 0xffffffffffffff01;
    lVar13 = DAT_096a6f98;
LAB_04375064:
    plVar10 = (long *)thunk_FUN_03f4e2c4(lVar13,local_48);
LAB_04375070:
    plVar12 = *(long **)(*(long *)(param_2 + 0x38) + 8);
    plVar6 = plVar10;
    if ((*(ushort *)((long)plVar12 + 0x135) & 1) == 0) {
      plVar6 = (long *)FUN_03f4b260(plVar12);
      plVar12 = plVar6;
    }
    if (plVar10 == (long *)0x0) goto LAB_043758d0;
    if (*(long *)(*plVar10 + 0x40) != plVar12[8]) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(plVar10);
      }
      goto LAB_04375b48;
    }
    puVar11 = (uint *)thunk_FUN_03f4e7d4(plVar10);
LAB_043750b4:
    uVar4 = *puVar11;
  }
  else {
    if (uVar4 == 3) {
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(DAT_096a7000 + 0x20,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_077731d4(&local_60,0);
        goto LAB_04375070;
      }
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_04374f94:
        uVar14 = FUN_07773880(&local_60,0);
        local_48._0_8_ = uVar14;
        lVar13 = DAT_092c03c8;
        goto LAB_04375064;
      }
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_04374f94;
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_04375184:
        local_48 = FUN_077738fc(&local_60,0);
        lVar13 = DAT_092c0400;
        goto LAB_04375064;
      }
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_04375184;
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_04375308;
        uVar14 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(DAT_096a6ff8 + 0x20,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar14 = FUN_074c4a14(uVar14,0);
          uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
          uVar9 = FUN_074ce748(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) goto LAB_04375a84;
        }
        lVar13 = FUN_077731d4(&local_60,0);
        plVar6 = (long *)0x0;
        if (lVar13 == 0) goto LAB_043758d0;
        if (*(int *)(lVar13 + 0x10) != 1) goto LAB_04375a84;
        uVar3 = FUN_073213d0(lVar13,0,0);
        lVar13 = DAT_096a6ff8;
LAB_043754a8:
        local_48._0_2_ = uVar3;
      }
      else {
LAB_04375308:
        local_48 = FUN_07773978(&local_60,0);
        plVar6 = &DAT_092c1de8;
LAB_0437531c:
        lVar13 = *plVar6;
      }
LAB_043754b4:
      uVar14 = thunk_FUN_03f4e2c4(lVar13,local_48);
      lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 8);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f4b260(lVar13);
      }
      puVar11 = (uint *)FUN_03951c9c(uVar14,lVar13);
      goto LAB_043750b4;
    }
    if (uVar4 != 4) {
LAB_04375a84:
      thunk_FUN_03f786f8(&DAT_092c7648);
      FUN_0395b070();
      uVar14 = FUN_0775d89c(0);
      uVar2 = FUN_07772d00(&local_60,0);
      local_48[0] = uVar2;
      uVar8 = thunk_FUN_03f786f8(&DAT_092c43a0);
      uVar8 = thunk_FUN_03f4e2c4(uVar8,local_48);
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar14 = FUN_077594ec(uVar14,uVar8,uVar15,0);
      thunk_FUN_03f786f8(&DAT_092c3ef0);
      uVar8 = thunk_FUN_03f4e68c();
      plVar6 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                 (uVar8,uVar14,0);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar8,param_2);
      }
      goto LAB_04375b48;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6fb8 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04374dac:
      uVar5 = FUN_077734ec(&local_60,0);
      local_48._0_4_ = uVar5;
      lVar13 = DAT_096a6fb8;
      goto LAB_04375064;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04374dac;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6fd8 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04375050:
      uVar14 = FUN_077735e4(&local_60,0);
      local_48._0_8_ = uVar14;
      lVar13 = DAT_096a6fd8;
      goto LAB_04375064;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04375050;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6ff0 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04375244:
      uVar14 = FUN_077736dc(&local_60,0);
      local_48._0_8_ = uVar14;
      lVar13 = DAT_096a6ff0;
      goto LAB_043754b4;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04375244;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6fa8 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_043753c8:
      uVar3 = FUN_077733cc(&local_60,0);
      lVar13 = DAT_096a6fa8;
      goto LAB_043754a8;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_043753c8;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04375590:
      local_48 = FUN_077737d4(&local_60,0);
      plVar6 = &DAT_092c0650;
      goto LAB_0437531c;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04375590;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6f88 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04375648:
      uVar2 = FUN_0777333c(&local_60,0);
      local_48[0] = uVar2;
      lVar13 = DAT_096a6f88;
      goto LAB_043754b4;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04375648;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6fe8 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_04375704;
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(DAT_096a6fc0 + 0x20,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_043757c0;
        uVar14 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(DAT_096a6fb0 + 0x20,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar14 = FUN_074c4a14(uVar14,0);
          uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar9 = FUN_074ce748(uVar14,uVar8,0);
          if ((uVar9 & 1) != 0) goto LAB_043758b8;
          uVar14 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar14 = FUN_074c4a14(uVar14,0);
          uVar8 = FUN_074c4a14(DAT_096a6fe0 + 0x20,0);
          uVar9 = FUN_074ce748(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) {
            uVar14 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar14 = FUN_074c4a14(uVar14,0);
            uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar9 = FUN_074ce748(uVar14,uVar8,0);
            if ((uVar9 & 1) != 0) goto LAB_04375998;
            uVar14 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar14 = FUN_074c4a14(uVar14,0);
            uVar8 = FUN_074c4a14(DAT_096a6fa0 + 0x20,0);
            uVar9 = FUN_074ce748(uVar14,uVar8,0);
            if ((uVar9 & 1) == 0) {
              uVar14 = **(undefined8 **)(param_2 + 0x38);
              if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar14 = FUN_074c4a14(uVar14,0);
              uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar9 = FUN_074ce748(uVar14,uVar8,0);
              if ((uVar9 & 1) == 0) goto LAB_04375a84;
            }
            uVar2 = FUN_077732ac(&local_60,0);
            local_48[0] = uVar2;
            lVar13 = DAT_096a6fa0;
          }
          else {
LAB_04375998:
            local_48._0_8_ = FUN_07773660(&local_60,0);
            lVar13 = DAT_096a6fe0;
          }
        }
        else {
LAB_043758b8:
          uVar3 = FUN_0777345c(&local_60,0);
          local_48._0_2_ = uVar3;
          lVar13 = DAT_096a6fb0;
        }
      }
      else {
LAB_043757c0:
        uVar5 = FUN_07773568(&local_60,0);
        local_48._0_4_ = uVar5;
        lVar13 = DAT_096a6fc0;
      }
    }
    else {
LAB_04375704:
      uVar5 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&local_60,0);
      local_48._0_4_ = uVar5;
      lVar13 = DAT_096a6fe8;
    }
    uVar14 = thunk_FUN_03f4e2c4(lVar13,local_48);
    lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f4b260(lVar13);
    }
    puVar11 = (uint *)FUN_03951c9c(uVar14,lVar13);
    uVar4 = *puVar11;
  }
  plVar6 = (long *)(ulong)uVar4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_04375b48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


