/*
FUNCTION_NAME: FUN_04301e70
ENTRY_POINT: 04301e70
PROGRAM: cac-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_04301e70(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
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
  local_60 = 0;
  uStack_58 = 0;
  local_48._0_4_ = *(undefined4 *)(param_1 + 0x1c);
  plVar7 = (long *)thunk_FUN_03f4e2c4(**(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0),local_48);
  if (plVar7 == (long *)0x0) {
LAB_04302c2c:
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    goto LAB_04302e8c;
  }
  if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)PTR_DAT_0911fe30 + 0x40)) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_04302e8c;
  }
  puVar8 = (undefined8 *)thunk_FUN_03f4e7d4();
  uStack_58 = puVar8[1];
  local_60 = *puVar8;
  uVar5 = FUN_07772d00(&local_60,0);
  puVar2 = PTR_DAT_0910b550;
  uVar5 = uVar5 & 0xff;
  if (uVar5 - 5 < 2) {
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x28) + 0x20,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) == 0) {
      uVar13 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar10 = FUN_074ce748(uVar13,uVar9,0);
      if ((uVar10 & 1) == 0) goto LAB_04302dc8;
    }
    uVar3 = FUN_07773170(&local_60,0);
    uVar13 = *(undefined8 *)(puVar2 + 0x28);
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar3) & 0xffffffffffffff01;
LAB_043023b4:
    lVar11 = thunk_FUN_03f4e2c4(uVar13,local_48);
LAB_043023c0:
    lVar12 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f4b260(lVar12);
    }
    if (lVar11 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)thunk_FUN_03f4e590(lVar11,lVar12);
      if (plVar7 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(lVar11,lVar12);
        }
        goto LAB_04302e8c;
      }
    }
  }
  else {
    if (uVar5 == 3) {
      uVar13 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x90) + 0x20,0);
      uVar10 = FUN_074ce748(uVar13,uVar9,0);
      if ((uVar10 & 1) == 0) {
        uVar13 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar13 = FUN_074c4a14(uVar13,0);
        uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
        uVar10 = FUN_074ce748(uVar13,uVar9,0);
        if ((uVar10 & 1) == 0) {
          uVar13 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar13 = FUN_074c4a14(uVar13,0);
          uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
          uVar10 = FUN_074ce748(uVar13,uVar9,0);
          if ((uVar10 & 1) == 0) {
            uVar13 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar13 = FUN_074c4a14(uVar13,0);
            uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
            uVar10 = FUN_074ce748(uVar13,uVar9,0);
            if ((uVar10 & 1) == 0) {
              uVar13 = **(undefined8 **)(param_2 + 0x38);
              if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar13 = FUN_074c4a14(uVar13,0);
              uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
              uVar10 = FUN_074ce748(uVar13,uVar9,0);
              if ((uVar10 & 1) == 0) {
                uVar13 = **(undefined8 **)(param_2 + 0x38);
                if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_03f6fea8();
                }
                uVar13 = FUN_074c4a14(uVar13,0);
                uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
                uVar10 = FUN_074ce748(uVar13,uVar9,0);
                if ((uVar10 & 1) == 0) {
                  uVar13 = **(undefined8 **)(param_2 + 0x38);
                  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_03f6fea8();
                  }
                  uVar13 = FUN_074c4a14(uVar13,0);
                  uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
                  uVar10 = FUN_074ce748(uVar13,uVar9,0);
                  if ((uVar10 & 1) != 0) goto LAB_04302668;
                  uVar13 = **(undefined8 **)(param_2 + 0x38);
                  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_03f6fea8();
                  }
                  uVar13 = FUN_074c4a14(uVar13,0);
                  uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x88) + 0x20,0);
                  uVar10 = FUN_074ce748(uVar13,uVar9,0);
                  if ((uVar10 & 1) == 0) {
                    uVar13 = **(undefined8 **)(param_2 + 0x38);
                    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_03f6fea8();
                    }
                    uVar13 = FUN_074c4a14(uVar13,0);
                    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
                    uVar10 = FUN_074ce748(uVar13,uVar9,0);
                    if ((uVar10 & 1) == 0) goto LAB_04302dc8;
                  }
                  lVar11 = FUN_077731d4(&local_60,0);
                  plVar7 = (long *)0x0;
                  if (lVar11 == 0) goto LAB_04302c2c;
                  if (*(int *)(lVar11 + 0x10) != 1) goto LAB_04302dc8;
                  uVar4 = FUN_073213d0(lVar11,0,0);
                  uVar13 = *(undefined8 *)(puVar2 + 0x88);
LAB_04302808:
                  local_48._0_2_ = uVar4;
                }
                else {
LAB_04302668:
                  local_48 = FUN_07773978(&local_60,0);
                  puVar8 = (undefined8 *)PTR_DAT_0911fe28;
LAB_0430267c:
                  uVar13 = *puVar8;
                }

                System_Linq_Enumerable_WhereSelectListIterator<ValueTuple<object,_object>,_object>__Select<FrameGroup>
                :
                uVar13 = thunk_FUN_03f4e2c4(uVar13,local_48);
                lVar11 = *(long *)(*(long *)(param_2 + 0x38) + 8);
                if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_03f4b260(lVar11);
                }
                plVar7 = (long *)FUN_039623a8(uVar13,lVar11);
                goto LAB_04302418;
              }
            }
            local_48 = FUN_077738fc(&local_60,0);
            uVar13 = *(undefined8 *)PTR_DAT_0911fe08;
            goto LAB_043023b4;
          }
        }
        uVar13 = FUN_07773880(&local_60,0);
        local_48._0_8_ = uVar13;
        uVar13 = *(undefined8 *)PTR_DAT_0910b600;
        goto LAB_043023b4;
      }
      lVar11 = FUN_077731d4(&local_60,0);
      goto LAB_043023c0;
    }
    if (uVar5 != 4) {
LAB_04302dc8:
      thunk_FUN_03f786f8(PTR_DAT_0911feb8);
      FUN_0395b070();
      uVar13 = FUN_0775d89c(0);
      uVar3 = FUN_07772d00(&local_60,0);
      local_48[0] = uVar3;
      uVar9 = thunk_FUN_03f786f8(PTR_DAT_0911fec0);
      uVar9 = thunk_FUN_03f4e2c4(uVar9,local_48);
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar13 = FUN_077594ec(uVar13,uVar9,uVar14,0);
      thunk_FUN_03f786f8(PTR_DAT_09111b70);
      uVar9 = thunk_FUN_03f4e68c();
      plVar7 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                 (uVar9,uVar13,0);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar9,param_2);
      }
      goto LAB_04302e8c;
    }
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x48) + 0x20,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_043020fc:
      uVar6 = FUN_077734ec(&local_60,0);
      uVar13 = *(undefined8 *)(puVar2 + 0x48);
      local_48._0_4_ = uVar6;
      goto LAB_043023b4;
    }
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_043020fc;
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x68) + 0x20,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_043023a0:
      uVar13 = FUN_077735e4(&local_60,0);
      local_48._0_8_ = uVar13;
      uVar13 = *(undefined8 *)(puVar2 + 0x68);
      goto LAB_043023b4;
    }
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_043023a0;
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x80) + 0x20,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) {
System_Linq_Enumerable_WhereSelectListIterator<ValueForPlatform<object>,_object>__Select<Vector3>:
      uVar13 = FUN_077736dc(&local_60,0);
      local_48._0_8_ = uVar13;
      uVar13 = *(undefined8 *)(puVar2 + 0x80);
      goto 
      System_Linq_Enumerable_WhereSelectListIterator<ValueTuple<object,_object>,_object>__Select<FrameGroup>
      ;
    }
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0)
    goto 
    System_Linq_Enumerable_WhereSelectListIterator<ValueForPlatform<object>,_object>__Select<Vector3>
    ;
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x38) + 0x20,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_04302728:
      uVar4 = FUN_077733cc(&local_60,0);
      uVar13 = *(undefined8 *)(puVar2 + 0x38);
      goto LAB_04302808;
    }
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_04302728;
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_043028f0:
      local_48 = FUN_077737d4(&local_60,0);
      puVar8 = (undefined8 *)PTR_DAT_0910c2f0;
      goto LAB_0430267c;
    }
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_043028f0;
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x18) + 0x20,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) {
LAB_043029a8:
      uVar3 = FUN_0777333c(&local_60,0);
      uVar13 = *(undefined8 *)(puVar2 + 0x18);
      local_48[0] = uVar3;
      goto 
      System_Linq_Enumerable_WhereSelectListIterator<ValueTuple<object,_object>,_object>__Select<FrameGroup>
      ;
    }
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) != 0) goto LAB_043029a8;
    uVar13 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x78) + 0x20,0);
    uVar10 = FUN_074ce748(uVar13,uVar9,0);
    if ((uVar10 & 1) == 0) {
      uVar13 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar10 = FUN_074ce748(uVar13,uVar9,0);
      if ((uVar10 & 1) != 0) goto LAB_04302a64;
      uVar13 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x50) + 0x20,0);
      uVar10 = FUN_074ce748(uVar13,uVar9,0);
      if ((uVar10 & 1) == 0) {
        uVar13 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar13 = FUN_074c4a14(uVar13,0);
        uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar10 = FUN_074ce748(uVar13,uVar9,0);
        if ((uVar10 & 1) != 0)
        goto 
        System_Linq_Enumerable_WhereSelectListIterator<ValueTuple<object,_object>,_object>__Select<object>
        ;
        uVar13 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar13 = FUN_074c4a14(uVar13,0);
        uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x40) + 0x20,0);
        uVar10 = FUN_074ce748(uVar13,uVar9,0);
        if ((uVar10 & 1) == 0) {
          uVar13 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar13 = FUN_074c4a14(uVar13,0);
          uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar10 = FUN_074ce748(uVar13,uVar9,0);
          if ((uVar10 & 1) != 0) goto LAB_04302c14;
          uVar13 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar13 = FUN_074c4a14(uVar13,0);
          uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x70) + 0x20,0);
          uVar10 = FUN_074ce748(uVar13,uVar9,0);
          if ((uVar10 & 1) == 0) {
            uVar13 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar13 = FUN_074c4a14(uVar13,0);
            uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar10 = FUN_074ce748(uVar13,uVar9,0);
            if ((uVar10 & 1) != 0)
            goto 
            System_Linq_Enumerable_WhereSelectListIterator<ValueTuple<object,_object>,_object>__Select<Vector2>
            ;
            uVar13 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar13 = FUN_074c4a14(uVar13,0);
            uVar9 = FUN_074c4a14(*(long *)(puVar2 + 0x30) + 0x20,0);
            uVar10 = FUN_074ce748(uVar13,uVar9,0);
            if ((uVar10 & 1) == 0) {
              uVar13 = **(undefined8 **)(param_2 + 0x38);
              if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar13 = FUN_074c4a14(uVar13,0);
              uVar9 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar10 = FUN_074ce748(uVar13,uVar9,0);
              if ((uVar10 & 1) == 0) goto LAB_04302dc8;
            }
            uVar3 = FUN_077732ac(&local_60,0);
            uVar13 = *(undefined8 *)(puVar2 + 0x30);
            local_48[0] = uVar3;
          }
          else {
System_Linq_Enumerable_WhereSelectListIterator<ValueTuple<object,_object>,_object>__Select<Vector2>:
            local_48._0_8_ = FUN_07773660(&local_60,0);
            uVar13 = *(undefined8 *)(puVar2 + 0x70);
          }
        }
        else {
LAB_04302c14:
          uVar4 = FUN_0777345c(&local_60,0);
          uVar13 = *(undefined8 *)(puVar2 + 0x40);
          local_48._0_2_ = uVar4;
        }
      }
      else {
System_Linq_Enumerable_WhereSelectListIterator<ValueTuple<object,_object>,_object>__Select<object>:
        uVar6 = FUN_07773568(&local_60,0);
        uVar13 = *(undefined8 *)(puVar2 + 0x50);
        local_48._0_4_ = uVar6;
      }
    }
    else {
LAB_04302a64:
      uVar6 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&local_60,0);
      uVar13 = *(undefined8 *)(puVar2 + 0x78);
      local_48._0_4_ = uVar6;
    }
    uVar13 = thunk_FUN_03f4e2c4(uVar13,local_48);
    lVar11 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f4b260(lVar11);
    }
    plVar7 = (long *)FUN_039623a8(uVar13,lVar11);
  }
LAB_04302418:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_04302e8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar7);
}


