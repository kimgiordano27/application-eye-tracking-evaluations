/*
FUNCTION_NAME: Unity.VisualScripting.InputSystem.OnInputSystemEvent$$get_InputAction
ENTRY_POINT: 03eec1a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1
*/


void Unity_VisualScripting_InputSystem_OnInputSystemEvent__get_InputAction(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x26;
  undefined8 uVar10;
  
  lVar2 = FUN_03ec8718(param_1,0);
  puVar1 = PTR_DAT_0457d0f8;
  if (lVar2 != 0) {
    FUN_022df844();
    lVar2 = FUN_03ec8718(*(undefined8 *)puVar1,0);
    if ((lVar2 != 0) && (FUN_022df844(), unaff_x19 != (long *)0x0)) {
      uVar3 = (**(code **)(*unaff_x19 + 0x338))();
      if ((uVar3 & 1) == 0) {
        return;
      }
      uVar4 = (**(code **)(*unaff_x19 + 0x248))();
      puVar1 = PTR_DAT_0457d070;
      lVar2 = *(long *)PTR_DAT_0457d070;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar2);
        lVar2 = *(long *)puVar1;
      }
      lVar7 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar7 == 0) {
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar2);
          lVar2 = *(long *)puVar1;
        }
        uVar9 = **(undefined8 **)(lVar2 + 0xb8);
        lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0457cd78);
        FUN_02e6c748(lVar7,uVar9,*(undefined8 *)PTR_DAT_0457d0e8,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar5 = lVar7;
        thunk_FUN_01f51358(plVar5,lVar7);
      }
      uVar4 = FUN_02300e64(uVar4,lVar7,*(undefined8 *)PTR_DAT_0457cd70);
      lVar2 = FUN_02308ab0(uVar4,*(undefined8 *)
                                  Method_UnityEngine_Component_TryGetComponent<SphereCollider>__);
      if ((lVar2 != 0) && (unaff_x20 != 0)) {
        if (*(int *)(lVar2 + 0x18) != *(int *)(unaff_x20 + 0x18)) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar4 = thunk_FUN_01f117cc();
          uVar9 = thunk_FUN_01efb3a4(PTR_DAT_0457d0f8);
          FUN_034f7db4(uVar4,uVar9,0);
          uVar9 = thunk_FUN_01efb3a4(PTR_DAT_0457d108);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar4,uVar9);
        }
        uVar4 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3601);
        FUN_02b6aa68(uVar4,*(undefined8 *)StringLiteral_3602);
        if (unaff_x26 != 0) {
          puVar8 = (undefined8 *)(unaff_x26 + 0x10);
          *puVar8 = uVar4;
          thunk_FUN_01f51358(puVar8,uVar4);
          puVar1 = Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__;
          if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
            uVar3 = 0;
            uVar6 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
            do {
              if ((uVar6 <= uVar3) || (*(uint *)(unaff_x20 + 0x18) <= uVar3)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar9 = *(undefined8 *)(lVar2 + 0x20 + uVar3 * 8);
              uVar4 = *(undefined8 *)(unaff_x20 + 0x20 + uVar3 * 8);
              uVar10 = *puVar8;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03f76b04(uVar9,uVar4,uVar10,1,0);
              uVar6 = (ulong)*(uint *)(lVar2 + 0x18);
              uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18));
          }
          uVar4 = (**(code **)(*unaff_x19 + 0x328))();
          uVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5823);
          FUN_02e6c748(uVar9,unaff_x26,*(undefined8 *)PTR_DAT_0457d0f0,0);
          uVar4 = FUN_02300e64(uVar4,uVar9,*(undefined8 *)StringLiteral_5822);
          FUN_02308ab0(uVar4,*(undefined8 *)
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


