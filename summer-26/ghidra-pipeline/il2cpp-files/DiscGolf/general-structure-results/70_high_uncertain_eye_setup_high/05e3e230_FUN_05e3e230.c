/*
FUNCTION_NAME: FUN_05e3e230
ENTRY_POINT: 05e3e230
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_05e3e230(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  if ((DAT_06dc39bd & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_List<AvatarLODManager_ContributingCamera>_RemoveAll__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<LocalKeyword>_Clear__);
    FUN_02d965b8(PTR_DAT_06a0dda0);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<AvatarLODManager_ContributingCamera>_get_Count__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<LocomotionProvider>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRLoader>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<AvatarLODManager_ContributingCamera>_get_Item__
                );
    DAT_06dc39bd = 1;
  }
  uStack_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  if ((param_4 != 0) &&
     (uVar4 = FUN_04e42cdc(param_4,param_2,param_3,&local_68,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<AvatarLODManager_ContributingCamera>_RemoveAll__
                          ), (uVar4 & 1) != 0)) {
    return local_68;
  }
  local_68 = FUN_05e3e03c(param_1,param_2,param_3);
  if (local_68 == 0) {
    return 0;
  }
  *(undefined8 *)(local_68 + 0x10) = param_2;
  *(undefined8 *)(local_68 + 0x18) = param_3;
  LeanTween__value((undefined8 *)(local_68 + 0x10),0);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = FUN_03c0e6bc(*(long *)(param_1 + 0x28),param_2,param_3,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<LocomotionProvider>_Add__);
    if ((uVar4 & 1) == 0) {
      local_78 = 0;
      uStack_70 = 0;
      if (local_68 == 0) goto LAB_05e3e4f8;
    }
    else {
      if (local_68 == 0) goto LAB_05e3e4f8;
      *(uint *)(local_68 + 0xa8) = *(uint *)(local_68 + 0xa8) | 4;
    }
    uStack_70 = 0;
    local_78 = 0;
    if ((*(byte *)(local_68 + 0xa8) >> 2 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_05e3e4f8;
      uVar4 = FUN_04e3f50c(*(long *)(param_1 + 0x18),param_2,param_3,&local_78,
                           *(undefined8 *)PTR_DAT_06a0dda0);
      if ((uVar4 & 1) != 0) {
        lVar5 = FUN_05e3e230(param_1,local_78,uStack_70,param_4);
        puVar2 = PTR_DAT_06a119d0;
        if (lVar5 == 0) {
          uStack_88 = uStack_70;
          local_90 = local_78;
          uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a119d0);
          uVar7 = thunk_FUN_02dd2d7c(uVar7,&local_90);
          local_a0 = param_2;
          uStack_98 = param_3;
          uVar8 = thunk_FUN_02dfd288(puVar2);
          uVar8 = thunk_FUN_02dd2d7c(uVar8,&local_a0);
          uVar9 = thunk_FUN_02dfd288(
                                    Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>__ctor__
                                    );
          uVar7 = FUN_0536e0dc(uVar9,uVar7,uVar8,0);
          thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Add__
                            );
          uVar8 = thunk_FUN_02dd3144();
          FUN_05e3e5d8(uVar8,uVar7);
          uVar7 = thunk_FUN_02dfd288(
                                    Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Clear__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar8,uVar7);
        }
        if ((local_68 == 0) || (FUN_05e39ac0(local_68,lVar5), local_68 == 0)) goto LAB_05e3e4f8;
        if (*(int *)(local_68 + 0x48) == 0) {
          FUN_03ca6f88((int *)(local_68 + 0x48),local_78,uStack_70,
                       *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>__ctor__);
        }
      }
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar4 = FUN_04e42cdc(*(long *)(param_1 + 0x20),param_2,param_3,&local_80,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<LocalKeyword>_Clear__);
      puVar3 = 
      Method_System_Collections_Generic_List<AvatarLODManager_ContributingCamera>_get_Item__;
      puVar2 = Method_System_Collections_Generic_List<XRLoader>__ctor__;
      if ((uVar4 & 1) == 0) {
LAB_05e3e4fc:
        if (param_4 == 0) {
          return local_68;
        }
        FUN_04e411d4(param_4,param_2,param_3,local_68,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<AvatarLODManager_ContributingCamera>_get_Count__
                    );
        return local_68;
      }
      if (local_80 != 0) {
        lVar5 = 0;
        uVar4 = 0;
        do {
          if ((long)(int)*(uint *)(local_80 + 0x18) <= (long)uVar4) goto LAB_05e3e4fc;
          if (*(uint *)(local_80 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          uVar7 = *(undefined8 *)(local_80 + lVar5 + 0x20);
          uVar8 = *(undefined8 *)(local_80 + lVar5 + 0x28);
          lVar6 = FUN_05e3e230(param_1,uVar7,uVar8,0);
          if (lVar6 == 0) break;
          FUN_05e39ac0(lVar6,local_68);
          System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__MoveNext
                    (lVar6 + 0x48,*(undefined8 *)puVar3);
          uVar1 = *(uint *)(lVar6 + 0xa8);
          *(uint *)(lVar6 + 0xa8) = uVar1 & 0xfffffffb;
          if (local_68 == 0) break;
          *(uint *)(lVar6 + 0xa8) = uVar1 & 0xfffffffa | *(uint *)(local_68 + 0xa8) & 1;
          uVar9 = *(undefined8 *)(local_68 + 0x10);
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(local_68 + 0x18);
          *(undefined8 *)(lVar6 + 0x10) = uVar9;
          LeanTween__value((undefined8 *)(lVar6 + 0x10),0);
          if (local_68 == 0) break;
          uVar9 = *(undefined8 *)(local_68 + 0x58);
          uVar11 = *(undefined8 *)(local_68 + 0x50);
          uVar10 = *(undefined8 *)(local_68 + 0x48);
          lVar5 = lVar5 + 0x10;
          uVar4 = uVar4 + 1;
          *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(local_68 + 0x60);
          *(undefined8 *)(lVar6 + 0x58) = uVar9;
          *(undefined8 *)(lVar6 + 0x50) = uVar11;
          *(undefined8 *)(lVar6 + 0x48) = uVar10;
          LeanTween__value(lVar6 + 0x50,0);
          local_68 = lVar6;
          FUN_03ca6f88(lVar6 + 0x68,uVar7,uVar8,*(undefined8 *)puVar2);
        } while (local_80 != 0);
      }
    }
  }
LAB_05e3e4f8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


