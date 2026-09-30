/*
FUNCTION_NAME: OVRPlugin.OVRP_1_36_0$$.cctor
ENTRY_POINT: 0339b884
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_36_0___cctor(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  undefined8 *unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long *unaff_x28;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = 0;
  lVar3 = thunk_FUN_01c496e0();
  FUN_030c9fa8(lVar3,*unaff_x23);
  if ((lVar3 == 0) || (FUN_030ca5b8(lVar3), unaff_x19 == (long *)0x0)) {
LAB_0339bd90:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    while ((**(code **)(*unaff_x19 + 0x1b8))(), *(int *)(lVar3 + 0x18) == unaff_w24) {
      uVar4 = FUN_0335ce1c();
      if ((uVar4 & 1) == 0) goto LAB_0339bcb0;
      iVar1 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar1 != 5) {
        if (iVar1 == 0xe) {
          FUN_030ca564(lVar3,*(undefined8 *)Method_System_Collections_Generic_HashSet<int>__ctor__);
          unaff_x28 = (long *)FUN_030ca520(lVar3,*(undefined8 *)
                                                  Method_System_Collections_Generic_HashSet<int>__ctor__
                                          );
          uStack0000000000000048 = 0;
        }
        else {
          if ((unaff_x26 == (long *)0x0) ||
             (uVar4 = (**(code **)(*unaff_x26 + 0x1a8))(), (uVar4 & 1) == 0)) {
            uVar6 = FUN_033966b4();
          }
          else {
            uVar6 = FUN_033962a0();
          }
          if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar9 = *unaff_x28;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04237778) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_0339bab0;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_01c72498(unaff_x28,*(long *)PTR_DAT_04237778,2);
LAB_0339bab0:
          (*(code *)*puVar7)(unaff_x28,uVar6,puVar7[1]);
        }
      }
    }
    uVar4 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar4 & 1) == 0) {
LAB_0339bcb0:
      FUN_0339d160();
LAB_0339bcd0:
      FUN_0339cf34();
      return;
    }
    iVar1 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar1 != 5) {
      if (iVar1 == 0xe) {
        FUN_030ca564(lVar3,*(undefined8 *)Method_System_Collections_Generic_HashSet<int>__ctor__);
        if (*(int *)(lVar3 + 0x18) < 1) goto LAB_0339bcd0;
        unaff_x28 = (long *)FUN_030ca520(lVar3,*(undefined8 *)
                                                Method_System_Collections_Generic_HashSet<int>__ctor__
                                        );
      }
      else {
        if (iVar1 != 2) {
          FUN_019b2708();
          uVar2 = (**(code **)(*unaff_x19 + 0x188))();
          in_stack_00000030 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
          in_stack_00000038 = 0xffffffffffffffff;
          in_stack_00000040 = uVar2;
          uVar6 = FUN_03307544(&stack0x00000030,0);
          uVar8 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<int>_GetEnumerator__)
          ;
          FUN_03146988(uVar8,uVar6,0);
          uVar6 = FUN_0335cdc4();
          uVar8 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<int>_Remove__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,uVar8);
        }
        plVar5 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                             System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo
                                           );
        FUN_02d4f880(plVar5,*(undefined8 *)MQTTnet_Implementations_CrossPlatformSocket_TypeInfo);
        if (unaff_x28 == (long *)0x0) goto LAB_0339bd90;
        lVar9 = *unaff_x28;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04237778) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_0339bb10;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(unaff_x28,*(long *)PTR_DAT_04237778,2);
LAB_0339bb10:
        (*(code *)*puVar7)(unaff_x28,plVar5,puVar7[1]);
        FUN_030ca5b8(lVar3,plVar5,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<int>__ctor__);
        unaff_x28 = plVar5;
      }
    }
  } while( true );
}


