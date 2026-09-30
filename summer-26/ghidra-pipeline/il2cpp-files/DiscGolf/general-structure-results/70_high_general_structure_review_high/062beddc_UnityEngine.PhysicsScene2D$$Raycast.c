/*
FUNCTION_NAME: UnityEngine.PhysicsScene2D$$Raycast
ENTRY_POINT: 062beddc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


void UnityEngine_PhysicsScene2D__Raycast(long param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  
  puVar7 = Method_System_Collections_Specialized_NameValueCollection_Set__;
  puVar6 = Method_LobbyCreateUI_<Awake>b__22_0__;
  puVar5 = Method_Unity_Services_Multiplayer_LobbyConverter_ToSessionProperty__;
  puVar4 = PTR_DAT_06a0d348;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_04010c90(&stack0x00000008,*(long *)(param_1 + 8),
                 *(undefined8 *)Method_LobbyCreateUI_<Awake>b__22_3__);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
LAB_062bee30:
    uVar8 = FUN_05156804(&stack0x00000020,*(undefined8 *)puVar6);
    if ((uVar8 & 1) != 0) {
      if (in_stack_00000030 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((bVar2 <= *(byte *)(*in_stack_00000030 + 0x130)) &&
           (*(long *)(*(long *)(*in_stack_00000030 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)puVar4)) {
          lVar9 = *(long *)(unaff_x19 + 0x180);
          if (lVar9 != 0) {
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)puVar7;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar3 = *(uint *)(lVar9 + 0x18);
              if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
                *puVar11 = in_stack_00000030;
                LeanTween__value(puVar11);
              }
              else {
                FUN_040101ec(lVar9,in_stack_00000030,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_062bee30;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
      goto LAB_062bee30;
    }
    FUN_05156800(&stack0x00000020,*(undefined8 *)puVar5);
    lVar9 = *unaff_x21;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar9 = *unaff_x21;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar9 != 0) {
      iVar1 = *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0550afb4(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


