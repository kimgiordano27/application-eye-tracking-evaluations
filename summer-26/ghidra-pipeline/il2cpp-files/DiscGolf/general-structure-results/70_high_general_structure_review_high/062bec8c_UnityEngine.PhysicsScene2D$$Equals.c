/*
FUNCTION_NAME: UnityEngine.PhysicsScene2D$$Equals
ENTRY_POINT: 062bec8c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void UnityEngine_PhysicsScene2D__Equals(long param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar14;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x880));
  FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_1__);
  FUN_02d965b8(Method_System_Collections_Specialized_NameValueCollection_Set__);
  FUN_02d965b8(Method_Unity_Services_Multiplayer_LobbyConverter_ToFilterField__);
  FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_3__);
  *(undefined1 *)(unaff_x21 + 0x770) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = (long *)0x0;
  FUN_0624e554();
  if (unaff_x20 != 0) {
    lVar14 = *(long *)(unaff_x20 + 0x10);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)Method_LipSyncMicInput_StartMicrophone_Internal__);
    FUN_04be213c();
    puVar5 = Method_System_Collections_Specialized_ListDictionary_Add__;
    if (lVar14 != 0) {
      FUN_061e0c50(lVar14,uVar9,0);
      lVar14 = *(long *)(unaff_x20 + 0x10);
      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
      FUN_04be213c();
      if (lVar14 != 0) {
        FUN_061e0db0(lVar14,uVar9,0);
        puVar5 = Method_Unity_Netcode_SceneEventData_<AddDespawnedInSceneNetworkObjects>b__35_0__;
        lVar14 = *(long *)(unaff_x19 + 0x180);
        if (lVar14 != 0) {
          iVar1 = *(int *)(lVar14 + 0x18);
          *(undefined4 *)(lVar14 + 0x18) = 0;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0550afb4(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
          }
          lVar14 = *(long *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar14 != 0) {
            FUN_061e6af0(lVar14,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
            puVar8 = Method_System_Collections_Specialized_NameValueCollection_Set__;
            puVar7 = Method_LobbyCreateUI_<Awake>b__22_0__;
            puVar6 = Method_Unity_Services_Multiplayer_LobbyConverter_ToSessionProperty__;
            puVar4 = PTR_DAT_06a0d348;
            lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
            if (lVar14 != 0) {
              FUN_04010c90(&stack0x00000008,lVar14,
                           *(undefined8 *)Method_LobbyCreateUI_<Awake>b__22_3__);
              in_stack_00000030 = in_stack_00000018;
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000020 = in_stack_00000008;
              in_stack_00000008 = 0;
              in_stack_00000010 = &stack0x00000020;
LAB_062bee30:
              uVar10 = FUN_05156804(&stack0x00000020,*(undefined8 *)puVar7);
              if ((uVar10 & 1) != 0) {
                if (in_stack_00000030 != (long *)0x0) {
                  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                  if ((bVar2 <= *(byte *)(*in_stack_00000030 + 0x130)) &&
                     (*(long *)(*(long *)(*in_stack_00000030 + 200) + (ulong)bVar2 * 8 + -8) ==
                      *(long *)puVar4)) {
                    lVar14 = *(long *)(unaff_x19 + 0x180);
                    if (lVar14 != 0) {
                      lVar11 = *(long *)(lVar14 + 0x10);
                      lVar13 = *(long *)puVar8;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      if (lVar11 != 0) {
                        uVar3 = *(uint *)(lVar14 + 0x18);
                        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar3 + 1;
                          puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                          *puVar12 = in_stack_00000030;
                          LeanTween__value(puVar12);
                        }
                        else {
                          FUN_040101ec(lVar14,in_stack_00000030,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
              FUN_05156800(&stack0x00000020,*(undefined8 *)puVar6);
              lVar14 = *(long *)puVar5;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar14 = *(long *)puVar5;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
              if (lVar14 != 0) {
                iVar1 = *(int *)(lVar14 + 0x18);
                *(undefined4 *)(lVar14 + 0x18) = 0;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (0 < iVar1) {
                  FUN_0550afb4(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


