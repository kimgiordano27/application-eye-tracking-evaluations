/*
FUNCTION_NAME: Unity.Burst.BurstString$$GetLengthForFormatGeneral
ENTRY_POINT: 05c35af8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x05c35c50) */

undefined8
Unity_Burst_BurstString__GetLengthForFormatGeneral(undefined1 *param_1,undefined1 param_2 [16])

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined1 *puStack0000000000000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
  puStack0000000000000010 = param_2._8_8_;
  uStack0000000000000020 = param_2._0_8_;
  while( true ) {
    uStack0000000000000008 = 0;
    puVar2 = param_1;
    puStack0000000000000028 = puStack0000000000000010;
    while (puStack0000000000000010 = puVar2, uVar6 = FUN_05156804(&stack0x00000020,*unaff_x25),
          lVar8 = in_stack_00000030, (uVar6 & 1) != 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar5 = FUN_05372384(in_stack_00000030,0x3a,0);
      if (iVar5 == -1) {
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar7 = thunk_FUN_02dd3144();
        uVar9 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_Dictionary<ulong,_List<int>>__ctor__
                                  );
        uVar10 = thunk_FUN_02dfd288(PTR_DAT_06a139e8);
        FUN_0544bfcc(uVar7,uVar9,uVar10,0);
        uVar9 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_Add__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar7,uVar9);
      }
      uVar7 = FUN_0536f444(lVar8,0,iVar5,0);
      lVar8 = FUN_05371b10(lVar8,iVar5 + 1,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar9 = FUN_05371f5c(lVar8,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_05ced250(uVar7,0);
      lVar8 = *(long *)(unaff_x19 + 0x88);
      if ((uVar6 & 1) == 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05cee21c(lVar8,uVar7,uVar9,0);
        puVar2 = puStack0000000000000010;
      }
      else {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05ced510(lVar8,uVar7,uVar9,0);
        puVar2 = puStack0000000000000010;
      }
    }
    FUN_05156800(&stack0x00000020,*(undefined8 *)PTR_DAT_069fda78);
    if (*(int *)(unaff_x19 + 0x90) != 100) {
      *unaff_x20 = 3;
      return 1;
    }
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar8 == 0)) break;
    *(undefined1 *)(lVar8 + 0x31) = 1;
    if (*(int *)(unaff_x22 + 0x18) <= *unaff_x21) {
      return 1;
    }
    lVar8 = *(long *)(unaff_x19 + 0x40);
    if (lVar8 == 0) break;
    if (*(char *)(lVar8 + 0x124) != '\0') {
      FUN_05c19424(lVar8,100,*(undefined8 *)(unaff_x19 + 0x88),0);
      if (*(long *)(unaff_x19 + 0x40) == 0) break;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x40) + 0x124) = 0;
    }
    *unaff_x20 = 0;
LAB_05c35c44:
    do {
      iVar5 = *unaff_x20;
      if (iVar5 == 0) {
        if (unaff_x22 == 0) goto LAB_05c35d7c;
        uVar6 = FUN_05c28870(*(undefined8 *)(unaff_x22 + 0x10));
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        if (in_stack_00000038 == 0) goto LAB_05c35c44;
        *unaff_x20 = 1;
        lVar8 = FUN_05370114(in_stack_00000038,0x20,0,0);
        if (lVar8 == 0) goto LAB_05c35d7c;
        if (*(int *)(lVar8 + 0x18) < 2) {
          thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_GetEnumerator__
                            );
          goto LAB_05c35db4;
        }
        iVar5 = FUN_0536a4a8(*(undefined8 *)(lVar8 + 0x20),
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_ContainsKey__
                             ,1,0);
        lVar11 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
        if (iVar5 == 0) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar11 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
          }
          *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
          LeanTween__value(unaff_x19 + 0xa0);
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar11 == 0))
          goto LAB_05c35d7c;
          uVar7 = *(undefined8 *)(*(long *)(*(long *)OVRPlugin_OVRP_1_121_0_TypeInfo + 0xb8) + 0x10)
          ;
        }
        else {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar11 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
          }
          *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
          LeanTween__value(unaff_x19 + 0xa0);
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar11 == 0))
          goto LAB_05c35d7c;
          uVar7 = *(undefined8 *)(*(long *)(*(long *)OVRPlugin_OVRP_1_121_0_TypeInfo + 0xb8) + 8);
        }
        *(undefined8 *)(lVar11 + 0x20) = uVar7;
        LeanTween__value();
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar4 = FUN_05505268(*(undefined8 *)(lVar8 + 0x28),0);
        *(undefined4 *)(unaff_x19 + 0x90) = uVar4;
        if (*(int *)(lVar8 + 0x18) < 3) {
          uVar7 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
        }
        else {
          uVar7 = FUN_0536e55c(*(undefined8 *)PTR_DAT_069fb9e8,lVar8,2,*(int *)(lVar8 + 0x18) + -2,0
                              );
        }
        *(undefined8 *)(unaff_x19 + 0x98) = uVar7;
        LeanTween__value(unaff_x19 + 0x98);
        if (*(int *)(unaff_x22 + 0x18) <= *unaff_x21) {
          return 1;
        }
        iVar5 = *unaff_x20;
      }
      else if (iVar5 == 4) {
        thunk_FUN_02dfd288(
                          Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_GetEnumerator__
                          );
LAB_05c35db4:
        uVar7 = FUN_05c353e4();
        uVar9 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_Add__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar7,uVar9);
      }
    } while (iVar5 != 1);
    *unaff_x20 = 2;
    uVar7 = thunk_FUN_02dd3144(*unaff_x26);
    FUN_05ce7754(uVar7,0);
    *(undefined8 *)(unaff_x19 + 0x88) = uVar7;
    LeanTween__value(unaff_x19 + 0x88,uVar7);
    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
    FUN_0400f984(lVar8,*(undefined8 *)PTR_DAT_069fd220);
    if (unaff_x22 == 0) break;
    while( true ) {
      uVar6 = FUN_05c28870(*(undefined8 *)(unaff_x22 + 0x10));
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      if (in_stack_00000038 == 0) break;
      if (*(int *)(in_stack_00000038 + 0x10) < 1) {
LAB_05c35a68:
        if (lVar8 == 0) goto LAB_05c35d7c;
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar12 = *unaff_x23;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_05c35d7c;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000038;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar8,in_stack_00000038,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        sVar3 = FUN_053674f8(in_stack_00000038,0,0);
        if (sVar3 != 0x20) {
          if (in_stack_00000038 == 0) goto LAB_05c35d7c;
          sVar3 = FUN_053674f8(in_stack_00000038,0,0);
          if (sVar3 != 9) goto LAB_05c35a68;
        }
        if (lVar8 == 0) goto LAB_05c35d7c;
        iVar5 = *(int *)(lVar8 + 0x18) + -1;
        if (iVar5 < 0) {
          return 0;
        }
        uVar7 = FUN_0400ff1c(lVar8,iVar5,*(undefined8 *)PTR_DAT_069fdf78);
        uVar7 = FUN_05362cb4(uVar7,in_stack_00000038,0);
        FUN_0400ff70(lVar8,iVar5,uVar7,*unaff_x24);
      }
    }
    if (lVar8 == 0) break;
    FUN_04010c90(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_069fda90);
    in_stack_00000030 = in_stack_00000018;
    param_1 = (undefined1 *)&stack0x00000020;
    uStack0000000000000020 = uStack0000000000000008;
  }
LAB_05c35d7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


