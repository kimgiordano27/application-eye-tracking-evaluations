/*
FUNCTION_NAME: FUN_0380f9c8
ENTRY_POINT: 0380f9c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_0380f9c8(int *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  undefined1 local_80 [4];
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  
  puVar8 = (undefined8 *)local_80;
  if ((DAT_04137d35 & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Type,_SimulationBehaviourUpdater_BehaviourList>_Add__
                );
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<TypeSpec,_TypeInfo_StructInfo>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>__ctor__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_Add__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_Clear__
                );
    FUN_01ab69ac(PTR_DAT_03cbf7f8);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_ContainsKey__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_get_Item__
                );
    DAT_04137d35 = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_Clear__;
  puVar1 = PTR_DAT_03cbf7f8;
  local_78 = 0;
  local_70 = 0;
  _local_80 = 0;
  lVar6 = *(long *)(param_1 + 2);
  if (lVar6 != 0) {
    iVar4 = *(int *)(lVar6 + 0x18);
    if (iVar4 < 1) {
LAB_0380fbac:
      if ((param_2 == (long *)0x0) ||
         (uVar7 = (**(code **)(*param_2 + 0x198))
                            (param_2,param_1[6] << 5,param_1[7] * *param_1,&local_78,
                             *(undefined8 *)(*param_2 + 0x1a0)), (uVar7 & 1) == 0)) {
        puVar1 = 
        Method_System_Collections_Generic_Dictionary<Type,_SimulationBehaviourUpdater_BehaviourList>_Add__
        ;
        lVar6 = *(long *)
                 Method_System_Collections_Generic_Dictionary<Type,_SimulationBehaviourUpdater_BehaviourList>_Add__
        ;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)puVar1;
        }
        puVar8 = *(undefined8 **)(lVar6 + 0xb8);
LAB_0380fd88:
        return *puVar8;
      }
      lVar6 = *(long *)(param_1 + 4);
      if (lVar6 != 0) {
        iVar4 = FUN_022158c0(lVar6,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>__ctor__
                            );
        FUN_022158dc(lVar6,*param_1 + iVar4,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_ContainsKey__
                    );
        puVar1 = 
        Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
        ;
        if (*(long *)(param_1 + 4) != 0) {
          local_68 = CONCAT44(local_68._4_4_,0xfffffffe);
          FUN_01b5f01c(*(long *)(param_1 + 4),&local_68,
                       *(undefined8 *)
                        Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                      );
          if (1 < *param_1) {
            iVar4 = 1;
            do {
              if (*(long *)(param_1 + 4) == 0) goto LAB_0380fdac;
              local_68 = CONCAT44(local_68._4_4_,0xffffffff);
              FUN_01b5f01c(*(long *)(param_1 + 4),&local_68,*(undefined8 *)puVar1);
              iVar4 = iVar4 + 1;
            } while (iVar4 < *param_1);
          }
          lVar6 = *(long *)(param_1 + 2);
          if (DAT_0413104f == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbdee0);
            DAT_0413104f = '\x01';
          }
          uVar7 = local_78;
          puVar1 = PTR_DAT_03cbdee0;
          iVar4 = (int)local_78;
          iVar9 = (int)local_70;
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar5 = FUN_0276c214(uVar7 & 0xffffffff,iVar9 + iVar4,0);
          if (DAT_04131050 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbdee0);
            DAT_04131050 = '\x01';
          }
          iVar4 = local_78._4_4_;
          iVar9 = local_70._4_4_;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar4 = FUN_0276c214(iVar4,iVar9 + iVar4,0);
          if (lVar6 != 0) {
            local_68 = CONCAT44(*param_1 * 0x20 + -1,uVar5 & 0xffff | iVar4 << 0x10);
            FUN_01b5f01c(lVar6,&local_68,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<TypeSpec,_TypeInfo_StructInfo>_TryGetValue__
                        );
            _local_80 = 0x100000000000000;
            if (*(long *)(param_1 + 2) != 0) {
              _local_80 = CONCAT44(0x1000000,*(int *)(*(long *)(param_1 + 2) + 0x18) + -1);
              puVar8 = (undefined8 *)local_80;
              goto LAB_0380fd88;
            }
          }
        }
      }
    }
    else {
      sVar11 = 0;
      iVar9 = 0;
      do {
        FUN_02215a88(lVar6,iVar9,&local_68,*(undefined8 *)puVar2);
        uVar7 = local_68;
        if (local_68 >> 0x20 != 0) {
          iVar12 = *param_1;
          iVar10 = iVar12 * iVar9;
          if (iVar10 < iVar10 + iVar12) {
            do {
              if (*(long *)(param_1 + 4) == 0) goto LAB_0380fdac;
              FUN_02215a88(*(long *)(param_1 + 4),iVar10,&local_68,*(undefined8 *)puVar1);
              uVar5 = (uint)local_68;
              if ((uint)local_68 != 0) {
                uVar3 = FUN_0380fdb0(local_68 & 0xffffffff);
                if (*(long *)(param_1 + 4) == 0) goto LAB_0380fdac;
                local_68 = CONCAT44(local_68._4_4_,
                                    uVar5 & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU));
                FUN_02215b6c(*(long *)(param_1 + 4),iVar10,&local_68,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_get_Item__
                            );
                if (*(long *)(param_1 + 2) == 0) goto LAB_0380fdac;
                local_68 = uVar7 - 0x100000000;
                FUN_02215b6c(*(long *)(param_1 + 2),iVar9,&local_68,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_TryGetValue__
                            );
                _local_80 = CONCAT17(1,(uint7)(byte)uVar3 << 0x30);
                _local_80 = CONCAT24((short)iVar10 + (short)*param_1 * sVar11,iVar9);
                goto LAB_0380fd88;
              }
              iVar12 = iVar12 + -1;
              iVar10 = iVar10 + 1;
            } while (iVar12 != 0);
          }
        }
        iVar9 = iVar9 + 1;
        if (iVar9 == iVar4) goto LAB_0380fbac;
        lVar6 = *(long *)(param_1 + 2);
        sVar11 = sVar11 + -1;
      } while (lVar6 != 0);
    }
  }
LAB_0380fdac:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


