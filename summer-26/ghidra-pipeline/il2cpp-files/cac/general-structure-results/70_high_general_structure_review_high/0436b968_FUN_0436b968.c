/*
FUNCTION_NAME: FUN_0436b968
ENTRY_POINT: 0436b968
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_0436b968(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
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
  plVar7 = (long *)thunk_FUN_03f4e2c4(**(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0),local_48);
  if (plVar7 == (long *)0x0) {
LAB_0436c720:
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    goto LAB_0436c998;
  }
  if (*(long *)(*plVar7 + 0x40) != *(long *)(DAT_092c4170 + 0x40)) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_0436c998;
  }
  puVar8 = (undefined8 *)thunk_FUN_03f4e7d4();
  uStack_58 = puVar8[1];
  local_60 = *puVar8;
  uVar5 = FUN_07772d00(&local_60,0);
  uVar5 = uVar5 & 0xff;
  if (uVar5 - 5 < 2) {
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(DAT_096a6f98 + 0x20,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) == 0) {
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar10 = FUN_074ce748(uVar15,uVar9,0);
      if ((uVar10 & 1) == 0) goto LAB_0436c8d4;
    }
    uVar3 = FUN_07773170(&local_60,0);
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar3) & 0xffffffffffffff01;
    lVar14 = DAT_096a6f98;
LAB_0436beac:
    plVar11 = (long *)thunk_FUN_03f4e2c4(lVar14,local_48);
System_Array__Empty<NativeArray<XRTextureDescriptor>>:
    plVar13 = *(long **)(*(long *)(param_2 + 0x38) + 8);
    plVar7 = plVar11;
    if ((*(ushort *)((long)plVar13 + 0x135) & 1) == 0) {
      plVar7 = (long *)FUN_03f4b260(plVar13);
      plVar13 = plVar7;
    }
    if (plVar11 == (long *)0x0) goto LAB_0436c720;
    if (*(long *)(*plVar11 + 0x40) != plVar13[8]) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(plVar11);
      }
      goto LAB_0436c998;
    }
    pcVar12 = (char *)thunk_FUN_03f4e7d4(plVar11);
LAB_0436befc:
    cVar1 = *pcVar12;
  }
  else {
    if (uVar5 == 3) {
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar9 = FUN_074c4a14(DAT_096a7000 + 0x20,0);
      uVar10 = FUN_074ce748(uVar15,uVar9,0);
      if ((uVar10 & 1) != 0) {
        plVar11 = (long *)FUN_077731d4(&local_60,0);
        goto System_Array__Empty<NativeArray<XRTextureDescriptor>>;
      }
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
      uVar10 = FUN_074ce748(uVar15,uVar9,0);
      if ((uVar10 & 1) != 0) {
LAB_0436bddc:
        uVar15 = FUN_07773880(&local_60,0);
        local_48._0_8_ = uVar15;
        lVar14 = DAT_092c03c8;
        goto LAB_0436beac;
      }
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
      uVar10 = FUN_074ce748(uVar15,uVar9,0);
      if ((uVar10 & 1) != 0) goto LAB_0436bddc;
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
      uVar10 = FUN_074ce748(uVar15,uVar9,0);
      if ((uVar10 & 1) != 0) {
LAB_0436bfd4:
        local_48 = FUN_077738fc(&local_60,0);
        lVar14 = DAT_092c0400;
        goto LAB_0436beac;
      }
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
      uVar10 = FUN_074ce748(uVar15,uVar9,0);
      if ((uVar10 & 1) != 0) goto LAB_0436bfd4;
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
      uVar10 = FUN_074ce748(uVar15,uVar9,0);
      if ((uVar10 & 1) == 0) {
        uVar15 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar15 = FUN_074c4a14(uVar15,0);
        uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
        uVar10 = FUN_074ce748(uVar15,uVar9,0);
        if ((uVar10 & 1) != 0) goto LAB_0436c158;
        uVar15 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar15 = FUN_074c4a14(uVar15,0);
        uVar9 = FUN_074c4a14(DAT_096a6ff8 + 0x20,0);
        uVar10 = FUN_074ce748(uVar15,uVar9,0);
        if ((uVar10 & 1) == 0) {
          uVar15 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar15 = FUN_074c4a14(uVar15,0);
          uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
          uVar10 = FUN_074ce748(uVar15,uVar9,0);
          if ((uVar10 & 1) == 0) goto LAB_0436c8d4;
        }
        lVar14 = FUN_077731d4(&local_60,0);
        plVar7 = (long *)0x0;
        if (lVar14 == 0) goto LAB_0436c720;
        if (*(int *)(lVar14 + 0x10) != 1) goto LAB_0436c8d4;
        uVar4 = FUN_073213d0(lVar14,0,0);
        lVar14 = DAT_096a6ff8;
LAB_0436c2f8:
        local_48._0_2_ = uVar4;
      }
      else {
LAB_0436c158:
        local_48 = FUN_07773978(&local_60,0);
        plVar7 = &DAT_092c1de8;
LAB_0436c16c:
        lVar14 = *plVar7;
      }
System_Array__Empty<AssetFrameData>:
      uVar15 = thunk_FUN_03f4e2c4(lVar14,local_48);
      lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 8);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_03f4b260(lVar14);
      }
      pcVar12 = (char *)FUN_03951c9c(uVar15,lVar14);
      goto LAB_0436befc;
    }
    if (uVar5 != 4) {
LAB_0436c8d4:
      thunk_FUN_03f786f8(&DAT_092c7648);
      FUN_0395b070();
      uVar15 = FUN_0775d89c(0);
      uVar3 = FUN_07772d00(&local_60,0);
      local_48[0] = uVar3;
      uVar9 = thunk_FUN_03f786f8(&DAT_092c43a0);
      uVar9 = thunk_FUN_03f4e2c4(uVar9,local_48);
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar15 = FUN_077594ec(uVar15,uVar9,uVar16,0);
      thunk_FUN_03f786f8(&DAT_092c3ef0);
      uVar9 = thunk_FUN_03f4e68c();
      plVar7 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                 (uVar9,uVar15,0);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar9,param_2);
      }
      goto LAB_0436c998;
    }
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(DAT_096a6fb8 + 0x20,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_0436bbf4:
      uVar6 = FUN_077734ec(&local_60,0);
      local_48._0_4_ = uVar6;
      lVar14 = DAT_096a6fb8;
      goto LAB_0436beac;
    }
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_0436bbf4;
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(DAT_096a6fd8 + 0x20,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_0436be98:
      uVar15 = FUN_077735e4(&local_60,0);
      local_48._0_8_ = uVar15;
      lVar14 = DAT_096a6fd8;
      goto LAB_0436beac;
    }
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_0436be98;
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(DAT_096a6ff0 + 0x20,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_0436c094:
      uVar15 = FUN_077736dc(&local_60,0);
      local_48._0_8_ = uVar15;
      lVar14 = DAT_096a6ff0;
      goto System_Array__Empty<AssetFrameData>;
    }
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_0436c094;
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(DAT_096a6fa8 + 0x20,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_0436c218:
      uVar4 = FUN_077733cc(&local_60,0);
      lVar14 = DAT_096a6fa8;
      goto LAB_0436c2f8;
    }
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_0436c218;
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_0436c3e0:
      local_48 = FUN_077737d4(&local_60,0);
      plVar7 = &DAT_092c0650;
      goto LAB_0436c16c;
    }
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_0436c3e0;
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(DAT_096a6f88 + 0x20,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_0436c498:
      uVar3 = FUN_0777333c(&local_60,0);
      local_48[0] = uVar3;
      lVar14 = DAT_096a6f88;
      goto System_Array__Empty<AssetFrameData>;
    }
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_0436c498;
    uVar15 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar15 = FUN_074c4a14(uVar15,0);
    uVar9 = FUN_074c4a14(DAT_096a6fe8 + 0x20,0);
    uVar10 = FUN_074ce748(uVar15,uVar9,0);
    if ((uVar10 & 1) == 0) {
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar10 = FUN_074ce748(uVar15,uVar9,0);
      if ((uVar10 & 1) != 0) goto LAB_0436c554;
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar9 = FUN_074c4a14(DAT_096a6fc0 + 0x20,0);
      uVar10 = FUN_074ce748(uVar15,uVar9,0);
      if ((uVar10 & 1) == 0) {
        uVar15 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar15 = FUN_074c4a14(uVar15,0);
        uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar10 = FUN_074ce748(uVar15,uVar9,0);
        if ((uVar10 & 1) != 0) goto LAB_0436c610;
        uVar15 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar15 = FUN_074c4a14(uVar15,0);
        uVar9 = FUN_074c4a14(DAT_096a6fb0 + 0x20,0);
        uVar10 = FUN_074ce748(uVar15,uVar9,0);
        if ((uVar10 & 1) == 0) {
          uVar15 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar15 = FUN_074c4a14(uVar15,0);
          uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar10 = FUN_074ce748(uVar15,uVar9,0);
          if ((uVar10 & 1) != 0) goto LAB_0436c708;
          uVar15 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar15 = FUN_074c4a14(uVar15,0);
          uVar9 = FUN_074c4a14(DAT_096a6fe0 + 0x20,0);
          uVar10 = FUN_074ce748(uVar15,uVar9,0);
          if ((uVar10 & 1) == 0) {
            uVar15 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar15 = FUN_074c4a14(uVar15,0);
            uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar10 = FUN_074ce748(uVar15,uVar9,0);
            if ((uVar10 & 1) != 0) goto LAB_0436c7e8;
            uVar15 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar15 = FUN_074c4a14(uVar15,0);
            uVar9 = FUN_074c4a14(DAT_096a6fa0 + 0x20,0);
            uVar10 = FUN_074ce748(uVar15,uVar9,0);
            if ((uVar10 & 1) == 0) {
              uVar15 = **(undefined8 **)(param_2 + 0x38);
              if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar15 = FUN_074c4a14(uVar15,0);
              uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar10 = FUN_074ce748(uVar15,uVar9,0);
              if ((uVar10 & 1) == 0) goto LAB_0436c8d4;
            }
            uVar3 = FUN_077732ac(&local_60,0);
            local_48[0] = uVar3;
            lVar14 = DAT_096a6fa0;
          }
          else {
LAB_0436c7e8:
            local_48._0_8_ = FUN_07773660(&local_60,0);
            lVar14 = DAT_096a6fe0;
          }
        }
        else {
LAB_0436c708:
          uVar4 = FUN_0777345c(&local_60,0);
          local_48._0_2_ = uVar4;
          lVar14 = DAT_096a6fb0;
        }
      }
      else {
LAB_0436c610:
        uVar6 = FUN_07773568(&local_60,0);
        local_48._0_4_ = uVar6;
        lVar14 = DAT_096a6fc0;
      }
    }
    else {
LAB_0436c554:
      uVar6 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&local_60,0);
      local_48._0_4_ = uVar6;
      lVar14 = DAT_096a6fe8;
    }
    uVar15 = thunk_FUN_03f4e2c4(lVar14,local_48);
    lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f4b260(lVar14);
    }
    pcVar12 = (char *)FUN_03951c9c(uVar15,lVar14);
    cVar1 = *pcVar12;
  }
  plVar7 = (long *)(ulong)(cVar1 != '\0');
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0436c998:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar7);
}


