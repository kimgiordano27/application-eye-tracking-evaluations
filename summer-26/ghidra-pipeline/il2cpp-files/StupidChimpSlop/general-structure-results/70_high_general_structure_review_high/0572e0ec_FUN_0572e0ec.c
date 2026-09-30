/*
FUNCTION_NAME: FUN_0572e0ec
ENTRY_POINT: 0572e0ec
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x0572ed30) */
/* WARNING: Removing unreachable block (ram,0x0572e690) */
/* WARNING: Removing unreachable block (ram,0x0572ecd8) */
/* WARNING: Removing unreachable block (ram,0x0572e490) */

void FUN_0572e0ec(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 *local_c0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  char local_54 [4];
  undefined8 local_50;
  uint local_44;
  
  if ((DAT_06a54dec & 1) == 0) {
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>__ctor__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>_Add__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>_TryGetValue__
                );
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>__ctor__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>__ctor__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<object,_Transform>_set_Item__);
    FUN_02d4dc40(PTR_DAT_0664a3a8);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>_Add__);
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>_TryGetValue__
                );
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<int>>__ctor__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<int>>_Add__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<int>>_Clear__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<int>>_GetEnumerator__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<int>>_TryAdd__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<int>>_TryGetValue__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_List<string>>_GetEnumerator__)
    ;
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue__
                );
    FUN_02d4dc40(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
                );
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__);
    DAT_06a54dec = 1;
  }
  local_44 = *param_1;
  lVar10 = *(long *)(param_1 + 8);
  local_50 = 0;
  local_54[0] = '\0';
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  auVar14 = ZEXT816(0);
  local_a8 = 0;
  if (local_44 < 4) {
    uVar11 = 0;
    local_80 = ZEXT816(0);
    local_70 = ZEXT816(0);
    goto LAB_0572e73c;
  }
  if (local_44 == 4) {
    uVar11 = 0;
    local_a0 = ZEXT816(0);
    local_80 = ZEXT816(0);
    local_70 = ZEXT816(0);
    do {
      if (local_44 == 4) {
        local_80 = *(undefined1 (*) [16])(param_1 + 0x20);
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        local_44 = 0xffffffff;
        *param_1 = 0xffffffff;
LAB_0572e59c:
        FUN_04f309e0(local_80,0);
      }
      else if (*(char *)((long)param_1 + 0x59) != '\0') {
        bVar5 = true;
        if ((char)param_1[0x16] == '\0') {
          bVar5 = *(long *)(param_1 + 0x18) != 0;
        }
        if (*(long *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8(0,bVar5);
        }
        lVar13 = FUN_0574c248(*(long *)(param_1 + 0x14),bVar5,*(undefined8 *)(param_1 + 10),0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        auVar14 = FUN_050766e4(lVar13,0,0);
        local_80 = auVar14;
        uVar8 = FUN_04f309c8(local_80,0);
        if ((uVar8 & 1) == 0) {
          local_44 = 4;
          *param_1 = 4;
          *(undefined1 (*) [16])(param_1 + 0x20) = local_80;
          thunk_FUN_02dc1ef0(param_1 + 0x20,0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<object,_Transform>_set_Item__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_02f2b1f4(param_1 + 2,local_80,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>_Add__
                      );
          return;
        }
        goto LAB_0572e59c;
      }
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0574531c(*(long *)(param_1 + 0xe),1,0,0);
      plVar7 = *(long **)(param_1 + 0x12);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      local_50 = *(undefined8 *)(lVar10 + 0x128);
      local_d0 = &local_44;
      local_c0 = &local_50;
      local_d8 = 0;
      local_c8 = local_54;
      local_54[0] = '\0';
      FUN_05065dd8(local_50,local_54,0);
      lVar13 = *(long *)(param_1 + 0x10);
      if (lVar13 != 0) {
        *(undefined1 *)(lVar10 + 0x88) = 1;
        plVar7 = *(long **)(param_1 + 0x14);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270));
          lVar13 = *(long *)(param_1 + 0x10);
        }
        lVar10 = *(long *)(param_1 + 0xc);
        if (lVar10 != 0) {
          uVar11 = thunk_FUN_02db45e8(
                                     Method_System_Collections_Generic_Dictionary<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_Add__
                                     );
          FUN_042bc630(lVar10,lVar13,uVar11);
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          uVar11 = thunk_FUN_02db45e8(
                                     Method_System_Collections_Generic_Dictionary<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>__ctor__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar9,uVar11);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar9 = FUN_0572a9ec(lVar10,1,*(undefined8 *)(param_1 + 0x1a),*(undefined8 *)(param_1 + 10))
        ;
        *(undefined8 *)(param_1 + 0xe) = uVar9;
        thunk_FUN_02dc1ef0();
      }
      else {
        *(long *)(param_1 + 0xe) = *(long *)(param_1 + 0x18);
        thunk_FUN_02dc1ef0();
      }
      if (((int)local_44 < 0) && (*local_c8 != '\0')) {
        RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_c0,0);
      }
      puVar12 = param_1 + 0x10;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
      puVar12 = param_1 + 0x12;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
      puVar12 = param_1 + 0x14;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
      puVar12 = param_1 + 0x18;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
      puVar12 = param_1 + 0x1a;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
LAB_0572e6e4:
      puVar12 = param_1 + 0x10;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
      puVar12 = param_1 + 0x12;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
      puVar12 = param_1 + 0x14;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
      puVar12 = param_1 + 0x18;
      puVar12[0] = 0;
      puVar12[1] = 0;
      *(undefined2 *)(param_1 + 0x16) = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
      puVar12 = param_1 + 0x1a;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02dc1ef0(puVar12,0);
      auVar14 = local_a0;
LAB_0572e73c:
      local_a0 = auVar14;
      if ((int)local_44 < 2) {
        if (local_44 == 0) {
          local_70 = *(undefined1 (*) [16])(param_1 + 0x1c);
          param_1[0x1c] = 0;
          param_1[0x1d] = 0;
          param_1[0x1e] = 0;
          param_1[0x1f] = 0;
          local_44 = 0xffffffff;
          *param_1 = 0xffffffff;
LAB_0572e870:
          local_a0 = auVar14;
          lVar13 = FUN_046f3f24(local_70,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_List<int>>_Add__
                               );
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          plVar7 = (long *)(lVar10 + 0xf8);
          *plVar7 = lVar13;
          thunk_FUN_02dc1ef0(plVar7);
          if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar13 = FUN_05748230(*plVar7,*(undefined8 *)(param_1 + 10),0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          auVar14 = FUN_050766e4(lVar13,0,0);
          local_80 = auVar14;
          uVar8 = FUN_04f309c8(local_80,0);
          if ((uVar8 & 1) == 0) {
            local_44 = 1;
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x20) = local_80;
            thunk_FUN_02dc1ef0(param_1 + 0x20,0);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<object,_Transform>_set_Item__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_02f2b1f4(param_1 + 2,local_80,param_1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>_Add__
                        );
            return;
          }
        }
        else {
          if (local_44 != 1) {
LAB_0572e798:
            if (*(int *)(*(long *)PTR_DAT_0664a3a8 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0506538c(param_1 + 10,0);
            if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar13 = FUN_057459e0(*(long *)(param_1 + 0xe),0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            auVar14 = FUN_03db3f80(lVar13,0,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor__
                                  );
            local_70 = auVar14;
            uVar8 = FUN_046f3edc(local_70,*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<string,_List<int>>_GetEnumerator__
                                );
            auVar14 = local_a0;
            if ((uVar8 & 1) == 0) {
              local_44 = 0;
              *param_1 = 0;
              *(undefined1 (*) [16])(param_1 + 0x1c) = local_70;
              thunk_FUN_02dc1ef0(param_1 + 0x1c,0);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<object,_Transform>_set_Item__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_02f27f3c(param_1 + 2,local_70,param_1,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>__ctor__
                          );
              return;
            }
            goto LAB_0572e870;
          }
          local_80 = *(undefined1 (*) [16])(param_1 + 0x20);
          param_1[0x20] = 0;
          param_1[0x21] = 0;
          param_1[0x22] = 0;
          param_1[0x23] = 0;
          local_44 = 0xffffffff;
          *param_1 = 0xffffffff;
        }
        FUN_04f309e0(local_80,0);
        if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar13 = FUN_05745a98(*(long *)(param_1 + 0xe),0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        local_88 = FUN_03db3f64(lVar13,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
                               );
        uVar8 = FUN_03ccaf64(&local_88,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_List<int>>_TryGetValue__
                            );
        auVar14 = local_a0;
        if ((uVar8 & 1) == 0) {
          local_44 = 2;
          *param_1 = 2;
          *(undefined8 *)(param_1 + 0x24) = local_88;
          thunk_FUN_02dc1ef0(param_1 + 0x24,0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<object,_Transform>_set_Item__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_02f2a184(param_1 + 2,&local_88,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>__ctor__
                      );
          return;
        }
LAB_0572e990:
        local_a0 = auVar14;
        uVar9 = FUN_03ccafa4(&local_88,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_List<int>>_TryAdd__
                            );
        *(undefined8 *)(param_1 + 0x14) = uVar9;
        thunk_FUN_02dc1ef0();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar13 = FUN_0572b5d8(lVar10,*(undefined8 *)(param_1 + 0x14),*(undefined8 *)(param_1 + 10));
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        auVar14 = FUN_03da9df4(lVar13,0,*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<string,_List<string>>_GetEnumerator__
                              );
        local_a0 = auVar14;
        uVar8 = FUN_046f3600(local_a0,*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_List<int>>_Clear__
                            );
        if ((uVar8 & 1) == 0) {
          local_44 = 3;
          *param_1 = 3;
          *(undefined1 (*) [16])(param_1 + 0x26) = local_a0;
          thunk_FUN_02dc1ef0(param_1 + 0x26,0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<object,_Transform>_set_Item__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_02f253dc(param_1 + 2,local_a0,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>_TryGetValue__
                      );
          return;
        }
      }
      else {
        if (local_44 == 2) {
          local_88 = *(undefined8 *)(param_1 + 0x24);
          param_1[0x24] = 0;
          param_1[0x25] = 0;
          local_44 = 0xffffffff;
          *param_1 = 0xffffffff;
          goto LAB_0572e990;
        }
        if (local_44 != 3) goto LAB_0572e798;
        local_a0 = *(undefined1 (*) [16])(param_1 + 0x26);
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        local_44 = 0xffffffff;
        *param_1 = 0xffffffff;
      }
      FUN_046f3648(&local_d8,local_a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_List<int>>__ctor__);
      puVar4 = local_c0;
      pcVar3 = local_c8;
      bVar1 = (byte)local_d0;
      bVar2 = local_d0._1_1_;
      *(undefined8 *)(param_1 + 0x12) = local_d8;
      thunk_FUN_02dc1ef0();
      *(char **)(param_1 + 0x1a) = pcVar3;
      *(byte *)(param_1 + 0x16) = bVar1 & 1;
      *(byte *)((long)param_1 + 0x59) = bVar2 & 1;
      thunk_FUN_02dc1ef0(param_1 + 0x1a,pcVar3);
      *(undefined8 **)(param_1 + 0x18) = puVar4;
      thunk_FUN_02dc1ef0(param_1 + 0x18,puVar4);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      local_50 = *(undefined8 *)(lVar10 + 0x128);
      local_d0 = &local_44;
      local_c0 = &local_50;
      local_d8 = 0;
      local_c8 = local_54;
      local_54[0] = '\0';
      FUN_05065dd8(local_50,local_54,0);
      lVar13 = *(long *)(param_1 + 0x10);
      if (lVar13 != 0) {
        *(undefined1 *)(lVar10 + 0x88) = 1;
        lVar10 = *(long *)(param_1 + 0xc);
        if (lVar10 != 0) {
          uVar11 = thunk_FUN_02db45e8(
                                     Method_System_Collections_Generic_Dictionary<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_Add__
                                     );
          FUN_042bc630(lVar10,lVar13,uVar11);
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          uVar11 = thunk_FUN_02db45e8(
                                     Method_System_Collections_Generic_Dictionary<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>__ctor__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar9,uVar11);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if ((char)param_1[0x16] == '\0') {
        *(undefined1 *)(lVar10 + 0x88) = 1;
        *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(param_1 + 0x12);
        thunk_FUN_02dc1ef0(lVar10 + 0x100);
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_042bc458(*(long *)(param_1 + 0xc),
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
                    );
        uVar11 = *(undefined8 *)(param_1 + 0x12);
        iVar6 = 9;
      }
      else {
        *(undefined1 *)(lVar10 + 0x130) = 0;
        *(undefined1 *)(lVar10 + 0x88) = 0;
        *(undefined8 *)(lVar10 + 0x100) = 0;
        thunk_FUN_02dc1ef0(lVar10 + 0x100,0);
        iVar6 = 3;
        *(undefined8 *)(lVar10 + 0x110) = *(undefined8 *)(param_1 + 0x18);
        thunk_FUN_02dc1ef0(lVar10 + 0x110);
      }
      if (((int)local_44 < 0) && (*local_c8 != '\0')) {
        RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_c0,0);
      }
    } while ((iVar6 == 0) || (iVar6 == 3));
    auVar14 = local_80;
    if (iVar6 != 9) {
      return;
    }
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar6 = thunk_FUN_02d86e14(lVar10 + 0x118,0,0,0);
    if (iVar6 == 1) {
      lVar10 = thunk_FUN_02db45e8(PTR_DAT_06647de0);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar11 = FUN_0572afc0();
      uVar9 = thunk_FUN_02db45e8(
                                Method_System_Collections_Generic_Dictionary<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar11,uVar9);
    }
    uVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__
                               );
    FUN_0573f2a0(uVar11,0);
    puVar12 = param_1 + 0xc;
    *(undefined8 *)puVar12 = uVar11;
    thunk_FUN_02dc1ef0(puVar12,uVar11);
    local_50 = *(undefined8 *)(lVar10 + 0x128);
    local_d0 = &local_44;
    local_c0 = &local_50;
    local_d8 = 0;
    local_c8 = local_54;
    local_54[0] = '\0';
    FUN_05065dd8(local_50,local_54,0);
    *(undefined1 *)(lVar10 + 0x125) = 1;
    lVar13 = FUN_02d86d6c(lVar10 + 0x108,*(undefined8 *)puVar12,0);
    if (lVar13 == 0) {
      puVar12 = param_1 + 0xe;
      *(undefined8 *)puVar12 = *(undefined8 *)(lVar10 + 0x110);
      thunk_FUN_02dc1ef0(puVar12);
      if (*(long *)(lVar10 + 0x110) != 0) {
        uVar11 = FUN_05745a80(*(long *)(lVar10 + 0x110),0);
        *(undefined8 *)(lVar10 + 0xf8) = uVar11;
        thunk_FUN_02dc1ef0();
      }
      *(undefined8 *)(lVar10 + 0xb0) = *(undefined8 *)(lVar10 + 0xa8);
      thunk_FUN_02dc1ef0();
      uVar11 = FUN_0572a9ec(lVar10,0,0,*(undefined8 *)(param_1 + 10));
      *(undefined8 *)puVar12 = uVar11;
      thunk_FUN_02dc1ef0(puVar12);
      uVar11 = 0;
      iVar6 = 0xd;
    }
    else {
      FUN_042bc6f0(lVar13,*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue__
                  );
      if (*(char *)(lVar10 + 0x88) == '\0') {
LAB_0572e40c:
        thunk_FUN_02db45e8(PTR_DAT_066463b8);
        uVar11 = thunk_FUN_02d8a638();
        uVar9 = thunk_FUN_02db45e8(
                                  Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                                  );
        FUN_05002ed0(uVar11,uVar9,0);
        uVar9 = thunk_FUN_02db45e8(
                                  Method_System_Collections_Generic_Dictionary<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar11,uVar9);
      }
      lVar13 = FUN_042bc390(lVar13,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__
                           );
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar8 = FUN_050763f8(lVar13,0);
      if ((uVar8 & 1) == 0) goto LAB_0572e40c;
      uVar11 = *(undefined8 *)(lVar10 + 0x100);
      iVar6 = 9;
    }
    if (((int)local_44 < 0) && (*local_c8 != '\0')) {
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_c0,0);
    }
    auVar14._8_8_ = local_80._8_8_;
    auVar14._0_8_ = local_80._0_8_;
    if (iVar6 == 0xd) goto LAB_0572e6e4;
    if (iVar6 != 9) {
      local_80 = auVar14;
      if (iVar6 == 0) goto LAB_0572e6e4;
      return;
    }
  }
  *param_1 = 0xfffffffe;
  puVar12 = param_1 + 0xc;
  puVar12[0] = 0;
  puVar12[1] = 0;
  local_80 = auVar14;
  thunk_FUN_02dc1ef0(puVar12,0);
  puVar12 = param_1 + 0xe;
  puVar12[0] = 0;
  puVar12[1] = 0;
  thunk_FUN_02dc1ef0(puVar12,0);
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<object,_Transform>_set_Item__ +
              0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_044ad980(param_1 + 2,uVar11,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>__ctor__);
  return;
}


