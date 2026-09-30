/*
FUNCTION_NAME: FUN_03eec064
ENTRY_POINT: 03eec064
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1
*/


long * FUN_03eec064(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar2 = PTR_DAT_0457d0d8;
  puVar1 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
  if ((DAT_0483aea5 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_3602);
    thunk_FUN_01efb3a4(StringLiteral_3601);
    thunk_FUN_01efb3a4(PTR_DAT_0457cd68);
    thunk_FUN_01efb3a4(PTR_DAT_0457d0e0);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(PTR_DAT_0457cd70);
    thunk_FUN_01efb3a4(StringLiteral_5822);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<SphereCollider>__);
    thunk_FUN_01efb3a4(PTR_DAT_0457cd78);
    thunk_FUN_01efb3a4(StringLiteral_5823);
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__);
    thunk_FUN_01efb3a4(PTR_DAT_0457d0e8);
    thunk_FUN_01efb3a4(PTR_DAT_0457d0f0);
    thunk_FUN_01efb3a4(PTR_DAT_0457d0d8);
    thunk_FUN_01efb3a4(PTR_DAT_0457d070);
    thunk_FUN_01efb3a4(PTR_DAT_0457d0f8);
    thunk_FUN_01efb3a4(PTR_DAT_0457d100);
    DAT_0483aea5 = 1;
  }
  puVar3 = PTR_DAT_0457d100;
  lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_035ac8e8(lVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = FUN_03ec8718(*(undefined8 *)puVar3,0);
  puVar1 = PTR_DAT_0457d0f8;
  if (lVar5 != 0) {
    FUN_022df844(lVar5,param_1,*(undefined8 *)PTR_DAT_0457cd68);
    lVar5 = FUN_03ec8718(*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (FUN_022df844(lVar5,param_2,*(undefined8 *)PTR_DAT_0457d0e0), param_1 != (long *)0x0)) {
      uVar6 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
      if ((uVar6 & 1) == 0) {
        return param_1;
      }
      uVar7 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      puVar1 = PTR_DAT_0457d070;
      lVar5 = *(long *)PTR_DAT_0457d070;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar5);
        lVar5 = *(long *)puVar1;
      }
      lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar10 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar5);
          lVar5 = *(long *)puVar1;
        }
        uVar12 = **(undefined8 **)(lVar5 + 0xb8);
        lVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0457cd78);
        FUN_02e6c748(lVar10,uVar12,*(undefined8 *)PTR_DAT_0457d0e8,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar8 = lVar10;
        thunk_FUN_01f51358(plVar8,lVar10);
      }
      uVar7 = FUN_02300e64(uVar7,lVar10,*(undefined8 *)PTR_DAT_0457cd70);
      lVar5 = FUN_02308ab0(uVar7,*(undefined8 *)
                                  Method_UnityEngine_Component_TryGetComponent<SphereCollider>__);
      if ((lVar5 != 0) && (param_2 != 0)) {
        if (*(int *)(lVar5 + 0x18) != *(int *)(param_2 + 0x18)) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar7 = thunk_FUN_01f117cc();
          uVar12 = thunk_FUN_01efb3a4(PTR_DAT_0457d0f8);
          FUN_034f7db4(uVar7,uVar12,0);
          uVar12 = thunk_FUN_01efb3a4(PTR_DAT_0457d108);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,uVar12);
        }
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3601);
        FUN_02b6aa68(uVar7,*(undefined8 *)StringLiteral_3602);
        if (lVar4 != 0) {
          puVar11 = (undefined8 *)(lVar4 + 0x10);
          *puVar11 = uVar7;
          thunk_FUN_01f51358(puVar11,uVar7);
          puVar1 = Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__;
          if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
            uVar6 = 0;
            uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
            do {
              if ((uVar9 <= uVar6) || (*(uint *)(param_2 + 0x18) <= uVar6)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar12 = *(undefined8 *)(lVar5 + 0x20 + uVar6 * 8);
              uVar7 = *(undefined8 *)(param_2 + 0x20 + uVar6 * 8);
              uVar13 = *puVar11;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03f76b04(uVar12,uVar7,uVar13,1,0);
              uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
          }
          uVar7 = (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
          uVar12 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5823);
          FUN_02e6c748(uVar12,lVar4,*(undefined8 *)PTR_DAT_0457d0f0,0);
          uVar7 = FUN_02300e64(uVar7,uVar12,*(undefined8 *)StringLiteral_5822);
          uVar7 = FUN_02308ab0(uVar7,*(undefined8 *)
                                      Method_UnityEngine_Component_TryGetComponent<SphereCollider>__
                              );
                    /* WARNING: Could not recover jumptable at 0x03eec450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar8 = (long *)(**(code **)(*param_1 + 0x408))
                                     (param_1,uVar7,*(undefined8 *)(*param_1 + 0x410));
          return plVar8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


