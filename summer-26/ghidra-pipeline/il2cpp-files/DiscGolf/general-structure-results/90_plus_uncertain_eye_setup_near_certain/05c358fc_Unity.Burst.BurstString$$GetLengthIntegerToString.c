/*
FUNCTION_NAME: Unity.Burst.BurstString$$GetLengthIntegerToString
ENTRY_POINT: 05c358fc
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


undefined8 Unity_Burst_BurstString__GetLengthIntegerToString(undefined *param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
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
  uint unaff_w28;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
code_r0x05c358fc:
  uVar9 = **(undefined8 **)(*(long *)(param_1 + 0x90) + 0xb8);
LAB_05c35930:
  *(undefined8 *)(unaff_x19 + 0x98) = uVar9;
  LeanTween__value(unaff_x19 + 0x98);
  if (*(int *)(unaff_x22 + 0x18) <= *unaff_x21) {
    return 1;
  }
  iVar4 = *unaff_x20;
LAB_05c35950:
  if (iVar4 == 1) {
    *unaff_x20 = 2;
    uVar9 = thunk_FUN_02dd3144(*unaff_x26);
    FUN_05ce7754(uVar9,0);
    *(undefined8 *)(unaff_x19 + 0x88) = uVar9;
    LeanTween__value(unaff_x19 + 0x88,uVar9);
    lVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
    FUN_0400f984(lVar5,*(undefined8 *)PTR_DAT_069fd220);
    if (unaff_x22 == 0) {
LAB_05c35d7c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    while( true ) {
      uVar6 = FUN_05c28870(*(undefined8 *)(unaff_x22 + 0x10));
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      if (in_stack_00000038 == 0) break;
      if (*(int *)(in_stack_00000038 + 0x10) < 1) {
LAB_05c35a68:
        if (lVar5 == 0) goto LAB_05c35d7c;
        lVar11 = *(long *)(lVar5 + 0x10);
        lVar12 = *unaff_x23;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_05c35d7c;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000038;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar5,in_stack_00000038,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        sVar2 = FUN_053674f8(in_stack_00000038,0,0);
        if (sVar2 != 0x20) {
          if (in_stack_00000038 == 0) goto LAB_05c35d7c;
          sVar2 = FUN_053674f8(in_stack_00000038,0,0);
          if (sVar2 != 9) goto LAB_05c35a68;
        }
        if (lVar5 == 0) goto LAB_05c35d7c;
        iVar4 = *(int *)(lVar5 + 0x18) + -1;
        if (iVar4 < 0) {
          return 0;
        }
        uVar9 = FUN_0400ff1c(lVar5,iVar4,*(undefined8 *)PTR_DAT_069fdf78);
        uVar9 = FUN_05362cb4(uVar9,in_stack_00000038,0);
        FUN_0400ff70(lVar5,iVar4,uVar9,*unaff_x24);
      }
    }
    if (lVar5 == 0) goto LAB_05c35d7c;
    FUN_04010c90(&stack0x00000008,lVar5,*(undefined8 *)PTR_DAT_069fda90);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar6 = FUN_05156804(&stack0x00000020,*unaff_x25), lVar5 = in_stack_00000030,
          (uVar6 & 1) != 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar4 = FUN_05372384(in_stack_00000030,0x3a,0);
      if (iVar4 == -1) {
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar9 = thunk_FUN_02dd3144();
        uVar7 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_Dictionary<ulong,_List<int>>__ctor__
                                  );
        uVar8 = thunk_FUN_02dfd288(PTR_DAT_06a139e8);
        FUN_0544bfcc(uVar9,uVar7,uVar8,0);
        uVar7 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_Add__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,uVar7);
      }
      uVar9 = FUN_0536f444(lVar5,0,iVar4,0);
      lVar5 = FUN_05371b10(lVar5,iVar4 + 1,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar7 = FUN_05371f5c(lVar5,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_05ced250(uVar9,0);
      lVar5 = *(long *)(unaff_x19 + 0x88);
      if ((uVar6 & 1) == 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05cee21c(lVar5,uVar9,uVar7,0);
      }
      else {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05ced510(lVar5,uVar9,uVar7,0);
      }
    }
    FUN_05156800(&stack0x00000020,*(undefined8 *)PTR_DAT_069fda78);
    if (*(int *)(unaff_x19 + 0x90) != 100) {
      *unaff_x20 = 3;
      return 1;
    }
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar5 == 0)) goto LAB_05c35d7c;
    *(undefined1 *)(lVar5 + 0x31) = 1;
    if (*(int *)(unaff_x22 + 0x18) <= *unaff_x21) {
      return 1;
    }
    lVar5 = *(long *)(unaff_x19 + 0x40);
    if (lVar5 == 0) goto LAB_05c35d7c;
    if (*(char *)(lVar5 + 0x124) != '\0') {
      FUN_05c19424(lVar5,100,*(undefined8 *)(unaff_x19 + 0x88),0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c35d7c;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x40) + 0x124) = 0;
    }
    bVar10 = false;
    unaff_w28 = 1;
    *unaff_x20 = 0;
  }
  else {
    bVar10 = false;
  }
  do {
    if (!bVar10 && (unaff_w28 & 1) == 0) {
LAB_05c35d80:
      thunk_FUN_02dfd288(
                        Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_GetEnumerator__
                        );
      goto LAB_05c35db4;
    }
    iVar4 = *unaff_x20;
    if (iVar4 != 0) break;
    if (unaff_x22 == 0) goto LAB_05c35d7c;
    uVar6 = FUN_05c28870(*(undefined8 *)(unaff_x22 + 0x10));
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (in_stack_00000038 != 0) {
      *unaff_x20 = 1;
      lVar5 = FUN_05370114(in_stack_00000038,0x20,0,0);
      if (lVar5 == 0) goto LAB_05c35d7c;
      if (*(int *)(lVar5 + 0x18) < 2) goto LAB_05c35d80;
      iVar4 = FUN_0536a4a8(*(undefined8 *)(lVar5 + 0x20),
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_ContainsKey__
                           ,1,0);
      lVar11 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
      if (iVar4 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar11 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
        }
        *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
        LeanTween__value(unaff_x19 + 0xa0);
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar11 == 0)) goto LAB_05c35d7c;
        uVar9 = *(undefined8 *)(*(long *)(*(long *)OVRPlugin_OVRP_1_121_0_TypeInfo + 0xb8) + 0x10);
      }
      else {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar11 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
        }
        *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
        LeanTween__value(unaff_x19 + 0xa0);
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar11 == 0)) goto LAB_05c35d7c;
        uVar9 = *(undefined8 *)(*(long *)(*(long *)OVRPlugin_OVRP_1_121_0_TypeInfo + 0xb8) + 8);
      }
      *(undefined8 *)(lVar11 + 0x20) = uVar9;
      LeanTween__value();
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar3 = FUN_05505268(*(undefined8 *)(lVar5 + 0x28),0);
      *(undefined4 *)(unaff_x19 + 0x90) = uVar3;
      param_1 = PTR_DAT_069fb9c0;
      if (*(int *)(lVar5 + 0x18) < 3) goto code_r0x05c358fc;
      uVar9 = FUN_0536e55c(*(undefined8 *)PTR_DAT_069fb9e8,lVar5,2,*(int *)(lVar5 + 0x18) + -2,0);
      goto LAB_05c35930;
    }
    bVar10 = true;
  } while( true );
  if (iVar4 == 4) {
    thunk_FUN_02dfd288(
                      Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_GetEnumerator__
                      );
LAB_05c35db4:
    uVar9 = FUN_05c353e4();
    uVar7 = thunk_FUN_02dfd288(Method_System_Collections_Generic_Dictionary<ulong,_List<int>>_Add__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar9,uVar7);
  }
  goto LAB_05c35950;
}


