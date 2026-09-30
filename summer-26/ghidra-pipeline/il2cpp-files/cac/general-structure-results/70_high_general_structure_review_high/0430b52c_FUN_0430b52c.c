/*
FUNCTION_NAME: FUN_0430b52c
ENTRY_POINT: 0430b52c
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_0430b52c(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_03f13384(PTR_DAT_0911fe00);
    FUN_03f13384(PTR_DAT_0911fe08);
    FUN_03f13384(PTR_DAT_0911fe10);
    FUN_03f13384(PTR_DAT_0910b600);
    FUN_03f13384(PTR_DAT_0911fe18);
    FUN_03f13384(PTR_DAT_0910c2f0);
    FUN_03f13384(PTR_DAT_0911fe20);
    FUN_03f13384(PTR_DAT_0911fe28);
    FUN_03f13384(PTR_DAT_0911fe30);
    FUN_03f13384(PTR_DAT_0911fe38);
    FUN_03f13384(PTR_DAT_0911fe40);
    FUN_03f13384(PTR_DAT_0911fe48);
    FUN_03f13384(PTR_DAT_0911fe50);
    FUN_03f13384(PTR_DAT_0911fe58);
    FUN_03f13384(PTR_DAT_0911fe60);
    FUN_03f13384(PTR_DAT_0911fe68);
    FUN_03f13384(PTR_DAT_0911fe70);
    FUN_03f13384(PTR_DAT_0911fe78);
    FUN_03f13384(PTR_DAT_0911fe80);
    FUN_03f13384(PTR_DAT_0911fe88);
    FUN_03f13384(PTR_DAT_0911fe90);
    FUN_03f13384(PTR_DAT_0911fe98);
    FUN_03f13384(PTR_DAT_0911fea0);
    FUN_03f13384(PTR_DAT_0911fea8);
    FUN_03f13384(PTR_DAT_0911feb0);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_03f4b2bc(param_2);
    }
  }
  local_48._0_8_ = *(undefined8 *)(param_1 + 0x20);
  local_60 = 0;
  uStack_58 = 0;
  plVar8 = (long *)thunk_FUN_03f4e2c4(**(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0),local_48);
  if (plVar8 == (long *)0x0) {
LAB_0430c2dc:
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    goto LAB_0430c554;
  }
  if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)PTR_DAT_0911fe30 + 0x40)) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_0430c554;
  }
  puVar9 = (undefined8 *)thunk_FUN_03f4e7d4();
  uStack_58 = puVar9[1];
  local_60 = *puVar9;
  uVar6 = FUN_07772d00(&local_60,0);
  puVar3 = PTR_DAT_0910b550;
  uVar6 = uVar6 & 0xff;
  if (uVar6 - 5 < 2) {
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x28) + 0x20,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) == 0) {
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar11 = FUN_074ce748(uVar16,uVar10,0);
      if ((uVar11 & 1) == 0) goto LAB_0430c490;
    }
    uVar4 = FUN_07773170(&local_60,0);
    uVar16 = *(undefined8 *)(puVar3 + 0x28);
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar4) & 0xffffffffffffff01;
LAB_0430ba70:
    plVar12 = (long *)thunk_FUN_03f4e2c4(uVar16,local_48);
LAB_0430ba7c:
    plVar14 = *(long **)(*(long *)(param_2 + 0x38) + 8);
    plVar8 = plVar12;
    if ((*(ushort *)((long)plVar14 + 0x135) & 1) == 0) {
      plVar8 = (long *)FUN_03f4b260(plVar14);
      plVar14 = plVar8;
    }
    if (plVar12 == (long *)0x0) goto LAB_0430c2dc;
    if (*(long *)(*plVar12 + 0x40) != plVar14[8]) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(plVar12);
      }
      goto LAB_0430c554;
    }
    pbVar13 = (byte *)thunk_FUN_03f4e7d4(plVar12);
LAB_0430bac0:
    bVar1 = *pbVar13;
  }
  else {
    if (uVar6 == 3) {
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x90) + 0x20,0);
      uVar11 = FUN_074ce748(uVar16,uVar10,0);
      if ((uVar11 & 1) != 0) {
        plVar12 = (long *)FUN_077731d4(&local_60,0);
        goto LAB_0430ba7c;
      }
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
      uVar11 = FUN_074ce748(uVar16,uVar10,0);
      if ((uVar11 & 1) != 0) {
LAB_0430b9a0:
        uVar16 = FUN_07773880(&local_60,0);
        local_48._0_8_ = uVar16;
        uVar16 = *(undefined8 *)PTR_DAT_0910b600;
        goto LAB_0430ba70;
      }
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
      uVar11 = FUN_074ce748(uVar16,uVar10,0);
      if ((uVar11 & 1) != 0) goto LAB_0430b9a0;
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
      uVar11 = FUN_074ce748(uVar16,uVar10,0);
      if ((uVar11 & 1) != 0) {
LAB_0430bb90:
        local_48 = FUN_077738fc(&local_60,0);
        uVar16 = *(undefined8 *)PTR_DAT_0911fe08;
        goto LAB_0430ba70;
      }
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
      uVar11 = FUN_074ce748(uVar16,uVar10,0);
      if ((uVar11 & 1) != 0) goto LAB_0430bb90;
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
      uVar11 = FUN_074ce748(uVar16,uVar10,0);
      if ((uVar11 & 1) == 0) {
        uVar16 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar16 = FUN_074c4a14(uVar16,0);
        uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
        uVar11 = FUN_074ce748(uVar16,uVar10,0);
        if ((uVar11 & 1) != 0) goto LAB_0430bd14;
        uVar16 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar16 = FUN_074c4a14(uVar16,0);
        uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x88) + 0x20,0);
        uVar11 = FUN_074ce748(uVar16,uVar10,0);
        if ((uVar11 & 1) == 0) {
          uVar16 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar16 = FUN_074c4a14(uVar16,0);
          uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
          uVar11 = FUN_074ce748(uVar16,uVar10,0);
          if ((uVar11 & 1) == 0) goto LAB_0430c490;
        }
        lVar15 = FUN_077731d4(&local_60,0);
        plVar8 = (long *)0x0;
        if (lVar15 == 0) goto LAB_0430c2dc;
        if (*(int *)(lVar15 + 0x10) != 1) goto LAB_0430c490;
        uVar5 = FUN_073213d0(lVar15,0,0);
        uVar16 = *(undefined8 *)(puVar3 + 0x88);
LAB_0430beb4:
        local_48._0_2_ = uVar5;
      }
      else {
LAB_0430bd14:
        local_48 = FUN_07773978(&local_60,0);
        puVar9 = (undefined8 *)PTR_DAT_0911fe28;
LAB_0430bd28:
        uVar16 = *puVar9;
      }
LAB_0430bec0:
      uVar16 = thunk_FUN_03f4e2c4(uVar16,local_48);
      lVar15 = *(long *)(*(long *)(param_2 + 0x38) + 8);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_03f4b260(lVar15);
      }
      pbVar13 = (byte *)FUN_03951c9c(uVar16,lVar15);
      goto LAB_0430bac0;
    }
    if (uVar6 != 4) {
LAB_0430c490:
      thunk_FUN_03f786f8(PTR_DAT_0911feb8);
      FUN_0395b070();
      uVar16 = FUN_0775d89c(0);
      uVar4 = FUN_07772d00(&local_60,0);
      local_48[0] = uVar4;
      uVar10 = thunk_FUN_03f786f8(PTR_DAT_0911fec0);
      uVar10 = thunk_FUN_03f4e2c4(uVar10,local_48);
      uVar17 = **(undefined8 **)(param_2 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar17 = FUN_074c4a14(uVar17,0);
      uVar16 = FUN_077594ec(uVar16,uVar10,uVar17,0);
      thunk_FUN_03f786f8(PTR_DAT_09111b70);
      uVar10 = thunk_FUN_03f4e68c();
      plVar8 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                 (uVar10,uVar16,0);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar10,param_2);
      }
      goto LAB_0430c554;
    }
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x48) + 0x20,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) {
LAB_0430b7b8:
      uVar7 = FUN_077734ec(&local_60,0);
      uVar16 = *(undefined8 *)(puVar3 + 0x48);
      local_48._0_4_ = uVar7;
      goto LAB_0430ba70;
    }
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) goto LAB_0430b7b8;
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x68) + 0x20,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) {
LAB_0430ba5c:
      uVar16 = FUN_077735e4(&local_60,0);
      local_48._0_8_ = uVar16;
      uVar16 = *(undefined8 *)(puVar3 + 0x68);
      goto LAB_0430ba70;
    }
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) goto LAB_0430ba5c;
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x80) + 0x20,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) {
LAB_0430bc50:
      uVar16 = FUN_077736dc(&local_60,0);
      local_48._0_8_ = uVar16;
      uVar16 = *(undefined8 *)(puVar3 + 0x80);
      goto LAB_0430bec0;
    }
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) goto LAB_0430bc50;
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x38) + 0x20,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) {
LAB_0430bdd4:
      uVar5 = FUN_077733cc(&local_60,0);
      uVar16 = *(undefined8 *)(puVar3 + 0x38);
      goto LAB_0430beb4;
    }
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) goto LAB_0430bdd4;
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) {
System_Linq_Enumerable_WhereSelectListIterator<JsonParser_JsonValue,_object>__Select<Vector2>:
      local_48 = FUN_077737d4(&local_60,0);
      puVar9 = (undefined8 *)PTR_DAT_0910c2f0;
      goto LAB_0430bd28;
    }
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0)
    goto 
    System_Linq_Enumerable_WhereSelectListIterator<JsonParser_JsonValue,_object>__Select<Vector2>;
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x18) + 0x20,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) {
LAB_0430c054:
      uVar4 = FUN_0777333c(&local_60,0);
      uVar16 = *(undefined8 *)(puVar3 + 0x18);
      local_48[0] = uVar4;
      goto LAB_0430bec0;
    }
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) != 0) goto LAB_0430c054;
    uVar16 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar16 = FUN_074c4a14(uVar16,0);
    uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x78) + 0x20,0);
    uVar11 = FUN_074ce748(uVar16,uVar10,0);
    if ((uVar11 & 1) == 0) {
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar11 = FUN_074ce748(uVar16,uVar10,0);
      if ((uVar11 & 1) != 0) goto LAB_0430c110;
      uVar16 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar16 = FUN_074c4a14(uVar16,0);
      uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x50) + 0x20,0);
      uVar11 = FUN_074ce748(uVar16,uVar10,0);
      if ((uVar11 & 1) == 0) {
        uVar16 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar16 = FUN_074c4a14(uVar16,0);
        uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar11 = FUN_074ce748(uVar16,uVar10,0);
        if ((uVar11 & 1) != 0) goto LAB_0430c1cc;
        uVar16 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar16 = FUN_074c4a14(uVar16,0);
        uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x40) + 0x20,0);
        uVar11 = FUN_074ce748(uVar16,uVar10,0);
        if ((uVar11 & 1) == 0) {
          uVar16 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar16 = FUN_074c4a14(uVar16,0);
          uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar11 = FUN_074ce748(uVar16,uVar10,0);
          if ((uVar11 & 1) != 0) goto LAB_0430c2c4;
          uVar16 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar16 = FUN_074c4a14(uVar16,0);
          uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x70) + 0x20,0);
          uVar11 = FUN_074ce748(uVar16,uVar10,0);
          if ((uVar11 & 1) == 0) {
            uVar16 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar16 = FUN_074c4a14(uVar16,0);
            uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar11 = FUN_074ce748(uVar16,uVar10,0);
            if ((uVar11 & 1) != 0) goto LAB_0430c3a4;
            uVar16 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar16 = FUN_074c4a14(uVar16,0);
            uVar10 = FUN_074c4a14(*(long *)(puVar3 + 0x30) + 0x20,0);
            uVar11 = FUN_074ce748(uVar16,uVar10,0);
            if ((uVar11 & 1) == 0) {
              uVar16 = **(undefined8 **)(param_2 + 0x38);
              if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar16 = FUN_074c4a14(uVar16,0);
              uVar10 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar11 = FUN_074ce748(uVar16,uVar10,0);
              if ((uVar11 & 1) == 0) goto LAB_0430c490;
            }
            uVar4 = FUN_077732ac(&local_60,0);
            uVar16 = *(undefined8 *)(puVar3 + 0x30);
            local_48[0] = uVar4;
          }
          else {
LAB_0430c3a4:
            local_48._0_8_ = FUN_07773660(&local_60,0);
            uVar16 = *(undefined8 *)(puVar3 + 0x70);
          }
        }
        else {
LAB_0430c2c4:
          uVar5 = FUN_0777345c(&local_60,0);
          uVar16 = *(undefined8 *)(puVar3 + 0x40);
          local_48._0_2_ = uVar5;
        }
      }
      else {
LAB_0430c1cc:
        uVar7 = FUN_07773568(&local_60,0);
        uVar16 = *(undefined8 *)(puVar3 + 0x50);
        local_48._0_4_ = uVar7;
      }
    }
    else {
LAB_0430c110:
      uVar7 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&local_60,0);
      uVar16 = *(undefined8 *)(puVar3 + 0x78);
      local_48._0_4_ = uVar7;
    }
    uVar16 = thunk_FUN_03f4e2c4(uVar16,local_48);
    lVar15 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_03f4b260(lVar15);
    }
    pbVar13 = (byte *)FUN_03951c9c(uVar16,lVar15);
    bVar1 = *pbVar13;
  }
  plVar8 = (long *)(ulong)bVar1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0430c554:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8);
}


