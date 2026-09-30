/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserIPD
ENTRY_POINT: 0569b2a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0569b578) */
/* WARNING: Removing unreachable block (ram,0x0569b700) */
/* WARNING: Removing unreachable block (ram,0x0569b70c) */

void OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0550afb4(*(undefined8 *)(param_1 + 0x10),0,iVar1,0);
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if (lVar10 != 0) {
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0550afb4(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
      lVar10 = *(long *)(unaff_x19 + 0x28);
      if (lVar10 != 0) {
        iVar1 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_0550afb4(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
        }
        puVar7 = Oculus_Platform_Request<AchievementDefinitionList>_TypeInfo;
        puVar6 = 
        UnityEngine_Rendering_RenderGraphModule_RenderGraphResourcePool<GraphicsBuffer>_TypeInfo;
        puVar5 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRInteractable>_TypeInfo;
        puVar4 = System_Collections_Generic_Dictionary<string,_Lobby>_TypeInfo;
        puVar3 = PTR_DAT_069fcea0;
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          FUN_04e93a24(&stack0x00000018,*(long *)(unaff_x19 + 0x10),
                       *(undefined8 *)
                        Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<MemberInfo>_TypeInfo
                      );
          in_stack_00000090 = in_stack_00000038;
          in_stack_00000078 = in_stack_00000020;
          in_stack_00000070 = in_stack_00000018;
          in_stack_00000088 = in_stack_00000030;
          in_stack_00000080 = in_stack_00000028;
          while( true ) {
            uVar9 = FUN_05232904(&stack0x00000070,*(undefined8 *)puVar5);
            uVar8 = in_stack_00000080;
            if ((uVar9 & 1) == 0) {
              FUN_05232a24(&stack0x00000070,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRGroupMember>_TypeInfo
                          );
              return;
            }
            lVar10 = *(long *)(unaff_x19 + 0x18);
            if (lVar10 == 0) break;
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)puVar3;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) break;
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *puVar12 = in_stack_00000080;
              LeanTween__value(puVar12,in_stack_00000080);
            }
            else {
              FUN_040101ec(lVar10,in_stack_00000080,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
            FUN_0569b7a0();
            lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
            FUN_0569b7a0();
            if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar15 = FUN_04e93570(*(long *)(unaff_x19 + 0x10),uVar8,
                                  *(undefined8 *)
                                   Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<MethodInfo>_TypeInfo
                                 );
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04e93a24(&stack0x00000018,lVar15,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_JSONNode>_TypeInfo);
            in_stack_00000040 = in_stack_00000018;
            in_stack_00000018 = 0;
            in_stack_00000048 = in_stack_00000020;
            in_stack_00000058 = in_stack_00000030;
            in_stack_00000050 = in_stack_00000028;
            in_stack_00000060 = in_stack_00000038;
            in_stack_00000020 = &stack0x00000040;
            while (uVar9 = FUN_05232904(&stack0x00000040,*(undefined8 *)puVar4),
                  uVar8 = in_stack_00000058, (uVar9 & 1) != 0) {
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar15 = *(long *)(lVar10 + 0x10);
              if (lVar15 == 0) {
LAB_0569b650:
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar13 = *(long *)(lVar15 + 0x10);
              lVar16 = *(long *)puVar3;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_0569b650;
              uVar2 = *(uint *)(lVar15 + 0x18);
              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                puVar12 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                *puVar12 = in_stack_00000050;
                LeanTween__value(puVar12);
              }
              else {
                FUN_040101ec(lVar15,in_stack_00000050,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar15 = *(long *)(lVar11 + 0x10);
              if (lVar15 == 0) {
LAB_0569b648:
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar13 = *(long *)(lVar15 + 0x10);
              lVar16 = *(long *)puVar3;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_0569b648;
              uVar2 = *(uint *)(lVar15 + 0x18);
              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                puVar12 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                *puVar12 = uVar8;
                LeanTween__value(puVar12,uVar8);
              }
              else {
                FUN_040101ec(lVar15,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_05232a24(&stack0x00000040,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_JToken>_TypeInfo);
            lVar15 = *(long *)(unaff_x19 + 0x20);
            if (lVar15 == 0) {
LAB_0569b6f4:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar13 = *(long *)(lVar15 + 0x10);
            lVar16 = *(long *)puVar6;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_0569b6f4;
            uVar2 = *(uint *)(lVar15 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar2 + 1;
              plVar14 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
              *plVar14 = lVar10;
              LeanTween__value(plVar14,lVar10);
            }
            else {
              FUN_040101ec(lVar15,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            lVar10 = *(long *)(unaff_x19 + 0x28);
            if (lVar10 == 0) {
LAB_0569b6f0:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar15 = *(long *)(lVar10 + 0x10);
            lVar13 = *(long *)puVar6;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_0569b6f0;
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              plVar14 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
              *plVar14 = lVar11;
              LeanTween__value(plVar14,lVar11);
            }
            else {
              FUN_040101ec(lVar10,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


