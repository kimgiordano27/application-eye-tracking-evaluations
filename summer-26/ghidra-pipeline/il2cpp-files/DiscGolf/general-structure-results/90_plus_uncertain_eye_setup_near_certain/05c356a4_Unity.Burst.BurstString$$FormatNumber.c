/*
FUNCTION_NAME: Unity.Burst.BurstString$$FormatNumber
ENTRY_POINT: 05c356a4
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


undefined8 Unity_Burst_BurstString__FormatNumber(ulong param_1)

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
  long unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  bool bVar17;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x23 + 0x7e4) = 1;
  }
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<ulong,_Dictionary<ulong,_NetworkObject>>_get_Item__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__;
  puVar3 = PTR_DAT_069fda80;
  puVar2 = PTR_DAT_069fcea0;
  bVar17 = false;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  do {
    iVar8 = *unaff_x20;
    if (iVar8 == 0) {
      if (unaff_x22 == 0) goto LAB_05c35d7c;
      uVar10 = FUN_05c28870(*(undefined8 *)(unaff_x22 + 0x10));
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      if (in_stack_00000038 != 0) {
        *unaff_x20 = 1;
        lVar9 = FUN_05370114(in_stack_00000038,0x20,0,0);
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
            *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
            LeanTween__value(unaff_x19 + 0xa0);
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar15 == 0))
            goto LAB_05c35d7c;
            uVar12 = *(undefined8 *)
                      (*(long *)(*(long *)OVRPlugin_OVRP_1_121_0_TypeInfo + 0xb8) + 0x10);
          }
          else {
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar15 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
            }
            *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8);
            LeanTween__value(unaff_x19 + 0xa0);
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar15 == 0))
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
          *(undefined4 *)(unaff_x19 + 0x90) = uVar7;
          if (*(int *)(lVar9 + 0x18) < 3) {
            uVar12 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          }
          else {
            uVar12 = FUN_0536e55c(*(undefined8 *)PTR_DAT_069fb9e8,lVar9,2,
                                  *(int *)(lVar9 + 0x18) + -2,0);
          }
          *(undefined8 *)(unaff_x19 + 0x98) = uVar12;
          LeanTween__value(unaff_x19 + 0x98);
          if (*(int *)(unaff_x22 + 0x18) <= *unaff_x21) {
            return 1;
          }
          iVar8 = *unaff_x20;
          goto LAB_05c35950;
        }
        goto LAB_05c35d80;
      }
      bVar14 = true;
    }
    else {
      if (iVar8 == 4) {
        thunk_FUN_02dfd288(
                          Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_GetEnumerator__
                          );
        goto LAB_05c35db4;
      }
LAB_05c35950:
      if (iVar8 == 1) {
        *unaff_x20 = 2;
        uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_05ce7754(uVar12,0);
        *(undefined8 *)(unaff_x19 + 0x88) = uVar12;
        LeanTween__value(unaff_x19 + 0x88,uVar12);
        lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
        FUN_0400f984(lVar9,*(undefined8 *)PTR_DAT_069fd220);
        if (unaff_x22 == 0) {
LAB_05c35d7c:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        while( true ) {
          uVar10 = FUN_05c28870(*(undefined8 *)(unaff_x22 + 0x10));
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          if (in_stack_00000038 == 0) break;
          if (*(int *)(in_stack_00000038 + 0x10) < 1) {
LAB_05c35a68:
            if (lVar9 == 0) goto LAB_05c35d7c;
            lVar15 = *(long *)(lVar9 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_05c35d7c;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000038;
              LeanTween__value();
            }
            else {
              FUN_040101ec(lVar9,in_stack_00000038,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            sVar6 = FUN_053674f8(in_stack_00000038,0,0);
            if (sVar6 != 0x20) {
              if (in_stack_00000038 == 0) goto LAB_05c35d7c;
              sVar6 = FUN_053674f8(in_stack_00000038,0,0);
              if (sVar6 != 9) goto LAB_05c35a68;
            }
            if (lVar9 == 0) goto LAB_05c35d7c;
            iVar8 = *(int *)(lVar9 + 0x18) + -1;
            if (iVar8 < 0) {
              return 0;
            }
            uVar12 = FUN_0400ff1c(lVar9,iVar8,*(undefined8 *)PTR_DAT_069fdf78);
            uVar12 = FUN_05362cb4(uVar12,in_stack_00000038,0);
            FUN_0400ff70(lVar9,iVar8,uVar12,*(undefined8 *)puVar5);
          }
        }
        if (lVar9 == 0) goto LAB_05c35d7c;
        FUN_04010c90(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_069fda90);
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000008 = 0;
        in_stack_00000010 = &stack0x00000020;
        while (uVar10 = FUN_05156804(&stack0x00000020,*(undefined8 *)puVar3),
              lVar9 = in_stack_00000030, (uVar10 & 1) != 0) {
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar8 = FUN_05372384(in_stack_00000030,0x3a,0);
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
          lVar9 = *(long *)(unaff_x19 + 0x88);
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
        FUN_05156800(&stack0x00000020,*(undefined8 *)PTR_DAT_069fda78);
        if (*(int *)(unaff_x19 + 0x90) != 100) {
          *unaff_x20 = 3;
          return 1;
        }
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar9 == 0)) goto LAB_05c35d7c;
        *(undefined1 *)(lVar9 + 0x31) = 1;
        if (*(int *)(unaff_x22 + 0x18) <= *unaff_x21) {
          return 1;
        }
        lVar9 = *(long *)(unaff_x19 + 0x40);
        if (lVar9 == 0) goto LAB_05c35d7c;
        if (*(char *)(lVar9 + 0x124) != '\0') {
          FUN_05c19424(lVar9,100,*(undefined8 *)(unaff_x19 + 0x88),0);
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c35d7c;
          *(undefined1 *)(*(long *)(unaff_x19 + 0x40) + 0x124) = 0;
        }
        bVar14 = false;
        bVar17 = true;
        *unaff_x20 = 0;
      }
      else {
        bVar14 = false;
      }
    }
    if (!bVar14 && !bVar17) {
LAB_05c35d80:
      thunk_FUN_02dfd288(
                        Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_GetEnumerator__
                        );
LAB_05c35db4:
      uVar12 = FUN_05c353e4();
      uVar13 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_Add__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar13);
    }
  } while( true );
}


