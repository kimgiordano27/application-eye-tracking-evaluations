/*
FUNCTION_NAME: FUN_05c35670
ENTRY_POINT: 05c35670
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_05c35670(long param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  long local_68;
  
  if ((DAT_06dc27e4 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fda78);
    FUN_02d965b8(PTR_DAT_069fda80);
    FUN_02d965b8(PTR_DAT_069fda88);
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fcea0);
    FUN_02d965b8(PTR_DAT_069fda90);
    FUN_02d965b8(PTR_DAT_069fd220);
    FUN_02d965b8(PTR_DAT_069fda98);
    FUN_02d965b8(PTR_DAT_069fdf78);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<ulong,_Dictionary<ulong,_NetworkObject>>_get_Item__
                );
    FUN_02d965b8(PTR_DAT_069fd228);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_ContainsKey__
                );
    FUN_02d965b8(PTR_DAT_069fb9e8);
    DAT_06dc27e4 = 1;
  }
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<ulong,_Dictionary<ulong,_NetworkObject>>_get_Item__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__;
  puVar3 = PTR_DAT_069fda80;
  puVar2 = PTR_DAT_069fcea0;
  bVar17 = false;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  do {
    iVar8 = *param_4;
    if (iVar8 == 0) {
      if (param_2 == 0) goto LAB_05c35d7c;
      uVar10 = FUN_05c28870(*(undefined8 *)(param_2 + 0x10),param_3,*(undefined4 *)(param_2 + 0x18),
                            &local_68,0);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      if (local_68 != 0) {
        *param_4 = 1;
        lVar9 = FUN_05370114(local_68,0x20,0,0);
        if (lVar9 == 0) goto LAB_05c35d7c;
        if (1 < *(int *)(lVar9 + 0x18)) {
          iVar8 = FUN_0536a4a8(*(undefined8 *)(lVar9 + 0x20),
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_ContainsKey__
                               ,1,0);
          lVar15 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
          if (iVar8 == 0) {
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar15 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
            }
            *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
            LeanTween__value(param_1 + 0xa0);
            if ((*(long *)(param_1 + 0x48) == 0) ||
               (lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x48), lVar15 == 0))
            goto LAB_05c35d7c;
            uVar12 = *(undefined8 *)
                      (*(long *)(*(long *)OVRPlugin_OVRP_1_121_0_TypeInfo + 0xb8) + 0x10);
          }
          else {
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar15 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
            }
            *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8);
            LeanTween__value(param_1 + 0xa0);
            if ((*(long *)(param_1 + 0x48) == 0) ||
               (lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x48), lVar15 == 0))
            goto LAB_05c35d7c;
            uVar12 = *(undefined8 *)(*(long *)(*(long *)OVRPlugin_OVRP_1_121_0_TypeInfo + 0xb8) + 8)
            ;
          }
          *(undefined8 *)(lVar15 + 0x20) = uVar12;
          LeanTween__value();
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          uVar7 = FUN_05505268(*(undefined8 *)(lVar9 + 0x28),0);
          *(undefined4 *)(param_1 + 0x90) = uVar7;
          if (*(int *)(lVar9 + 0x18) < 3) {
            uVar12 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          }
          else {
            uVar12 = FUN_0536e55c(*(undefined8 *)PTR_DAT_069fb9e8,lVar9,2,
                                  *(int *)(lVar9 + 0x18) + -2,0);
          }
          *(undefined8 *)(param_1 + 0x98) = uVar12;
          LeanTween__value(param_1 + 0x98);
          if (*(int *)(param_2 + 0x18) <= *param_3) {
            return 1;
          }
          iVar8 = *param_4;
          goto LAB_05c35950;
        }
        goto LAB_05c35d80;
      }
      bVar14 = true;
    }
    else {
      if (iVar8 == 4) {
        uVar12 = thunk_FUN_02dfd288(
                                   Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_GetEnumerator__
                                   );
        uVar13 = 6;
        goto LAB_05c35db4;
      }
LAB_05c35950:
      if (iVar8 == 1) {
        *param_4 = 2;
        uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_05ce7754(uVar12,0);
        *(undefined8 *)(param_1 + 0x88) = uVar12;
        LeanTween__value(param_1 + 0x88,uVar12);
        lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
        FUN_0400f984(lVar9,*(undefined8 *)PTR_DAT_069fd220);
        if (param_2 == 0) {
LAB_05c35d7c:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        while( true ) {
          uVar10 = FUN_05c28870(*(undefined8 *)(param_2 + 0x10),param_3,
                                *(undefined4 *)(param_2 + 0x18),&local_68,0);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          if (local_68 == 0) break;
          if (*(int *)(local_68 + 0x10) < 1) {
LAB_05c35a68:
            if (lVar9 == 0) goto LAB_05c35d7c;
            lVar15 = *(long *)(lVar9 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_05c35d7c;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = local_68;
              LeanTween__value();
            }
            else {
              FUN_040101ec(lVar9,local_68,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            sVar6 = FUN_053674f8(local_68,0,0);
            if (sVar6 != 0x20) {
              if (local_68 == 0) goto LAB_05c35d7c;
              sVar6 = FUN_053674f8(local_68,0,0);
              if (sVar6 != 9) goto LAB_05c35a68;
            }
            if (lVar9 == 0) goto LAB_05c35d7c;
            iVar8 = *(int *)(lVar9 + 0x18) + -1;
            if (iVar8 < 0) {
              return 0;
            }
            uVar12 = FUN_0400ff1c(lVar9,iVar8,*(undefined8 *)PTR_DAT_069fdf78);
            uVar12 = FUN_05362cb4(uVar12,local_68,0);
            FUN_0400ff70(lVar9,iVar8,uVar12,*(undefined8 *)puVar5);
          }
        }
        if (lVar9 == 0) goto LAB_05c35d7c;
        FUN_04010c90(&local_98,lVar9,*(undefined8 *)PTR_DAT_069fda90);
        local_70 = local_88;
        puStack_78 = puStack_90;
        local_80 = local_98;
        local_98 = 0;
        puStack_90 = &local_80;
        while (uVar10 = FUN_05156804(&local_80,*(undefined8 *)puVar3), lVar9 = local_70,
              (uVar10 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar8 = FUN_05372384(local_70,0x3a,0);
          if (iVar8 == -1) {
            thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
            uVar12 = thunk_FUN_02dd3144();
            uVar13 = thunk_FUN_02dfd288(
                                       Method_System_Collections_Generic_Dictionary<ulong,_List<int>>__ctor__
                                       );
            uVar11 = thunk_FUN_02dfd288(PTR_DAT_06a139e8);
            FUN_0544bfcc(uVar12,uVar13,uVar11,0);
            uVar13 = thunk_FUN_02dfd288(
                                       Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_Add__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar12,uVar13);
          }
          uVar12 = FUN_0536f444(lVar9,0,iVar8,0);
          lVar9 = FUN_05371b10(lVar9,iVar8 + 1,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar13 = FUN_05371f5c(lVar9,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar10 = FUN_05ced250(uVar12,0);
          lVar9 = *(long *)(param_1 + 0x88);
          if ((uVar10 & 1) == 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05cee21c(lVar9,uVar12,uVar13,0);
          }
          else {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05ced510(lVar9,uVar12,uVar13,0);
          }
        }
        FUN_05156800(&local_80,*(undefined8 *)PTR_DAT_069fda78);
        if (*(int *)(param_1 + 0x90) != 100) {
          *param_4 = 3;
          return 1;
        }
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x48), lVar9 == 0)) goto LAB_05c35d7c;
        *(undefined1 *)(lVar9 + 0x31) = 1;
        if (*(int *)(param_2 + 0x18) <= *param_3) {
          return 1;
        }
        lVar9 = *(long *)(param_1 + 0x40);
        if (lVar9 == 0) goto LAB_05c35d7c;
        if (*(char *)(lVar9 + 0x124) != '\0') {
          FUN_05c19424(lVar9,100,*(undefined8 *)(param_1 + 0x88),0);
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_05c35d7c;
          *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x124) = 0;
        }
        bVar14 = false;
        bVar17 = true;
        *param_4 = 0;
      }
      else {
        bVar14 = false;
      }
    }
    if (!bVar14 && !bVar17) {
LAB_05c35d80:
      uVar12 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_GetEnumerator__
                                 );
      uVar13 = 0xb;
LAB_05c35db4:
      uVar12 = FUN_05c353e4(param_1,uVar13,0,uVar12);
      uVar13 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_Add__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar13);
    }
  } while( true );
}


