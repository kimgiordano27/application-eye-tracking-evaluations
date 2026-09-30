/*
FUNCTION_NAME: Unity.VisualScripting.UnitPreservation.<>c$$<Preserve>b__8_0
ENTRY_POINT: 03eec0c4
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


void Unity_VisualScripting_UnitPreservation_<>c__<Preserve>b__8_0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  thunk_FUN_01efb3a4();
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
  *(undefined1 *)(unaff_x23 + 0xea5) = 1;
  puVar1 = PTR_DAT_0457d100;
  lVar2 = thunk_FUN_01f117cc(*unaff_x21);
  FUN_035ac8e8(lVar2,0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = FUN_03ec8718(*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_0457d0f8;
  if (lVar3 != 0) {
    FUN_022df844();
    lVar3 = FUN_03ec8718(*(undefined8 *)puVar1,0);
    if ((lVar3 != 0) && (FUN_022df844(), unaff_x19 != (long *)0x0)) {
      uVar4 = (**(code **)(*unaff_x19 + 0x338))();
      if ((uVar4 & 1) == 0) {
        return;
      }
      uVar5 = (**(code **)(*unaff_x19 + 0x248))();
      puVar1 = PTR_DAT_0457d070;
      lVar3 = *(long *)PTR_DAT_0457d070;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar3);
        lVar3 = *(long *)puVar1;
      }
      lVar8 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar8 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar3);
          lVar3 = *(long *)puVar1;
        }
        uVar10 = **(undefined8 **)(lVar3 + 0xb8);
        lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0457cd78);
        FUN_02e6c748(lVar8,uVar10,*(undefined8 *)PTR_DAT_0457d0e8,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar6 = lVar8;
        thunk_FUN_01f51358(plVar6,lVar8);
      }
      uVar5 = FUN_02300e64(uVar5,lVar8,*(undefined8 *)PTR_DAT_0457cd70);
      lVar3 = FUN_02308ab0(uVar5,*(undefined8 *)
                                  Method_UnityEngine_Component_TryGetComponent<SphereCollider>__);
      if ((lVar3 != 0) && (unaff_x20 != 0)) {
        if (*(int *)(lVar3 + 0x18) != *(int *)(unaff_x20 + 0x18)) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar5 = thunk_FUN_01f117cc();
          uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457d0f8);
          FUN_034f7db4(uVar5,uVar10,0);
          uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457d108);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar5,uVar10);
        }
        uVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3601);
        FUN_02b6aa68(uVar5,*(undefined8 *)StringLiteral_3602);
        if (lVar2 != 0) {
          puVar9 = (undefined8 *)(lVar2 + 0x10);
          *puVar9 = uVar5;
          thunk_FUN_01f51358(puVar9,uVar5);
          puVar1 = Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__;
          if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
            uVar4 = 0;
            uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
            do {
              if ((uVar7 <= uVar4) || (*(uint *)(unaff_x20 + 0x18) <= uVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar10 = *(undefined8 *)(lVar3 + 0x20 + uVar4 * 8);
              uVar5 = *(undefined8 *)(unaff_x20 + 0x20 + uVar4 * 8);
              uVar11 = *puVar9;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03f76b04(uVar10,uVar5,uVar11,1,0);
              uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
              uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
          }
          uVar5 = (**(code **)(*unaff_x19 + 0x328))();
          uVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5823);
          FUN_02e6c748(uVar10,lVar2,*(undefined8 *)PTR_DAT_0457d0f0,0);
          uVar5 = FUN_02300e64(uVar5,uVar10,*(undefined8 *)StringLiteral_5822);
          FUN_02308ab0(uVar5,*(undefined8 *)
                              Method_UnityEngine_Component_TryGetComponent<SphereCollider>__);
                    /* WARNING: Could not recover jumptable at 0x03eec450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 0x408))();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


