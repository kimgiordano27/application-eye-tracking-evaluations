/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$.cctor
ENTRY_POINT: 0339b78c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x28;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_01c5d288(System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>__ctor__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>__ctor__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>__ctor__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>_Add__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>_Clear__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>_Contains__);
  FUN_01c5d288(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>__ctor__);
  *(undefined1 *)(unaff_x23 + 0x6c6) = 1;
  puVar2 = Method_System_Collections_Generic_HashSet<int>_Contains__;
  puVar1 = Method_System_Collections_Generic_HashSet<int>_Add__;
  in_stack_00000048 = 0;
  if ((unaff_x21 != 0) && (plVar6 = *(long **)(unaff_x21 + 0x60), plVar6 != (long *)0x0)) {
    iVar3 = (**(code **)(*plVar6 + 0x428))(plVar6,*(undefined8 *)(*plVar6 + 0x430));
    if (unaff_x20 != 0) {
      FUN_0339c944();
    }
    FUN_0339cd08();
    FUN_03395dc8();
    plVar6 = (long *)FUN_03396234();
    in_stack_00000048 = 0;
    lVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_030c9fa8(lVar7,*(undefined8 *)puVar1);
    if ((lVar7 != 0) && (FUN_030ca5b8(lVar7), unaff_x19 != (long *)0x0)) {
      do {
        while ((**(code **)(*unaff_x19 + 0x1b8))(), *(int *)(lVar7 + 0x18) == iVar3) {
          uVar8 = FUN_0335ce1c();
          if ((uVar8 & 1) == 0) goto LAB_0339bcb0;
          iVar4 = (**(code **)(*unaff_x19 + 0x188))();
          if (iVar4 != 5) {
            if (iVar4 == 0xe) {
              FUN_030ca564(lVar7,*(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<int>__ctor__);
              unaff_x28 = (long *)FUN_030ca520(lVar7,*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_HashSet<int>__ctor__
                                              );
              in_stack_00000048 = 0;
            }
            else {
              if ((plVar6 == (long *)0x0) ||
                 (uVar8 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0)),
                 (uVar8 & 1) == 0)) {
                uVar10 = FUN_033966b4();
              }
              else {
                uVar10 = FUN_033962a0();
              }
              if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar13 = *unaff_x28;
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar8 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04237778) {
                    puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_0339bab0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_01c72498(unaff_x28,*(long *)PTR_DAT_04237778,2);
LAB_0339bab0:
              (*(code *)*puVar11)(unaff_x28,uVar10,puVar11[1]);
            }
          }
        }
        uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
        if ((uVar8 & 1) == 0) {
LAB_0339bcb0:
          FUN_0339d160();
LAB_0339bcd0:
          FUN_0339cf34();
          return;
        }
        iVar4 = (**(code **)(*unaff_x19 + 0x188))();
        if (iVar4 != 5) {
          if (iVar4 == 0xe) {
            FUN_030ca564(lVar7,*(undefined8 *)Method_System_Collections_Generic_HashSet<int>__ctor__
                        );
            if (*(int *)(lVar7 + 0x18) < 1) goto LAB_0339bcd0;
            unaff_x28 = (long *)FUN_030ca520(lVar7,*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_HashSet<int>__ctor__
                                            );
          }
          else {
            if (iVar4 != 2) {
              FUN_019b2708();
              uVar5 = (**(code **)(*unaff_x19 + 0x188))();
              in_stack_00000030 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
              in_stack_00000038 = 0xffffffffffffffff;
              in_stack_00000040 = uVar5;
              uVar10 = FUN_03307544(&stack0x00000030,0);
              uVar12 = thunk_FUN_01c273e8(
                                         Method_System_Collections_Generic_HashSet<int>_GetEnumerator__
                                         );
              FUN_03146988(uVar12,uVar10,0);
              uVar10 = FUN_0335cdc4();
              uVar12 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<int>_Remove__);
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar10,uVar12);
            }
            plVar9 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                                 System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo
                                               );
            FUN_02d4f880(plVar9,*(undefined8 *)MQTTnet_Implementations_CrossPlatformSocket_TypeInfo)
            ;
            if (unaff_x28 == (long *)0x0) break;
            lVar13 = *unaff_x28;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04237778) {
                  puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_0339bb10;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_01c72498(unaff_x28,*(long *)PTR_DAT_04237778,2);
LAB_0339bb10:
            (*(code *)*puVar11)(unaff_x28,plVar9,puVar11[1]);
            FUN_030ca5b8(lVar7,plVar9,
                         *(undefined8 *)Method_System_Collections_Generic_HashSet<int>__ctor__);
            unaff_x28 = plVar9;
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


